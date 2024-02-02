<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SXComponentStyleRenderer.h</title>
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

/PrivateFrameworks/Silex.framework/SXComponentStyleRenderer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex (2166)
 */

@interface SXComponentStyleRenderer : NSObject <SXComponentStyleRenderer, SXViewportChangeListener> {
    UIView * _backgroundView;
    UIView * _borderContainerView;
    <SXComponentStyle> * _componentStyle;
    SXComponentView * _componentView;
    bool  _didRegisterForDynamicBounds;
    <SXGradientFactory> * _gradientFactory;
    SXGradientFillView * _gradientFillView;
    SXImageFillView * _imageFillView;
    <SXImageFillViewFactory> * _imageFillViewFactory;
    SXRepeatableImageFillView * _repeatableImageFillView;
    <SXRepeatableImageFillViewFactory> * _repeatableImageFillViewFactory;
    SXVideoFillView * _videoFillView;
    <SXVideoFillViewFactory> * _videoFillViewFactory;
    SXViewport * _viewport;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) UIView *borderContainerView;
@property (nonatomic, readonly) <SXComponentStyle> *componentStyle;
@property (nonatomic, readonly) SXComponentView *componentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didRegisterForDynamicBounds;
@property (nonatomic, readonly) <SXGradientFactory> *gradientFactory;
@property (nonatomic, retain) SXGradientFillView *gradientFillView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SXImageFillView *imageFillView;
@property (nonatomic, readonly) <SXImageFillViewFactory> *imageFillViewFactory;
@property (nonatomic, retain) SXRepeatableImageFillView *repeatableImageFillView;
@property (nonatomic, readonly) <SXRepeatableImageFillViewFactory> *repeatableImageFillViewFactory;
@property (readonly) Class superclass;
@property (nonatomic, retain) SXVideoFillView *videoFillView;
@property (nonatomic, readonly) <SXVideoFillViewFactory> *videoFillViewFactory;
@property (nonatomic, readonly) SXViewport *viewport;

- (void).cxx_destruct;
- (void)applyBackgroundColor:(id)arg1;
- (void)applyBorder:(id)arg1;
- (void)applyComponentStyle;
- (void)applyCornerRadius:(double)arg1 cornerMask:(unsigned long long)arg2 onView:(id)arg3;
- (void)applyFill:(id)arg1;
- (void)applyMask:(id)arg1;
- (void)applyOpacity:(double)arg1;
- (id)backgroundView;
- (id)borderContainerView;
- (id)componentStyle;
- (id)componentView;
- (void)componentVisiblityStateDidChange:(long long)arg1;
- (void)dealloc;
- (bool)didRegisterForDynamicBounds;
- (id)gradientFactory;
- (id)gradientFillView;
- (id)gradientViewForFill:(id)arg1;
- (id)imageFillView;
- (id)imageFillViewFactory;
- (id)imageViewForFill:(id)arg1;
- (id)initWithComponentStyle:(id)arg1 viewport:(id)arg2 imageFillViewFactory:(id)arg3 videoFillViewFactory:(id)arg4 gradientViewFactory:(id)arg5 repeatableImageFillViewFactory:(id)arg6;
- (void)prepareBackgroundColor:(id)arg1;
- (void)prepareBorder:(id)arg1;
- (void)prepareFill:(id)arg1;
- (void)prepareForComponentView:(id)arg1;
- (id)repeatableImageFillView;
- (id)repeatableImageFillViewFactory;
- (id)repeatableImageFillViewForFill:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBorderContainerView:(id)arg1;
- (void)setDidRegisterForDynamicBounds:(bool)arg1;
- (void)setGradientFillView:(id)arg1;
- (void)setImageFillView:(id)arg1;
- (void)setRepeatableImageFillView:(id)arg1;
- (void)setVideoFillView:(id)arg1;
- (id)videoFillView;
- (id)videoFillViewFactory;
- (id)videoPlayerViewForFill:(id)arg1;
- (id)viewForFill:(id)arg1;
- (id)viewport;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

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