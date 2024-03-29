<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BDSLiverpoolStatusMonitor.h</title>
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

/PrivateFrameworks/BookDataStore.framework/BDSLiverpoolStatusMonitor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore (4053)
 */

@interface BDSLiverpoolStatusMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _containerQueue;
    <BDSLiverpoolStatusChangeObserving> * _coordinatingObserver;
    BDSICloudIdentityToken * _currentICloudIdentityToken;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    BDSICloudIdentityToken * _lastArchivedICloudIdentityToken;
    BDSICloudIdentityToken * _lastArchivedNonNilICloudIdentityToken;
    bool  _lastArchivedNonNilICloudIdentityTokenWasNonNilAtColdLaunch;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    NSHashTable * _observers;
    bool  _optedIn;
    bool  _optedInKnown;
    int  _tccNotifyToken;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *containerQueue;
@property (nonatomic) <BDSLiverpoolStatusChangeObserving> *coordinatingObserver;
@property (nonatomic, copy) BDSICloudIdentityToken *currentICloudIdentityToken;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly, copy) BCICloudIdentityToken *iCloudIdentityToken;
@property (nonatomic, copy) BDSICloudIdentityToken *lastArchivedICloudIdentityToken;
@property (nonatomic, copy) BDSICloudIdentityToken *lastArchivedNonNilICloudIdentityToken;
@property (nonatomic) bool lastArchivedNonNilICloudIdentityTokenWasNonNilAtColdLaunch;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notifyQueue;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic) bool optedIn;
@property (nonatomic) bool optedInKnown;
@property (nonatomic) int tccNotifyToken;
@property (nonatomic, readonly) bool userIdentityPreviouslyRecordedOnThisDevice;

- (void).cxx_destruct;
- (void)_notifyObserversWithCurrentToken:(id)arg1 lastToken:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)containerQueue;
- (id)coordinatingObserver;
- (id)currentICloudIdentityToken;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (void)dq_archiveCurrentICloudIdentityToken;
- (bool)dq_isCloudKitEnabled;
- (void)dq_refreshICloudAvailabilityStatus;
- (id)iCloudIdentityToken;
- (id)init;
- (bool)isCloudKitEnabled;
- (id)lastArchivedICloudIdentityToken;
- (id)lastArchivedNonNilICloudIdentityToken;
- (bool)lastArchivedNonNilICloudIdentityTokenWasNonNilAtColdLaunch;
- (id)notifyQueue;
- (id)observers;
- (bool)optedIn;
- (bool)optedInKnown;
- (void)p_iCloudIdentityDidChange:(id)arg1;
- (void)refreshICloudTokensAndUpdateWithOptedIn:(bool)arg1;
- (void)registerCoordinatingObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)restartObserving;
- (void)setContainerQueue:(id)arg1;
- (void)setCoordinatingObserver:(id)arg1;
- (void)setCurrentICloudIdentityToken:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setLastArchivedICloudIdentityToken:(id)arg1;
- (void)setLastArchivedNonNilICloudIdentityToken:(id)arg1;
- (void)setLastArchivedNonNilICloudIdentityTokenWasNonNilAtColdLaunch:(bool)arg1;
- (void)setNotifyQueue:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setOptedIn:(bool)arg1;
- (void)setOptedInKnown:(bool)arg1;
- (void)setTccNotifyToken:(int)arg1;
- (int)tccNotifyToken;
- (void)updateWithOptedIn:(bool)arg1;
- (bool)userIdentityPreviouslyRecordedOnThisDevice;

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
