<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIClientRotationContext.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIClientRotationContext.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIClientRotationContext : NSObject {
    UISnapshotView * _contentSnapshotViewStart;
    double  _contentTopAdjustmentStart;
    UIView * _contentView;
    bool  _contentWasHidden;
    double  _duration;
    UIView * _footerEndSnapshotView;
    UISnapshotView * _footerSnapshotViewStart;
    UIView * _footerStartSnapshotView;
    UIView * _footerView;
    bool  _footerWasHidden;
    long long  _fromOrientation;
    UISnapshotView * _headerSnapshotViewStart;
    UIView * _headerView;
    bool  _headerWasHidden;
    bool  _orderKeyboardInAfterRotating;
    id  _rotatingClient;
    UIView * _rotatingSnapshotView;
    struct { 
        bool animateContentRotation; 
        bool preserveHeight; 
        bool avoidFadingBottomOfContent; 
        bool skipSnapshotOfEndState; 
        bool preventAdditveAnimations; 
        double contentStretchRightEdgeInset; 
        int edgeClip; 
    }  _rotationSettings;
    bool  _skipClientRotationCallbacks;
    bool  _skipFooterRotation;
    bool  _skipHeaderRotation;
    UIView * _snapshotTargetView;
    bool  _snapshotTargetWasHidden;
    long long  _toOrientation;
    UIWindow * _window;
    double  contentBottomInset;
}

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) long long fromOrientation;
@property (nonatomic, readonly) id rotatingClient;
@property (nonatomic) bool skipClientRotationCallbacks;
@property (nonatomic, readonly) long long toOrientation;

- (bool)_isFooterTranslucent;
- (bool)_isHeaderTranslucent;
- (void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(long long)arg3;
- (void)_slideFooterWithStartSnapshot:(id)arg1 endSnapshot:(id)arg2 duration:(double)arg3;
- (void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(bool)arg3 forInterfaceOrientation:(long long)arg4;
- (id)contentView;
- (void)dealloc;
- (double)duration;
- (void)finishFirstHalfRotation;
- (void)finishFullRotateUsingOnePartAnimation:(bool)arg1;
- (long long)fromOrientation;
- (id)initWithClient:(id)arg1 toOrientation:(long long)arg2 duration:(double)arg3 andWindow:(id)arg4;
- (void)rotateSnapshots;
- (id)rotatingClient;
- (void)setSkipClientRotationCallbacks:(bool)arg1;
- (void)setupRotationOrderingKeyboardInAfterRotation:(bool)arg1;
- (bool)skipClientRotationCallbacks;
- (void)slideHeaderViewAndFooterViewOffScreen:(bool)arg1 forInterfaceOrientation:(long long)arg2;
- (long long)toOrientation;

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
