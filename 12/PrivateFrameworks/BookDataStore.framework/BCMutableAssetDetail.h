<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BCMutableAssetDetail.h</title>
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

/PrivateFrameworks/BookDataStore.framework/BCMutableAssetDetail.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore (4053)
 */

@interface BCMutableAssetDetail : BCMutableCloudData <BCAssetDetail, NSSecureCoding> {
    NSString * _assetID;
    double  _bookmarkTime;
    NSDate * _dateFinished;
    NSDate * _datePlaybackTimeUpdated;
    bool  _isFinished;
    NSDate * _lastOpenDate;
    bool  _notFinished;
    int  _readingPositionAbsolutePhysicalLocation;
    NSString * _readingPositionAnnotationVersion;
    NSString * _readingPositionAssetVersion;
    NSString * _readingPositionCFIString;
    int  _readingPositionLocationRangeEnd;
    int  _readingPositionLocationRangeStart;
    NSDate * _readingPositionLocationUpdateDate;
    NSString * _readingPositionStorageUUID;
    NSData * _readingPositionUserData;
    float  _readingProgress;
    float  _readingProgressHighWaterMark;
    short  _taste;
    short  _tasteSyncedToStore;
}

@property (nonatomic, copy) NSString *assetID;
@property (nonatomic) double bookmarkTime;
@property (nonatomic, readonly, copy) NSData *ckSystemFields;
@property (nonatomic, copy) NSDate *dateFinished;
@property (nonatomic, copy) NSDate *datePlaybackTimeUpdated;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool deletedFlag;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long editGeneration;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFinished;
@property (nonatomic, copy) NSDate *lastOpenDate;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic) bool notFinished;
@property (nonatomic) <BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (nonatomic) int readingPositionAbsolutePhysicalLocation;
@property (nonatomic, copy) NSString *readingPositionAnnotationVersion;
@property (nonatomic, copy) NSString *readingPositionAssetVersion;
@property (nonatomic, copy) NSString *readingPositionCFIString;
@property (nonatomic) int readingPositionLocationRangeEnd;
@property (nonatomic) int readingPositionLocationRangeStart;
@property (nonatomic, copy) NSDate *readingPositionLocationUpdateDate;
@property (nonatomic, copy) NSString *readingPositionStorageUUID;
@property (nonatomic, copy) NSData *readingPositionUserData;
@property (nonatomic) float readingProgress;
@property (nonatomic) float readingProgressHighWaterMark;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long syncGeneration;
@property (nonatomic, readonly, copy) CKRecord *systemFields;
@property (nonatomic) short taste;
@property (nonatomic) short tasteSyncedToStore;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetID;
- (double)bookmarkTime;
- (id)configuredRecordFromAttributes;
- (id)dateFinished;
- (id)datePlaybackTimeUpdated;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithAssetID:(id)arg1;
- (id)initWithCloudData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (bool)isFinished;
- (id)lastOpenDate;
- (bool)notFinished;
- (int)readingPositionAbsolutePhysicalLocation;
- (id)readingPositionAnnotationVersion;
- (id)readingPositionAssetVersion;
- (id)readingPositionCFIString;
- (int)readingPositionLocationRangeEnd;
- (int)readingPositionLocationRangeStart;
- (id)readingPositionLocationUpdateDate;
- (id)readingPositionStorageUUID;
- (id)readingPositionUserData;
- (float)readingProgress;
- (float)readingProgressHighWaterMark;
- (id)recordType;
- (void)setAssetID:(id)arg1;
- (void)setBookmarkTime:(double)arg1;
- (void)setDateFinished:(id)arg1;
- (void)setDatePlaybackTimeUpdated:(id)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)setLastOpenDate:(id)arg1;
- (void)setNotFinished:(bool)arg1;
- (void)setReadingPositionAbsolutePhysicalLocation:(int)arg1;
- (void)setReadingPositionAnnotationVersion:(id)arg1;
- (void)setReadingPositionAssetVersion:(id)arg1;
- (void)setReadingPositionCFIString:(id)arg1;
- (void)setReadingPositionLocationRangeEnd:(int)arg1;
- (void)setReadingPositionLocationRangeStart:(int)arg1;
- (void)setReadingPositionLocationUpdateDate:(id)arg1;
- (void)setReadingPositionStorageUUID:(id)arg1;
- (void)setReadingPositionUserData:(id)arg1;
- (void)setReadingProgress:(float)arg1;
- (void)setReadingProgressHighWaterMark:(float)arg1;
- (void)setTaste:(short)arg1;
- (void)setTasteSyncedToStore:(short)arg1;
- (short)taste;
- (short)tasteSyncedToStore;
- (id)zoneName;

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