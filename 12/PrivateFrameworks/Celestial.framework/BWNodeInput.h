<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BWNodeInput.h</title>
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

/PrivateFrameworks/Celestial.framework/BWNodeInput.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial (2290.13.1.3)
 */

@interface BWNodeInput : NSObject {
    NSMutableDictionary * _attachedMediaConfigurations;
    NSMutableDictionary * _attachedMediaProperties;
    long long  _configurationID;
    BWNodeConnection * _connection;
    bool  _enabled;
    unsigned long long  _index;
    long long  _liveConfigurationID;
    unsigned int  _mediaType;
    bool  _mediaTypeIsVideo;
    NSString * _name;
    BWNode * _node;
    unsigned int  _numberOfBuffersDropped;
    unsigned int  _numberOfBuffersReceived;
    BWNodeInputMediaConfiguration * _primaryMediaConfiguration;
    BWNodeInputMediaProperties * _primaryMediaProperties;
    BWNodeInputMediaConfiguration * _unspecifiedAttachedMediaConfiguration;
}

@property (nonatomic) long long configurationID;
@property (nonatomic) BWNodeConnection *connection;
@property (nonatomic) int delayedBufferCount;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) BWFormat *format;
@property (nonatomic, retain) BWFormatRequirements *formatRequirements;
@property (nonatomic) int indefinitelyHeldBufferCount;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) long long liveConfigurationID;
@property (nonatomic, readonly) BWFormat *liveFormat;
@property (nonatomic, readonly) unsigned int mediaType;
@property (nonatomic, readonly) bool mediaTypeIsVideo;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) BWNode *node;
@property (nonatomic, readonly) unsigned int numberOfBuffersDropped;
@property (nonatomic, readonly) unsigned int numberOfBuffersReceived;
@property (nonatomic) bool passesBuffersDownstream;
@property (nonatomic) int passthroughMode;
@property (nonatomic, readonly) BWNodeInputMediaConfiguration *primaryMediaConfiguration;
@property (nonatomic, readonly) BWNodeInputMediaProperties *primaryMediaProperties;
@property (nonatomic, readonly) NSArray *resolvedAttachedMediaKeys;
@property (nonatomic) int retainedBufferCount;
@property (nonatomic, readonly) NSArray *specifiedAttachedMediaKeys;
@property (nonatomic, retain) BWNodeInputMediaConfiguration *unspecifiedAttachedMediaConfiguration;
@property (nonatomic, readonly) BWVideoFormat *videoFormat;

+ (void)initialize;

- (void)_clearAllMediaProperties;
- (void)_handleConfigurationLiveMessage:(id)arg1;
- (int)_passthroughModeForAttachedMediaKey:(id)arg1;
- (int)_passthroughModeForUnspecifiedAttachedMedia;
- (void)_setMediaProperties:(id)arg1 forAttachedMediaKey:(id)arg2;
- (void)_setPrimaryProperties:(id)arg1;
- (long long)configurationID;
- (id)connection;
- (void)dealloc;
- (int)delayedBufferCount;
- (id)description;
- (id)format;
- (id)formatRequirements;
- (void)handleMessage:(id)arg1;
- (int)indefinitelyHeldBufferCount;
- (unsigned long long)index;
- (id)initWithMediaType:(unsigned int)arg1 node:(id)arg2;
- (id)initWithMediaType:(unsigned int)arg1 node:(id)arg2 index:(unsigned long long)arg3;
- (void)invalidate;
- (bool)isEnabled;
- (long long)liveConfigurationID;
- (id)liveFormat;
- (id)mediaConfigurationForAttachedMediaKey:(id)arg1;
- (id)mediaPropertiesForAttachedMediaKey:(id)arg1;
- (unsigned int)mediaType;
- (bool)mediaTypeIsVideo;
- (id)name;
- (id)node;
- (unsigned int)numberOfBuffersDropped;
- (unsigned int)numberOfBuffersReceived;
- (bool)passesBuffersDownstream;
- (int)passthroughMode;
- (id)primaryMediaConfiguration;
- (id)primaryMediaProperties;
- (id)resolvedAttachedMediaKeys;
- (int)retainedBufferCount;
- (void)setConfigurationID:(long long)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelayedBufferCount:(int)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFormat:(id)arg1;
- (void)setFormatRequirements:(id)arg1;
- (void)setIndefinitelyHeldBufferCount:(int)arg1;
- (void)setMediaConfiguration:(id)arg1 forAttachedMediaKey:(id)arg2;
- (void)setName:(id)arg1;
- (void)setPassesBuffersDownstream:(bool)arg1;
- (void)setPassthroughMode:(int)arg1;
- (void)setRetainedBufferCount:(int)arg1;
- (void)setUnspecifiedAttachedMediaConfiguration:(id)arg1;
- (id)specifiedAttachedMediaKeys;
- (id)unspecifiedAttachedMediaConfiguration;
- (id)videoFormat;

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
