<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CXCallUpdate.h</title>
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

/Frameworks/CallKit.framework/CXCallUpdate.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CallKit.framework/CallKit (1)
 */

@interface CXCallUpdate : NSObject <CXCopying, NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSSet * _activeRemoteParticipantHandles;
    NSString * _audioCategory;
    long long  _audioInterruptionOperationMode;
    long long  _audioInterruptionProvider;
    NSString * _audioMode;
    bool  _blocked;
    NSDictionary * _context;
    NSString * _crossDeviceIdentifier;
    bool  _emergency;
    CXHandoffContext * _handoffContext;
    struct CXCallUpdateHasSet { 
        unsigned int remoteHandle : 1; 
        unsigned int localizedCallerName : 1; 
        unsigned int emergency : 1; 
        unsigned int usingBaseband : 1; 
        unsigned int blocked : 1; 
        unsigned int ttyType : 1; 
        unsigned int supportsTTYWithVoice : 1; 
        unsigned int mayRequireBreakBeforeMake : 1; 
        unsigned int hasVideo : 1; 
        unsigned int audioCategory : 1; 
        unsigned int audioMode : 1; 
        unsigned int audioInterruptionProvider : 1; 
        unsigned int audioInterruptionOperationMode : 1; 
        unsigned int requiresInCallSounds : 1; 
        unsigned int inCallSoundRegion : 1; 
        unsigned int supportsHolding : 1; 
        unsigned int supportsGrouping : 1; 
        unsigned int supportsUngrouping : 1; 
        unsigned int supportsDTMF : 1; 
        unsigned int supportsUnambiguousMultiPartyState : 1; 
        unsigned int supportsAddCall : 1; 
        unsigned int supportsSendingToVoicemail : 1; 
        unsigned int videoStreamToken : 1; 
        unsigned int crossDeviceIdentifier : 1; 
        unsigned int localSenderIdentityUUID : 1; 
        unsigned int remoteParticipantHandles : 1; 
        unsigned int activeRemoteParticipantHandles : 1; 
        unsigned int handoffContext : 1; 
        unsigned int context : 1; 
        unsigned int prefersExclusiveAccessToCellularNetwork : 1; 
        unsigned int remoteUplinkMuted : 1; 
        unsigned int shouldSuppressInCallUI : 1; 
        unsigned int mutuallyExclusiveCall : 1; 
    }  _hasSet;
    bool  _hasVideo;
    long long  _inCallSoundRegion;
    NSUUID * _localSenderIdentityUUID;
    NSString * _localizedCallerName;
    bool  _mayRequireBreakBeforeMake;
    bool  _mutuallyExclusiveCall;
    bool  _prefersExclusiveAccessToCellularNetwork;
    CXHandle * _remoteHandle;
    NSSet * _remoteParticipantHandles;
    bool  _remoteUplinkMuted;
    bool  _requiresInCallSounds;
    bool  _shouldSuppressInCallUI;
    bool  _supportsAddCall;
    bool  _supportsDTMF;
    bool  _supportsGrouping;
    bool  _supportsHolding;
    bool  _supportsSendingToVoicemail;
    bool  _supportsTTYWithVoice;
    bool  _supportsUnambiguousMultiPartyState;
    bool  _supportsUngrouping;
    long long  _ttyType;
    bool  _usingBaseband;
    long long  _videoStreamToken;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic, copy) NSSet *activeRemoteParticipantHandles;
@property (nonatomic, copy) NSString *audioCategory;
@property (nonatomic) long long audioInterruptionOperationMode;
@property (nonatomic) long long audioInterruptionProvider;
@property (nonatomic, copy) NSString *audioMode;
@property (getter=isBlocked, nonatomic) bool blocked;
@property (nonatomic, copy) NSDictionary *context;
@property (nonatomic, copy) NSString *crossDeviceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmergency, nonatomic) bool emergency;
@property (nonatomic, retain) CXHandoffContext *handoffContext;
@property (nonatomic) struct CXCallUpdateHasSet { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; } hasSet;
@property (nonatomic) bool hasVideo;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long inCallSoundRegion;
@property (nonatomic, copy) NSUUID *localSenderIdentityUUID;
@property (nonatomic, copy) NSString *localizedCallerName;
@property (nonatomic) bool mayRequireBreakBeforeMake;
@property (getter=isMutuallyExclusiveCall, nonatomic) bool mutuallyExclusiveCall;
@property (nonatomic) bool prefersExclusiveAccessToCellularNetwork;
@property (nonatomic, copy) CXHandle *remoteHandle;
@property (nonatomic, copy) NSSet *remoteParticipantHandles;
@property (getter=isRemoteUplinkMuted, nonatomic) bool remoteUplinkMuted;
@property (nonatomic) bool requiresInCallSounds;
@property (nonatomic) bool shouldSuppressInCallUI;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsAddCall;
@property (nonatomic) bool supportsDTMF;
@property (nonatomic) bool supportsGrouping;
@property (nonatomic) bool supportsHolding;
@property (nonatomic) bool supportsSendingToVoicemail;
@property (nonatomic) bool supportsTTYWithVoice;
@property (nonatomic) bool supportsUnambiguousMultiPartyState;
@property (nonatomic) bool supportsUngrouping;
@property (setter=setTTYType:, nonatomic) long long ttyType;
@property (getter=isUsingBaseband, nonatomic) bool usingBaseband;
@property (nonatomic) long long videoStreamToken;

