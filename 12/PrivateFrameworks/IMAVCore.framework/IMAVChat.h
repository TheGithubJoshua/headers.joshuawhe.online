<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>IMAVChat.h</title>
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

/PrivateFrameworks/IMAVCore.framework/IMAVChat.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore (1000)
 */

@interface IMAVChat : NSObject <IMSystemMonitorListener> {
    NSString * _GUID;
    bool  _airplaneModeEnabled;
    NSNumber * _backCameraCaptureTime;
    NSString * _callStatisticsGUID;
    NSDictionary * _callerProperties;
    id  _conferenceController;
    NSString * _conferenceID;
    NSObject<OS_dispatch_queue> * _conferenceQueue;
    NSMutableDictionary * _conferenceStateCache;
    bool  _connectionStarted;
    double  _connectionTimeoutTime;
    NSTimer * _connectionTimeoutTimer;
    int  _connectionType;
    NSNumber * _dataDownloaded;
    NSNumber * _dataRate;
    NSNumber * _dataUploaded;
    NSDate * _dateConnected;
    NSDate * _dateCreated;
    NSDate * _dateEnded;
    NSDate * _dateReceivedRelayInitiate;
    NSDate * _dateReceivedRelayUpdate;
    NSDate * _dateStartedConnecting;
    bool  _didRemoteMute;
    bool  _didRemotePause;
    NSError * _error;
    NSMutableDictionary * _extraServerContext;
    NSTimer * _firstFrameTimeoutTimer;
    NSNumber * _frontCameraCaptureTime;
    bool  _hasGatheredInfo;
    bool  _hasPendingAccept;
    bool  _hasPendingInit;
    bool  _hasReceivedFirstFrame;
    IMHandle * _initiator;
    NSDate * _interruptionBegan;
    double  _invitationTimeoutTime;
    NSTimer * _inviteTimeoutTimer;
    NSDate * _inviteTimeoutTimerStart;
    bool  _isAudioInterrupted;
    bool  _isCaller;
    bool  _isVideo;
    bool  _isVideoInterrupted;
    struct CGSize { 
        double width; 
        double height; 
    }  _landscapeAspectRatios;
    unsigned int  _lastPostedState;
    unsigned long long  _localNetworkConnectionType;
    IMAVChatParticipant * _localParticipant;
    unsigned int  _localState;
    bool  _mayRequireBreakBeforeMake;
    bool  _metadataFinalized;
    NSNumber * _natType;
    bool  _needsAudioRestart;
    bool  _needsVideoRestart;
    long long  _networkCheckResult;
    NSMutableArray * _participants;
    IMPair * _pendingPreemptiveRelayInitate;
    long long  _pingTestResult;
    NSDictionary * _pingTestResults;
    struct CGSize { 
        double width; 
        double height; 
    }  _portraitAspectRatios;
    NSData * _relayRemotePrimaryIdentifier;
    bool  _relayed;
    unsigned long long  _remoteNetworkConnectionType;
    unsigned int  _sessionID;
    bool  _terminating;
    IMTimingCollection * _timingCollection;
}

