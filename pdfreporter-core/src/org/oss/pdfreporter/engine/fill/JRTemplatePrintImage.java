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

import org.oss.pdfreporter.engine.JRAnchor;
import org.oss.pdfreporter.engine.JRConstants;
import org.oss.pdfreporter.engine.JRLineBox;
import org.oss.pdfreporter.engine.JRPrintHyperlinkParameters;
import org.oss.pdfreporter.engine.JRPrintImage;
import org.oss.pdfreporter.engine.PrintElementVisitor;
import org.oss.pdfreporter.engine.Renderable;
import org.oss.pdfreporter.engine.type.HorizontalAlignEnum;
import org.oss.pdfreporter.engine.type.HyperlinkTargetEnum;
import org.oss.pdfreporter.engine.type.HyperlinkTypeEnum;
import org.oss.pdfreporter.engine.type.OnErrorTypeEnum;
import org.oss.pdfreporter.engine.type.ScaleImageEnum;
import org.oss.pdfreporter.engine.type.VerticalAlignEnum;


/**
 * Implementation of {@link org.oss.pdfreporter.engine.JRPrintImage} that uses
 * a {@link org.oss.pdfreporter.engine.fill.JRTemplateImage} instance to
 * store common attributes. 
 * 
 * @author Teodor Danciu (teodord@users.sourceforge.net)
 * @version $Id: JRTemplatePrintImage.java 5180 2012-03-29 13:23:12Z teodord $
 */
public class JRTemplatePrintImage extends JRTemplatePrintGraphicElement implements JRPrintImage
{


	/**
	 *
	 */
	private static final long serialVersionUID = JRConstants.SERIAL_VERSION_UID;

	/**
	 *
	 */
	private Renderable renderable;
	private String anchorName;
	private String hyperlinkReference;
	private String hyperlinkAnchor;
	private Integer hyperlinkPage;
	private String hyperlinkTooltip;
	private JRPrintHyperlinkParameters hyperlinkParameters;

	/**
	 * The bookmark level for the anchor associated with this field.
	 * @see JRAnchor#getBookmarkLevel()
	 */
	protected int bookmarkLevel = JRAnchor.NO_BOOKMARK;


	/**
	 * Creates a print image element.
	 * 
	 * @param image the template image that the element will use
	 * @deprecated provide a source Id via {@link #JRTemplatePrintImage(JRTemplateImage, int)}
	 */
	public JRTemplatePrintImage(JRTemplateImage image)
	{
		super(image);
	}

	/**
	 * Creates a print image element.
	 * 
	 * @param image the template image that the element will use
	 * @param sourceElementId the Id of the source element
	 */
	public JRTemplatePrintImage(JRTemplateImage image, int sourceElementId)
	{
		super(image, sourceElementId);
	}
	
	/**
	 *
	 */
	public Renderable getRenderable()
	{
		return renderable;
	}
		
	/**
	 *
	 */
	public void setRenderable(Renderable renderable)
	{
		this.renderable = renderable;
	}
		
		
	/**
	 *
	 */
	public ScaleImageEnum getScaleImageValue()
	{
		return ((JRTemplateImage)this.template).getScaleImageValue();
	}

	/**
	 *
	 */
	public ScaleImageEnum getOwnScaleImageValue()
	{
		return ((JRTemplateImage)this.template).getOwnScaleImageValue();
	}

	/**
	 *
	 */
	public void setScaleImage(ScaleImageEnum scaleImage)
	{
		throw new UnsupportedOperationException();
	}

	/**
	 *
	 */
	public boolean isUsingCache()
	{
		return ((JRTemplateImage)this.template).isUsingCache();
	}

	/**
	 *
	 */
	public void setUsingCache(boolean isUsingCache)
	{
	}

	/**
	 *
	 */
	public HorizontalAlignEnum getHorizontalAlignmentValue()
	{
		return ((JRTemplateImage)this.template).getHorizontalAlignmentValue();
	}
		
	/**
	 *
	 */
	public HorizontalAlignEnum getOwnHorizontalAlignmentValue()
	{
		return ((JRTemplateImage)this.template).getOwnHorizontalAlignmentValue();
	}
		
	/**
	 *
	 */
	public void setHorizontalAlignment(HorizontalAlignEnum horizontalAlignment)
	{
		throw new UnsupportedOperationException();
	}
		
	/**
	 *
	 */
	public VerticalAlignEnum getVerticalAlignmentValue()
	{
		return ((JRTemplateImage)this.template).getVerticalAlignmentValue();
	}
		
	/**
	 *
	 */
	public VerticalAlignEnum getOwnVerticalAlignmentValue()
	{
		return ((JRTemplateImage)this.template).getOwnVerticalAlignmentValue();
	}
		
