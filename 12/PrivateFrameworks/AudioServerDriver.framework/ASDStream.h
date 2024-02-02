<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ASDStream.h</title>
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

/PrivateFrameworks/AudioServerDriver.framework/ASDStream.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver (440.1)
 */

@interface ASDStream : ASDObject {
    NSObject<OS_dispatch_queue> * _controlQueue;
    NSMutableArray * _controls;
    id /* block */  _convertInputBlock;
    id /* block */  _convertInputBlockUnretained;
    id /* block */  _convertMixBlock;
    id /* block */  _convertMixBlockUnretained;
    unsigned int  _direction;
    bool  _isActive;
    bool  _isTapStream;
    unsigned int  _latency;
    id /* block */  _mixOutputBlock;
    id /* block */  _mixOutputBlockUnretained;
    ASDStreamFormat * _physicalFormat;
    NSObject<OS_dispatch_queue> * _physicalFormatQueue;
    bool  _physicalFormatSettable;
    NSArray * _physicalFormats;
    id /* block */  _processInputBlock;
    id /* block */  _processInputBlockUnretained;
    id /* block */  _processMixBlock;
    id /* block */  _processMixBlockUnretained;
    id /* block */  _processOutputBlock;
    id /* block */  _processOutputBlockUnretained;
    id /* block */  _readInputBlock;
    id /* block */  _readInputBlockUnretained;
    unsigned int  _startingChannel;
    NSString * _streamName;
    unsigned int  _terminalType;
    id /* block */  _writeMixBlock;
    id /* block */  _writeMixBlockUnretained;
}

@property (nonatomic, copy) id /* block */ convertInputBlock;
@property (nonatomic, readonly) id /* block */*convertInputBlockUnretainedPtr;
@property (nonatomic, copy) id /* block */ convertMixBlock;
@property (nonatomic, readonly) id /* block */*convertMixBlockUnretainedPtr;
@property (nonatomic) unsigned int direction;
@property (nonatomic) bool isActive;
@property (nonatomic) bool isTapStream;
@property (nonatomic) unsigned int latency;
@property (nonatomic, copy) id /* block */ mixOutputBlock;
@property (nonatomic, readonly) id /* block */*mixOutputBlockUnretainedPtr;
@property (nonatomic, copy) ASDStreamFormat *physicalFormat;
@property (getter=isPhysicalFormatSettable, nonatomic) bool physicalFormatSettable;
@property (nonatomic, copy) NSArray *physicalFormats;
@property (nonatomic, copy) id /* block */ processInputBlock;
@property (nonatomic, readonly) id /* block */*processInputBlockUnretainedPtr;
@property (nonatomic, copy) id /* block */ processMixBlock;
@property (nonatomic, readonly) id /* block */*processMixBlockUnretainedPtr;
@property (nonatomic, copy) id /* block */ processOutputBlock;
@property (nonatomic, readonly) id /* block */*processOutputBlockUnretainedPtr;
@property (nonatomic, copy) id /* block */ readInputBlock;
@property (nonatomic, readonly) id /* block */*readInputBlockUnretainedPtr;
@property (nonatomic) unsigned int startingChannel;
@property (nonatomic, copy) NSString *streamName;
@property (nonatomic) unsigned int terminalType;
@property (nonatomic, copy) id /* block */ writeMixBlock;
@property (nonatomic, readonly) id /* block */*writeMixBlockUnretainedPtr;

- (void).cxx_destruct;
- (void)addControl:(id)arg1;
- (void)addPhysicalFormat:(id)arg1;
- (bool)changePhysicalFormat:(id)arg1;
- (id)channelCategoryForChannelIndex:(unsigned int)arg1;
- (id)channelNameForChannelIndex:(unsigned int)arg1;
- (id)channelNumberForChannelIndex:(unsigned int)arg1;
- (id)controls;
- (id /* block */)convertInputBlock;
- (id /* block */*)convertInputBlockUnretainedPtr;
- (id /* block */)convertMixBlock;
- (id /* block */*)convertMixBlockUnretainedPtr;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void*)arg3;
- (bool)deviceChangedToSamplingRate:(double)arg1;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(bool)arg2;
- (unsigned int)direction;
- (id)driverClassName;
- (bool)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int*)arg4 andData:(void*)arg5 forClient:(int)arg6;
- (bool)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)initWithDirection:(unsigned int)arg1 withPlugin:(id)arg2;
- (id)initWithPlugin:(id)arg1;
- (bool)isActive;
- (bool)isPhysicalFormatSettable;
- (bool)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (bool)isTapStream;
- (unsigned int)latency;
- (id /* block */)mixOutputBlock;
- (id /* block */*)mixOutputBlockUnretainedPtr;
- (id)physicalFormat;
- (id)physicalFormats;
- (id /* block */)processInputBlock;
- (id /* block */*)processInputBlockUnretainedPtr;
- (id /* block */)processMixBlock;
- (id /* block */*)processMixBlockUnretainedPtr;
- (id /* block */)processOutputBlock;
- (id /* block */*)processOutputBlockUnretainedPtr;
- (id /* block */)readInputBlock;
- (id /* block */*)readInputBlockUnretainedPtr;
- (void)removeControl:(id)arg1;
- (void)removePhysicalFormat:(id)arg1;
- (unsigned int)scope;
- (void)setConvertInputBlock:(id /* block */)arg1;
- (void)setConvertMixBlock:(id /* block */)arg1;
- (void)setDirection:(unsigned int)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setIsTapStream:(bool)arg1;
- (void)setLatency:(unsigned int)arg1;
- (void)setMixOutputBlock:(id /* block */)arg1;
- (void)setPhysicalFormat:(id)arg1;
- (void)setPhysicalFormatSettable:(bool)arg1;
- (void)setPhysicalFormats:(id)arg1;
- (void)setProcessInputBlock:(id /* block */)arg1;
- (void)setProcessMixBlock:(id /* block */)arg1;
- (void)setProcessOutputBlock:(id /* block */)arg1;
- (bool)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int)arg4 andData:(const void*)arg5 forClient:(int)arg6;
- (void)setReadInputBlock:(id /* block */)arg1;
- (void)setStartingChannel:(unsigned int)arg1;
- (void)setStreamName:(id)arg1;
- (void)setTerminalType:(unsigned int)arg1;
- (void)setWriteMixBlock:(id /* block */)arg1;
- (void)startStream;
- (unsigned int)startingChannel;
- (void)stopStream;
- (id)streamName;
- (unsigned int)terminalType;
- (id /* block */)writeMixBlock;
- (id /* block */*)writeMixBlockUnretainedPtr;

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