@property (setter=_setGUID:, nonatomic, retain) NSString *GUID;
@property (nonatomic, readonly) bool _allParticipantsUsingICE;
@property (setter=_setBackCameraCaptureTime:, nonatomic, retain) NSNumber *_backCameraCaptureTime;
@property (nonatomic, readonly) long long _bustedCallID;
@property (nonatomic, readonly) NSNumber *_callDuration;
@property (setter=_setCallStatisticsGUID:, nonatomic, retain) NSString *_callStatisticsGUID;
@property (setter=_setConferenceController:, nonatomic) id _conferenceController;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_conferenceQueue;
@property (nonatomic, readonly) NSNumber *_connectDuration;
@property (setter=_setConnectionStarted:, nonatomic) bool _connectionStarted;
@property (setter=_setConnectionType:, nonatomic) int _connectionType;
@property (nonatomic, readonly) NSNumber *_currentNatType;
@property (readonly, retain) NSDictionary *_extraServerContext;
@property (setter=_setFrontCameraCaptureTime:, nonatomic, retain) NSNumber *_frontCameraCaptureTime;
@property (nonatomic, readonly, retain) NSArray *_imHandles;
@property (setter=_setInterruptionBegan:, nonatomic, retain) NSDate *_interruptionBegan;
@property (setter=_setIsAudioInterrupted:, nonatomic) bool _isAudioInterrupted;
@property (nonatomic, readonly) bool _isProxy;
@property (setter=_setIsVideoInterrupted:, nonatomic) bool _isVideoInterrupted;
@property (setter=_setLocalNetworkConnectionType:, nonatomic) unsigned long long _localNetworkConnectionType;
@property (setter=_setNatType:, nonatomic, retain) NSNumber *_natType;
@property (setter=_setNeedsAudioRestart:, nonatomic) bool _needsAudioRestart;
@property (setter=_setNeedsVideoRestart:, nonatomic) bool _needsVideoRestart;
@property (setter=_setNetworkCheckResult:, nonatomic) long long _networkCheckResult;
@property (setter=_setPingTestResult:, nonatomic) long long _pingTestResult;
@property (setter=_setPingTestResults:, nonatomic, retain) NSDictionary *_pingTestResults;
@property (nonatomic, readonly) NSNumber *_relayConnectDuration;
@property (setter=_setRelayRemotePrimaryIdentifier:, nonatomic, retain) NSData *_relayRemotePrimaryIdentifier;
@property (nonatomic, readonly) NSNumber *_remoteNatType;
@property (setter=_setRemoteNetworkConnectionType:, nonatomic) unsigned long long _remoteNetworkConnectionType;
@property (nonatomic, readonly) bool _usesRelay;
@property (nonatomic, readonly, retain) IMAccount *account;
@property (setter=_setAirplaneModeEnabled:, nonatomic) bool airplaneModeEnabled;
@property (setter=_setCallerProperties:, nonatomic, retain) NSDictionary *callerProperties;
@property (nonatomic) unsigned int cameraOrientation;
@property (nonatomic) unsigned int cameraType;
@property (setter=_setConferenceID:, nonatomic, retain) NSString *conferenceID;
@property (nonatomic) double connectionTimeoutTime;
@property (setter=_setConnectionTimeoutTimer:, nonatomic, retain) NSTimer *connectionTimeoutTimer;
@property (setter=setDataDownloaded:, nonatomic, retain) NSNumber *dataDownloaded;
@property (setter=setDataRate:, nonatomic, retain) NSNumber *dataRate;
@property (setter=setDataUploaded:, nonatomic, retain) NSNumber *dataUploaded;
@property (nonatomic, readonly, retain) NSDate *dateConnected;
@property (nonatomic, readonly, retain) NSDate *dateCreated;
@property (nonatomic, readonly, retain) NSDate *dateEnded;
@property (nonatomic, readonly) bool didRemoteMute;
@property (setter=_setDidRemoteMute:, nonatomic) bool didRemoteMute;
@property (nonatomic, readonly) bool didRemotePause;
@property (setter=_setDidRemotePause:, nonatomic) bool didRemotePause;
@property (nonatomic, readonly) int endedError;
@property (nonatomic, readonly) unsigned int endedReason;
@property (setter=_setFirstFrameTimeoutTimer:, nonatomic, retain) NSTimer *firstFrameTimeoutTimer;
@property (nonatomic, readonly) bool hasReceivedFirstFrame;
@property (nonatomic, readonly, retain) IMHandle *initiatorIMHandle;
@property (nonatomic, readonly, retain) IMAVChatParticipant *initiatorParticipant;
@property (nonatomic) double invitationTimeoutTime;
@property (setter=_setInviteTimeoutTimer:, nonatomic, retain) NSTimer *inviteTimeoutTimer;
@property (setter=_setInviteTimeoutTimerStart:, nonatomic, retain) NSDate *inviteTimeoutTimerStart;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) bool isCaller;
@property (setter=setMute:, nonatomic) bool isMute;
@property (setter=setPaused:, nonatomic) bool isPaused;
@property (setter=setRemoteMute:, nonatomic) bool isRemoteMute;
@property (nonatomic) bool isSendingAudio;
@property (nonatomic) bool isSendingVideo;
@property (nonatomic, readonly) bool isStateFinal;
@property (nonatomic, readonly) bool isUsingWifi;
@property (nonatomic, readonly) bool isVideo;
@property (setter=_setLandscapeAspectRatios:, nonatomic) struct CGSize { double x1; double x2; } landscapeAspectRatios;
@property (nonatomic, readonly, retain) IMAVChatParticipant *localParticipant;
@property (nonatomic) void*localVideoBackLayer;
@property (nonatomic) void*localVideoLayer;
@property (nonatomic) bool mayRequireBreakBeforeMake;
@property (setter=_setMetadataFinalized:, nonatomic) bool metadataFinalized;
@property (nonatomic, readonly, retain) IMHandle *otherIMHandle;
@property (nonatomic, readonly, retain) NSArray *participants;
@property (setter=_setPortraitAspectRatios:, nonatomic) struct CGSize { double x1; double x2; } portraitAspectRatios;
@property (getter=isRelayed, nonatomic) bool relayed;
@property (nonatomic, readonly, retain) NSArray *remoteParticipants;
@property (nonatomic, readonly) unsigned int sessionID;
@property (nonatomic, readonly) unsigned int state;
@property (getter=isTerminating, setter=_setTerminating:, nonatomic) bool terminating;

