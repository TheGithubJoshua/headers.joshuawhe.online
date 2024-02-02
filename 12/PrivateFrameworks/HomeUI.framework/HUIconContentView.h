<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HUIconContentView.h</title>
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

/PrivateFrameworks/HomeUI.framework/HUIconContentView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI (1)
 */

@interface HUIconContentView : UIView {
    double  _aspectRatio;
    <HUIconContentViewDelegate> * _delegate;
    bool  _disableContinuousAnimation;
    unsigned long long  _displayContext;
    unsigned long long  _displayStyle;
    <HFIconDescriptor> * _iconDescriptor;
    unsigned long long  _iconSize;
    long long  _primaryState;
    long long  _renderingMode;
    UIVisualEffect * _vibrancyEffect;
}

@property (nonatomic) double aspectRatio;
@property (nonatomic) <HUIconContentViewDelegate> *delegate;
@property (nonatomic) bool disableContinuousAnimation;
@property (nonatomic) unsigned long long displayContext;
@property (nonatomic, readonly) unsigned long long displayStyle;
@property (nonatomic, retain) <HFIconDescriptor> *iconDescriptor;
@property (nonatomic) unsigned long long iconSize;
@property (nonatomic) long long primaryState;
@property (nonatomic) long long renderingMode;
@property (nonatomic, retain) UIVisualEffect *vibrancyEffect;

+ (Class)iconContentViewClassForIconDescriptor:(id)arg1;
+ (id)iconImageNamed:(id)arg1 withSize:(unsigned long long)arg2 displayStyle:(unsigned long long)arg3;

- (void).cxx_destruct;
- (void)_updateOverrideRenderingModeForSubviewsOfView:(id)arg1;
- (double)aspectRatio;
- (id)delegate;
- (bool)disableContinuousAnimation;
- (unsigned long long)displayContext;
- (unsigned long long)displayStyle;
- (id)iconDescriptor;
- (unsigned long long)iconSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateRenderingMode;
- (id)managedVisualEffectViews;
- (long long)primaryState;
- (long long)renderingMode;
- (long long)renderingModeForSubview:(id)arg1 suggestedRenderingMode:(long long)arg2;
- (void)setAspectRatio:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableContinuousAnimation:(bool)arg1;
- (void)setDisplayContext:(unsigned long long)arg1;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (void)setIconDescriptor:(id)arg1;
- (void)setIconSize:(unsigned long long)arg1;
- (void)setPrimaryState:(long long)arg1;
- (void)setRenderingMode:(long long)arg1;
- (void)setVibrancyEffect:(id)arg1;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(bool)arg3;
- (id)vibrancyEffect;
- (bool)wantsManagedVibrancyEffect;

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