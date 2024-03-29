<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MSSharingManager.h</title>
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

/PrivateFrameworks/CoreMediaStream.framework/MSSharingManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream (520.1)
 */

@interface MSSharingManager : NSObject <MSSharingManager, MSSharingProtocolDelegate> {
    MSMediaStreamDaemon * _daemon;
    <MSSharingManagerDelegate> * _delegate;
    NSMutableArray * _deleteQueue;
    NSMutableArray * _invitationQueue;
    NSMutableArray * _invitationResponseQueue;
    NSMutableDictionary * _manageShareByPersonID;
    NSTimer * _manageShareDebounceTimer;
    NSString * _manifestPath;
    NSString * _personID;
    MSSharingProtocol * _protocol;
    bool  _requestCurrentStateRequested;
    NSArray * _shares;
    NSMutableArray * _sharesWithLocalModifications;
    int  _state;
}

@property (nonatomic) MSMediaStreamDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSSharingManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *personID;
@property (nonatomic, retain) NSArray *shares;
@property (readonly) Class superclass;

+ (id)_clearInstantiatedSharingManagersByPersonID;
+ (void)abortAllActivities;
+ (id)existingSharingManagerForPersonID:(id)arg1;
+ (void)forgetPersonID:(id)arg1;
+ (id)sharingManagerForPersonID:(id)arg1;

- (void).cxx_destruct;
- (void)_performNextQueuedAction;
- (void)_requestCurrentShareState;
- (void)_sendNextDeletion;
- (void)_sendNextInvitation;
- (void)_sendNextInvitationResponse;
- (void)_sendNextManagedShare;
- (void)_shareDebounceTimerDidFire:(id)arg1;
- (id)_sharesWithLocalModifications;
- (void)abort;
- (id)daemon;
- (void)dealloc;
- (id)delegate;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)modifyShare:(id)arg1;
- (id)personID;
- (void)refreshCurrentShareState;
- (void)removeShare:(id)arg1;
- (void)respondToInvitation:(id)arg1 accept:(bool)arg2;
- (void)sendInvitationsForShares:(id)arg1;
- (void)setDaemon:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShares:(id)arg1;
- (id)shares;
- (void)sharingProtocol:(id)arg1 didCompleteTransactionWithError:(id)arg2;
- (void)sharingProtocol:(id)arg1 didFailToSendInvitations:(id)arg2;
- (void)sharingProtocol:(id)arg1 didFindShareState:(id)arg2;
- (void)sharingProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;

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
