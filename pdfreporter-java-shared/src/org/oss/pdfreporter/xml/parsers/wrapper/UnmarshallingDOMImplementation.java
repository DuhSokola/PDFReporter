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

import org.oss.pdfreporter.xml.parsers.util.XmlParserUnmarshaller;
import org.w3c.dom.DOMException;
import org.w3c.dom.DOMImplementation;
import org.w3c.dom.Document;
import org.w3c.dom.DocumentType;

public class UnmarshallingDOMImplementation implements DOMImplementation {
	private final org.oss.pdfreporter.uses.org.w3c.dom.DOMImplementation delegate;

	public UnmarshallingDOMImplementation(org.oss.pdfreporter.uses.org.w3c.dom.DOMImplementation delegate) {
		super();
		this.delegate = delegate;
	}

	public org.oss.pdfreporter.uses.org.w3c.dom.DOMImplementation getDelegate() {
		return delegate;
	}

	public boolean hasFeature(String feature, String version) {
		return delegate.hasFeature(feature, version);
	}

	public DocumentType createDocumentType(String qualifiedName,
			String publicId, String systemId) throws DOMException {
		return XmlParserUnmarshaller.getDocumentType(delegate.createDocumentType(qualifiedName, publicId, systemId));
	}

	public Document createDocument(String namespaceURI, String qualifiedName,
			DocumentType doctype) throws DOMException {
		return XmlParserUnmarshaller.getDocument(delegate.createDocument(namespaceURI, qualifiedName, XmlParserUnmarshaller.getDocumentType(doctype)));
	}

	public Object getFeature(String feature, String version) {
		return delegate.getFeature(feature, version);
	}
	
}
