<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_NUImageProperties.h</title>
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

/PrivateFrameworks/NeutrinoCore.framework/_NUImageProperties.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore (3462.2.130)
 */

@interface _NUImageProperties : NSObject <NUImageProperties> {
    long long  _alphaInfo;
    struct CGColorSpace { } * _colorSpace;
    long long  _componentInfo;
    <NUDepthProperties> * _depthProperties;
    NSString * _fileUTI;
    NSDictionary * _metadata;
    long long  _orientation;
    <NUPortraitEffectsMatteProperties> * _portraitEffectsMatteProperties;
    <NURAWImageProperties> * _rawProperties;
    struct { 
        long long width; 
        long long height; 
    }  _size;
}

@property long long alphaInfo;
@property struct CGColorSpace { }*colorSpace;
@property long long componentInfo;
@property (readonly, copy) NSString *debugDescription;
@property (retain) <NUDepthProperties> *depthProperties;
@property (readonly, copy) NSString *description;
@property (retain) NSString *fileUTI;
@property (readonly) unsigned long long hash;
@property (retain) NSDictionary *metadata;
@property long long orientation;
@property (retain) <NUPortraitEffectsMatteProperties> *portraitEffectsMatteProperties;
@property (retain) <NURAWImageProperties> *rawProperties;
@property struct { long long x1; long long x2; } size;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)alphaInfo;
- (struct CGColorSpace { }*)colorSpace;
- (long long)componentInfo;
- (id)depthProperties;
- (id)description;
- (id)fileUTI;
- (id)metadata;
- (long long)orientation;
- (id)portraitEffectsMatteProperties;
- (id)rawProperties;
- (void)setAlphaInfo:(long long)arg1;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setComponentInfo:(long long)arg1;
- (void)setDepthProperties:(id)arg1;
- (void)setFileUTI:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setPortraitEffectsMatteProperties:(id)arg1;
- (void)setRawProperties:(id)arg1;
- (void)setSize:(struct { long long x1; long long x2; })arg1;
- (struct { long long x1; long long x2; })size;

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
