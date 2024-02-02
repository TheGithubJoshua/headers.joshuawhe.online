<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ExFATCameraFile.h</title>
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

/PrivateFrameworks/ImageCapture.framework/ExFATCameraFile.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture (1534.2)
 */

@interface ExFATCameraFile : ICCameraFile {
    void * _exFATCameraFileProperties;
    int  _imgOrientation;
    bool  _ptpThumbnail;
    int  _thmOrientation;
}

@property int bitsPerPixel;
@property (copy) NSString *exifCreationDateTime;
@property (copy) NSString *exifModificationDateTime;
@property (readonly) struct timespec { long long x1; long long x2; } fsCreationTime;
@property (readonly) struct timespec { long long x1; long long x2; } fsModificationTime;
@property (readonly) long long fsSize;
@property int imgHeight;
@property int imgOrientation;
@property int imgWidth;
@property (readonly) id object;
@property bool previewThumbnail;
@property (readonly) bool ptpThumbnail;
@property bool smallThumbnail;
@property int thmHeight;
@property int thmOffset;
@property (readonly) int thmOrientation;
@property int thmSize;
@property int thmWidth;
@property unsigned int type;
@property bool updatedBasicMetadata;
@property bool updatedExpensiveMetadata;

- (int)bitsPerPixel;
- (bool)closeStream;
- (struct CGImage { }*)copyImageThumbnailForPixelWidth:(unsigned int)arg1;
- (struct CGImage { }*)copyMovieThumbnailForPixelWidth:(unsigned int)arg1;
- (struct CGSize { double x1; double x2; })cropThumbSize:(struct CGSize { double x1; double x2; })arg1 fullSize:(struct CGSize { double x1; double x2; })arg2 finalSize:(struct CGSize { double x1; double x2; })arg3;
- (void)dealloc;
- (struct CGDataProviderDirectCallbacks { unsigned int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); })dirCallbacks;
- (long long)dpOffset;
- (id)exifCreationDateTime;
- (id)exifModificationDateTime;
- (struct timespec { long long x1; long long x2; })fsCreationTime;
- (struct timespec { long long x1; long long x2; })fsModificationTime;
- (long long)fsSize;
- (id)fsStream;
- (bool)hasValidInformation:(id)arg1;
- (int)imgHeight;
- (int)imgOrientation;
- (int)imgWidth;
- (id)initForReadingOnly:(id)arg1 size:(long long)arg2;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 object:(id)arg4 fsCreationTime:(struct timespec { long long x1; long long x2; })arg5 fsModificationTime:(struct timespec { long long x1; long long x2; })arg6 fsSize:(long long)arg7;
- (bool)isRAW;
- (id)metadataDict;
- (id)object;
- (bool)openStream;
- (bool)previewThumbnail;
- (bool)processMetadata:(id)arg1;
- (bool)ptpThumbnail;
- (void)rawImageInspectMetadata;
- (void)rawImageScrapeAllocatedData:(char *)arg1 length:(unsigned long long)arg2 bufferOffset:(unsigned long long)arg3;
- (id)rawImageValidateSubImage:(id)arg1 error:(id*)arg2;
- (unsigned long long)readStream:(void*)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3;
- (void)releaseProvider;
- (struct CGImage { }*)removeLetterboxFromThumbnail:(struct CGImage { }*)arg1;
- (struct CGImage { }*)removeLetterboxFromThumbnail:(struct CGImage { }*)arg1 fullSize:(struct CGSize { double x1; double x2; })arg2;
- (void)rewind;
- (struct CGDataProviderSequentialCallbacks { unsigned int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); })seqCallbacks;
- (void)setBitsPerPixel:(int)arg1;
- (void)setExifCreationDateTime:(id)arg1;
- (void)setExifModificationDateTime:(id)arg1;
- (void)setImgHeight:(int)arg1;
- (void)setImgOrientation:(int)arg1;
- (void)setImgWidth:(int)arg1;
- (void)setPreviewThumbnail:(bool)arg1;
- (void)setSizeAndOrientationFromImageProperties:(id)arg1;
- (void)setSmallThumbnail:(bool)arg1;
- (void)setThmHeight:(int)arg1;
- (void)setThmOffset:(int)arg1;
- (void)setThmSize:(int)arg1;
- (void)setThmWidth:(int)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setUpdatedBasicMetadata:(bool)arg1;
- (void)setUpdatedExpensiveMetadata:(bool)arg1;
- (void)setdpOffset:(long long)arg1;
- (long long)skipBytes:(long long)arg1;
- (bool)smallThumbnail;
- (int)thmHeight;
- (int)thmOffset;
- (int)thmOrientation;
- (int)thmSize;
- (int)thmWidth;
- (id)thumbnailForPixelWidth:(unsigned int)arg1;
- (id)thumbnailUsingMetadataOffsets;
- (id)thumbnailUsingSidecarFiles;
- (unsigned int)type;
- (void)updateBasicMetadata;
- (bool)updatedBasicMetadata;
- (bool)updatedExpensiveMetadata;
- (int)writeDataToFile:(int)arg1 fromOffset:(long long)arg2 ofLength:(long long*)arg3;

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