<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SAWaitInfo.h</title>
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

/PrivateFrameworks/SampleAnalysis.framework/SAWaitInfo.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis (218.2)
 */

@interface SAWaitInfo : NSObject <SASerializable> {
    unsigned long long  _context;
    unsigned long long  _owner;
    int  _type;
}

@property (readonly) unsigned long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long owner;
@property (readonly) Class superclass;
@property (readonly) int type;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned short x3; unsigned long long x4; unsigned long long x5; }*)arg1 bufferLength:(unsigned long long)arg2;
+ (id)stateWithPAStyleSerializedWaitInfo:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1;
+ (id)waitInfoWithKCDataWaitInfo:(const struct stackshot_thread_waitinfo { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned char x4; }*)arg1;

- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned short x3; unsigned long long x4; unsigned long long x5; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg1;
- (long long)compare:(id)arg1;
- (unsigned long long)context;
- (id)description;
- (id)descriptionForPid:(int)arg1 tid:(unsigned long long)arg2 options:(unsigned long long)arg3 nameCallback:(id /* block */)arg4;
- (bool)displaysSameContentAs:(id)arg1 withDisplayOptions:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)initWithKCDataWaitInfo:(const struct stackshot_thread_waitinfo { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned char x4; }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesKCDataWaitInfo:(const struct stackshot_thread_waitinfo { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned char x4; }*)arg1;
- (unsigned long long)owner;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3 andDataBufferDictionary:(struct NSMutableDictionary { Class x1; }*)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (int)type;

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