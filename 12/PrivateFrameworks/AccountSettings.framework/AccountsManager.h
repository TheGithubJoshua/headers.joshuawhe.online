<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AccountsManager.h</title>
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

/PrivateFrameworks/AccountSettings.framework/AccountsManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings (1.0)
 */

@interface AccountsManager : NSObject {
    NSMutableDictionary * _childAccountIDToParentAccountID;
    NSMutableDictionary * _childAccountsByID;
    unsigned long long  _dataVersion;
    NSMutableArray * _orderedTopLevelAccounts;
    NSMutableDictionary * _originalAccountsByID;
    NSArray * _runtimeFixers;
    NSMutableDictionary * _topLevelAccountsByID;
}

+ (id)_notifierClassNamesForAccountType:(id)arg1 dataclass:(id)arg2;
+ (bool)_oldDAAccountsInformationFound;
+ (bool)_oldMailAccountsInformationFound;
+ (void)_setShouldSkipNotifications:(bool)arg1;
+ (void)accountDidChange:(id)arg1 forDataclass:(id)arg2;
+ (bool)accountSettingsNeedsToBeMigrated;
+ (void)accountWillChange:(id)arg1 forDataclass:(id)arg2;
+ (id)createAndLockMigrationLock;
+ (unsigned long long)currentVersion;
+ (id)displayNameForGroupOfAccountType:(id)arg1 forBeginningOfSentence:(bool)arg2;
+ (id)fullPathToAccountSettingsPlist;
+ (void)releaseMigrationLock:(id)arg1;
+ (void)removeNewAccountSettingsToMigrateOldAccountInformation;
+ (void)shouldMigrateOldMailAccounts:(bool*)arg1 oldDAAccounts:(bool*)arg2 newAccountSettings:(bool*)arg3;
+ (void)waitForMigrationToFinish;

- (void)_addNotificationToDictionary:(id)arg1 forChangeType:(int)arg2 originalProperties:(id)arg3 currentProperties:(id)arg4;
- (id)_createRuntimeFixers;
- (id)_initWithAccountsInfo:(id)arg1;
- (void)_loadChildrenFromAccount:(id)arg1;
- (void)_removeChildrenForAccountWithIdentifier:(id)arg1;
- (void)_sendNotificationsForChangedAccounts;
- (void)_setOriginalAccountDictionaries;
- (id)accountWithIdentifier:(id)arg1;
- (id)accountsWithTypes:(id)arg1;
- (id)accountsWithTypes:(id)arg1 withLoader:(id)arg2;
- (void)addChild:(id)arg1 toAccount:(id)arg2;
- (id)allBasicAccounts;
- (id)allBasicSyncableAccounts;
- (id)allMailAccounts;
- (id)basicAccountsWithTypes:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)countOfBasicAccountsWithTypes:(id)arg1;
- (unsigned long long)dataVersion;
- (void)dealloc;
- (void)deleteAccount:(id)arg1;
- (void)deleteAccountWithIdentifier:(id)arg1;
- (id)displayAccountWithSyncIdentifier:(id)arg1;
- (id)fullAccountWithIdentifier:(id)arg1 loader:(id)arg2;
- (id)fullDeviceLocalAccount;
- (id)init;
- (id)initInsideOfMigration;
- (id)initWithAccounsInfoArray:(id)arg1;
- (void)insertAccount:(id)arg1;
- (id)mergeInMemoryProperties:(id)arg1 originalProperties:(id)arg2 onDiskProperties:(id)arg3;
- (void)removeChildWithIdentifier:(id)arg1 fromAccount:(id)arg2;
- (void)replaceAccount:(id)arg1 withAccount:(id)arg2;
- (void)replaceAccountsWithTypes:(id)arg1 withAccounts:(id)arg2;
- (void)saveAllAccounts;
- (void)setDataVersion:(unsigned long long)arg1;
- (id)syncableAccountWithSyncIdentifier:(id)arg1;
- (void)updateAccount:(id)arg1;

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