<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKDBackingAccount.h</title>
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

/PrivateFrameworks/CloudKitDaemon.framework/CKDBackingAccount.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon (736.235)
 */

@interface CKDBackingAccount : NSObject {
    bool  _canAuthWithCloudKit;
}

@property (nonatomic, readonly) bool canAuthWithCloudKit;
@property (nonatomic, readonly) NSString *displayedHostname;
@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) NSPersonNameComponents *fullName;
@property (nonatomic, readonly) bool iCloudDriveAllowsCellularAccess;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isFakeAccount;
@property (nonatomic, readonly) NSString *primaryEmail;
@property (nonatomic, readonly) NSURL *privateCloudDBURL;
@property (nonatomic, readonly) NSURL *privateCodeServiceURL;
@property (nonatomic, readonly) NSURL *privateDatabaseRPCServiceURL;
@property (nonatomic, readonly) NSURL *privateDeviceServiceURL;
@property (nonatomic, readonly) NSURL *privateMetricsServiceURL;
@property (nonatomic, readonly) NSURL *privateShareServiceURL;
@property (nonatomic, readonly) NSString *serverPreferredPushEnvironment;
@property (nonatomic, readonly) NSString *sharingURLHostname;
@property (nonatomic, readonly) NSString *username;

+ (bool)_lockedEnsureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2;
+ (Class)_platformBackingAccountClass;
+ (id)accountQueue;
+ (id)accountWithIdentifier:(id)arg1 inStore:(id)arg2;
+ (void)ensureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2;
+ (id)fakeAccountWithEmail:(id)arg1 password:(id)arg2 propertyOverrides:(id)arg3 overridesByDataclass:(id)arg4;
+ (id)primaryAccountInStore:(id)arg1;

- (id)_init;
- (id)accountPropertiesForDataclass:(id)arg1;
- (bool)canAuthWithCloudKit;
- (bool)canRenew;
- (id)ckAccount;
- (id)cloudKitAuthTokenWithError:(id*)arg1;
- (void)displayAuthenticationPromptWithReason:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)displayedHostname;
- (id)dsid;
- (id)fullName;
- (id)iCloudAuthTokenWithError:(id*)arg1;
- (bool)iCloudDriveAllowsCellularAccess;
- (id)identifier;
- (id)init;
- (bool)isDataclassEnabled:(id)arg1;
- (bool)isFakeAccount;
- (id)parentAppleAccount;
- (id)primaryEmail;
- (id)privateCloudDBURL;
- (id)privateCodeServiceURL;
- (id)privateDatabaseRPCServiceURL;
- (id)privateDeviceServiceURL;
- (id)privateMetricsServiceURL;
- (id)privateShareServiceURL;
- (void)renewAuthTokenInStore:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)serverPreferredPushEnvironment;
- (id)sharingURLHostname;
- (void)updateAccountPropertiesAndSaveAccountInStore:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)urlForDataclass:(id)arg1;
- (id)username;
- (void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(id /* block */)arg4;

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