<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ExposureNotificationUI.ENManagerAdapter.h</title>
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

/PrivateFrameworks/ExposureNotificationUI.framework/ExposureNotificationUI.ENManagerAdapter.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ExposureNotificationUI.framework/ExposureNotificationUI (1)
 */

@interface ExposureNotificationUI.ENManagerAdapter : NSObject <ExposureNotificationUI.ExposureNotifying> {
    void activationGroup;
    void areAvailabilityAlertsEnabled;
    void exposureNotificationStatus;
    void fakeVerificationSession;
    void isAvailabilityAlertsSwitchEnabled;
    void isExposureLoggingDataPresent;
    void manager;
    void statusChangeObservers;
    void statusObservation;
}

@property (nonatomic) bool areAvailabilityAlertsEnabled;
@property (nonatomic) long long exposureNotificationStatus;
@property (nonatomic) bool isAvailabilityAlertsSwitchEnabled;
@property (nonatomic) bool isExposureLoggingDataPresent;
@property (nonatomic, readonly) ENManager *manager;
@property (nonatomic, copy) NSSet *statusChangeObservers;

+ (id)defaultAdapter;
+ (void)setDefaultAdapter:(id)arg1;

- (void).cxx_destruct;
- (void)allRegionConfigurations:(id /* block */)arg1;
- (bool)areAvailabilityAlertsEnabled;
- (void)dealloc;
- (long long)exposureNotificationStatus;
- (void)fetchAgencyModelForRegionCode:(id)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (void)fetchAllEntities:(id /* block */)arg1;
- (void)fetchSubdivisionsForRegion:(id)arg1 completion:(id /* block */)arg2;
- (void)getAgencyModelForBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)getAgencyModelForRegionCode:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (bool)isAvailabilityAlertsSwitchEnabled;
- (bool)isExposureLoggingDataPresent;
- (void)isPreReleaseAuthorizedForRegion:(id)arg1 completion:(id /* block */)arg2;
- (void)isTravelStatusEnabledForRegion:(id)arg1 completion:(id /* block */)arg2;
- (void)latestExposureNotification:(id /* block */)arg1;
- (id)manager;
- (void)notifyChangeObserversForChangeFrom:(long long)arg1 to:(long long)arg2;
- (void)onboardingDidStartForRegion:(id)arg1 source:(long long)arg2;
- (void)refreshStatusWithCompletion:(id /* block */)arg1;
- (void)resetAllDataAndDisableExposureNotifications:(id /* block */)arg1;
- (void)setActivePhaseOneAppWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)setActiveRegion:(id)arg1 completion:(id /* block */)arg2;
- (void)setAreAvailabilityAlertsEnabled:(bool)arg1;
- (void)setAvailabilityAlertsEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (void)setExposureNotificationEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (void)setExposureNotificationStatus:(long long)arg1;
- (void)setIsAvailabilityAlertsSwitchEnabled:(bool)arg1;
- (void)setIsExposureLoggingDataPresent:(bool)arg1;
- (void)setPreReleaseAuthorized:(bool)arg1 region:(id)arg2 completion:(id /* block */)arg3;
- (void)setShareAnalyticsEnabled:(bool)arg1 region:(id)arg2 version:(id)arg3 completion:(id /* block */)arg4;
- (void)setStatusChangeObservers:(id)arg1;
- (void)setTravelStatusEnabled:(bool)arg1 region:(id)arg2 completion:(id /* block */)arg3;
- (void)setUserConsent:(long long)arg1 region:(id)arg2 text:(id)arg3 version:(id)arg4 completion:(id /* block */)arg5;
- (void)setWeeklySummaryEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (id)statusChangeObservers;
- (bool)tccContainsRecordForBundleIdentifier:(id)arg1;

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
