<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SSVPlayActivityEvent.h</title>
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

/PrivateFrameworks/StoreServices.framework/SSVPlayActivityEvent.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices (1)
 */

@interface SSVPlayActivityEvent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    bool  _SBEnabled;
    NSString * _buildVersion;
    NSString * _containerID;
    SSVPlayActivityEventContainerIDs * _containerIDs;
    unsigned long long  _containerType;
    NSString * _deviceName;
    unsigned long long  _endReasonType;
    SSVPlayActivityEnqueuerProperties * _enqueuerProperties;
    NSDate * _eventDate;
    NSTimeZone * _eventTimeZone;
    unsigned long long  _eventType;
    NSString * _externalID;
    NSString * _featureName;
    NSString * _householdID;
    double  _itemDuration;
    double  _itemEndTime;
    SSVPlayActivityEventItemIDs * _itemIDs;
    double  _itemStartTime;
    unsigned long long  _itemType;
    unsigned long long  _mediaType;
    bool  _offline;
    long long  _persistentID;
    NSString * _personalizedContainerID;
    NSNumber * _privateListeningEnabled;
    unsigned long long  _reasonHintType;
    NSData * _recommendationData;
    NSString * _requestingBundleIdentifier;
    NSString * _requestingBundleVersion;
    NSNumber * _siriInitiated;
    unsigned long long  _sourceType;
    unsigned long long  _storeAccountID;
    NSString * _storeFrontID;
    NSString * _storeID;
    long long  _systemReleaseType;
    NSData * _timedMetadata;
    NSData * _trackInfo;
    long long  _version;
}

@property (getter=isSBEnabled, nonatomic, readonly) bool SBEnabled;
@property (nonatomic, readonly, copy) NSString *buildVersion;
@property (nonatomic, readonly, copy) NSString *containerID;
@property (nonatomic, readonly, copy) SSVPlayActivityEventContainerIDs *containerIDs;
@property (nonatomic, readonly) unsigned long long containerType;
@property (nonatomic, readonly, copy) NSData *dataRepresentation;
@property (nonatomic, readonly, copy) NSString *deviceName;
@property (nonatomic, readonly) unsigned long long endReasonType;
@property (nonatomic, readonly, copy) SSVPlayActivityEnqueuerProperties *enqueuerProperties;
@property (nonatomic, readonly, copy) NSDate *eventDate;
@property (nonatomic, readonly, copy) NSTimeZone *eventTimeZone;
@property (nonatomic, readonly) unsigned long long eventType;
@property (nonatomic, readonly, copy) NSString *externalID;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (nonatomic, readonly, copy) NSString *householdID;
@property (getter=isInternalBuild, nonatomic, readonly) bool internalBuild;
@property (nonatomic, readonly) double itemDuration;
@property (nonatomic, readonly) double itemEndTime;
@property (nonatomic, readonly, copy) SSVPlayActivityEventItemIDs *itemIDs;
@property (nonatomic, readonly) double itemStartTime;
@property (nonatomic, readonly) unsigned long long itemType;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (getter=isOffline, nonatomic, readonly) bool offline;
@property (nonatomic, readonly) long long persistentID;
@property (nonatomic, readonly, copy) NSString *personalizedContainerID;
@property (getter=isPrivateListeningEnabled, nonatomic, readonly, copy) NSNumber *privateListeningEnabled;
@property (nonatomic, readonly) unsigned long long reasonHintType;
@property (nonatomic, readonly, copy) NSData *recommendationData;
@property (nonatomic, readonly, copy) NSString *requestingBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *requestingBundleVersion;
@property (getter=isSiriInitiated, nonatomic, readonly, copy) NSNumber *siriInitiated;
@property (nonatomic, readonly) unsigned long long sourceType;
@property (nonatomic, readonly) unsigned long long storeAccountID;
@property (nonatomic, readonly, copy) NSString *storeFrontID;
@property (nonatomic, readonly, copy) NSString *storeID;
@property (nonatomic, readonly) long long systemReleaseType;
@property (nonatomic, readonly, copy) NSData *timedMetadata;
@property (nonatomic, readonly, copy) NSData *trackInfo;
@property (nonatomic, readonly) long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)_mutableCopyClass;
- (id)buildVersion;
- (id)containerID;
- (id)containerIDs;
- (unsigned long long)containerType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (id)description;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)endReasonType;
- (id)enqueuerProperties;
- (id)eventDate;
- (id)eventTimeZone;
- (unsigned long long)eventType;
- (id)externalID;
- (id)featureName;
- (unsigned long long)hash;
- (id)householdID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isInternalBuild;
- (bool)isOffline;
- (id)isPrivateListeningEnabled;
- (bool)isSBEnabled;
- (id)isSiriInitiated;
- (double)itemDuration;
- (double)itemEndTime;
- (id)itemIDs;
- (double)itemStartTime;
- (unsigned long long)itemType;
- (unsigned long long)mediaType;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)persistentID;
- (id)personalizedContainerID;
- (unsigned long long)reasonHintType;
- (id)recommendationData;
- (id)requestingBundleIdentifier;
- (id)requestingBundleVersion;
- (unsigned long long)sourceType;
- (unsigned long long)storeAccountID;
- (id)storeFrontID;
- (id)storeID;
- (long long)systemReleaseType;
- (id)timedMetadata;
- (id)trackInfo;
- (long long)version;

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