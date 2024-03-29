<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NTPBKeyValuePair.h</title>
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

/PrivateFrameworks/NewsTransport.framework/NTPBKeyValuePair.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport (2166)
 */

@interface NTPBKeyValuePair : PBCodable <NSCopying> {
    NTPBAppConfigurationResource * _appConfigurationResource;
    NTPBAsset * _asset;
    NTPBCacheCoordinatorHints * _cacheCoordinatorHintsValue;
    NSData * _dataValue;
    NTPBDate * _dateValue;
    struct { 
        unsigned int valueType : 1; 
    }  _has;
    NTPBIssueReadingHistoryItem * _issueReadingHistoryItem;
    NSString * _key;
    NTPBNetworkSessionList * _networkSessionList;
    NTPBPersonalizationLocalData * _personalizationLocalData;
    NTPBPrivateDataControllerSyncState * _privateDataControllerSyncState;
    NTPBReadingHistoryItem * _readingHistoryItem;
    NSData * _recordData;
    NSString * _stringValue;
    int  _valueType;
}

@property (nonatomic, retain) NTPBAppConfigurationResource *appConfigurationResource;
@property (nonatomic, retain) NTPBAsset *asset;
@property (nonatomic, retain) NTPBCacheCoordinatorHints *cacheCoordinatorHintsValue;
@property (nonatomic, retain) NSData *dataValue;
@property (nonatomic, retain) NTPBDate *dateValue;
@property (nonatomic, readonly) bool hasAppConfigurationResource;
@property (nonatomic, readonly) bool hasAsset;
@property (nonatomic, readonly) bool hasCacheCoordinatorHintsValue;
@property (nonatomic, readonly) bool hasDataValue;
@property (nonatomic, readonly) bool hasDateValue;
@property (nonatomic, readonly) bool hasIssueReadingHistoryItem;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasNetworkSessionList;
@property (nonatomic, readonly) bool hasPersonalizationLocalData;
@property (nonatomic, readonly) bool hasPrivateDataControllerSyncState;
@property (nonatomic, readonly) bool hasReadingHistoryItem;
@property (nonatomic, readonly) bool hasRecordData;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic) bool hasValueType;
@property (nonatomic, retain) NTPBIssueReadingHistoryItem *issueReadingHistoryItem;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NTPBNetworkSessionList *networkSessionList;
@property (nonatomic, retain) NTPBPersonalizationLocalData *personalizationLocalData;
@property (nonatomic, retain) NTPBPrivateDataControllerSyncState *privateDataControllerSyncState;
@property (nonatomic, retain) NTPBReadingHistoryItem *readingHistoryItem;
@property (nonatomic, retain) NSData *recordData;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic) int valueType;

- (id)appConfigurationResource;
- (id)asset;
- (id)cacheCoordinatorHintsValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataValue;
- (id)dateValue;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppConfigurationResource;
- (bool)hasAsset;
- (bool)hasCacheCoordinatorHintsValue;
- (bool)hasDataValue;
- (bool)hasDateValue;
- (bool)hasIssueReadingHistoryItem;
- (bool)hasKey;
- (bool)hasNetworkSessionList;
- (bool)hasPersonalizationLocalData;
- (bool)hasPrivateDataControllerSyncState;
- (bool)hasReadingHistoryItem;
- (bool)hasRecordData;
- (bool)hasStringValue;
- (bool)hasValueType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)issueReadingHistoryItem;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (id)networkSessionList;
- (id)personalizationLocalData;
- (id)privateDataControllerSyncState;
- (bool)readFrom:(id)arg1;
- (id)readingHistoryItem;
- (id)recordData;
- (void)setAppConfigurationResource:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setCacheCoordinatorHintsValue:(id)arg1;
- (void)setDataValue:(id)arg1;
- (void)setDateValue:(id)arg1;
- (void)setHasValueType:(bool)arg1;
- (void)setIssueReadingHistoryItem:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setNetworkSessionList:(id)arg1;
- (void)setPersonalizationLocalData:(id)arg1;
- (void)setPrivateDataControllerSyncState:(id)arg1;
- (void)setReadingHistoryItem:(id)arg1;
- (void)setRecordData:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setValueType:(int)arg1;
- (id)stringValue;
- (int)valueType;
- (void)writeTo:(id)arg1;

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
