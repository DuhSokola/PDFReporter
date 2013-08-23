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

import org.oss.pdfreporter.engine.JRException;
import org.oss.pdfreporter.engine.JRExpressionCollector;
import org.oss.pdfreporter.engine.JRLine;
import org.oss.pdfreporter.engine.JRPrintElement;
import org.oss.pdfreporter.engine.JRVisitor;
import org.oss.pdfreporter.engine.type.LineDirectionEnum;


/**
 * @author Teodor Danciu (teodord@users.sourceforge.net)
 * @version $Id: JRFillLine.java 5632 2012-09-04 07:48:16Z teodord $
 */
public class JRFillLine extends JRFillGraphicElement implements JRLine
{


	/**
	 *
	 */
	protected JRFillLine(
		JRBaseFiller filler,
		JRLine line, 
		JRFillObjectFactory factory
		)
	{
		super(filler, line, factory);
	}


	protected JRFillLine(JRFillLine line, JRFillCloneFactory factory)
	{
		super(line, factory);
	}


	/**
	 * 
	 */
	public LineDirectionEnum getDirectionValue()
	{
		return ((JRLine)this.parent).getDirectionValue();
	}
		
	/**
	 * 
	 */
	public void setDirection(LineDirectionEnum direction)
	{
		throw new UnsupportedOperationException();
	}

	/**
	 *
	 */
	protected JRTemplateLine getJRTemplateLine()
	{
		return (JRTemplateLine) getElementTemplate();
	}

	protected JRTemplateElement createElementTemplate()
	{
		return new JRTemplateLine(
				getElementOrigin(), 
				filler.getJasperPrint().getDefaultStyleProvider(), 
				this
				);
	}


	/**
	 *
	 */
	protected void evaluate(
		byte evaluation
		) throws JRException
	{
		this.reset();
		
		this.evaluatePrintWhenExpression(evaluation);
		evaluateProperties(evaluation);
		evaluateStyle(evaluation);
		
		setValueRepeating(true);
	}


	/**
	 *
	 */
	protected JRPrintElement fill()
	{
		JRTemplatePrintLine printLine = new JRTemplatePrintLine(this.getJRTemplateLine(), elementId);
		printLine.setUUID(this.getUUID());
		printLine.setX(this.getX());
		printLine.setY(this.getRelativeY());
		printLine.setWidth(getWidth());
		printLine.setHeight(this.getStretchHeight());
		transferProperties(printLine);
		
		return printLine;
	}


	/**
	 *
	 */
	public void collectExpressions(JRExpressionCollector collector)
	{
		collector.collect(this);
	}

	/**
	 *
	 */
	public void visit(JRVisitor visitor)
	{
		visitor.visitLine(this);
	}

	/**
	 *
	 */
	protected void resolveElement (JRPrintElement element, byte evaluation)
	{
		// nothing
	}


	public JRFillCloneable createClone(JRFillCloneFactory factory)
	{
		return new JRFillLine(this, factory);
	}

}
