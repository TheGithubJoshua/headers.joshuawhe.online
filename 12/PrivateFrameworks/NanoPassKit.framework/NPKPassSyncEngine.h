<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NPKPassSyncEngine.h</title>
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

/PrivateFrameworks/NanoPassKit.framework/NPKPassSyncEngine.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit (1)
 */

@interface NPKPassSyncEngine : NSObject <NSSecureCoding> {
    NPKPassSyncState * _backupState;
    NPKPassSyncChange * _candidateChange;
    NPKPassSyncState * _candidateState;
    <NPKPassSyncEngineDataSource> * _dataSource;
    <NPKPassSyncEngineDelegate> * _delegate;
    unsigned long long  _engineRole;
    NPKPassSyncState * _libraryState;
    NPKPassSyncChange * _processingChange;
    NPKPassSyncState * _reconciledState;
}

@property (nonatomic, retain) NPKPassSyncState *backupState;
@property (nonatomic, retain) NPKPassSyncChange *candidateChange;
@property (nonatomic, retain) NPKPassSyncState *candidateState;
@property (nonatomic) <NPKPassSyncEngineDataSource> *dataSource;
@property (nonatomic) <NPKPassSyncEngineDelegate> *delegate;
@property (nonatomic, readonly) NSString *engineName;
@property (nonatomic, readonly) unsigned long long engineRole;
@property (nonatomic, retain) NPKPassSyncState *libraryState;
@property (nonatomic, retain) NPKPassSyncChange *processingChange;
@property (nonatomic, retain) NPKPassSyncState *reconciledState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_engineStateChanged;
- (void)_finishedProcessingChange:(id)arg1;
- (void)_receivedStateChangeProcessed:(id)arg1 changeAccepted:(bool)arg2;
- (void)_requestAddPassData:(id)arg1 forSyncStateItem:(id)arg2 completion:(id /* block */)arg3;
- (void)_requestRemovePassWithUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)_requestUpdatePassData:(id)arg1 forSyncStateItem:(id)arg2 completion:(id /* block */)arg3;
- (void)_sendNextStateChange;
- (void)_sendProposedReconciledState:(id)arg1;
- (void)_sendReconciledStateAcceptedWithHash:(id)arg1;
- (void)_sendReconciledStateUnrecognizedWithHash:(id)arg1 currentPassSyncState:(id)arg2;
- (void)_sendStateChange:(id)arg1;
- (void)_sendStateChangeProcessedWithUUID:(id)arg1 changeAccepted:(bool)arg2;
- (void)_shouldProcessAddOrUpdateChangeOfType:(unsigned long long)arg1 changeSyncStateItem:(id)arg2 librarySyncStateItem:(id)arg3 reconciledSyncStateItem:(id)arg4 candidateChange:(id)arg5 shouldApplyToPassLibrary:(bool*)arg6 shouldApplyToReconciledState:(bool*)arg7;
- (void)_unexpectedEventOccurred;
- (id)backupState;
- (id)candidateChange;
- (id)candidateState;
- (id)dataSource;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)engineName;
- (unsigned long long)engineRole;
- (void)handleProposedReconciledState:(id)arg1;
- (void)handleReconciledStateAcceptedWithHash:(id)arg1;
- (void)handleReconciledStateUnrecognizedWithHash:(id)arg1 passSyncState:(id)arg2;
- (void)handleStateChange:(id)arg1;
- (void)handleStateChangeProcessedWithUUID:(id)arg1 changeAccepted:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithRole:(unsigned long long)arg1;
- (id)libraryState;
- (id)processingChange;
- (id)reconciledState;
- (void)setBackupState:(id)arg1;
- (void)setCandidateChange:(id)arg1;
- (void)setCandidateState:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLibraryState:(id)arg1;
- (void)setProcessingChange:(id)arg1;
- (void)setReconciledState:(id)arg1;
- (void)syncIfNecessary;

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