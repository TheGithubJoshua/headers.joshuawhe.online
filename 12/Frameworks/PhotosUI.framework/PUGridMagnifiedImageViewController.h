<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUGridMagnifiedImageViewController.h</title>
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

/Frameworks/PhotosUI.framework/PUGridMagnifiedImageViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PUGridMagnifiedImageViewController : UIViewController {
    bool  _canShowFullScreen;
    id  _delegate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _gestureWindLocation;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    NSIndexPath * _itemIndexPath;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _itemWindFrame;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastLocation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _magnifiedDragEdgeInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _magnifiedSize;
    PUGridMagnifiedView * _magnifiedView;
    double  _magnifiedYOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowOffset;
    double  _shadowOpacity;
    double  _shadowRadius;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _trackingWindFrame;
}

@property (nonatomic, readonly) bool canShowFullScreen;
@property (nonatomic) id delegate;
@property (nonatomic) struct CGPoint { double x1; double x2; } gestureWindLocation;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, retain) NSIndexPath *itemIndexPath;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } itemWindFrame;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastLocation;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } magnifiedDragEdgeInsets;
@property (nonatomic) struct CGSize { double x1; double x2; } magnifiedSize;
@property (nonatomic, retain) PUGridMagnifiedView *magnifiedView;
@property (nonatomic) double magnifiedYOffset;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowOffset;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } trackingWindFrame;

- (void).cxx_destruct;
- (void)beginMagnificationAnimated:(bool)arg1;
- (bool)canShowFullScreen;
- (void)continueMagnification;
- (id)delegate;
- (bool)gestureInNewLocation;
- (struct CGPoint { double x1; double x2; })gestureWindLocation;
- (void)hideMagnifiedThumbnailWithAnimation:(bool)arg1;
- (id)imageForIndexPath:(id)arg1;
- (id)imageForMagnifyLocation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithDelegate:(id)arg1;
- (id)installMagnifiedView;
- (bool)isValidMagnifyLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)itemIndexPath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })itemWindFrame;
- (struct CGPoint { double x1; double x2; })lastLocation;
- (void)loadView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })magnifiedDragEdgeInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })magnifiedImageWindFrame;
- (struct CGSize { double x1; double x2; })magnifiedSize;
- (id)magnifiedView;
- (double)magnifiedYOffset;
- (void)prepareForRelease;
- (void)setDelegate:(id)arg1;
- (void)setGestureWindLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemIndexPath:(id)arg1;
- (void)setItemWindFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLastLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMagnifiedDragEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMagnifiedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMagnifiedView:(id)arg1;
- (void)setMagnifiedYOffset:(double)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowOpacity:(double)arg1;
- (void)setShadowRadius:(double)arg1;
- (void)setTrackingWindFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setupMagnifiedView;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (double)shadowOpacity;
- (double)shadowRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackingWindFrame;

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