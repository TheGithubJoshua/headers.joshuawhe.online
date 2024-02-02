<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSDImager.h</title>
    <meta name="viewport" content="width=device-width">
    <style>
    body { margin: 1em; }
    pre { font: 11pt/1.25 ui-monospace, "SF Mono", Menlo, monospace; }
    a { color: #af52de; }
    pre { white-space: pre-wrap; }
    header, footer { color: #8e8e93; }
    header { white-space: pre; }
    footer { max-width: 700px; }
    hr { border: 0; border-top: 1px solid #c6c6c8; }
    .download { text-decoration: none; }
    @media (prefers-color-scheme: dark) {
        body { background: black; color: white; }
        a { color: #bf5af2; }
        hr { border-top-color: #333335; }
    }
    </style>
</head>
<body>
<pre><header>
 ___          _   _             ___
| _ \_  _ _ _| |_(_)_ __  ___  | _ )_ _ _____ __ _____ ___ _ _
|   / || | ' \  _| | '  \/ -_) | _ \ '_/ _ \ V  V (_-// -_) '_|
|_|_\\_,_|_||_\__|_|_|_|_\___| |___/_| \___/\_/\_//__/\___|_|


</header><hr>

/PrivateFrameworks/TSReading.framework/TSDImager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSDImager : NSObject <TSDCanvasDelegate, TSDDynamicOverridingCanvasDelegate> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mActualScaledClipRect;
    TSUColor * mBackgroundColor;
    TSDCanvas * mCanvas;
    bool  mDistortedToMatch;
    TSKDocumentRoot * mDocumentRoot;
    bool  mDrawingIntoPDF;
    NSMapTable * mDynamicOverrides;
    bool  mHasBeenUsed;
    bool  mImageIsRenderingForMovie;
    bool  mImageMustHaveEvenDimensions;
    NSObject<TSDInfo> * mInfoToDrawBeneath;
    id /* block */  mInfoToDrawBeneathFilter;
    NSArray * mInfos;
    bool  mIsPrinting;
    struct CGSize { 
        double width; 
        double height; 
    }  mMaximumScaledImageSize;
    bool  mMayBeReused;
    id /* block */  mPostRenderAction;
    NSSet * mPreviousRenderDatasNeedingDownload;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mReusableActualScaledClipRect;
    struct CGContext { } * mReusableBitmapContext;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mReusableBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mReusableIntegralBounds;
    struct CGSize { 
        double width; 
        double height; 
    }  mReusableScaledImageSize;
    struct CGSize { 
        double width; 
        double height; 
    }  mScaledImageSize;
    bool  mShouldReuseBitmapContext;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mUnscaledClipRect;
    bool  mUseScaledImageSize;
    double  mViewScale;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } actualScaledClipRect;
@property (nonatomic, copy) TSUColor *backgroundColor;
@property (nonatomic, readonly) TSDCanvas *canvas;
@property (nonatomic, readonly) <TSDCanvasProxyDelegate> *canvasProxyDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool distortedToMatch;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool imageIsRenderingForMovie;
@property (nonatomic) bool imageMustHaveEvenDimensions;
@property (nonatomic, retain) NSArray *infos;
@property (nonatomic) bool isPrinting;
@property (nonatomic) struct CGSize { double x1; double x2; } maximumScaledImageSize;
@property (nonatomic) bool mayBeReused;
@property (nonatomic, copy) NSSet *previousRenderDatasNeedingDownload;
@property (nonatomic) struct CGSize { double x1; double x2; } scaledImageSize;
@property (nonatomic) bool shouldReuseBitmapContext;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unscaledClipRect;
@property (nonatomic) double viewScale;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })actualScaledClipRect;
- (id)backgroundColor;
- (id)canvas;
- (void)dealloc;
- (bool)distortedToMatch;
- (id)documentRoot;
- (bool)drawPageInContext:(struct CGContext { }*)arg1 createPage:(bool)arg2;
- (id)dynamicOverrideForRep:(id)arg1;
- (void)i_setDrawsOnlyBelowInfo:(id)arg1;
- (bool)imageIsRenderingForMovie;
- (bool)imageMustHaveEvenDimensions;
- (id)infos;
- (id)init;
- (id)initWithDocumentRoot:(id)arg1;
- (id)initWithDocumentRoot:(id)arg1 renderForWideGamut:(bool)arg2;
- (bool)isCanvasDrawingIntoPDF:(id)arg1;
- (bool)isPrinting;
- (bool)isPrintingCanvas;
- (struct CGSize { double x1; double x2; })maximumScaledImageSize;
- (bool)mayBeReused;
- (struct CGImage { }*)newImage;
- (void)p_assertHasReadLock;
- (bool)p_configureCanvas;
- (void)p_drawPageInContext:(struct CGContext { }*)arg1 createPage:(bool)arg2;
- (struct CGSize { double x1; double x2; })p_evenDimensionsWithSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGImage { }*)p_newImageInReusableContext;
- (id)pdfData;
- (id)pngData;
- (id)previousRenderDatasNeedingDownload;
- (struct CGSize { double x1; double x2; })scaledImageSize;
- (void)setBackgroundColor:(id)arg1;
- (void)setDistortedToMatch:(bool)arg1;
- (void)setDynamicOverride:(id)arg1 forInfo:(id)arg2;
- (void)setImageIsRenderingForMovie:(bool)arg1;
- (void)setImageMustHaveEvenDimensions:(bool)arg1;
- (void)setInfos:(id)arg1;
- (void)setInfos:(id)arg1 allowLayoutIfNeeded:(bool)arg2;
- (void)setIsPrinting:(bool)arg1;
- (void)setMaximumScaledImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMayBeReused:(bool)arg1;
- (void)setPostRenderAction:(id /* block */)arg1;
- (void)setPreviousRenderDatasNeedingDownload:(id)arg1;
- (void)setScaledImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShouldReuseBitmapContext:(bool)arg1;
- (void)setUnscaledClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewScale:(double)arg1;
- (bool)shouldReuseBitmapContext;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unscaledClipRect;
- (double)viewScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1;

@end


<hr><footer>
Source code: <a href="https://github.com/hbang/RuntimeBrowser">https://github.com/hbang/RuntimeBrowser</a>

Authors:
  Ezra Epstein (eepstein@prajna.com)
  Nicolas Seriot (nicolas@seriot.ch)
  HASHBANG Productions

Copyright &copy; 2002 by Prajna IT Consulting
Copyright &copy; 2015 by <a href="http://www.seriot.ch">Nicolas Seriot</a>
Copyright &copy; 2021 by <a href="https://hashbang.productions">HASHBANG Productions</a>

THIS PROGRAM AND THIS CODE COME WITH ABSOLUTELY NO WARRANTY. THIS CODE HAS BEEN PROVIDED "AS IS" AND THE RESPONSIBILITY FOR ITS OPERATIONS IS 100% YOURS.

RuntimeBrowser is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.

RuntimeBrowser is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with RuntimeBrowser (in a file called "COPYING.txt"); if not, write to the Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA</footer></pre>
</body>
</html>