<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ACTGLBase.h</title>
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

/PrivateFrameworks/ACTFramework.framework/ACTGLBase.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ACTFramework.framework/ACTFramework (251.25.2)
 */

@interface ACTGLBase : NSObject <ESRenderer> {
    unsigned int  mFramebuffer;
    EAGLContext * mGLBackupContext;
    EAGLContext * mGLContext;
    unsigned int  mTextureArray;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)backupContext;
- (int)checkCompileStatusForShader:(unsigned int)arg1;
- (int)checkLinkStatusForProgram:(unsigned int)arg1;
- (int)checkProgramValidity:(unsigned int)arg1;
- (id)context;
- (int)create:(unsigned char)arg1 destinationBuffers:(struct __CVBuffer {}**)arg2 ofWidth:(int)arg3 andHeight:(int)arg4;
- (unsigned int)createProgramWithVertexShader:(const char *)arg1 fragmentShader:(const char *)arg2;
- (void)dealloc;
- (void)deleteBuffers;
- (id)init;
- (bool)initializeOffScreenBuffers;
- (int)loadBuffer:(struct __IOSurface { }*)arg1 inTextureUnit:(unsigned int)arg2 uniformName:(const char *)arg3 planeIndex:(unsigned int)arg4 usingProgram:(unsigned int)arg5;
- (void)releaseTextures;
- (int)renderBuffer:(struct __IOSurface { }*)arg1 intoBuffer:(struct __IOSurface { }*)arg2 planeIndex:(unsigned int)arg3 usingProgram:(unsigned int)arg4 interpolate:(unsigned int)arg5 viewportOrigX:(int)arg6 viewportOrigY:(int)arg7 viewportWidth:(int)arg8 viewportHeight:(int)arg9 numIters:(unsigned int)arg10;
- (int)renderInto16bitYBuffer:(unsigned short*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 usingProgram:(unsigned int)arg4;
- (int)renderIntoBuffer:(struct __IOSurface { }*)arg1 planeIndex:(unsigned int)arg2 usingProgram:(unsigned int)arg3 viewportOrigX:(int)arg4 viewportOrigY:(int)arg5 viewportWidth:(int)arg6 viewportHeight:(int)arg7;
- (void)restoreContext;
- (void)setCurrentContext;

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