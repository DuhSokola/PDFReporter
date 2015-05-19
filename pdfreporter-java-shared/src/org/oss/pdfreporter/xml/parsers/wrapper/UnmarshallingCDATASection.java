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
package org.oss.pdfreporter.xml.parsers.wrapper;

import org.w3c.dom.CDATASection;

public class UnmarshallingCDATASection extends UnmarshallingText implements CDATASection {

	private final org.oss.pdfreporter.uses.org.w3c.dom.CDATASection delegate;
	public UnmarshallingCDATASection(org.oss.pdfreporter.uses.org.w3c.dom.CDATASection delegate) {
		super(delegate);
		this.delegate = delegate;
	}
	
	public org.oss.pdfreporter.uses.org.w3c.dom.CDATASection getDelegate() {
		return delegate;
	}

}
