<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>QLPreviewScrollView.h</title>
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

/Frameworks/QuickLook.framework/QLPreviewScrollView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook (1)
 */

@interface QLPreviewScrollView : UIScrollView <UIScrollViewDelegate> {
    double  _contentIsSmallerThanView;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentViewSize;
    double  _fillZoomScale;
    double  _fitZoomScale;
    bool  _inSizeChange;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastUpdatedSize;
    double  _maxZoomScale;
    double  _minZoomScale;
    bool  _needsZoomUpdate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _peripheryInsetsLandscape;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _peripheryInsetsPortrait;
    double  _pinchMaxZoomScale;
    bool  _preventZoomUpdate;
    bool  _readyToCancelPanGesture;
    bool  _shouldFit;
    <QLPreviewScrollViewZoomDelegate> * _zoomDelegate;
}

@property (readonly) double contentIsSmallerThanView;
@property (nonatomic) struct CGSize { double x1; double x2; } contentViewSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double fillZoomScale;
@property (readonly) double fitZoomScale;
@property (readonly) unsigned long long hash;
@property (readonly) double maxZoomScale;
@property (readonly) double minZoomScale;
@property (nonatomic) bool needsZoomUpdate;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } peripheryInsetsLandscape;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } peripheryInsetsPortrait;
@property (readonly) double pinchMaxZoomScale;
@property (nonatomic) bool preventZoomUpdate;
@property bool shouldFit;
@property (readonly) Class superclass;
@property <QLPreviewScrollViewZoomDelegate> *zoomDelegate;

- (void).cxx_destruct;
- (double)_maxZoomScaleForContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateScrollViewZomming;
- (double)contentIsSmallerThanView;
- (struct CGSize { double x1; double x2; })contentViewSize;
- (double)fillZoomScale;
- (double)fitZoomScale;
- (id)init;
- (void)layoutSubviews;
- (double)maxZoomScale;
- (double)minZoomScale;
- (bool)needsZoomUpdate;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })peripheryInsetsLandscape;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })peripheryInsetsPortrait;
- (double)pinchMaxZoomScale;
- (bool)preventZoomUpdate;
- (void)resetZoomScale;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)setContentViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNeedsZoomUpdate:(bool)arg1;
- (void)setPeripheryInsetsLandscape:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPeripheryInsetsPortrait:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreventZoomUpdate:(bool)arg1;
- (void)setShouldFit:(bool)arg1;
- (void)setZoomDelegate:(id)arg1;
- (bool)shouldFit;
- (void)updateZoomScales;
- (void)updateZoomScalesWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (id)zoomDelegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })zoomRectForScale:(double)arg1 withCenter:(struct CGPoint { double x1; double x2; })arg2;

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