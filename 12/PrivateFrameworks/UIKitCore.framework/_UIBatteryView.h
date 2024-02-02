<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIBatteryView.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIBatteryView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIBatteryView : UIView <_UIStatusBarDisplayable> {
    _UIBatteryViewAXHUDImageCacheInfo * _accessibilityHUDImageCacheInfo;
    UIColor * _bodyColor;
    CAShapeLayer * _bodyLayer;
    CAShapeLayer * _boltLayer;
    CAShapeLayer * _boltMaskLayer;
    double  _chargePercent;
    long long  _chargingState;
    UIColor * _fillColor;
    CALayer * _fillLayer;
    long long  _iconSize;
    long long  _internalSizeCategory;
    UILabel * _percentageLabel;
    UIColor * _pinColor;
    CAShapeLayer * _pinLayer;
    bool  _saverModeActive;
    bool  _showsInlineChargingIndicator;
    bool  _showsPercentage;
}

@property (nonatomic, retain) _UIBatteryViewAXHUDImageCacheInfo *accessibilityHUDImageCacheInfo;
@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (nonatomic, copy) UIColor *bodyColor;
@property (nonatomic, retain) CAShapeLayer *bodyLayer;
@property (nonatomic, retain) CAShapeLayer *boltLayer;
@property (nonatomic, retain) CAShapeLayer *boltMaskLayer;
@property (nonatomic) double chargePercent;
@property (nonatomic) long long chargingState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) UIColor *fillColor;
@property (nonatomic, retain) CALayer *fillLayer;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long iconSize;
@property (nonatomic) long long internalSizeCategory;
@property (getter=isLowBattery, nonatomic, readonly) bool lowBattery;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, retain) UILabel *percentageLabel;
@property (nonatomic, copy) UIColor *pinColor;
@property (nonatomic, retain) CAShapeLayer *pinLayer;
@property (nonatomic) bool saverModeActive;
@property (nonatomic) bool showsInlineChargingIndicator;
@property (nonatomic) bool showsPercentage;
@property (nonatomic) long long sizeCategory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsCrossfade;

+ (struct CGSize { double x1; double x2; })_batterySizeForIconSize:(long long)arg1;
+ (double)_lineWidthAndInterspaceForIconSize:(long long)arg1;
+ (struct CGSize { double x1; double x2; })_pinSizeForIconSize:(long long)arg1;
+ (struct CGSize { double x1; double x2; })_statusBarIntrinsicContentSizeForIconSize:(long long)arg1;

- (void).cxx_destruct;
- (id)_batteryFillColor;
- (struct CGSize { double x1; double x2; })_batterySizeForTraitCollection:(id)arg1;
- (id)_batteryTextColor;
- (void)_commonInit;
- (bool)_currentlyShowsPercentage;
- (double)_insideCornerRadiusForTraitCollection:(id)arg1;
- (double)_lineWidthAndInterspaceForTraitCollection:(id)arg1;
- (double)_outsideCornerRadiusForTraitCollection:(id)arg1;
- (struct CGSize { double x1; double x2; })_pinSizeForTraitCollection:(id)arg1;
- (void)_unflipBoltIfNecessary;
- (void)_updateBodyColors;
- (void)_updateBolt;
- (void)_updateFillColor;
- (void)_updateFillLayer;
- (void)_updatePercentage;
- (id)accessibilityHUDImageCacheInfo;
- (id)accessibilityHUDRepresentation;
- (void)applyStyleAttributes:(id)arg1;
- (id)bodyColor;
- (id)bodyLayer;
- (id)boltLayer;
- (id)boltMaskLayer;
- (double)chargePercent;
- (long long)chargingState;
- (id)fillColor;
- (id)fillLayer;
- (long long)iconSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSizeCategory:(long long)arg1;
- (long long)internalSizeCategory;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isLowBattery;
- (void)layoutSubviews;
- (id)percentageLabel;
- (id)pinColor;
- (id)pinLayer;
- (bool)saverModeActive;
- (void)setAccessibilityHUDImageCacheInfo:(id)arg1;
- (void)setBodyColor:(id)arg1;
- (void)setBodyLayer:(id)arg1;
- (void)setBoltLayer:(id)arg1;
- (void)setBoltMaskLayer:(id)arg1;
- (void)setChargePercent:(double)arg1;
- (void)setChargingState:(long long)arg1;
- (void)setFillColor:(id)arg1;
- (void)setFillLayer:(id)arg1;
- (void)setIconSize:(long long)arg1;
- (void)setInternalSizeCategory:(long long)arg1;
- (void)setPercentageLabel:(id)arg1;
- (void)setPinColor:(id)arg1;
- (void)setPinLayer:(id)arg1;
- (void)setSaverModeActive:(bool)arg1;
- (void)setShowsInlineChargingIndicator:(bool)arg1;
- (void)setShowsPercentage:(bool)arg1;
- (void)setSizeCategory:(long long)arg1;
- (bool)showsInlineChargingIndicator;
- (bool)showsPercentage;
- (long long)sizeCategory;
- (void)traitCollectionDidChange:(id)arg1;

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