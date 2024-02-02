<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NPKContinuityCoordinator.h</title>
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

/PrivateFrameworks/NanoPassKit.framework/NPKContinuityCoordinator.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit (1)
 */

@interface NPKContinuityCoordinator : NSObject {
    NSUserActivity * _currentUserActivity;
    NSUserActivity * _getPaymentPassesUserActivity;
    NSUserActivity * _individualPassUserActivity;
    NSUserActivity * _passListUserActivity;
    NSUserActivity * _provisionPassUserActivity;
    NSObject<OS_dispatch_queue> * _queue;
    NSUserActivity * _setUpPeerPaymentUserActivity;
    NSUserActivity * _viewPeerPaymentUserActivity;
}

@property (nonatomic) NSUserActivity *currentUserActivity;
@property (nonatomic, retain) NSUserActivity *getPaymentPassesUserActivity;
@property (nonatomic, retain) NSUserActivity *individualPassUserActivity;
@property (nonatomic, retain) NSUserActivity *passListUserActivity;
@property (nonatomic, retain) NSUserActivity *provisionPassUserActivity;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSUserActivity *setUpPeerPaymentUserActivity;
@property (nonatomic, retain) NSUserActivity *viewPeerPaymentUserActivity;

+ (id)sharedContinuityCoordinator;

- (void).cxx_destruct;
- (id)_init;
- (void)_saveUserActivity:(id)arg1;
- (id)_skeletonBridgeUserActivity;
- (id)currentUserActivity;
- (void)dealloc;
- (id)getPaymentPassesUserActivity;
- (id)individualPassUserActivity;
- (id)init;
- (void)invalidateAllActivities;
- (id)passListUserActivity;
- (id)provisionPassUserActivity;
- (id)queue;
- (void)setCurrentUserActivity:(id)arg1;
- (void)setGetPaymentPassesUserActivity:(id)arg1;
- (void)setIndividualPassUserActivity:(id)arg1;
- (void)setPassListUserActivity:(id)arg1;
- (void)setProvisionPassUserActivity:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSetUpPeerPaymentUserActivity:(id)arg1;
- (id)setUpPeerPaymentUserActivity;
- (void)setViewPeerPaymentUserActivity:(id)arg1;
- (id)userActivityForPassWithUniqueID:(id)arg1;
- (void)userNeedsPaymentPasses;
- (void)userNeedsToProvisionPassWithUniqueID:(id)arg1;
- (void)userNeedsToSetUpPeerPayment;
- (void)userNeedsToViewPeerPaymentForHandle:(id)arg1;
- (void)userViewingPassList;
- (void)userViewingPassWithUniqueID:(id)arg1 isPaymentPass:(bool)arg2;
- (id)viewPeerPaymentUserActivity;

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