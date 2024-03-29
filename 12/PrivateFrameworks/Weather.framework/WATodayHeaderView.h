<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WATodayHeaderView.h</title>
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

/PrivateFrameworks/Weather.framework/WATodayHeaderView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather (1)
 */

@interface WATodayHeaderView : UIView {
    UIImage * _conditionsImage;
    UIImageView * _conditionsImageView;
    UILabel * _conditionsLabel1;
    UILabel * _conditionsLabel2;
    NSString * _conditionsLine1;
    NSString * _conditionsLine2;
    UILabel * _locationLabel;
    NSString * _locationName;
    double  _pageBaselineOffset;
    double  _pageDegreeFontSize;
    double  _pageFontSize;
    NSString * _temperature;
    NSString * _temperatureHigh;
    UILabel * _temperatureHighLowLabel;
    UILabel * _temperatureLabel;
    NSString * _temperatureLow;
    UIVisualEffectView * _weatherInformationVisualEffectView;
}

@property (nonatomic, copy) UIImage *conditionsImage;
@property (nonatomic, retain) UIImageView *conditionsImageView;
@property (nonatomic, retain) UILabel *conditionsLabel1;
@property (nonatomic, retain) UILabel *conditionsLabel2;
@property (nonatomic, copy) NSString *conditionsLine1;
@property (nonatomic, copy) NSString *conditionsLine2;
@property (nonatomic, retain) UILabel *locationLabel;
@property (nonatomic, copy) NSString *locationName;
@property (nonatomic) double pageBaselineOffset;
@property (nonatomic) double pageDegreeFontSize;
@property (nonatomic) double pageFontSize;
@property (nonatomic, copy) NSString *temperature;
@property (nonatomic, copy) NSString *temperatureHigh;
@property (nonatomic, retain) UILabel *temperatureHighLowLabel;
@property (nonatomic, retain) UILabel *temperatureLabel;
@property (nonatomic, copy) NSString *temperatureLow;
@property (nonatomic, retain) UIVisualEffectView *weatherInformationVisualEffectView;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateContent;
- (id)conditionsImage;
- (id)conditionsImageView;
- (id)conditionsLabel1;
- (id)conditionsLabel2;
- (id)conditionsLine1;
- (id)conditionsLine2;
- (id)init;
- (id)locationLabel;
- (id)locationName;
- (double)pageBaselineOffset;
- (double)pageDegreeFontSize;
- (double)pageFontSize;
- (void)setConditionsImage:(id)arg1;
- (void)setConditionsImageView:(id)arg1;
- (void)setConditionsLabel1:(id)arg1;
- (void)setConditionsLabel2:(id)arg1;
- (void)setConditionsLine1:(id)arg1;
- (void)setConditionsLine2:(id)arg1;
- (void)setLocationLabel:(id)arg1;
- (void)setLocationName:(id)arg1;
- (void)setPageBaselineOffset:(double)arg1;
- (void)setPageDegreeFontSize:(double)arg1;
- (void)setPageFontSize:(double)arg1;
- (void)setTemperature:(id)arg1;
- (void)setTemperatureHigh:(id)arg1;
- (void)setTemperatureHighLowLabel:(id)arg1;
- (void)setTemperatureLabel:(id)arg1;
- (void)setTemperatureLow:(id)arg1;
- (void)setWeatherInformationVisualEffectView:(id)arg1;
- (id)temperature;
- (id)temperatureHigh;
- (id)temperatureHighLowLabel;
- (id)temperatureLabel;
- (id)temperatureLow;
- (id)weatherInformationVisualEffectView;

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
