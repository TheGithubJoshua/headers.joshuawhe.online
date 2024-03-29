<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BBRemoteDataProvider.h</title>
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

/PrivateFrameworks/BulletinBoard.framework/BBRemoteDataProvider.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard (1)
 */

@interface BBRemoteDataProvider : BBDataProvider <BBRemoteDataProviderServerProxy> {
    <BBRemoteDataProviderClientProxy> * _clientProxy;
    bool  _connected;
    <BBRemoteDataProviderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _proxyQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _replyQueue;
    NSString * _sectionID;
    NSObject<OS_dispatch_queue> * _serverControlQueue;
    bool  _serverIsReady;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_logDoesNotRespond:(SEL)arg1;
- (void)_sendClientRequest:(id /* block */)arg1;
- (void)addBulletin:(id)arg1 forDestinations:(unsigned long long)arg2;
- (void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(id /* block */)arg3;
- (void)calloutToServer:(id /* block */)arg1;
- (bool)canPerformMigration;
- (bool)checkResponds:(bool)arg1 forSelector:(SEL)arg2;
- (void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)dataProviderDidLoad;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;
- (void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)getAspectRatioForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(bool)arg3 withHandler:(id /* block */)arg4;
- (void)getClearedInfoWithCompletion:(id /* block */)arg1;
- (void)getDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(bool)arg3 withHandler:(id /* block */)arg4;
- (void)getPNGDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(bool)arg3 sizeConstraints:(id)arg4 withHandler:(id /* block */)arg5;
- (void)getSectionInfoWithCompletion:(id /* block */)arg1;
- (id)initWithSectionID:(id)arg1 delegate:(id)arg2;
- (void)invalidateBulletins;
- (bool)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2;
- (void)modifyBulletin:(id)arg1;
- (void)noteSectionInfoDidChange:(id)arg1;
- (void)reloadDefaultSectionInfo:(id)arg1;
- (void)reloadIdentityWithCompletion:(id /* block */)arg1;
- (void)reloadSectionParameters:(id)arg1;
- (id)sectionIdentifier;
- (void)setClearedInfo:(id)arg1;
- (void)setClientProxy:(id)arg1 completion:(id /* block */)arg2;
- (void)setSectionInfo:(id)arg1;
- (void)setServerIsReady:(bool)arg1;
- (void)startWatchdog;
- (void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)withdrawBulletinWithPublisherBulletinID:(id)arg1;
- (void)withdrawBulletinsWithRecordID:(id)arg1;

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