+ (id)callUpdateWithDefaultValuesSet;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)activeRemoteParticipantHandles;
- (id)audioCategory;
- (long long)audioInterruptionOperationMode;
- (long long)audioInterruptionProvider;
- (id)audioMode;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crossDeviceIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handoffContext;
- (struct CXCallUpdateHasSet { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; })hasSet;
- (bool)hasVideo;
- (long long)inCallSoundRegion;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isBlocked;
- (bool)isEmergency;
- (bool)isMutuallyExclusiveCall;
- (bool)isRemoteUplinkMuted;
- (bool)isUsingBaseband;
- (id)localSenderIdentityUUID;
- (id)localizedCallerName;
- (bool)mayRequireBreakBeforeMake;
- (bool)prefersExclusiveAccessToCellularNetwork;
- (id)remoteHandle;
- (id)remoteParticipantHandles;
- (bool)requiresInCallSounds;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setActiveRemoteParticipantHandles:(id)arg1;
- (void)setAudioCategory:(id)arg1;
- (void)setAudioInterruptionOperationMode:(long long)arg1;
- (void)setAudioInterruptionProvider:(long long)arg1;
- (void)setAudioMode:(id)arg1;
- (void)setBlocked:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setCrossDeviceIdentifier:(id)arg1;
- (void)setEmergency:(bool)arg1;
- (void)setHandoffContext:(id)arg1;
- (void)setHasSet:(struct CXCallUpdateHasSet { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; })arg1;
- (void)setHasVideo:(bool)arg1;
- (void)setInCallSoundRegion:(long long)arg1;
- (void)setLocalSenderIdentityUUID:(id)arg1;
- (void)setLocalizedCallerName:(id)arg1;
- (void)setMayRequireBreakBeforeMake:(bool)arg1;
- (void)setMutuallyExclusiveCall:(bool)arg1;
- (void)setPrefersExclusiveAccessToCellularNetwork:(bool)arg1;
- (void)setRemoteHandle:(id)arg1;
- (void)setRemoteParticipantHandles:(id)arg1;
- (void)setRemoteUplinkMuted:(bool)arg1;
- (void)setRequiresInCallSounds:(bool)arg1;
- (void)setShouldSuppressInCallUI:(bool)arg1;
- (void)setSupportsAddCall:(bool)arg1;
- (void)setSupportsDTMF:(bool)arg1;
- (void)setSupportsGrouping:(bool)arg1;
- (void)setSupportsHolding:(bool)arg1;
- (void)setSupportsSendingToVoicemail:(bool)arg1;
- (void)setSupportsTTYWithVoice:(bool)arg1;
- (void)setSupportsUnambiguousMultiPartyState:(bool)arg1;
- (void)setSupportsUngrouping:(bool)arg1;
- (void)setTTYType:(long long)arg1;
- (void)setUUID:(id)arg1;
- (void)setUsingBaseband:(bool)arg1;
- (void)setVideoStreamToken:(long long)arg1;
- (bool)shouldSuppressInCallUI;
- (bool)supportsAddCall;
- (bool)supportsDTMF;
- (bool)supportsGrouping;
- (bool)supportsHolding;
- (bool)supportsSendingToVoicemail;
- (bool)supportsTTYWithVoice;
- (bool)supportsUnambiguousMultiPartyState;
- (bool)supportsUngrouping;
- (long long)ttyType;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (void)updateWithUpdate:(id)arg1;
- (long long)videoStreamToken;

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
