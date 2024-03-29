<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WKInterfaceDevice.h</title>
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

/Frameworks/WatchKit.framework/WKInterfaceDevice.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit (1)
 */

@interface WKInterfaceDevice : NSObject {
    float  _batteryLevel;
    bool  _batteryMonitoringEnabled;
    long long  _batteryState;
    long long  _crownOrientation;
    NSString * _deviceLocalizedModel;
    NSString * _deviceModel;
    NSString * _deviceName;
    NSString * _deviceSystemName;
    NSString * _deviceSystemVersion;
    long long  _layoutDirection;
    NSString * _preferredContentSizeCategory;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _screenBounds;
    double  _screenScale;
    long long  _wristLocation;
}

@property (nonatomic, readonly) float batteryLevel;
@property (getter=isBatteryMonitoringEnabled, nonatomic) bool batteryMonitoringEnabled;
@property (nonatomic, readonly) long long batteryState;
@property (nonatomic, readonly) NSDictionary *cachedImages;
@property (nonatomic, readonly) long long crownOrientation;
@property (nonatomic, copy) NSString *deviceLocalizedModel;
@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, copy) NSString *deviceSystemName;
@property (nonatomic, copy) NSString *deviceSystemVersion;
@property (nonatomic, readonly) long long layoutDirection;
@property (nonatomic, readonly, copy) NSString *localizedModel;
@property (nonatomic, readonly, copy) NSString *model;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } screenBounds;
@property (nonatomic) double screenScale;
@property (nonatomic, readonly, copy) NSString *systemName;
@property (nonatomic, readonly, copy) NSString *systemVersion;
@property (nonatomic, readonly) long long wristLocation;

+ (id)currentDevice;

- (void).cxx_destruct;
- (bool)addCachedImage:(id)arg1 name:(id)arg2;
- (bool)addCachedImageWithData:(id)arg1 name:(id)arg2;
- (float)batteryLevel;
- (long long)batteryState;
- (id)cachedImages;
- (long long)crownOrientation;
- (id)deviceLocalizedModel;
- (id)deviceModel;
- (id)deviceName;
- (id)deviceSystemName;
- (id)deviceSystemVersion;
- (bool)isBatteryMonitoringEnabled;
- (long long)layoutDirection;
- (id)localizedModel;
- (id)model;
- (id)name;
- (void)playHaptic:(long long)arg1;
- (id)preferredContentSizeCategory;
- (void)removeAllCachedImages;
- (void)removeCachedImageWithName:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenBounds;
- (double)screenScale;
- (void)setBatteryMonitoringEnabled:(bool)arg1;
- (void)setDeviceLocalizedModel:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setDeviceSystemName:(id)arg1;
- (void)setDeviceSystemVersion:(id)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setScreenBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScreenScale:(double)arg1;
- (id)systemName;
- (id)systemVersion;
- (long long)wristLocation;

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
