<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MCUIDataManager.h</title>
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

/PrivateFrameworks/ManagedConfigurationUI.framework/MCUIDataManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI (1)
 */

@interface MCUIDataManager : NSObject <LSApplicationWorkspaceObserverProtocol> {
    LSApplicationWorkspace * _appWorkspace;
    int  _appsChangedNotifyToken;
    NSArray * _blockedApplications;
    NSArray * _configurationProfilesInfo;
    NSArray * _enterpriseAppSigners;
    NSArray * _freeDeveloperAppSigners;
    MCProfileInfo * _mdmProfileInfo;
    NSObject<OS_dispatch_queue> * _memberQueue;
    int  _provisioningProfileInstalledToken;
    int  _provisioningProfileRemovedToken;
    NSObject<OS_dispatch_queue> * _reloadQueue;
    NSArray * _uninstalledProfilesInfo;
}

@property (nonatomic, retain) LSApplicationWorkspace *appWorkspace;
@property (nonatomic) int appsChangedNotifyToken;
@property (nonatomic, retain) NSArray *blockedApplications;
@property (nonatomic, retain) NSArray *configurationProfilesInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *enterpriseAppSigners;
@property (nonatomic, retain) NSArray *freeDeveloperAppSigners;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MCProfileInfo *mdmProfileInfo;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic) int provisioningProfileInstalledToken;
@property (nonatomic) int provisioningProfileRemovedToken;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *reloadQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *uninstalledProfilesInfo;

+ (bool)isProfileSectionRestricted;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_reloadQueueReloadDataInBackgroundIncludingProfiles:(bool)arg1 appSigners:(bool)arg2 blockedApplications:(bool)arg3 completion:(id /* block */)arg4;
- (void)allDeviceManagementOutMDMProfileInfo:(id*)arg1 outConfigurationProfilesInfo:(id*)arg2 outUninstalledProfilesInfo:(id*)arg3 outEnterpriseAppSigners:(id*)arg4 outFreeDevAppSigners:(id*)arg5 outBlockedApplications:(id*)arg6;
- (unsigned long long)appSignerCount;
- (id)appWorkspace;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (int)appsChangedNotifyToken;
- (id)blockedApplications;
- (id)configurationProfiles;
- (id)configurationProfilesInfo;
- (void)dealloc;
- (id)enterpriseAppSigners;
- (id)freeDeveloperAppSigners;
- (id)init;
- (unsigned long long)installedProfileCount;
- (bool)isProfileSectionEmpty;
- (unsigned long long)itemCount;
- (id)mdmProfile;
- (id)mdmProfileInfo;
- (id)memberQueue;
- (void)profilesChanged:(id)arg1;
- (int)provisioningProfileInstalledToken;
- (int)provisioningProfileRemovedToken;
- (void)reloadAllDataInBackgroundWithCompletion:(id /* block */)arg1;
- (void)reloadAppSignersAndBlockedAppsInBackgroundWithCompletion:(id /* block */)arg1;
- (void)reloadDataInBackgroundIncludingProfiles:(bool)arg1 appSigners:(bool)arg2 blockedApplications:(bool)arg3 completion:(id /* block */)arg4;
- (void)reloadProfilesInBackgroundWithCompletion:(id /* block */)arg1;
- (id)reloadQueue;
- (void)setAppWorkspace:(id)arg1;
- (void)setAppsChangedNotifyToken:(int)arg1;
- (void)setBlockedApplications:(id)arg1;
- (void)setConfigurationProfilesInfo:(id)arg1;
- (void)setEnterpriseAppSigners:(id)arg1;
- (void)setFreeDeveloperAppSigners:(id)arg1;
- (void)setMdmProfileInfo:(id)arg1;
- (void)setMemberQueue:(id)arg1;
- (void)setProvisioningProfileInstalledToken:(int)arg1;
- (void)setProvisioningProfileRemovedToken:(int)arg1;
- (void)setReloadQueue:(id)arg1;
- (void)setUninstalledProfilesInfo:(id)arg1;
- (id)uninstalledProfilesInfo;

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
