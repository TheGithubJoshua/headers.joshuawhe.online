<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BWVideoFormat.h</title>
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

/PrivateFrameworks/Celestial.framework/BWVideoFormat.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial (2290.13.1.3)
 */

@interface BWVideoFormat : BWFormat {
    unsigned long long  _bytesPerRowAlignment;
    unsigned int  _cacheMode;
    int  _colorSpaceProperties;
    unsigned long long  _extendedHeight;
    unsigned long long  _extendedWidth;
    unsigned long long  _height;
    bool  _memoryPoolUseAllowed;
    NSDictionary * _pixelBufferAttributes;
    unsigned int  _pixelFormat;
    unsigned long long  _planeAlignment;
    bool  _prewireBuffers;
    unsigned long long  _width;
}

@property (nonatomic) unsigned long long bytesPerRowAlignment;
@property (nonatomic) unsigned int cacheMode;
@property (nonatomic, readonly) int colorSpaceProperties;
@property (nonatomic) unsigned long long extendedHeight;
@property (nonatomic) unsigned long long extendedWidth;
@property (nonatomic) unsigned long long height;
@property (nonatomic) bool memoryPoolUseAllowed;
@property (nonatomic, readonly) NSDictionary *pixelBufferAttributes;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) unsigned long long planeAlignment;
@property (nonatomic) bool prewireBuffers;
@property (nonatomic) unsigned long long width;

+ (id)_formatRequirementsByResolvingFormatRequirements:(id)arg1 withFormatRequirements:(id)arg2;
+ (int)colorSpacePropertiesForSourceThatSupportsWideColor:(bool)arg1 sourceColorSpace:(int)arg2 sourcePixelFormat:(unsigned int)arg3 sourceDimensions:(struct { int x1; int x2; })arg4 requestedPixelFormat:(unsigned int)arg5;
+ (int)colorSpacePropertiesWithSourceColorSpace:(int)arg1 sourcePixelFormat:(unsigned int)arg2 sourceDimensions:(struct { int x1; int x2; })arg3 requestedPixelFormat:(unsigned int)arg4;
+ (id)formatByResolvingRequirements:(id)arg1;
+ (void)initialize;
+ (id)pixelBufferAttachmentsForColorSpaceProperties:(int)arg1;

- (id)_initWithResolvedPixelBufferAttributes:(id)arg1 colorSpaceProperties:(int)arg2 memoryPoolUseAllowed:(bool)arg3;
- (unsigned long long)bytesPerRowAlignment;
- (unsigned int)cacheMode;
- (int)colorSpaceProperties;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (unsigned long long)extendedHeight;
- (unsigned long long)extendedWidth;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (unsigned long long)height;
- (bool)isEqual:(id)arg1;
- (unsigned int)mediaType;
- (bool)memoryPoolUseAllowed;
- (id)pixelBufferAttributes;
- (unsigned int)pixelFormat;
- (unsigned long long)planeAlignment;
- (bool)prewireBuffers;
- (void)setBytesPerRowAlignment:(unsigned long long)arg1;
- (void)setCacheMode:(unsigned int)arg1;
- (void)setExtendedHeight:(unsigned long long)arg1;
- (void)setExtendedWidth:(unsigned long long)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setMemoryPoolUseAllowed:(bool)arg1;
- (void)setPixelFormat:(unsigned int)arg1;
- (void)setPlaneAlignment:(unsigned long long)arg1;
- (void)setPrewireBuffers:(bool)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)width;

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
