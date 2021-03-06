/*******************************************************************************
 * Copyright (c) 2015 Open Software Solutions GmbH.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the GNU Lesser Public License v3.0
 * which accompanies this distribution, and is available at
 * http://www.gnu.org/licenses/lgpl-3.0.html
 * 
 * Contributors:
 *     Open Software Solutions GmbH
 ******************************************************************************/
package org.oss.pdfreporter.net.factory;

import org.oss.pdfreporter.net.IURL;
import org.oss.pdfreporter.net.MalformedURLException;
import org.oss.pdfreporter.net.URL;
import org.oss.pdfreporter.net.factory.INetFactory;
import org.oss.pdfreporter.registry.IRegistry;


public class NetFactory implements INetFactory {
	
	public static void registerFactory() {
		IRegistry.register(new NetFactory());
	}

	@Override
	public IURL newURL(String url) throws MalformedURLException {
		return new URL(url);
	}

}
