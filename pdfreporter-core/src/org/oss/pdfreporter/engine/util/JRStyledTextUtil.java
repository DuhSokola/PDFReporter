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
package org.oss.pdfreporter.engine.util;

import org.oss.pdfreporter.engine.JRCommonText;
import org.oss.pdfreporter.engine.JRPrintText;
import org.oss.pdfreporter.engine.JRStyledTextAttributeSelector;
import org.oss.pdfreporter.engine.JasperReportsContext;



/**
 * @author Teodor Danciu (teodord@users.sourceforge.net)
 * @version $Id: JRStyledText.java 5521 2012-07-30 13:25:30Z teodord $
 */
public class JRStyledTextUtil
{
	//private final JasperReportsContext jasperReportsContext;
	private final JRStyledTextAttributeSelector allSelector;
	
	/**
	 *
	 */
	private JRStyledTextUtil(JasperReportsContext jasperReportsContext)
	{
		//this.jasperReportsContext = jasperReportsContext;
		this.allSelector = JRStyledTextAttributeSelector.getAllSelector(jasperReportsContext);
	}
	
	/**
	 *
	 */
	public static JRStyledTextUtil getInstance(JasperReportsContext jasperReportsContext)
	{
		return new JRStyledTextUtil(jasperReportsContext);
	}
	
	/**
	 *
	 */
	public String getTruncatedText(JRPrintText printText)
	{
		String truncatedText = null;
		String originalText = printText.getOriginalText();
		if (originalText != null)
		{
			if (printText.getTextTruncateIndex() == null)
			{
				truncatedText = originalText;
			}
			else
			{
				if (!JRCommonText.MARKUP_NONE.equals(printText.getMarkup()))
				{
					truncatedText = JRStyledTextParser.getInstance().write(
							printText.getFullStyledText(allSelector), 
							0, printText.getTextTruncateIndex().intValue());
				}
				else
				{
					truncatedText = originalText.substring(0, printText.getTextTruncateIndex().intValue());
				}
			}
			
			String textTruncateSuffix = printText.getTextTruncateSuffix();
			if (textTruncateSuffix != null)
			{
				truncatedText += textTruncateSuffix;
			}
		}
		return truncatedText;
	}
	
	/**
	 *
	 */
	public JRStyledText getStyledText(JRPrintText printText, JRStyledTextAttributeSelector attributeSelector)
	{
		String truncatedText = getTruncatedText(printText);
		if (truncatedText == null)
		{
			return null;
		}
		
		return 
			JRStyledTextParser.getInstance().getStyledText(
				attributeSelector.getStyledTextAttributes(printText), 
				truncatedText, 
				!JRCommonText.MARKUP_NONE.equals(printText.getMarkup()),
				JRStyledTextAttributeSelector.getTextLocale(printText)
				);
	}
}
