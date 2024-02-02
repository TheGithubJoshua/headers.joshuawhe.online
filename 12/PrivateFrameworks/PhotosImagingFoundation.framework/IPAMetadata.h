<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>IPAMetadata.h</title>
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

/PrivateFrameworks/PhotosImagingFoundation.framework/IPAMetadata.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation (3462.12.130)
 */

@interface IPAMetadata : NSObject <NSCopying> {
    NSDictionary * _audioVideoProperties;
    NSMutableDictionary * _basicProperties;
    NSArray * _cgImageMetadataProperties;
    NSMutableDictionary * _cgImageProperties;
    NSMutableDictionary * _customInfo;
    NSMutableDictionary * _exifProperties;
    NSString * _filePath;
    NSMutableDictionary * _fileSystemProperties;
    NSString * _fileTypeIdentifier;
    NSArray * _focusPoints;
    NSDate * _imageDate;
    NSTimeZone * _imageTimeZone;
    NSMutableDictionary * _iptcProperties;
    long long  _orientation;
    long long  _originalOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalUnrotatedSize;
    bool  _xmpLoaded;
}

@property (nonatomic, retain) NSDictionary *audioVideoProperties;
@property (nonatomic, retain) NSMutableDictionary *basicProperties;
@property (nonatomic, readonly) NSString *burstUuid;
@property (nonatomic, retain) NSArray *cgImageMetadataProperties;
@property (nonatomic, retain) NSMutableDictionary *cgImageProperties;
@property (nonatomic, retain) NSMutableDictionary *customInfo;
@property (nonatomic, readonly) long long customRendered;
@property (nonatomic, readonly) CLLocation *exifLocation;
@property (nonatomic, retain) NSMutableDictionary *exifProperties;
@property (nonatomic, copy) NSString *filePath;
@property (nonatomic, retain) NSMutableDictionary *fileSystemProperties;
@property (nonatomic, retain) NSString *fileTypeIdentifier;
@property (nonatomic, retain) NSArray *focusPoints;
@property (nonatomic, readonly) NSString *groupingUuid;
@property (nonatomic, readonly) bool hasCustomRendered;
@property (nonatomic, retain) NSDate *imageDate;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, retain) NSTimeZone *imageTimeZone;
@property (nonatomic, retain) NSMutableDictionary *iptcProperties;
@property (nonatomic, readonly) bool isAutoloop;
@property (nonatomic, readonly) bool isLongExposure;
@property (nonatomic, readonly) bool isMirror;
@property (nonatomic, readonly) bool isPortrait;
@property (readonly, copy) NSString *jsonFormattedDescription;
@property (nonatomic) long long orientation;
@property (nonatomic) long long originalOrientation;
@property (nonatomic) struct CGSize { double x1; double x2; } originalUnrotatedSize;
@property (nonatomic) bool xmpLoaded;

+ (id)defaultOptionsForCGImageSource;
+ (id)metadataIdentifierTypeMapCommon;
+ (id)metadataIdentifierTypeMapImage;
+ (id)metadataIdentifierTypeMapVideo;
+ (struct CGImageSource { }*)newImageSourceForData:(id)arg1 uti:(id)arg2;
+ (struct CGImageSource { }*)newImageSourceForURL:(id)arg1;
+ (id)proxyPropertyListForAVAsset:(id)arg1 reduceMetadata:(bool)arg2;

