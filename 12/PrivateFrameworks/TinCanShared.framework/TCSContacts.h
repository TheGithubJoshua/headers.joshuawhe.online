<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TCSContacts.h</title>
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

/PrivateFrameworks/TinCanShared.framework/TCSContacts.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared (1)
 */

@interface TCSContacts : NSObject {
    NSUserDefaults * _defaults;
    int  _demoResetToken;
    NSArray * _destinations;
    NPSManager * _npsManager;
    NSHashTable * _observers;
    int  _prefSyncToken;
    bool  _shouldObserveWhitelistDefaultChanges;
    NSMutableDictionary * _whitelist;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _whitelistLock;
    CNCoalescingTimer * _whitelistSaveTimer;
}

@property (nonatomic, retain) NSUserDefaults *defaults;
@property (nonatomic, retain) NSArray *destinations;
@property (nonatomic) bool shouldObserveWhitelistDefaultChanges;
@property (nonatomic, retain) NSMutableDictionary *whitelist;

+ (id)_canonicalDestinationForString:(id)arg1;
+ (id)_canonicalPhoneNumberFromCNPhoneNumber:(id)arg1;
+ (id)_canonicalPhoneNumberFromPhoneNumberString:(id)arg1;
+ (bool)_contact:(id)arg1 hasKeysForFormatterStye:(long long)arg2;
+ (id)_destinationsFromWhitelistDictionary:(id)arg1;
+ (id)_firstPhoneNumberOrEmailAddressFromContact:(id)arg1 formatPhoneNumber:(bool)arg2;
+ (bool)_isContact:(id)arg1 similarToContact:(id)arg2;
+ (bool)_isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+ (bool)_isUnknownContact:(id)arg1 equalToUnknownContact:(id)arg2;
+ (id)_safeContactDetailStringForLogging:(id)arg1;
+ (id)_safeContactNameStringForLogging:(id)arg1 handle:(id)arg2;
+ (id)_unifiedContactWithIdentifier:(id)arg1 orDestination:(id)arg2 usingContactStore:(id)arg3 keysToFetch:(id)arg4;
+ (id)_unifiedMeContactFromContactStore:(id)arg1 keysToFetch:(id)arg2;
+ (id)_unknownContactWithDestination:(id)arg1;
+ (id)canonicalDestinationsForContact:(id)arg1;
+ (id)validatedWhitelistFromDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)_deleteWhitelist;
- (bool)_didIncomingOutgoingOrSupportChange:(id)arg1;
- (void)_didInitiateCallToDestination:(id)arg1 date:(id)arg2;
- (void)_didReceiveCallFromDestination:(id)arg1 date:(id)arg2;
- (bool)_generateDestinationsFromWhitelist;
- (void)_handleContactsPrefSync;
- (bool)_loadWhitelistFromDefaults;
- (void)_logDestinations;
- (void)_notifyObserversDestinationsChanged;
- (void)_notifyObserversRecencyChanged;
- (void)_reloadWhitelist;
- (void)_resetStoreDemoContent;
- (void)_saveWhitelist;
- (bool)_shouldHandleResetStoreDemoContent;
- (void)addDestinations:(id)arg1;
- (void)addObserver:(id)arg1;
- (bool)contactSupportsTinCan:(id)arg1;
- (id)dateAddedForDestination:(id)arg1;
- (void)dealloc;
- (id)defaults;
- (id)destinations;
- (void)didInitiateCallToContact:(id)arg1 date:(id)arg2;
- (void)didReceiveCallFromContact:(id)arg1 date:(id)arg2;
- (id)init;
- (bool)isContactAccepted:(id)arg1;
- (bool)isDestinationAccepted:(id)arg1;
- (id)mostRecentCallDateForContact:(id)arg1;
- (id)mostRecentCallDateForDestination:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeDestinations:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setContact:(id)arg1 supportsTinCan:(bool)arg2;
- (void)setDefaults:(id)arg1;
- (void)setDestinations:(id)arg1;
- (void)setShouldObserveWhitelistDefaultChanges:(bool)arg1;
- (void)setWhitelist:(id)arg1;
- (bool)shouldObserveWhitelistDefaultChanges;
- (long long)stateForContact:(id)arg1;
- (id)whitelist;

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