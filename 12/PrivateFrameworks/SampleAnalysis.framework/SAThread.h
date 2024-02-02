<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SAThread.h</title>
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

/PrivateFrameworks/SampleAnalysis.framework/SAThread.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis (218.2)
 */

@interface SAThread : NSObject <SASerializable> {
    SATimestamp * _creationTimestamp;
    SATimestamp * _exitTimestamp;
    bool  _isGlobalForcedIdle;
    bool  _isMainThread;
    unsigned long long  _threadId;
    NSMutableArray * _threadStates;
}

@property (retain) SATimestamp *creationTimestamp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) SATimestamp *exitTimestamp;
@property (readonly) unsigned long long hash;
@property bool isGlobalForcedIdle;
@property bool isMainThread;
@property (readonly) bool isProcessorIdleThread;
@property (readonly) Class superclass;
@property (readonly) unsigned long long threadId;
@property (readonly) NSArray *threadStates;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; union { unsigned short x_7_1_1; struct { unsigned int x_2_2_1 : 1; unsigned int x_2_2_2 : 1; } x_7_1_2; } x7; }*)arg1 bufferLength:(unsigned long long)arg2;
+ (id)threadWithId:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; union { unsigned short x_7_1_1; struct { unsigned int x_2_2_1 : 1; unsigned int x_2_2_2 : 1; } x_7_1_2; } x7; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg1;
- (unsigned long long)addState:(id)arg1;
- (id)creationTimestamp;
- (id)debugDescription;
- (void)enumerateThreadStatesBetweenStartTime:(id)arg1 endTime:(id)arg2 reverseOrder:(bool)arg3 withSampleIndex:(bool)arg4 block:(id /* block */)arg5;
- (id)exitTimestamp;
- (id)firstThreadStateOnOrAfterTime:(id)arg1 withSampleIndex:(bool)arg2;
- (void)forwardFillMonotonicallyIncreasingData;
- (unsigned long long)indexOfFirstThreadStateOnOrAfterTime:(id)arg1 withSampleIndex:(bool)arg2;
- (unsigned long long)indexOfLastThreadStateOnOrBeforeTime:(id)arg1 withSampleIndex:(bool)arg2;
- (id)initWithId:(unsigned long long)arg1;
- (bool)isGlobalForcedIdle;
- (bool)isMainThread;
- (bool)isProcessorIdleThread;
- (id)lastThreadStateOnOrBeforeTime:(id)arg1 withSampleIndex:(bool)arg2;
- (void)populateReferencesUsingBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; union { unsigned short x_7_1_1; struct { unsigned int x_2_2_1 : 1; unsigned int x_2_2_2 : 1; } x_7_1_2; } x7; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3 andDataBufferDictionary:(struct NSMutableDictionary { Class x1; }*)arg4;
- (unsigned long long)sampleCountInTimestampRangeStart:(id)arg1 end:(id)arg2;
- (void)setCreationTimestamp:(id)arg1;
- (void)setExitTimestamp:(id)arg1;
- (void)setIsGlobalForcedIdle:(bool)arg1;
- (void)setIsMainThread:(bool)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (unsigned long long)threadId;
- (id)threadStates;

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