+ (id)_acceptedChats;
+ (id)_activeChat;
+ (id)_avChatArray;
+ (id)_avChatConnectingFromIMHandle:(id)arg1;
+ (id)_avChatInvitedByIMHandle:(id)arg1 orConferenceID:(id)arg2;
+ (id)_avChatWaitingForReplyFromIMHandle:(id)arg1 orConferenceID:(id)arg2;
+ (id)_avChatWithConferenceID:(id)arg1;
+ (id)_avChatWithGUID:(id)arg1;
+ (id)_avChatWithMatchingIMHandles:(id)arg1 video:(bool)arg2;
+ (id)_bestGuessAVChatWithIMHandle:(id)arg1 conferenceID:(id)arg2 sessionID:(unsigned int)arg3 properties:(id)arg4;
+ (id)_chatList;
+ (id)_chatListLock;
+ (id)_chatWithSessionID:(unsigned int)arg1;
+ (id)_chatsWithIMAVChatState:(unsigned int)arg1;
+ (id)_connectedChat;
+ (id)_connectedChats;
+ (id)_connectingChats;
+ (id)_imHandleFromProxyRepresentation:(id)arg1;
+ (id)_incomingInvitations;
+ (id)_nonFinalChat;
+ (id)_outgoingInvitations;
+ (id)_proxyRepresentationForIMHandle:(id)arg1;
+ (id)acceptedChats;
+ (id)activeChat;
+ (id)avChatWithGUID:(id)arg1;
+ (id)chatList;
+ (id)chatsWithIMAVChatState:(unsigned int)arg1;
+ (id)connectedChat;
+ (id)connectedChats;
+ (id)connectingChats;
+ (double)defaultConnectionTimeoutTime;
+ (double)defaultInvitationTimeoutTime;
+ (id)incomingInvitations;
+ (id)nonFinalChat;
+ (id)outgoingInvitations;
+ (void)setDefaultConnectionTimeoutTime:(double)arg1;
+ (void)setDefaultInvitationTimeoutTime:(double)arg1;
+ (int)systemSupportsNewOutgoingConferenceTo:(id)arg1 isVideo:(bool)arg2;

