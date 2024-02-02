<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>QLTransitionDriver.h</title>
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

/Frameworks/QuickLook.framework/QLTransitionDriver.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook (1)
 */

@interface QLTransitionDriver : NSObject {
    UIView * _destinationView;
    double  _duration;
    <QLDismissGestureTracking> * _gestureTracker;
    double  _hostNavigationOffset;
    bool  _presenting;
    UIView * _sourceView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceViewFrame;
    double  _topNavigationOffset;
    UIView * _transitionContainer;
    bool  _transitionContainerMasksToBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _transitionContainerOriginalFrame;
    QLItem * _transitionPreviewItem;
    struct CGSize { 
        double width; 
        double height; 
    }  _transitionPreviewSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _uncroppedFrame;
}

@property (retain) UIView *destinationView;
@property double duration;
@property (retain) <QLDismissGestureTracking> *gestureTracker;
@property double hostNavigationOffset;
@property bool presenting;
@property (retain) UIView *sourceView;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceViewFrame;
@property double topNavigationOffset;
@property (retain) UIView *transitionContainer;
@property bool transitionContainerMasksToBounds;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } transitionContainerOriginalFrame;
@property (retain) QLItem *transitionPreviewItem;
@property struct CGSize { double x1; double x2; } transitionPreviewSize;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } uncroppedFrame;

- (void).cxx_destruct;
- (void)animateFinishTransition;
- (void)animateTransition;
- (id)destinationView;
- (double)duration;
- (id)gestureTracker;
- (double)hostNavigationOffset;
- (bool)presenting;
- (void)setDestinationView:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setGestureTracker:(id)arg1;
- (void)setHostNavigationOffset:(double)arg1;
- (void)setPresenting:(bool)arg1;
- (void)setSourceView:(id)arg1;
- (void)setSourceViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTopNavigationOffset:(double)arg1;
- (void)setTransitionContainer:(id)arg1;
- (void)setTransitionContainerMasksToBounds:(bool)arg1;
- (void)setTransitionContainerOriginalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTransitionPreviewItem:(id)arg1;
- (void)setTransitionPreviewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUncroppedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)sourceView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceViewFrame;
- (void)tearDown;
- (double)topNavigationOffset;
- (id)transitionContainer;
- (bool)transitionContainerMasksToBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionContainerOriginalFrame;
- (id)transitionPreviewItem;
- (struct CGSize { double x1; double x2; })transitionPreviewSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })uncroppedFrame;

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