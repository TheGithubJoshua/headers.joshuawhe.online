<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MTLRenderPassDescriptor.h</title>
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

/Frameworks/Metal.framework/MTLRenderPassDescriptor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Metal.framework/Metal (161.6.2)
 */

@interface MTLRenderPassDescriptor : NSObject <NSCopying> {
    unsigned long long  _defaultRasterSampleCount;
    unsigned long long  _imageblockSampleLength;
    unsigned long long  _threadgroupMemoryLength;
    unsigned long long  _tileHeight;
    unsigned long long  _tileWidth;
}

@property (readonly) MTLRenderPassColorAttachmentDescriptorArray *colorAttachments;
@property (nonatomic) unsigned long long defaultRasterSampleCount;
@property (nonatomic, copy) MTLRenderPassDepthAttachmentDescriptor *depthAttachment;
@property (nonatomic) unsigned long long imageblockSampleLength;
@property (nonatomic) unsigned long long renderTargetArrayLength;
@property (nonatomic) unsigned long long renderTargetHeight;
@property (nonatomic) unsigned long long renderTargetWidth;
@property (nonatomic, copy) MTLRenderPassStencilAttachmentDescriptor *stencilAttachment;
@property (nonatomic) unsigned long long threadgroupMemoryLength;
@property (nonatomic) unsigned long long tileHeight;
@property (nonatomic) unsigned long long tileWidth;
@property (nonatomic, retain) <MTLBuffer> *visibilityResultBuffer;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)renderPassDescriptor;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)defaultRasterSampleCount;
- (unsigned long long)getSamplePositions:(struct { float x1; float x2; }*)arg1 count:(unsigned long long)arg2;
- (unsigned long long)imageblockSampleLength;
- (void)setDefaultRasterSampleCount:(unsigned long long)arg1;
- (void)setImageblockSampleLength:(unsigned long long)arg1;
- (void)setSamplePositions:(const struct { float x1; float x2; }*)arg1 count:(unsigned long long)arg2;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1;
- (void)setTileHeight:(unsigned long long)arg1;
- (void)setTileWidth:(unsigned long long)arg1;
- (unsigned long long)threadgroupMemoryLength;
- (unsigned long long)tileHeight;
- (unsigned long long)tileWidth;

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
