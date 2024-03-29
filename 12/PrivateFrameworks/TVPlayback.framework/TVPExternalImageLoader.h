<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TVPExternalImageLoader.h</title>
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

/PrivateFrameworks/TVPlayback.framework/TVPExternalImageLoader.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback (1)
 */

@interface TVPExternalImageLoader : NSObject <TVPPlaybackImageLoader> {
    TVPExternalImageConfig * _config;
    NSMutableSet * _imageProxies;
    NSMutableDictionary * _imageProxyMappings;
    NSMutableSet * _loadedImageActualTimes;
}

@property (nonatomic, retain) TVPExternalImageConfig *config;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double firstImageTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *imageProxies;
@property (nonatomic, retain) NSMutableDictionary *imageProxyMappings;
@property (nonatomic, readonly) double lastImageTime;
@property (nonatomic, retain) NSMutableSet *loadedImageActualTimes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_closestImageIndexForTime:(double)arg1 actualTime:(double*)arg2 imageInterval:(double)arg3;
- (id)_closestURLForImageTime:(double)arg1 actualTime:(double*)arg2;
- (void)cancelImageLoadingForIdentifiers:(id)arg1;
- (double)closestImageTimeForTime:(double)arg1;
- (double)closestImageTimeForTime:(double)arg1 imageInterval:(double)arg2;
- (id)config;
- (double)firstImageTime;
- (bool)imageIsLoadedForTime:(double)arg1;
- (id)imageProxies;
- (id)imageProxyMappings;
- (id)initWithConfig:(id)arg1;
- (void)invalidate;
- (double)lastImageTime;
- (id)loadImagesForTimes:(id)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2 withHandler:(id /* block */)arg3;
- (id)loadedImageActualTimes;
- (id)loadedImageForTime:(double)arg1;
- (void)setConfig:(id)arg1;
- (void)setImageProxies:(id)arg1;
- (void)setImageProxyMappings:(id)arg1;
- (void)setLoadedImageActualTimes:(id)arg1;

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
