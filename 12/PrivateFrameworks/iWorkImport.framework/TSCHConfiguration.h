<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSCHConfiguration.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSCHConfiguration.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSCHConfiguration : NSObject {
    long long  _analyticsAppType;
    bool  mDisableHighQualityRenderingIfNecessary;
    bool  mExportsUsingSageKeynoteChartNonStyleDefaultsOverride;
    Class  mMultiDataChartOptionsControllerBuildSupportClass;
    NSString * mSaveChartStyleHelpKey;
    bool  mShouldForceDiscreteGraphicsFor3D;
    bool  mShowMessageOnSelection;
    bool  mSupports3DFillDataEmbeddingRecovery;
    bool  mSupportsChartDataEditor;
    bool  mSupportsChartRangeEditingMode;
    bool  mSupportsNumberFormatSameAsSource;
    bool  mSupportsTextBackground;
    bool  mSupportsTextWrapping;
    bool  mUse3DFillFor3DChartFallback;
}

@property (nonatomic) long long analyticsAppType;
@property (readonly) TSSPropertyMap *appSpecificPropertyOverrides;
@property (nonatomic) bool disableHighQualityRenderingIfNecessary;
@property (nonatomic) bool exportsUsingSageKeynoteChartNonStyleDefaultsOverride;
@property (nonatomic, retain) Class multiDataChartOptionsControllerBuildSupportClass;
@property (nonatomic, copy) NSString *saveChartStyleHelpKey;
@property (nonatomic) bool shouldForceDiscreteGraphicsFor3D;
@property (nonatomic) bool showMessageOnSelection;
@property (nonatomic) bool supports3DFillDataEmbeddingRecovery;
@property (nonatomic) bool supportsChartDataEditor;
@property (nonatomic) bool supportsChartRangeEditingMode;
@property (nonatomic) bool supportsNumberFormatSameAsSource;
@property (nonatomic) bool supportsTextBackground;
@property (nonatomic) bool supportsTextWrapping;
@property (nonatomic) bool use3DFillFor3DChartFallback;

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)resetSharedChartConfiguration;
+ (id)sharedChartConfiguration;

- (void).cxx_destruct;
- (long long)analyticsAppType;
- (id)appSpecificPropertyOverrides;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)disableHighQualityRenderingIfNecessary;
- (bool)exportsUsingSageKeynoteChartNonStyleDefaultsOverride;
- (id)init;
- (Class)multiDataChartOptionsControllerBuildSupportClass;
- (id)saveChartStyleHelpKey;
- (void)setAnalyticsAppType:(long long)arg1;
- (void)setDisableHighQualityRenderingIfNecessary:(bool)arg1;
- (void)setExportsUsingSageKeynoteChartNonStyleDefaultsOverride:(bool)arg1;
- (void)setMultiDataChartOptionsControllerBuildSupportClass:(Class)arg1;
- (void)setSaveChartStyleHelpKey:(id)arg1;
- (void)setShouldForceDiscreteGraphicsFor3D:(bool)arg1;
- (void)setShowMessageOnSelection:(bool)arg1;
- (void)setSupports3DFillDataEmbeddingRecovery:(bool)arg1;
- (void)setSupportsChartDataEditor:(bool)arg1;
- (void)setSupportsChartRangeEditingMode:(bool)arg1;
- (void)setSupportsNumberFormatSameAsSource:(bool)arg1;
- (void)setSupportsTextBackground:(bool)arg1;
- (void)setSupportsTextWrapping:(bool)arg1;
- (void)setUse3DFillFor3DChartFallback:(bool)arg1;
- (bool)shouldForceDiscreteGraphicsFor3D;
- (bool)showMessageOnSelection;
- (bool)supports3DFillDataEmbeddingRecovery;
- (bool)supportsChartDataEditor;
- (bool)supportsChartRangeEditingMode;
- (bool)supportsNumberFormatSameAsSource;
- (bool)supportsTextBackground;
- (bool)supportsTextWrapping;
- (bool)use3DFillFor3DChartFallback;

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