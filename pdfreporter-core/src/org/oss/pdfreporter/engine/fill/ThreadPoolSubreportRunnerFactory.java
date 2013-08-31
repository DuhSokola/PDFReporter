/*
 * JasperReports - Free Java Reporting Library.
 * Copyright (C) 2001 - 2011 Jaspersoft Corporation. All rights reserved.
 * http://www.jaspersoft.com
 *
 * Unless you have purchased a commercial license agreement from Jaspersoft,
 * the following license terms apply:
 *
 * This program is part of JasperReports.
 *
 * JasperReports is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * JasperReports is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with JasperReports. If not, see <http://www.gnu.org/licenses/>.
 */
package org.oss.pdfreporter.engine.fill;

import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.logging.Level;
import java.util.logging.Logger;



/**
 * @author Lucian Chirita (lucianc@users.sourceforge.net)
 * @version $Id: ThreadPoolSubreportRunnerFactory.java 5747 2012-10-30 12:51:36Z lucianc $
 */
public class ThreadPoolSubreportRunnerFactory implements JRSubreportRunnerFactory
{
	private static final Logger logger = Logger.getLogger(ThreadPoolSubreportRunnerFactory.class.getName());
	
	private static final String THREAD_POOL_KEY = "net.sf.jasperreports.engine.fill.JRThreadSubreportRunner.ThreadPool";

	public JRSubreportRunner createSubreportRunner(JRFillSubreport fillSubreport, JRBaseFiller subreportFiller)
	{
		JRFillContext fillContext = subreportFiller.getFillContext();
		ExecutorServiceDisposable executor = (ExecutorServiceDisposable) fillContext.getFillCache(THREAD_POOL_KEY);
		if (executor == null)
		{
			ExecutorService threadExecutor = createThreadExecutor(fillContext);
			executor = new ExecutorServiceDisposable(threadExecutor);
			fillContext.setFillCache(THREAD_POOL_KEY, executor);
		}

		return new ThreadExecutorSubreportRunner(fillSubreport, subreportFiller, 
				executor.getExecutorService());
	}

	protected ExecutorService createThreadExecutor(JRFillContext fillContext)
	{
		SubreportsThreadFactory threadFactory = new SubreportsThreadFactory(fillContext);
		ExecutorService threadExecutor = Executors.newCachedThreadPool(threadFactory);
		if (logger.isLoggable(Level.FINEST))
		{
			logger.finest("created subreports thread executor " + threadExecutor 
					+ " for " + fillContext.getMasterFiller().getJasperReport().getName());
		}
		return threadExecutor;
	}
	
	protected static class ExecutorServiceDisposable implements JRFillContext.FillCacheDisposable
	{
		private final ExecutorService executorService;
		
		public ExecutorServiceDisposable(ExecutorService executorService)
		{
			this.executorService = executorService;
		}
		
		public ExecutorService getExecutorService()
		{
			return executorService;
		}

		@Override
		public void dispose()
		{
			if (logger.isLoggable(Level.FINEST))
			{
				logger.finest("shutting down " + executorService);
			}
			
			executorService.shutdownNow();
		}
	}
	
	protected static class SubreportsThreadFactory implements ThreadFactory
	{
		private final JRFillContext fillContext;
		private final AtomicInteger threadCount;
		
		public SubreportsThreadFactory(JRFillContext fillContext)
		{
			this.fillContext = fillContext;
			this.threadCount = new AtomicInteger();
		}

		@Override
		public Thread newThread(Runnable r)
		{
			String threadName = fillContext.getMasterFiller().getJasperReport().getName() 
					+ " subreports #" + threadCount.incrementAndGet();
			Thread thread = new Thread(r, threadName);
			if (logger.isLoggable(Level.FINEST))
			{
				logger.finest("created thread " + thread);
			}
			return thread;
		}
		
	}
}
