<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TDDeviceTraits.h</title>
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

/PrivateFrameworks/CoreThemeDefinition.framework/TDDeviceTraits.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition (349)
 */

@interface TDDeviceTraits : NSObject <NSCopying> {
    long long  _deploymentTargetValue;
    long long  _displayGamutValue;
    long long  _dynamicDisplayModeValue;
    long long  _graphicsFeatureSetClassValue;
    NSArray * _graphicsFeatureSetFallbackValues;
    long long  _graphicsPerformanceClass;
    NSArray * _hostedIdiomValues;
    long long  _idiomValue;
    long long  _memoryPerformanceClass;
    double  _scale;
    long long  _sizeClassHorizontal;
    long long  _sizeClassVertical;
    long long  _subtype;
    NSArray * _subtypeFallbackValues;
}

@property (nonatomic, retain) NSString *deploymentTarget;
@property (nonatomic) long long deploymentTargetValue;
@property (nonatomic, retain) NSString *displayGamut;
@property (nonatomic) long long displayGamutValue;
@property (nonatomic, retain) NSString *dynamicDisplayMode;
@property (nonatomic) long long dynamicDisplayModeValue;
@property (nonatomic, retain) NSString *graphicsFeatureSetClass;
@property (nonatomic) long long graphicsFeatureSetClassValue;
@property (nonatomic, copy) NSArray *graphicsFeatureSetFallbackValues;
@property (nonatomic, retain) NSArray *graphicsFeatureSetFallbacks;
@property (nonatomic) long long graphicsPerformanceClass;
@property (nonatomic, copy) NSArray *hostedIdiomValues;
@property (nonatomic, retain) NSArray *hostedIdioms;
@property (nonatomic, retain) NSString *idiom;
@property (nonatomic) long long idiomValue;
@property (nonatomic) long long memoryPerformanceClass;
@property (nonatomic) double scale;
@property (nonatomic) long long subtype;
@property (nonatomic, retain) NSArray *subtypeFallbackValues;

- (long long)_deploymentTargetFromTraitString:(id)arg1;
- (id)_deploymentTargetToTraitString:(long long)arg1;
- (long long)_displayGamutFromTraitString:(id)arg1;
- (id)_displayGamutToTraitString:(long long)arg1;
- (long long)_dynamicDisplayModeFromTraitString:(id)arg1;
- (id)_dynamicDisplayModeToTraitString:(long long)arg1;
- (long long)_graphicsFeatureSetClassFromTraitString:(id)arg1;
- (id)_graphicsFeatureSetClassToTraitString:(long long)arg1;
- (long long)_idiomFromTraitString:(id)arg1;
- (id)_idiomToTraitString:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)deploymentTarget;
- (long long)deploymentTargetValue;
- (id)description;
- (id)displayGamut;
- (long long)displayGamutValue;
- (id)dynamicDisplayMode;
- (long long)dynamicDisplayModeValue;
- (id)graphicsFeatureSetClass;
- (long long)graphicsFeatureSetClassValue;
- (id)graphicsFeatureSetFallbackValues;
- (id)graphicsFeatureSetFallbacks;
- (long long)graphicsPerformanceClass;
- (id)hostedIdiomValues;
- (id)hostedIdioms;
- (id)idiom;
- (long long)idiomValue;
- (id)init;
- (long long)memoryPerformanceClass;
- (double)scale;
- (void)setDeploymentTarget:(id)arg1;
- (void)setDeploymentTargetValue:(long long)arg1;
- (void)setDisplayGamut:(id)arg1;
- (void)setDisplayGamutValue:(long long)arg1;
- (void)setDynamicDisplayMode:(id)arg1;
- (void)setDynamicDisplayModeValue:(long long)arg1;
- (void)setGraphicsFeatureSetClass:(id)arg1;
- (void)setGraphicsFeatureSetClassValue:(long long)arg1;
- (void)setGraphicsFeatureSetFallbackValues:(id)arg1;
- (void)setGraphicsFeatureSetFallbacks:(id)arg1;
- (void)setGraphicsPerformanceClass:(long long)arg1;
- (void)setHostedIdiomValues:(id)arg1;
- (void)setHostedIdioms:(id)arg1;
- (void)setIdiom:(id)arg1;
- (void)setIdiomValue:(long long)arg1;
- (void)setMemoryPerformanceClass:(long long)arg1;
- (void)setScale:(double)arg1;
- (void)setSubtype:(long long)arg1;
- (void)setSubtypeFallbackValues:(id)arg1;
- (long long)subtype;
- (id)subtypeFallbackValues;

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