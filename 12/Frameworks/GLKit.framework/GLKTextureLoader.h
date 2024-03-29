<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GLKTextureLoader.h</title>
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

/Frameworks/GLKit.framework/GLKTextureLoader.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/GLKit.framework/GLKit (101)
 */

@interface GLKTextureLoader : NSObject {
    EAGLContext * _glContext;
    NSLock * _nsLock;
    bool  _supportsASTC_LDR;
    bool  _supportsETC2;
}

@property (retain) EAGLContext *glContext;
@property (retain) NSLock *nsLock;
@property bool supportsASTC_LDR;
@property bool supportsETC2;

+ (id)_textureWithTexture:(id)arg1 error:(id*)arg2;
+ (id)_textureWithTextureTXR:(id)arg1 error:(id*)arg2;
+ (id)commonCubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonCubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonTextureWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonTextureWithContentsOfData:(id)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonTextureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonTextureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 error:(id*)arg5 lock:(id)arg6 glContext:(id)arg7;
+ (id)cubeMapWithContentsOfFile:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)cubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)cubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)lockAndSwitchContext:(id)arg1 glContext:(id)arg2;
+ (id)textureWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)textureWithContentsOfData:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)textureWithContentsOfFile:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)textureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)textureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 error:(id*)arg5;
+ (void)unlockAndRestoreContext:(id)arg1 glContext:(id)arg2;

- (void)cubeMapWithContentsOfFile:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)cubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)cubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (id)glContext;
- (id)initWithSharegroup:(id)arg1;
- (id)nsLock;
- (void)setGlContext:(id)arg1;
- (void)setNsLock:(id)arg1;
- (void)setSupportsASTC_LDR:(bool)arg1;
- (void)setSupportsETC2:(bool)arg1;
- (bool)supportsASTC_LDR;
- (bool)supportsETC2;
- (void)textureWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)textureWithContentsOfData:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)textureWithContentsOfFile:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)textureWithContentsOfURL:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)textureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 queue:(id)arg5 completionHandler:(id /* block */)arg6;

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