	/**
	 *
	 */
	public void setVerticalAlignment(VerticalAlignEnum verticalAlignment)
	{
		throw new UnsupportedOperationException();
	}
		
	/**
	 *
	 */
	public boolean isLazy()
	{
		return ((JRTemplateImage)this.template).isLazy();
	}

	/**
	 *
	 */
	public void setLazy(boolean isLazy)
	{
	}

	/**
	 *
	 */
	public OnErrorTypeEnum getOnErrorTypeValue()
	{
		return ((JRTemplateImage)this.template).getOnErrorTypeValue();
	}
		
	/**
	 *
	 */
	public void setOnErrorType(OnErrorTypeEnum onErrorType)
	{
		throw new UnsupportedOperationException();
	}

	/**
	 *
	 */
	public JRLineBox getLineBox()
	{
		return ((JRTemplateImage)template).getLineBox();
	}
		
	/**
	 *
	 */
	public String getAnchorName()
	{
		return this.anchorName;
	}
		
	/**
	 *
	 */
	public void setAnchorName(String anchorName)
	{
		this.anchorName = anchorName;
	}
		
	/**
	 *
	 */
	public HyperlinkTypeEnum getHyperlinkTypeValue()
	{
		return ((JRTemplateImage)this.template).getHyperlinkTypeValue();
	}
		
	/**
	 *
	 */
	public void setHyperlinkType(HyperlinkTypeEnum hyperlinkType)
	{
		throw new UnsupportedOperationException();
	}

	/**
	 *
	 */
	public HyperlinkTargetEnum getHyperlinkTargetValue()
	{
		return ((JRTemplateImage)this.template).getHyperlinkTargetValue();
	}
		
	/**
	 *
	 */
	public void setHyperlinkTarget(HyperlinkTargetEnum hyperlinkTarget)
	{
		throw new UnsupportedOperationException();
	}

	/**
	 *
	 */
	public String getHyperlinkReference()
	{
		return this.hyperlinkReference;
	}
		
	/**
	 *
	 */
	public void setHyperlinkReference(String hyperlinkReference)
	{
		this.hyperlinkReference = hyperlinkReference;
	}
		
	/**
	 *
	 */
	public String getHyperlinkAnchor()
	{
		return this.hyperlinkAnchor;
	}
		
	/**
	 *
	 */
	public void setHyperlinkAnchor(String hyperlinkAnchor)
	{
		this.hyperlinkAnchor = hyperlinkAnchor;
	}
		
	/**
	 *
	 */
	public Integer getHyperlinkPage()
	{
		return this.hyperlinkPage;
	}
		
	/**
	 *
	 */
	public void setHyperlinkPage(Integer hyperlinkPage)
	{
		this.hyperlinkPage = hyperlinkPage;
	}


	public int getBookmarkLevel()
	{
		return bookmarkLevel;
	}


	public void setBookmarkLevel(int bookmarkLevel)
	{
		this.bookmarkLevel = bookmarkLevel;
	}

	
	public JRPrintHyperlinkParameters getHyperlinkParameters()
	{
		return hyperlinkParameters;
	}

	
	public void setHyperlinkParameters(JRPrintHyperlinkParameters parameters)
	{
		this.hyperlinkParameters = parameters;
	}

	
	public String getLinkType()
	{
		return ((JRTemplateImage) this.template).getLinkType();
	}

	public void setLinkType(String type)
	{
	}

	public String getLinkTarget()
	{
		return ((JRTemplateImage) this.template).getLinkTarget();
	}

	public void setLinkTarget(String target)
	{
	}

	
	public String getHyperlinkTooltip()
	{
		return hyperlinkTooltip;
	}

	
	public void setHyperlinkTooltip(String hyperlinkTooltip)
	{
		this.hyperlinkTooltip = hyperlinkTooltip;
	}

	
	/*
	 * These fields are only for serialization backward compatibility.
	 */
	/**
	 * @deprecated
	 */
	private org.oss.pdfreporter.engine.JRRenderable renderer;

	
	@SuppressWarnings("deprecation")
//	private void readObject(ObjectInputStream in) throws IOException, ClassNotFoundException
//	{
//		in.defaultReadObject();
//
//		if (renderer != null && renderable == null)
//		{
//			if (renderer instanceof Renderable)
//			{
//				renderable = (Renderable)renderer;
//			}
//			else
//			{
//				renderable = RenderableUtil.getWrappingRenderable(renderer);
//			}
//		}
//	}


	public <T> void accept(PrintElementVisitor<T> visitor, T arg)
	{
		visitor.visit(this, arg);
	}

}
