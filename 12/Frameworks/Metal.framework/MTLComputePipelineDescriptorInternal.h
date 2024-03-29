<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MTLComputePipelineDescriptorInternal.h</title>
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

/Frameworks/Metal.framework/MTLComputePipelineDescriptorInternal.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Metal.framework/Metal (161.6.2)
 */

@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor {
    struct MTLComputePipelineDescriptorPrivate { 
        NSString *label; 
        <MTLFunction> *computeFunction; 
        bool threadGroupSizeIsMultipleOfThreadExecutionWidth; 
        unsigned short maxTotalThreadsPerThreadgroup; 
        MTLStageInputOutputDescriptor *stageInputDescriptor; 
        NSDictionary *driverCompilerOptions; 
        MTLPipelineBufferDescriptorArrayInternal *buffers; 
        <MTLPipelineLibrary> *pipelineLibrary; 
        bool forceResourceIndex; 
        unsigned int resourceIndex; 
    }  _private;
}

- (const struct MTLComputePipelineDescriptorPrivate { id x1; id x2; bool x3; unsigned short x4; id x5; id x6; id x7; id x8; bool x9; unsigned int x10; }*)_descriptorPrivate;
- (id)buffers;
- (id)computeFunction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)driverCompilerOptions;
- (bool)forceResourceIndex;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)label;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (id)newSerializedComputeData;
- (id)pipelineLibrary;
- (void)reset;
- (unsigned long long)resourceIndex;
- (void)setComputeFunction:(id)arg1;
- (void)setDriverCompilerOptions:(id)arg1;
- (void)setForceResourceIndex:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1;
- (void)setPipelineLibrary:(id)arg1;
- (void)setResourceIndex:(unsigned long long)arg1;
- (void)setStageInputDescriptor:(id)arg1;
- (void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(bool)arg1;
- (id)stageInputDescriptor;
- (bool)threadGroupSizeIsMultipleOfThreadExecutionWidth;
- (void)validateWithDevice:(id)arg1;

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
