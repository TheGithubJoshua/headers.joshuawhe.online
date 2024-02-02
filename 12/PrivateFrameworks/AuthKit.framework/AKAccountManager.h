<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AKAccountManager.h</title>
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

/PrivateFrameworks/AuthKit.framework/AKAccountManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit (1)
 */

@interface AKAccountManager : NSObject {
    NSObject<OS_dispatch_queue> * _accountQueue;
    ACAccountStore * _accountStore;
    ACAccountType * _appleIDAccountType;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _appleIDAccountTypeLock;
    ACAccountType * _authKitAccountType;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _authKitAccountTypeLock;
    ACAccountType * _iCloudAccountType;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _iCloudAccountTypeLock;
}

@property (nonatomic, readonly) ACAccountType *appleIDAccountType;
@property (nonatomic, readonly) ACAccountType *authKitAccountType;
@property (nonatomic, retain) ACAccountStore *store;

+ (bool)isAccountsFrameworkAvailable;
+ (id)sharedInstance;
+ (id)stringRepresentationForService:(long long)arg1;

- (void).cxx_destruct;
- (id)DSIDForAccount:(id)arg1;
- (id)_aliasesForiCloudAccount:(id)arg1;
- (id)_altDSIDForiCloudAccount:(id)arg1;
- (id)_iCloudAccountType;
- (void)_removeTokenForKeys:(id)arg1 forAccount:(id)arg2;
- (void)_removeTokenKey:(id)arg1 forAccount:(id)arg2;
- (bool)_setUsername:(id)arg1 forAccount:(id)arg2;
- (id)_tokenWithName:(id)arg1 forAccount:(id)arg2 error:(id*)arg3;
- (id)activeServiceNamesForAccount:(id)arg1;
- (id)aliasesForAccount:(id)arg1;
- (id)allAuthKitAccounts;
- (id)altDSIDForAccount:(id)arg1;
- (id)appleIDAccountType;
- (id)appleIDAccountWithAltDSID:(id)arg1;
- (id)appleIDAccountWithAppleID:(id)arg1;
- (id)authKitAccountType;
- (id)authKitAccountWithAltDSID:(id)arg1;
- (id)authKitAccountWithAppleID:(id)arg1;
- (id)authKitAccountWithDSID:(id)arg1;
- (unsigned long long)authenticationModeForAccount:(id)arg1;
- (id)continuationTokenForAccount:(id)arg1;
- (id)continuationTokenForAccount:(id)arg1 error:(id*)arg2;
- (bool)hasPrimaryiCloudAccountForAltDSID:(id)arg1;
- (bool)hasPrimaryiCloudAccountForAppleID:(id)arg1;
- (id)hearbeatTokenForAccount:(id)arg1;
- (id)hearbeatTokenForAccount:(id)arg1 error:(id*)arg2;
- (id)iCloudAccountForAltDSID:(id)arg1;
- (id)iCloudAccountForAppleID:(id)arg1;
- (id)init;
- (bool)isPrimaryiCloudAccount:(id)arg1;
- (id)masterTokenForAccount:(id)arg1;
- (id)mostRecentlyUsedAuthKitAccount;
- (bool)needsRepairForAccount:(id)arg1;
- (id)passwordResetTokenBackupForAccount:(id)arg1;
- (id)passwordResetTokenBackupForAccount:(id)arg1 error:(id*)arg2;
- (id)passwordResetTokenForAccount:(id)arg1;
- (id)passwordResetTokenForAccount:(id)arg1 error:(id*)arg2;
- (void)removeAllPasswordResetTokens;
- (void)removeContinuationTokenForAccount:(id)arg1;
- (void)removeMasterTokenForAccount:(id)arg1;
- (void)removeUnusedAndDuplicateAuthKitAccountsWithCompletion:(id /* block */)arg1;
- (unsigned long long)repairStateForAccount:(id)arg1;
- (bool)saveAccount:(id)arg1 error:(id*)arg2;
- (unsigned long long)securityLevelForAccount:(id)arg1;
- (id)servicesUsingAccount:(id)arg1;
- (void)setAccount:(id)arg1 inUse:(bool)arg2 byService:(long long)arg3;
- (void)setAliases:(id)arg1 forAccount:(id)arg2;
- (void)setAltDSID:(id)arg1 forAccount:(id)arg2;
- (void)setAuthenticationMode:(unsigned long long)arg1 forAccount:(id)arg2;
- (void)setDSID:(id)arg1 forAccount:(id)arg2;
- (void)setRepairState:(unsigned long long)arg1 forAccount:(id)arg2;
- (void)setSecurityLevel:(unsigned long long)arg1 forAccount:(id)arg2;
- (void)setStore:(id)arg1;
- (id)store;
- (id)transportableAuthKitAccount:(id)arg1;
- (void)updateUsername:(id)arg1 forAccountsWithAltDSID:(id)arg2;

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