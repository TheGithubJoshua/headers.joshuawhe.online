<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FCCKPrivateBatchedDeleteRecordsOperation.h</title>
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

/PrivateFrameworks/NewsCore.framework/FCCKPrivateBatchedDeleteRecordsOperation.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore (2166)
 */

@interface FCCKPrivateBatchedDeleteRecordsOperation : FCOperation {
    FCCKPrivateDatabase * _database;
    id /* block */  _deleteRecordsCompletionBlock;
    bool  _handleIdentityLoss;
    NSArray * _recordIDsToDelete;
    NSMutableArray * _remainingBatchesOfRecordIDsToDelete;
    NSMutableArray * _resultDeletedRecordIDs;
    NSMutableDictionary * _resultErrorsByRecordID;
    bool  _skipPreflight;
}

@property (nonatomic, retain) FCCKPrivateDatabase *database;
@property (nonatomic, copy) id /* block */ deleteRecordsCompletionBlock;
@property (nonatomic) bool handleIdentityLoss;
@property (nonatomic, copy) NSArray *recordIDsToDelete;
@property (nonatomic, retain) NSMutableArray *remainingBatchesOfRecordIDsToDelete;
@property (nonatomic, retain) NSMutableArray *resultDeletedRecordIDs;
@property (nonatomic, retain) NSMutableDictionary *resultErrorsByRecordID;
@property (nonatomic) bool skipPreflight;

- (void).cxx_destruct;
- (void)_continueModifying;
- (id)database;
- (id /* block */)deleteRecordsCompletionBlock;
- (bool)handleIdentityLoss;
- (id)init;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)recordIDsToDelete;
- (id)remainingBatchesOfRecordIDsToDelete;
- (void)resetForRetry;
- (id)resultDeletedRecordIDs;
- (id)resultErrorsByRecordID;
- (void)setDatabase:(id)arg1;
- (void)setDeleteRecordsCompletionBlock:(id /* block */)arg1;
- (void)setHandleIdentityLoss:(bool)arg1;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setRemainingBatchesOfRecordIDsToDelete:(id)arg1;
- (void)setResultDeletedRecordIDs:(id)arg1;
- (void)setResultErrorsByRecordID:(id)arg1;
- (void)setSkipPreflight:(bool)arg1;
- (bool)skipPreflight;
- (bool)validateOperation;

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