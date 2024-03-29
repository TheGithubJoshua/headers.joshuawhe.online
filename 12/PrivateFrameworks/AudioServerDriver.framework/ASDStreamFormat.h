<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ASDStreamFormat.h</title>
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

/PrivateFrameworks/AudioServerDriver.framework/ASDStreamFormat.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver (440.1)
 */

@interface ASDStreamFormat : NSObject <NSCopying> {
    unsigned int  _bitsPerChannel;
    unsigned int  _bytesPerFrame;
    unsigned int  _bytesPerPacket;
    unsigned int  _channelsPerFrame;
    unsigned int  _formatFlags;
    unsigned int  _formatID;
    unsigned int  _framesPerPacket;
    double  _maximumSampleRate;
    double  _minimumSampleRate;
    double  _sampleRate;
}

@property (nonatomic) unsigned int bitsPerChannel;
@property (nonatomic) unsigned int bytesPerFrame;
@property (nonatomic) unsigned int bytesPerPacket;
@property (nonatomic) unsigned int channelsPerFrame;
@property (nonatomic) unsigned int formatFlags;
@property (nonatomic) unsigned int formatID;
@property (nonatomic) unsigned int framesPerPacket;
@property (nonatomic) double maximumSampleRate;
@property (nonatomic) double minimumSampleRate;
@property (nonatomic) double sampleRate;

- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })audioStreamBasicDescription;
- (struct AudioStreamRangedDescription { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; struct AudioValueRange { double x_2_1_1; double x_2_1_2; } x2; })audioStreamRangedDescription;
- (unsigned int)bitsPerChannel;
- (unsigned int)bytesPerFrame;
- (unsigned int)bytesPerPacket;
- (unsigned int)channelsPerFrame;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)formatFlags;
- (unsigned int)formatID;
- (unsigned int)framesPerPacket;
- (unsigned int)framesToBytes:(unsigned int)arg1;
- (unsigned long long)hash;
- (id)initWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (id)initWithAudioStreamRangedDescription:(struct AudioStreamRangedDescription { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; struct AudioValueRange { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (id)initWithSampleRate:(double)arg1 numChannels:(unsigned int)arg2 commonPCMFormat:(unsigned int)arg3 isInterleaved:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (double)maximumSampleRate;
- (double)minimumSampleRate;
- (double)sampleRate;
- (void)setBitsPerChannel:(unsigned int)arg1;
- (void)setBytesPerFrame:(unsigned int)arg1;
- (void)setBytesPerPacket:(unsigned int)arg1;
- (void)setChannelsPerFrame:(unsigned int)arg1;
- (void)setFormatFlags:(unsigned int)arg1;
- (void)setFormatID:(unsigned int)arg1;
- (void)setFramesPerPacket:(unsigned int)arg1;
- (void)setMaximumSampleRate:(double)arg1;
- (void)setMinimumSampleRate:(double)arg1;
- (void)setSampleRate:(double)arg1;

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
