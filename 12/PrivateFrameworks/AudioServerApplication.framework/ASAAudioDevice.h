<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ASAAudioDevice.h</title>
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

/PrivateFrameworks/AudioServerApplication.framework/ASAAudioDevice.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication (440.1)
 */

@interface ASAAudioDevice : ASAObject

@property (nonatomic, readonly) double actualSampleRate;
@property (getter=isAggregate, nonatomic, readonly) bool aggregate;
@property (nonatomic, readonly, copy) NSDictionary *aggregateDescription;
@property (getter=isAlive, nonatomic, readonly) bool alive;
@property (nonatomic, readonly) bool canBeDefaultDevice;
@property (nonatomic, readonly) bool canBeDefaultSystemDevice;
@property (nonatomic, copy) NSDictionary *clientDescription;
@property (nonatomic, copy) NSString *clockDeviceUID;
@property (nonatomic, readonly) unsigned int clockDomain;
@property (nonatomic, readonly, copy) NSArray *controlObjectIDs;
@property (nonatomic, readonly, copy) NSArray *controls;
@property (nonatomic, readonly, copy) NSDictionary *deviceDescription;
@property (nonatomic, readonly, copy) NSString *deviceUID;
@property (nonatomic, readonly) bool hasInput;
@property (nonatomic, readonly) bool hasOutput;
@property (nonatomic, readonly, copy) NSDictionary *headsetInfo;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic, readonly, copy) NSURL *iconURL;
@property (nonatomic, readonly) unsigned int inputLatency;
@property (nonatomic, readonly) unsigned int inputSafetyOffset;
@property (nonatomic, readonly, copy) NSArray *inputStreamObjectIDs;
@property (nonatomic, readonly, copy) NSArray *inputStreams;
@property (nonatomic) unsigned int ioBufferFrameSize;
@property (nonatomic) float ioCycleUsage;
@property (nonatomic, readonly, copy) NSString *manufacturer;
@property (nonatomic, readonly) unsigned int maximumIOBufferFrameSize;
@property (nonatomic, readonly) unsigned int minimumIOBufferFrameSize;
@property (nonatomic, readonly, copy) NSString *modelUID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) double nominalSampleRate;
@property (nonatomic, readonly, copy) NSArray *nominalSampleRates;
@property (nonatomic, readonly) unsigned int outputLatency;
@property (nonatomic, readonly) unsigned int outputSafetyOffset;
@property (nonatomic, readonly, copy) NSArray *outputStreamObjectIDs;
@property (nonatomic, readonly, copy) NSArray *outputStreams;
@property (nonatomic, readonly, copy) NSArray *relatedDeviceObjectIDs;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (nonatomic, readonly) unsigned int transportType;
@property (nonatomic, readonly) unsigned int zeroTimestampPeriod;

- (double)actualSampleRate;
- (id)aggregateDescription;
- (bool)canBeDefaultDevice;
- (bool)canBeDefaultSystemDevice;
- (id)clientDescription;
- (id)clockDeviceUID;
- (unsigned int)clockDomain;
- (id)controlObjectIDs;
- (id)controls;
- (id)coreAudioClassName;
- (bool)createAudioProcID:(int (**)arg1 forIOProc:(int (*)arg2 withClientData:(void*)arg3 error:(id*)arg4;
- (bool)defaultDevice;
- (bool)defaultSystemDevice;
- (bool)destroyAudioProcID:(int (*)arg1 error:(id*)arg2;
- (id)deviceDescription;
- (id)deviceUID;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(bool)arg2;
- (bool)hasInput;
- (bool)hasOutput;
- (id)headsetInfo;
- (id)iconURL;
- (unsigned int)inputLatency;
- (unsigned int)inputSafetyOffset;
- (id)inputStreamObjectIDs;
- (id)inputStreamUsageForAudioProc:(int (*)arg1;
- (id)inputStreams;
- (unsigned int)ioBufferFrameSize;
- (float)ioCycleUsage;
- (bool)isAggregate;
- (bool)isAlive;
- (bool)isHidden;
- (bool)isRunning;
- (id)manufacturer;
- (unsigned int)maximumIOBufferFrameSize;
- (unsigned int)minimumIOBufferFrameSize;
- (id)modelUID;
- (id)name;
- (double)nominalSampleRate;
- (id)nominalSampleRates;
- (unsigned int)outputLatency;
- (unsigned int)outputSafetyOffset;
- (id)outputStreamObjectIDs;
- (id)outputStreamUsageForAudioProc:(int (*)arg1;
- (id)outputStreams;
- (id)relatedDeviceObjectIDs;
- (void)setClientDescription:(id)arg1;
- (void)setClockDeviceUID:(id)arg1;
- (bool)setInputStreamUsage:(id)arg1 forAudioProc:(int (*)arg2;
- (void)setIoBufferFrameSize:(unsigned int)arg1;
- (void)setIoCycleUsage:(float)arg1;
- (void)setName:(id)arg1;
- (void)setNominalSampleRate:(double)arg1;
- (bool)setOutputStreamUsage:(id)arg1 forAudioProc:(int (*)arg2;
- (bool)startAudioProc:(int (*)arg1 error:(id*)arg2;
- (bool)stopAudioProc:(int (*)arg1 error:(id*)arg2;
- (unsigned int)transportType;
- (unsigned int)zeroTimestampPeriod;

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