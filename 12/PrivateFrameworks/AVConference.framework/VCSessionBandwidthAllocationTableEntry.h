<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VCSessionBandwidthAllocationTableEntry.h</title>
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

/PrivateFrameworks/AVConference.framework/VCSessionBandwidthAllocationTableEntry.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference (1475.1.8)
 */

@interface VCSessionBandwidthAllocationTableEntry : NSObject {
    unsigned int  _actualNetworkBitrate;
    <VCSessionDownlinkBandwidthAllocatorClient> * _client;
    bool  _enabled;
    bool  _hasRepairStreamID;
    bool  _isLowestQualityAudio;
    unsigned int  _maxNetworkBitrate;
    unsigned int  _qualityIndex;
    unsigned int  _repairMaxNetworkBitrate;
    unsigned int  _repairStreamID;
    unsigned int  _streamID;
    unsigned char  _type;
}

@property unsigned int actualNetworkBitrate;
@property (readonly) <VCSessionDownlinkBandwidthAllocatorClient> *client;
@property (getter=isEnabled) bool enabled;
@property (readonly) bool hasRepairStreamID;
@property bool isLowestQualityAudio;
@property (readonly) unsigned int maxNetworkBitrate;
@property (readonly) unsigned int qualityIndex;
@property (readonly) unsigned int repairMaxNetworkBitrate;
@property (readonly) unsigned int repairStreamID;
@property (readonly) unsigned int streamID;
@property (readonly) unsigned char type;

+ (long long)compareAudioEntry:(id)arg1 audioEntry:(id)arg2;
+ (long long)compareAudioEntry:(id)arg1 videoEntry:(id)arg2;
+ (long long)compareVideoEntry:(id)arg1 videoEntry:(id)arg2;

- (unsigned int)actualNetworkBitrate;
- (id)client;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (bool)hasRepairStreamID;
- (id)initWithClient:(id)arg1 type:(unsigned char)arg2 networkBitrate:(unsigned int)arg3 qualityIndex:(unsigned int)arg4 streamID:(unsigned int)arg5;
- (id)initWithClient:(id)arg1 type:(unsigned char)arg2 networkBitrate:(unsigned int)arg3 qualityIndex:(unsigned int)arg4 streamID:(unsigned int)arg5 hasRepairStreamID:(bool)arg6 repairStreamID:(unsigned int)arg7 repairMaxNetworkBitrate:(unsigned int)arg8 enabled:(bool)arg9;
- (bool)isEnabled;
- (bool)isLowestQualityAudio;
- (unsigned int)maxNetworkBitrate;
- (unsigned int)qualityIndex;
- (unsigned int)repairMaxNetworkBitrate;
- (unsigned int)repairStreamID;
- (void)setActualNetworkBitrate:(unsigned int)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIsLowestQualityAudio:(bool)arg1;
- (unsigned int)streamID;
- (unsigned char)type;

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