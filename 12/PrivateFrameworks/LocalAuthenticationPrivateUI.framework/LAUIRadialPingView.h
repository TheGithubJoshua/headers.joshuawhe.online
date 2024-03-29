<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>LAUIRadialPingView.h</title>
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

/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LAUIRadialPingView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI (1)
 */

@interface LAUIRadialPingView : UIView {
    bool  _animating;
    unsigned char  _animating_counter;
    bool  _animating_dirty;
    struct array<(anonymous namespace)::blur_container, 2>="__elems_"[2{blur_container="view"@"UIImageView""pulse"{periodic_animation_state="enabled"B"_key"@"NSString""_layer"@"CALayer""_removal_timer"@"NSObject<OS_dispatch_source>" {}  _blurs;
    UIColor * _color;
    UIView * _container;
    UIView * _primary;
    struct periodic_animation_state { 
        bool enabled; 
        NSString *_key; 
        CALayer *_layer; 
        NSObject<OS_dispatch_source> *_removal_timer; 
    }  _pulse;
}

@property (getter=isAnimating, nonatomic) bool animating;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_attachExpandAnimationToContainer:(struct blur_container { id x1; struct periodic_animation_state { bool x_2_1_1; id x_2_1_2; id x_2_1_3; id x_2_1_4; } x2; }*)arg1 withDelay:(double)arg2;
- (void)_attachPulseAnimationWithDelay:(double)arg1;
- (void)_endExpand;
- (void)_setExpand:(bool)arg1 forBlurAtIndex:(unsigned long long)arg2 withDelay:(double)arg3;
- (void)_setPulse:(bool)arg1 withDelay:(double)arg2;
- (void)_startExpandWithDelay:(double)arg1;
- (void)_updateAnimatingAnimated:(bool)arg1;
- (void)_updateExpandForBlurAtIndex:(unsigned long long)arg1 withDelay:(double)arg2;
- (void)_updateViewsWithColor;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAnimating;
- (void)layoutSubviews;
- (void)setAnimating:(bool)arg1;
- (void)tintColorDidChange;

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
