<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CRKCloudLocalDelta.h</title>
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

/PrivateFrameworks/ClassroomKit.framework/CRKCloudLocalDelta.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit (1)
 */

@interface CRKCloudLocalDelta : NSObject <NSSecureCoding> {
    bool  _atomic;
    NSString * _identifier;
    NSMutableSet * _mutableAssetIdentifiers;
    NSMutableSet * _mutableCreateRecords;
    NSMutableSet * _mutableDeleteRecordIds;
    NSMutableSet * _mutableUpdateRecords;
}

@property (nonatomic, readonly) NSSet *assetIdentifiers;
@property (getter=isAtomic, nonatomic) bool atomic;
@property (nonatomic, readonly) NSSet *createRecordIds;
@property (nonatomic, readonly, copy) NSSet *createRecords;
@property (nonatomic, readonly, copy) NSSet *deleteRecordIds;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSMutableSet *mutableAssetIdentifiers;
@property (nonatomic, retain) NSMutableSet *mutableCreateRecords;
@property (nonatomic, retain) NSMutableSet *mutableDeleteRecordIds;
@property (nonatomic, retain) NSMutableSet *mutableUpdateRecords;
@property (nonatomic, readonly) NSSet *updateRecordIds;
@property (nonatomic, readonly, copy) NSSet *updateRecords;

+ (id)instanceWithCreateRecords:(id)arg1 updateRecords:(id)arg2 deleteRecordIds:(id)arg3 isAtomic:(bool)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAssetIdentifiers:(id)arg1;
- (void)addCreateRecord:(id)arg1;
- (void)addDeleteRecordId:(id)arg1;
- (void)addUpdateRecord:(id)arg1;
- (id)assetIdentifiers;
- (id)createRecordIds;
- (id)createRecords;
- (id)createRecordsMatchingIds:(id)arg1;
- (id)deleteRecordIds;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAtomic;
- (bool)isEmpty;
- (void)mergeDelta:(id)arg1;
- (id)mutableAssetIdentifiers;
- (id)mutableCreateRecords;
- (id)mutableDeleteRecordIds;
- (id)mutableUpdateRecords;
- (id)recordsInSet:(id)arg1 matchingIds:(id)arg2;
- (void)removeCreatesMatchingIds:(id)arg1;
- (void)removeDeleteIdsMatchingIds:(id)arg1;
- (void)removeUpdatesMatchingIds:(id)arg1;
- (void)setAtomic:(bool)arg1;
- (void)setCreateRecords:(id)arg1;
- (void)setDeleteRecordIds:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMutableAssetIdentifiers:(id)arg1;
- (void)setMutableCreateRecords:(id)arg1;
- (void)setMutableDeleteRecordIds:(id)arg1;
- (void)setMutableUpdateRecords:(id)arg1;
- (void)setUpdateRecords:(id)arg1;
- (id)updateRecordIds;
- (id)updateRecords;
- (id)updateRecordsMatchingIds:(id)arg1;

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
