<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SXAnimatedImage.h</title>
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

/PrivateFrameworks/Silex.framework/SXAnimatedImage.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex (2166)
 */

@interface SXAnimatedImage : NSObject <SXAnimatedImageViewCacheDelegate> {
    SXAnimatedImageViewCache * _cache;
    <SXAnimatedImageDelegate> * _delegate;
    double  _duration;
    NSArray * _frames;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    struct CGImageSource { } * _imageSource;
    long long  _imageType;
    bool  _invalidFile;
    unsigned long long  _loopCount;
    unsigned long long  _numberOfFrames;
    long long  _preloadType;
    double  _scale;
    unsigned long long  _uncompressedByteSizePerFrame;
}

@property (nonatomic, readonly) SXAnimatedImageViewCache *cache;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXAnimatedImageDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSArray *frames;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, readonly) struct CGImageSource { }*imageSource;
@property (nonatomic, readonly) long long imageType;
@property (nonatomic, readonly) bool invalidFile;
@property (nonatomic, readonly) unsigned long long loopCount;
@property (nonatomic, readonly) unsigned long long numberOfFrames;
@property (nonatomic, readonly) long long preloadType;
@property (nonatomic, readonly) double scale;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long uncompressedByteSizePerFrame;

+ (id)animatedImageWithData:(id)arg1 scale:(double)arg2 size:(struct CGSize { double x1; double x2; })arg3;
+ (id)animatedImageWithData:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)animatedImageWithURL:(id)arg1 scale:(double)arg2 type:(long long)arg3;
+ (id)animatedImageWithURL:(id)arg1 type:(long long)arg2;

- (void).cxx_destruct;
- (void)animatedImageViewCache:(id)arg1 didCacheImageForFrameIndex:(unsigned long long)arg2;
- (id)cache;
- (void)capturePropertiesForType:(long long)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (double)duration;
- (id)frameAtIndex:(unsigned long long)arg1;
- (id)frameAtIndex:(unsigned long long)arg1 returnNearestPreloaded:(bool)arg2;
- (id)frames;
- (void)generateFrames;
- (struct CGSize { double x1; double x2; })imageSize;
- (struct CGImageSource { }*)imageSource;
- (long long)imageType;
- (id)initWithDataProvider:(struct CGDataProvider { }*)arg1 scale:(double)arg2 type:(long long)arg3 size:(struct CGSize { double x1; double x2; })arg4;
- (id)initWithImageSource:(struct CGImageSource { }*)arg1 scale:(double)arg2 type:(long long)arg3 size:(struct CGSize { double x1; double x2; })arg4;
- (bool)invalidFile;
- (unsigned long long)loopCount;
- (unsigned long long)numberOfFrames;
- (long long)preloadType;
- (double)scale;
- (void)setDelegate:(id)arg1;
- (void)setPreloadType:(long long)arg1 currentFrameIndex:(unsigned long long)arg2;
- (unsigned long long)uncompressedByteSizePerFrame;

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