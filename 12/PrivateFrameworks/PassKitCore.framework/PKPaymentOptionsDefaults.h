<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKPaymentOptionsDefaults.h</title>
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

/PrivateFrameworks/PassKitCore.framework/PKPaymentOptionsDefaults.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore (1)
 */

@interface PKPaymentOptionsDefaults : NSObject <PKPaymentOptionsProtocol, PKPaymentOptionsSynchronizationDelegate> {
    NSDictionary * _defaultBillingAddresses;
    CNContact * _defaultContactEmail;
    CNContact * _defaultContactName;
    CNContact * _defaultContactPhone;
    CNContact * _defaultShippingAddress;
    int  _defaultsChangedNotifyToken;
    PKPaymentOptionsSynchronization * _optionsSynchronization;
    unsigned long long  _postedNotificationCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *defaultBillingAddresses;
@property (nonatomic, retain) CNContact *defaultContactEmail;
@property (nonatomic, retain) CNContact *defaultContactName;
@property (nonatomic, retain) CNContact *defaultContactPhone;
@property (nonatomic, retain) CNContact *defaultShippingAddress;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaults;

- (void).cxx_destruct;
- (id)_contactForKeychainKey:(id)arg1;
- (void)_deleteKeychainDataForKey:(id)arg1;
- (void)_deleteKeychainDataForKey:(id)arg1 localOnly:(bool)arg2;
- (void)_hardDeleteDefaultBillingAddress;
- (id)_keychainDataForKey:(id)arg1;
- (id)_lastUpdatedDatesForBillingAddresses;
- (id)_rawDefaultBillingAddresses;
- (void)_registerForChangeNotifications;
- (void)_setContact:(id)arg1 forKeychainKey:(id)arg2;
- (void)_setContact:(id)arg1 property:(id)arg2 forKeychainKey:(id)arg3;
- (void)_setKeychainData:(id)arg1 forKey:(id)arg2;
- (void)_setRawDefaultBillingAddresses:(id)arg1;
- (void)_unregisterForChangeNotifications;
- (void)dealloc;
- (id)defaultBillingAddressForPaymentPass:(id)arg1;
- (id)defaultBillingAddressForPrimaryAccountIdentifier:(id)arg1;
- (id)defaultBillingAddressForRemotePaymentInstrument:(id)arg1;
- (id)defaultBillingAddresses;
- (id)defaultContactEmail;
- (id)defaultContactName;
- (id)defaultContactPhone;
- (id)defaultShippingAddress;
- (void)deleteAllDefaults;
- (void)deleteAllLocalDefaults;
- (void)deleteDefaultBillingAddress:(id)arg1;
- (void)deleteDefaultContactEmail;
- (void)deleteDefaultContactName;
- (void)deleteDefaultContactPhone;
- (void)deleteDefaultForContactKey:(id)arg1;
- (void)deleteDefaultShippingAddress;
- (id)init;
- (id)lastUpdatedDateForPrimaryAccountIdentifier:(id)arg1;
- (void)migrateToSyncable;
- (void)optionsSynchronizationDidChangeTo:(bool)arg1;
- (void)setDefaultBillingAddress:(id)arg1 forPaymentPass:(id)arg2;
- (void)setDefaultBillingAddress:(id)arg1 forPrimaryAccountIdentifier:(id)arg2;
- (void)setDefaultBillingAddress:(id)arg1 forRemotePaymentInstrument:(id)arg2;
- (void)setDefaultContactEmail:(id)arg1;
- (void)setDefaultContactName:(id)arg1;
- (void)setDefaultContactPhone:(id)arg1;
- (void)setDefaultShippingAddress:(id)arg1;
- (void)updateLastUpdatedDate:(id)arg1 forPrimaryAccountIdentifier:(id)arg2;

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
