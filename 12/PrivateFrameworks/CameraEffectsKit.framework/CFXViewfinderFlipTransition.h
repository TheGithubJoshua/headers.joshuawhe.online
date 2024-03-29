<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CFXViewfinderFlipTransition.h</title>
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

/PrivateFrameworks/CameraEffectsKit.framework/CFXViewfinderFlipTransition.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit (357.0.70)
 */

@interface CFXViewfinderFlipTransition : NSObject {
    CAMSnapshotView * __backSnapshotView;
    unsigned long long  __currentAnimationID;
    CAMSnapshotView * __frontSnapshotView;
    CAMSnapshotView * __targetSnapshotView;
    UIView * _viewfinderView;
}

@property (setter=_setBackSnapshotView:, nonatomic, retain) CAMSnapshotView *_backSnapshotView;
@property (setter=_setCurrentAnimationID:, nonatomic) unsigned long long _currentAnimationID;
@property (setter=_setFrontSnapshotView:, nonatomic, retain) CAMSnapshotView *_frontSnapshotView;
@property (setter=_setTargetSnapshotView:, nonatomic, retain) CAMSnapshotView *_targetSnapshotView;
@property (nonatomic) UIView *viewfinderView;

- (void).cxx_destruct;
- (double)_backSnapshotTargetRadiansForDirection:(long long)arg1 frontSnapshotRadians:(double)arg2;
- (id)_backSnapshotView;
- (void)_cleanupFromFlipTransition;
- (unsigned long long)_currentAnimationID;
- (double)_frontSnapshotTargetRadiansForDirection:(long long)arg1 fromRadians:(double)arg2;
- (id)_frontSnapshotView;
- (void)_getCurrentRadians:(out double*)arg1 targetRadians:(out double*)arg2 forDirection:(long long)arg3 withAnimation:(id)arg4 onFrontSnapshotLayer:(id)arg5;
- (void)_setBackSnapshotView:(id)arg1;
- (void)_setCurrentAnimationID:(unsigned long long)arg1;
- (void)_setFrontSnapshotView:(id)arg1;
- (void)_setTargetSnapshotView:(id)arg1;
- (id)_snapshotFlipAnimationFromValue:(double)arg1 toValue:(double)arg2;
- (id)_targetSnapshotView;
- (void)completeTransitionToLivePreviewWithCompletionHandler:(id /* block */)arg1;
- (id)initWithViewfinderView:(id)arg1;
- (void)performFlipTransitionWithDirection:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setViewfinderView:(id)arg1;
- (id)viewfinderView;

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
