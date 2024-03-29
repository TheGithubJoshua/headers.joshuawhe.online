<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CADMCAccountAccessHandler.h</title>
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

/PrivateFrameworks/CalendarDaemon.framework/CADMCAccountAccessHandler.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon ()
 */

@interface CADMCAccountAccessHandler : NSObject <CADAccountAccessHandler> {
    unsigned long long  _accountManagement;
    <CADACAccountsProvider> * _accountsProvider;
    NSString * _bundleIdentifier;
    NSObject<OS_dispatch_queue> * _cacheQueue;
    NSArray * _cachedAccounts;
    NSMutableDictionary * _cachedRestrictedStoreInfos;
    <CADCalCalendarInfoProvider> * _calCalendarInfoProvider;
    <CADCalStoreInfoProvider> * _calStoreInfoProvider;
    <CADManagedConfigurationHandler> * _managedConfigHandler;
    <CADPermissionValidator> * _permissionValidator;
}

@property (nonatomic, readonly) unsigned long long accountManagement;
@property (nonatomic, readonly) <CADACAccountsProvider> *accountsProvider;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cacheQueue;
@property (nonatomic, retain) NSArray *cachedAccounts;
@property (nonatomic, retain) NSMutableDictionary *cachedRestrictedStoreInfos;
@property (nonatomic, readonly) <CADCalCalendarInfoProvider> *calCalendarInfoProvider;
@property (nonatomic, readonly) <CADCalStoreInfoProvider> *calStoreInfoProvider;
@property (nonatomic, readonly) <CADManagedConfigurationHandler> *managedConfigHandler;
@property (nonatomic, readonly) <CADPermissionValidator> *permissionValidator;

- (void).cxx_destruct;
- (id)_cachedAccounts;
- (bool)_existingCalStoreMapsToAccountIdentifier:(id)arg1;
- (id)_filteredAccountsForAction:(unsigned long long)arg1 withUnfilteredAccounts:(id)arg2;
- (bool)_isDisabledForAction:(unsigned long long)arg1;
- (bool)_mayShowLocalAccountsForAction:(unsigned long long)arg1;
- (id)_restrictedCalStoreInfosForAction:(unsigned long long)arg1;
- (id)_restrictedCalendarRowIDsForAction:(unsigned long long)arg1;
- (void)_validateAction:(unsigned long long)arg1;
- (unsigned long long)accountManagement;
- (id)accountsProvider;
- (id)bundleIdentifier;
- (id)cacheQueue;
- (id)cachedAccounts;
- (id)cachedRestrictedStoreInfos;
- (id)calCalendarInfoProvider;
- (id)calStoreInfoProvider;
- (id)initWithCalStoreInfoProvider:(id)arg1 calendarInfoProvider:(id)arg2 accountsProvider:(id)arg3 permissionValidator:(id)arg4 managedConfigHandler:(id)arg5 accountManagement:(unsigned long long)arg6 bundleIdentifier:(id)arg7;
- (bool)isAccountManaged:(id)arg1;
- (bool)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2;
- (id)managedConfigHandler;
- (id)permissionValidator;
- (void)reset;
- (id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1;
- (void)setCachedAccounts:(id)arg1;
- (void)setCachedRestrictedStoreInfos:(id)arg1;

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
