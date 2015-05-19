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
package org.oss.pdfreporter.text;

/**
 * Defines an underline or strike through line for a font.
 * @author donatmuller, 2013, last change 11:53:45 PM
 * 
 */
public interface IPositionedLine {
	public enum LineType {
		ABSOLUTE,
		RELATIVE
	}
	
	/**
	 * Position relative to the fonts baseline.
	 * @return
	 */
	float getPosition();
	/**
	 * Thikness of the line.
	 * @return
	 */
	float getThikness();
	
	/**
	 * Line type relative multiplies with the font size
	 * whereas absolute does not.
	 * @return
	 */
	LineType getType();
}