- (id)GUID;
- (void)__responseToVCInvite:(id)arg1;
- (void)__sendEndCallMetricToAWDWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)__sendEndCallMetricToViceroyWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)_airplaneModeChanged:(id)arg1;
- (bool)_allParticipantsUsingICE;
- (void)_applicationWillTerminate:(id)arg1;
- (id)_backCameraCaptureTime;
- (long long)_bustedCallID;
- (void)_cacheBool:(bool)arg1 forKey:(id)arg2;
- (bool)_cachedBoolForKey:(id)arg1;
- (id)_callDuration;
- (id)_callStatisticsGUID;
- (void)_cancelInvitationWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)_clearCache;
- (void)_clearConnectionTimeoutTimer;
- (void)_clearFirstFrameTimeoutTimer;
- (void)_clearInvitationTimeoutTimer;
- (id)_conferenceController;
- (void)_conferenceOtherParticipant:(id)arg1 didConnect:(bool)arg2;
- (id)_conferenceQueue;
- (id)_connectDuration;
- (bool)_connectionStarted;
- (void)_connectionTimeout:(id)arg1;
- (int)_connectionType;
- (id)_currentNatType;
- (void)_endChatWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)_entitlementsChanged:(id)arg1;
- (id)_extraServerContext;
- (void)_firstFrameTimeout:(id)arg1;
- (id)_frontCameraCaptureTime;
- (void)_handleAVError:(id)arg1;
- (void)_handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3 handled:(bool)arg4;
- (void)_handleRelayCancel:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleRelayInitate:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2;
- (bool)_hasCachedBoolForKey:(id)arg1;
- (id)_imHandles;
- (id)_initOutgoingTo:(id)arg1 isVideo:(bool)arg2 isRelayed:(bool)arg3 GUID:(id)arg4;
- (void)_initParticipantsWithIMHandles:(id)arg1;
- (id)_initWith:(id)arg1 invitedBy:(id)arg2 sessionID:(unsigned int)arg3 GUID:(id)arg4 video:(bool)arg5 extraProperties:(id)arg6;
- (id)_initWith:(id)arg1 invitedBy:(id)arg2 sessionID:(unsigned int)arg3 isRelayed:(bool)arg4 GUID:(id)arg5 video:(bool)arg6 extraProperties:(id)arg7;
- (void)_insertRemoteParticipant:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_interruptionBegan;
- (void)_invitationTimeout:(id)arg1;
- (bool)_isAudioInterrupted;
- (bool)_isCallUpgradeTo:(id)arg1;
- (bool)_isProxy;
- (bool)_isVideoInterrupted;
- (bool)_isVideoUpgradeTo:(id)arg1;
- (unsigned long long)_localNetworkConnectionType;
- (bool)_moveVCPartyID:(id)arg1 toIndex:(unsigned int)arg2 inCount:(unsigned int)arg3;
- (id)_natType;
- (bool)_needsAudioRestart;
- (bool)_needsVideoRestart;
- (long long)_networkCheckResult;
- (void)_noteFirstFrame;
- (id)_participantMatchingVCPartyID:(id)arg1;
- (bool)_participantsCheckOut;
- (void)_peerID:(id)arg1 changedTo:(id)arg2;
- (long long)_pingTestResult;
- (id)_pingTestResults;
- (void)_postNotificationName:(id)arg1 participant:(id)arg2 userInfo:(id)arg3;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_postParticipantMediaChangeNotification:(id)arg1 cameraChanged:(bool)arg2 orientationChanged:(bool)arg3 aspectChanged:(bool)arg4 cameraWillSwitch:(bool)arg5 camera:(unsigned int)arg6 orientation:(unsigned int)arg7 aspect:(struct CGSize { double x1; double x2; })arg8;
- (void)_postStateToDelegateIfNecessary;
- (bool)_processVCResponseDict:(id)arg1;
- (id)_proxyRepresentation;
- (id)_proxyRepresentationForIMAVChatParticipant:(id)arg1;
- (void)_reduceInvitationTimeoutTime;
- (id)_relayConnectDuration;
- (id)_relayRemotePrimaryIdentifier;
- (id)_remoteNatType;
- (unsigned long long)_remoteNetworkConnectionType;
- (void)_responseToVCInvite:(id)arg1;
- (void)_resumeAudioState;
- (void)_resumeVideoState;
- (void)_saveAudioRestartState;
- (void)_saveVideoRestartState;
- (void)_setActiveConference;
- (void)_setAirplaneModeEnabled:(bool)arg1;
- (void)_setBackCameraCaptureTime:(id)arg1;
- (void)_setCallStatisticsGUID:(id)arg1;
- (void)_setCallerProperties:(id)arg1;
- (void)_setConferenceController:(id)arg1;
- (void)_setConferenceID:(id)arg1;
- (void)_setConnectionStarted:(bool)arg1;
- (void)_setConnectionTimeoutTimer;
- (void)_setConnectionTimeoutTimer:(id)arg1;
- (void)_setConnectionType:(int)arg1;
- (void)_setCreationDate;
- (void)_setDateConnected;
- (void)_setDidRemoteMute:(bool)arg1;
- (void)_setDidRemotePause:(bool)arg1;
- (void)_setFirstFrameTimeoutTimer;
- (void)_setFirstFrameTimeoutTimer:(id)arg1;
- (void)_setFrontCameraCaptureTime:(id)arg1;
- (void)_setGUID:(id)arg1;
- (void)_setInterruptionBegan:(id)arg1;
- (void)_setInvitationTimeoutTimer;
- (void)_setInviteTimeoutTimer:(id)arg1;
- (void)_setInviteTimeoutTimerStart:(id)arg1;
- (void)_setIsAudioInterrupted:(bool)arg1;
- (void)_setIsVideoInterrupted:(bool)arg1;
- (void)_setLandscapeAspectRatios:(struct CGSize { double x1; double x2; })arg1;
- (void)_setLocalNetworkConnectionType:(unsigned long long)arg1;
- (void)_setMetadataFinalized:(bool)arg1;
- (void)_setNatType:(id)arg1;
- (void)_setNeedsAudioRestart:(bool)arg1;
- (void)_setNeedsVideoRestart:(bool)arg1;
- (void)_setNetworkCheckResult:(long long)arg1;
- (void)_setPingTestResult:(long long)arg1;
- (void)_setPingTestResults:(id)arg1;
- (void)_setPortraitAspectRatios:(struct CGSize { double x1; double x2; })arg1;
- (void)_setRelayRemotePrimaryIdentifier:(id)arg1;
- (void)_setRemoteNetworkConnectionType:(unsigned long long)arg1;
- (void)_setStateDisconnected;
- (void)_setTerminating:(bool)arg1;
- (void)_submitCallConnectedLogging;
- (void)_submitCallEndedLoggingWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)_submitCallInterruptionBeganLogging;
- (void)_submitCallInterruptionEndedLogging;
- (void)_submitCallStartedLoggingWithRecipientID:(id)arg1 isCaller:(bool)arg2 isVideo:(bool)arg3;
- (id)_timings;
- (void)_updateIMHandleInBuddyList:(id)arg1;
- (bool)_usesRelay;
- (void)_vccInitDidFinish:(id)arg1;
- (void)acceptInvitation;
- (id)account;
- (bool)airplaneModeEnabled;
- (void)beginChat;
- (id)callerProperties;
- (unsigned int)cameraOrientation;
- (unsigned int)cameraType;
- (void)cancelInvitation;
- (void)conferenceAVConferenceCallID:(long long)arg1 didConnect:(bool)arg2;
- (void)conferenceDidPauseAudioWithCallID:(long long)arg1 didPauseAudio:(bool)arg2;
- (void)conferenceDidStopWithCallID:(long long)arg1 error:(id)arg2;
- (id)conferenceID;
- (void)conferencePersonWithID:(id)arg1 didDegrade:(bool)arg2;
- (void)conferencePersonWithID:(id)arg1 didMute:(bool)arg2;
- (void)conferencePersonWithID:(id)arg1 didPause:(bool)arg2;
- (void)conferencePersonWithID:(id)arg1 localIPDidChange:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 mediaDidStall:(bool)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayCancel:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayRequest:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayUpdate:(id)arg2;
- (double)connectionTimeoutTime;
- (id)connectionTimeoutTimer;
- (id)dataDownloaded;
- (id)dataRate;
- (id)dataUploaded;
- (id)dateConnected;
- (id)dateCreated;
- (id)dateEnded;
- (void)dealloc;
- (void)declineInvitation;
- (void)declineInvitationWithResponse:(unsigned int)arg1;
- (id)description;
- (bool)didRemoteMute;
- (bool)didRemotePause;
- (void)endChat;
- (void)endChatWithError:(int)arg1;
- (void)endChatWithReason:(unsigned int)arg1;
- (void)endChatWithReason:(unsigned int)arg1 error:(int)arg2;
- (int)endedError;
- (unsigned int)endedReason;
- (id)firstFrameTimeoutTimer;
- (void)handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3;
- (bool)hasReceivedFirstFrame;
- (id)initIncomingFrom:(id)arg1 isVideo:(bool)arg2 callerProperties:(id)arg3;
- (id)initOutgoingTo:(id)arg1 isVideo:(bool)arg2;
- (id)initOutgoingTo:(id)arg1 isVideo:(bool)arg2 isRelayed:(bool)arg3;
- (id)initOutgoingTo:(id)arg1 isVideo:(bool)arg2 isRelayed:(bool)arg3 GUID:(id)arg4;
- (id)initiatorIMHandle;
- (id)initiatorParticipant;
- (double)invitationTimeoutTime;
- (void)invite:(id)arg1;
- (void)invite:(id)arg1 additionalPeers:(id)arg2;
- (void)invite:(id)arg1 additionalPeers:(id)arg2 excludingPushTokens:(id)arg3;
- (void)inviteAll;
- (id)inviteTimeoutTimer;
- (id)inviteTimeoutTimerStart;
- (id)inviteesInfo;
- (bool)isActive;
- (bool)isCaller;
- (bool)isConferenceSilent;
- (bool)isMute;
- (bool)isPaused;
- (bool)isRelayed;
- (bool)isRemoteMute;
- (bool)isSendingAudio;
- (bool)isSendingVideo;
- (bool)isStateFinal;
- (bool)isTerminating;
- (bool)isUsingWifi;
- (bool)isVideo;
- (struct CGSize { double x1; double x2; })landscapeAspectRatios;
- (struct CGSize { double x1; double x2; })localAspectRatioForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
- (id)localParticipant;
- (void*)localVideoBackLayer;
- (void*)localVideoLayer;
- (bool)mayRequireBreakBeforeMake;
- (bool)metadataFinalized;
- (void)notificationCenterDidDisappear;
- (void)notificationCenterWillAppear;
- (id)otherIMHandle;
- (void)participant:(id)arg1 changedFromState:(unsigned int)arg2 toState:(unsigned int)arg3;
- (id)participantMatchingIMHandle:(id)arg1;
- (id)participantWithAVConferenceCallID:(long long)arg1;
- (id)participantWithID:(id)arg1;
- (id)participants;
- (struct CGSize { double x1; double x2; })portraitAspectRatios;
- (id)remoteParticipants;
- (unsigned int)sessionID;
- (void)setCameraOrientation:(unsigned int)arg1;
- (void)setCameraType:(unsigned int)arg1;
- (void)setConnectionTimeoutTime:(double)arg1;
- (void)setDataDownloaded:(id)arg1;
- (void)setDataRate:(id)arg1;
- (void)setDataUploaded:(id)arg1;
- (void)setInvitationTimeoutTime:(double)arg1;
- (void)setIsSendingAudio:(bool)arg1;
- (void)setIsSendingVideo:(bool)arg1;
- (void)setLocalAspectRatio:(struct CGSize { double x1; double x2; })arg1 cameraOrientation:(unsigned int)arg2 cameraType:(unsigned int)arg3;
- (void)setLocalVideoBackLayer:(void*)arg1;
- (void)setLocalVideoLayer:(void*)arg1;
- (void)setMayRequireBreakBeforeMake:(bool)arg1;
- (void)setMetadataFinalized;
- (void)setMute:(bool)arg1;
- (void)setPaused:(bool)arg1;
- (void)setRelayed:(bool)arg1;
- (void)setRemoteMute:(bool)arg1;
- (void)setRemoteVideoPresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRemoteVideoPresentationState:(unsigned int)arg1;
- (void)set_conferenceQueue:(id)arg1;
- (bool)startPreviewWithError:(id*)arg1;
- (unsigned int)state;
- (bool)stopPreview;
- (void)systemApplicationDidBecomeActive;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidResumeForEventsOnly;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillEnterForeground;
- (void)systemDidFastUserSwitchOut;
- (void)systemWillShutdown;
- (void)toggleMute;
- (void)togglePaused;
- (id)vcPartyIDForIMHandle:(id)arg1;

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
