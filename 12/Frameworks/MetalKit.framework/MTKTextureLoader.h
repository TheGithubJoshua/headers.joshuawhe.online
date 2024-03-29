<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MTKTextureLoader.h</title>
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

/Frameworks/MetalKit.framework/MTKTextureLoader.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MetalKit.framework/MetalKit (113)
 */

@interface MTKTextureLoader : NSObject {
    <MTLCommandQueue> * _blitQueue;
    <TXRBufferAllocator> * _bufferAllocator;
    <MTLDevice> * _device;
    NSObject<OS_dispatch_queue> * _loadQueue;
    NSObject<OS_dispatch_semaphore> * _loadSemaphore;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    NSObject<OS_dispatch_queue> * _uploadQueue;
}

@property (nonatomic, readonly) <MTLDevice> *device;

- (unsigned long long)_determineFileType:(id)arg1;
- (void)_loadCGImage:(struct CGImage { }*)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_loadData:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_loadData:(id)arg1 options:(id)arg2 uploader:(id)arg3 label:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_loadMDLTexture:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_newAsyncTextureWithNames:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 bundle:(id)arg4 options:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)_newSyncTexturesFromTXRTextures:(id)arg1 labels:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (void)dealloc;
- (id)device;
- (id)initWithDevice:(id)arg1;
- (id)newTextureFromTXRTexture:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)newTextureWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newTextureWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2 error:(id*)arg3;
- (void)newTextureWithContentsOfURL:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newTextureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)newTextureWithData:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newTextureWithData:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)newTextureWithMDLTexture:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newTextureWithMDLTexture:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)newTextureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)newTextureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (void)newTextureWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 bundle:(id)arg4 options:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)newTextureWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 bundle:(id)arg4 options:(id)arg5 error:(id*)arg6;
- (id)newTexturesFromTXRTextures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)newTexturesWithContentsOfURLs:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newTexturesWithContentsOfURLs:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)newTexturesWithNames:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)newTexturesWithNames:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 bundle:(id)arg4 options:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)newUploaderForOptions:(id)arg1;
- (bool)validateGenerateMipmapsForPixelFormat:(unsigned long long)arg1 options:(id)arg2 error:(id*)arg3;

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
