<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MKScaleView.h</title>
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

/Frameworks/MapKit.framework/MKScaleView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MapKit.framework/MapKit (1.0)
 */

@interface MKScaleView : UIView {
    UIColor * _borderColorRegular;
    UIColor * _borderColorSatellite;
    UIColor * _darkSegmentColorRegular;
    UIColor * _darkSegmentColorSatellite;
    UIView * _displayedOutline;
    double  _distanceInMeters;
    NSString * _feetAbbreviation;
    NSNumberFormatter * _floatNumberFormatter;
    NSMutableDictionary * _formattedNumberCache;
    long long  _grQuality;
    bool  _isVisible;
    NSString * _kilometersAbbreviation;
    int  _layoutCounter;
    long long  _legendAlignment;
    UIColor * _lightSegmentColorRegular;
    UIColor * _lightSegmentColorSatellite;
    double  _magicNumbers;
    MKMapView * _mapView;
    NSString * _metersAbbreviation;
    NSString * _milesAbbreviation;
    long long  _oldNumberOfSegments;
    UIView * _outlineViewA;
    UIView * _outlineViewB;
    double  _resultSegmentLength;
    double  _resultSegmentLengthInMeters;
    long long  _scaleVisibility;
    double  _segmentLengthInPixels;
    NSMutableArray * _segments;
    _MKScaleUnitsView * _unitsView;
    bool  _useLightText;
    bool  _useMetric;
    bool  _useYardsForShortDistances;
    NSString * _yardAbbreviation;
}

@property (nonatomic) double distanceInMeters;
@property (nonatomic) long long legendAlignment;
@property (nonatomic) MKMapView *mapView;
@property (nonatomic) long long scaleVisibility;
@property (nonatomic) bool useLightText;

+ (id)scaleViewWithMapView:(id)arg1;

- (void).cxx_destruct;
- (void)_calculateSegments;
- (id)_formattedStringForFloat:(double)arg1;
- (void)_localizedDistanceStringsWithMeters:(unsigned int)arg1 imperial:(double)arg2 useFeet:(bool)arg3 inMetric:(bool)arg4 displaysYardsForShortDistances:(bool)arg5 strings:(id)arg6;
- (id)_scaleViewFormattedStringForFloat:(double)arg1;
- (id)_scaleViewFormattedStringForInteger:(long long)arg1;
- (struct CGSize { double x1; double x2; })_systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)_updateSegmentStrokes;
- (void)_updateStrings;
- (void)_updateVisibility;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithMapView:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (long long)legendAlignment;
- (id)mapView;
- (void)memoryWarning:(id)arg1;
- (long long)scaleVisibility;
- (void)setDistanceInMeters:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLegendAlignment:(long long)arg1;
- (void)setMapView:(id)arg1;
- (void)setScaleVisibility:(long long)arg1;
- (void)setUseLightText:(bool)arg1;
- (void)shouldUpdateScaleNotification:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateLocale:(id)arg1;
- (bool)useLightText;

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