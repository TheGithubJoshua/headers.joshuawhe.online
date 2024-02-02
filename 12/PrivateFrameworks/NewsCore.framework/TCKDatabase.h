<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TCKDatabase.h</title>
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

/PrivateFrameworks/NewsCore.framework/TCKDatabase.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore (2166)
 */

@interface TCKDatabase : NSObject {
    NSMutableArray * _tDeletedRecordIDs;
    NSMutableArray * _tDeletedZoneIDs;
    id /* block */  _tFetchDatabaseChangesHandler;
    id /* block */  _tFetchRecordZoneChangesOperationHandler;
    id /* block */  _tFetchRecordsHandler;
    id /* block */  _tFetchZoneChangesHandler;
    id /* block */  _tFetchZonesHandler;
    NSMutableArray * _tFetchedChangedRecordZoneNames;
    NSMutableArray * _tFetchedRecords;
    id /* block */  _tModifyRecordsHandler;
    id /* block */  _tModifyRecordsOperationHandler;
    id /* block */  _tModifyZonesHandler;
    NSMutableArray * _tQueriedRecordTypes;
    NSMutableArray * _tQueriedRecordZonesNames;
    NSMutableArray * _tQueriedRecords;
    id /* block */  _tQueryHandler;
    NSMutableSet * _tSavedRecordIDs;
    NSMutableArray * _tSavedRecords;
    NSMutableArray * _tSavedSubscriptions;
    NSMutableArray * _tSavedZones;
}

@property (nonatomic, retain) NSMutableArray *tDeletedRecordIDs;
@property (nonatomic, retain) NSMutableArray *tDeletedZoneIDs;
@property (nonatomic, copy) id /* block */ tFetchDatabaseChangesHandler;
@property (nonatomic, copy) id /* block */ tFetchRecordZoneChangesOperationHandler;
@property (nonatomic, copy) id /* block */ tFetchRecordsHandler;
@property (nonatomic, copy) id /* block */ tFetchZoneChangesHandler;
@property (nonatomic, copy) id /* block */ tFetchZonesHandler;
@property (nonatomic, retain) NSMutableArray *tFetchedChangedRecordZoneNames;
@property (nonatomic, retain) NSMutableArray *tFetchedRecords;
@property (nonatomic, copy) id /* block */ tModifyRecordsHandler;
@property (nonatomic, copy) id /* block */ tModifyRecordsOperationHandler;
@property (nonatomic, copy) id /* block */ tModifyZonesHandler;
@property (nonatomic, retain) NSMutableArray *tQueriedRecordTypes;
@property (nonatomic, retain) NSMutableArray *tQueriedRecordZonesNames;
@property (nonatomic, retain) NSMutableArray *tQueriedRecords;
@property (nonatomic, copy) id /* block */ tQueryHandler;
@property (nonatomic, retain) NSMutableSet *tSavedRecordIDs;
@property (nonatomic, retain) NSMutableArray *tSavedRecords;
@property (nonatomic, retain) NSMutableArray *tSavedSubscriptions;
@property (nonatomic, retain) NSMutableArray *tSavedZones;

+ (id)tRecordsForQuery:(id)arg1 zoneID:(id)arg2;

- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (void)fetchRecordWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performQuery:(id)arg1 inZoneWithID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setTDeletedRecordIDs:(id)arg1;
- (void)setTDeletedZoneIDs:(id)arg1;
- (void)setTFetchDatabaseChangesHandler:(id /* block */)arg1;
- (void)setTFetchRecordZoneChangesOperationHandler:(id /* block */)arg1;
- (void)setTFetchRecordsHandler:(id /* block */)arg1;
- (void)setTFetchZoneChangesHandler:(id /* block */)arg1;
- (void)setTFetchZonesHandler:(id /* block */)arg1;
- (void)setTFetchedChangedRecordZoneNames:(id)arg1;
- (void)setTFetchedRecords:(id)arg1;
- (void)setTModifyRecordsHandler:(id /* block */)arg1;
- (void)setTModifyRecordsOperationHandler:(id /* block */)arg1;
- (void)setTModifyZonesHandler:(id /* block */)arg1;
- (void)setTQueriedRecordTypes:(id)arg1;
- (void)setTQueriedRecordZonesNames:(id)arg1;
- (void)setTQueriedRecords:(id)arg1;
- (void)setTQueryHandler:(id /* block */)arg1;
- (void)setTSavedRecordIDs:(id)arg1;
- (void)setTSavedRecords:(id)arg1;
- (void)setTSavedSubscriptions:(id)arg1;
- (void)setTSavedZones:(id)arg1;
- (id)tDeletedRecordIDs;
- (id)tDeletedZoneIDs;
- (id /* block */)tFetchDatabaseChangesHandler;
- (id /* block */)tFetchRecordZoneChangesOperationHandler;
- (id /* block */)tFetchRecordsHandler;
- (id /* block */)tFetchZoneChangesHandler;
- (id /* block */)tFetchZonesHandler;
- (id)tFetchedChangedRecordZoneNames;
- (id)tFetchedRecords;
- (id /* block */)tModifyRecordsHandler;
- (id /* block */)tModifyRecordsOperationHandler;
- (id /* block */)tModifyZonesHandler;
- (id)tQueriedRecordTypes;
- (id)tQueriedRecordZonesNames;
- (id)tQueriedRecords;
- (id /* block */)tQueryHandler;
- (id)tSavedRecordIDs;
- (id)tSavedRecords;
- (id)tSavedSubscriptions;
- (id)tSavedZones;

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