- (void).cxx_destruct;
- (bool)_didSetValidSubsec:(double*)arg1 forSubsecAsString:(id)arg2;
- (void)_digestedAVExifAttributesFromExif:(id)arg1;
- (void)_digestedCameraSettingsExifAttributesFromExif:(id)arg1;
- (void)_digestedCollapseArrayExifAttributesFromExif:(id)arg1;
- (void)_digestedDateTimeExifAttributesFromExif:(id)arg1;
- (id)_digestedExifAttributesFromRawAttributes:(id)arg1;
- (void)_digestedGPSExifAttributesFromExif:(id)arg1;
- (id)_digestedIptcAttributesFromRawAttributes:(id)arg1;
- (void)_digestedOrientationExifAttributesFromExif:(id)arg1;
- (void)_enforceProperFormatting:(id)arg1;
- (bool)_validSubsec:(double)arg1;
- (bool)_validTimezone:(id)arg1 forLongitude:(id)arg2;
- (void)addEntriesFromDictionary:(id)arg1 toDictionary:(id)arg2;
- (void)applyTimezoneAndImageDateFromUTCDate:(id)arg1 toExifProperties:(id)arg2;
- (id)audioVideoProperties;
- (void)audioVideoProxyPropertyListForAsset:(id)arg1 performExport:(bool)arg2 atEnd:(id /* block */)arg3;
- (id)basicProperties;
- (id)burstUuid;
- (id)cgImageMetadataProperties;
- (id)cgImageProperties;
- (void)clearImageAttributes;
- (bool)conformsToUTType:(struct __CFString { }*)arg1 forExtention:(id)arg2;
- (bool)convertGPSString:(id)arg1 toLatitude:(id*)arg2 longitude:(id*)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customInfo;
- (id)customPropertyForKey:(id)arg1;
- (long long)customRendered;
- (id)description;
- (id)descriptionDictionary;
- (void)digestedDateTimeExifAttributesFromExif:(id)arg1;
- (void)dumpXmpProperties;
- (id)encodedData;
- (id)encodedDataReduceIfLargerThan:(unsigned long long)arg1;
- (id)exifLocation;
- (id)exifProperties;
- (id)exifPropertyForKey:(id)arg1;
- (void)extractFocusPointsFrom:(id)arg1 orExifAux:(id)arg2;
- (id)filePath;
- (id)fileSystemProperties;
- (id)fileTypeIdentifier;
- (id)focusPoints;
- (id)groupingUuid;
- (bool)hasCustomRendered;
- (long long)hdrType;
- (id)imageDate;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)imageTimeZone;
- (id)init;
- (id)initWithFileData:(id)arg1 path:(id)arg2 cgImageProperties:(id)arg3 loadXmpData:(bool)arg4 xmpSidecarPath:(id)arg5;
- (id)initWithFileData:(id)arg1 path:(id)arg2 fileSize:(unsigned long long)arg3 cgImageProperties:(id)arg4 imageSource:(struct CGImageSource { }*)arg5 loadXmpData:(bool)arg6 xmpSidecarPath:(id)arg7 loadEssentialMetadataOnly:(bool)arg8;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 cgImageProperties:(id)arg2 loadXmpData:(bool)arg3 xmpSidecarPath:(id)arg4;
- (id)initWithPath:(id)arg1 fileSize:(unsigned long long)arg2 loadEssentialMetadataOnly:(bool)arg3;
- (id)initWithPath:(id)arg1 loadXmpData:(bool)arg2 xmpSidecarPath:(id)arg3;
- (id)iptcProperties;
- (id)iptcPropertyForKey:(id)arg1;
- (bool)isAutoloop;
- (bool)isCompositeHDR;
- (bool)isLongExposure;
- (bool)isMirror;
- (bool)isPortrait;
- (bool)isSDOF;
- (bool)isSloMoForType:(unsigned char)arg1;
- (id)jsonFormattedDescription;
- (void)mergeMetadata:(id)arg1;
- (void)mergeMetadataFromFileToSidecarFromPropertySet:(id)arg1 toSidecarSet:(id)arg2 ofType:(id)arg3;
- (long long)orientation;
- (long long)originalOrientation;
- (struct CGSize { double x1; double x2; })originalUnrotatedSize;
- (void)restoreImportantMetadataFromPropertySet:(id)arg1 toSidecarSet:(id)arg2;
- (void)setAudioVideoAttributesForAVAsset:(id)arg1 path:(id)arg2 fullMetadata:(bool)arg3 readyHandler:(id /* block */)arg4;
- (void)setAudioVideoAttributesForAVProxyData:(id)arg1 readyHandler:(id /* block */)arg2;
- (void)setAudioVideoAttributesForURL:(id)arg1 fullMetadata:(bool)arg2 readyHandler:(id /* block */)arg3;
- (void)setAudioVideoAttributesFromDictionary:(id)arg1;
- (void)setAudioVideoProperties:(id)arg1;
- (void)setBasicProperties:(id)arg1;
- (void)setCGImageProperties:(id)arg1;
- (void)setCgImageMetadataProperties:(id)arg1;
- (void)setCgImageProperties:(id)arg1;
- (void)setCustomInfo:(id)arg1;
- (void)setCustomProperties:(id)arg1;
- (void)setCustomProperty:(id)arg1 forKey:(id)arg2;
- (void)setEncodedAudioVideoData:(id)arg1;
- (void)setEncodedImageData:(id)arg1;
- (void)setExifProperties:(id)arg1;
- (void)setExifProperty:(id)arg1 forKey:(id)arg2;
- (void)setFilePath:(id)arg1;
- (void)setFileSystemProperties:(id)arg1;
- (void)setFileTypeIdentifier:(id)arg1;
- (void)setFocusPoints:(id)arg1;
- (void)setIPTCProperty:(id)arg1 forKey:(id)arg2;
- (void)setImageDate:(id)arg1;
- (void)setImagePropertiesForURL:(id)arg1;
- (void)setImageTimeZone:(id)arg1;
- (void)setIptcProperties:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOriginalOrientation:(long long)arg1;
- (void)setOriginalUnrotatedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRawFileSystemAttributes:(id)arg1;
- (void)setXmpLoaded:(bool)arg1;
- (id)timeZoneAdjustedImageDate;
- (id)utiFastModernizeVideoMedia;
- (id)utiForExtension:(id)arg1;
- (void)waitForAsync_setAudioVideoAttributesForAVProxyData:(id)arg1;
- (void)waitForAsync_setAudioVideoAttributesForURL:(id)arg1;
- (void)waitForAsync_setAudioVideoAttributesForURL:(id)arg1 fullMetadata:(bool)arg2;
- (bool)xmpLoaded;

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