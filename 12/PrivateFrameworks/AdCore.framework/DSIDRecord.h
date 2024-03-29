<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>DSIDRecord.h</title>
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

/PrivateFrameworks/AdCore.framework/DSIDRecord.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore (1)
 */

@interface DSIDRecord : NSObject <NSCopying> {
    NSMutableDictionary * _ADIDRecords;
    NSString * _DSID;
    NSString * _IDFA;
    bool  _accountIsT13;
    bool  _accountIsU13;
    bool  _accountIsU18;
    bool  _accountLimitAdTrackingEnabled;
    bool  _dirty;
    NSString * _iAdIDBeforeReset;
    NSString * _iCloudDSID;
    bool  _isActiveRecord;
    bool  _isPlaceholderAccount;
    bool  _isRestrictedByEU_GDPR;
    long long  _lastJingleAccountStatus;
    long long  _lastJingleLimitAdTrackingResponse;
    int  _lastPOSTLimitAdTrackingTimestamp;
    int  _lastSegmentServedTimestamp;
    bool  _lastSentLimitAdTrackingStatus;
    int  _lastSentLimitAdTrackingTimestamp;
    int  _lastSentSegmentDataTimestamp;
    int  _limitAdTrackingTimestamp;
    int  _nextReconcileTimestamp;
    bool  _notificationRequired;
    NSString * _segmentData;
    int  _segmentDataTimestamp;
}

@property (retain) NSMutableDictionary *ADIDRecords;
@property (nonatomic, retain) NSString *DSID;
@property (nonatomic, retain) NSString *IDFA;
@property (nonatomic) bool accountIsT13;
@property (nonatomic) bool accountIsU13;
@property (nonatomic) bool accountIsU18;
@property (nonatomic) bool accountLimitAdTrackingEnabled;
@property (nonatomic) bool dirty;
@property (nonatomic, retain) NSString *iAdIDBeforeReset;
@property (nonatomic, retain) NSString *iCloudDSID;
@property (nonatomic, readonly) bool isActiveRecord;
@property (nonatomic) bool isPlaceholderAccount;
@property (nonatomic, readonly) bool isRestrictedByApple;
@property (nonatomic, readonly) bool isRestrictedByEU_GDPR;
@property (nonatomic) long long lastJingleAccountStatus;
@property (nonatomic) long long lastJingleLimitAdTrackingResponse;
@property (nonatomic) int lastPOSTLimitAdTrackingTimestamp;
@property (nonatomic) int lastSegmentServedTimestamp;
@property (nonatomic) bool lastSentLimitAdTrackingStatus;
@property (nonatomic) int lastSentLimitAdTrackingTimestamp;
@property (nonatomic) int lastSentSegmentDataTimestamp;
@property (nonatomic, readonly) bool limitAdTrackingEnabled;
@property (nonatomic) int limitAdTrackingTimestamp;
@property (nonatomic) int nextReconcileTimestamp;
@property (nonatomic) bool notificationRequired;
@property (nonatomic, retain) NSString *segmentData;
@property (nonatomic) int segmentDataTimestamp;

// Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore

- (void).cxx_destruct;
- (id)ADIDRecords;
- (id)DSID;
- (id)IDFA;
- (bool)accountIsT13;
- (bool)accountIsU13;
- (bool)accountIsU18;
- (bool)accountLimitAdTrackingEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)dirty;
- (id)encryptedIDForClientType:(long long)arg1;
- (id)iAdIDBeforeReset;
- (bool)iAdIDRecordsDirty;
- (id)iCloudDSID;
- (id)idForClientType:(long long)arg1;
- (id)initWithDSID:(id)arg1 serializedRecord:(id)arg2 version:(int)arg3;
- (bool)isActiveRecord;
- (bool)isPlaceholderAccount;
- (bool)isRestrictedByApple;
- (bool)isRestrictedByEU_GDPR;
- (long long)lastJingleAccountStatus;
- (long long)lastJingleLimitAdTrackingResponse;
- (int)lastPOSTLimitAdTrackingTimestamp;
- (int)lastSegmentServedTimestamp;
- (bool)lastSentLimitAdTrackingStatus;
- (int)lastSentLimitAdTrackingTimestamp;
- (int)lastSentSegmentDataTimestamp;
- (bool)limitAdTrackingEnabled;
- (int)limitAdTrackingTimestamp;
- (int)nextReconcileTimestamp;
- (bool)notificationRequired;
- (id)segmentData;
- (int)segmentDataTimestamp;
- (void)setADIDRecords:(id)arg1;
- (void)setAccountIsT13:(bool)arg1;
- (void)setAccountIsU13:(bool)arg1;
- (void)setAccountIsU18:(bool)arg1;
- (void)setAccountLimitAdTrackingEnabled:(bool)arg1;
- (void)setDSID:(id)arg1;
- (void)setDirty:(bool)arg1;
- (void)setIAdIDBeforeReset:(id)arg1;
- (void)setICloudDSID:(id)arg1;
- (void)setID:(id)arg1 forClientType:(long long)arg2;
- (void)setIDFA:(id)arg1;
- (void)setIsPlaceholderAccount:(bool)arg1;
- (void)setLastJingleAccountStatus:(long long)arg1;
- (void)setLastJingleLimitAdTrackingResponse:(long long)arg1;
- (void)setLastPOSTLimitAdTrackingTimestamp:(int)arg1;
- (void)setLastSegmentServedTimestamp:(int)arg1;
- (void)setLastSentLimitAdTrackingStatus:(bool)arg1;
- (void)setLastSentLimitAdTrackingTimestamp:(int)arg1;
- (void)setLastSentSegmentDataTimestamp:(int)arg1;
- (void)setLimitAdTrackingTimestamp:(int)arg1;
- (void)setNextReconcileTimestamp:(int)arg1;
- (void)setNotificationRequired:(bool)arg1;
- (void)setSegmentData:(id)arg1;
- (void)setSegmentDataTimestamp:(int)arg1;
- (void)setlimitAdTrackingTimestamp:(int)arg1;
- (bool)shouldSendNotification;

// Image: /System/Library/PrivateFrameworks/AdID.framework/AdID

- (bool)LATStatusChangeInProgress;
- (void)ensureiAdIDs;
- (void)handleIDFAReset:(id /* block */)arg1;
- (bool)hasIDForClientType:(long long)arg1;
- (bool)isActiveRecord;
- (bool)isEqual:(id)arg1;
- (void)reconcileIDFAandLAT;
- (void)removeIDForClientType:(long long)arg1;
- (void)resetiAdIDs;
- (void)resetiAdIDsAndDPID:(id /* block */)arg1;
- (void)retrieveSegmentDataFromiTunes:(id /* block */)arg1;
- (void)sendLATStatusToAdPlatforms:(id /* block */)arg1;
- (void)sendSegmentDataToAdPlatforms:(id /* block */)arg1;
- (void)sendSegmentsAndLATToAdPlatformsWithCompletionHandler:(id /* block */)arg1;
- (void)setLimitAdTrackingStatus:(bool)arg1 timestamp:(int)arg2 completionHandler:(id /* block */)arg3;
- (void)updateDeviceLATStatusWithError:(id)arg1 completionHandler:(id /* block */)arg2;

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
