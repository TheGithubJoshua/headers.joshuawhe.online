<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ADCoreSettings.h</title>
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

/PrivateFrameworks/AdCore.framework/ADCoreSettings.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore (1)
 */

@interface ADCoreSettings : ADSingleton {
    double  _NSURLConnectionTimeout;
    double  _NSURLTransactionTimeout;
    double  _adServerTimeoutInterval;
    NSString * _bundleIdentifier;
    int  _connectionType;
    NSString * _currentCarrierMCC;
    NSString * _currentCarrierMNC;
    NSURL * _defaultConfigurationServerURL;
    NSURL * _defaultServerURL;
    NSString * _deviceModel;
    bool  _educationModeEnabled;
    bool  _hasDeterminedRoamingStatus;
    NSString * _homeCarrierMCC;
    NSString * _homeCarrierMNC;
    NSString * _iTunesStorefront;
    bool  _internationalRoaming;
    double  _jingleTimeoutInterval;
    NSString * _osVersionAndBuild;
    int  _runState;
    NSString * _storefrontLocalizationLanguage;
    float  _timezone;
}

@property (nonatomic, readonly) NSUUID *IDFA;
@property (nonatomic) double NSURLConnectionTimeout;
@property (nonatomic) double NSURLTransactionTimeout;
@property (nonatomic) double adServerTimeoutInterval;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic) int connectionType;
@property (nonatomic, copy) NSString *currentCarrierMCC;
@property (nonatomic, copy) NSString *currentCarrierMNC;
@property (nonatomic, readonly) NSString *customJinglePayload;
@property (nonatomic, retain) NSURL *defaultConfigurationServerURL;
@property (nonatomic, retain) NSURL *defaultServerURL;
@property (nonatomic, readonly) bool deviceLimitsAdTracking;
@property (nonatomic, retain) NSString *deviceModel;
@property (nonatomic, readonly) bool educationModeEnabled;
@property (nonatomic) bool hasDeterminedRoamingStatus;
@property (nonatomic, copy) NSString *homeCarrierMCC;
@property (nonatomic, copy) NSString *homeCarrierMNC;
@property (nonatomic, readonly) ACAccount *iCloudAccount;
@property (nonatomic, readonly) NSString *iCloudAccountIdentifier;
@property (nonatomic, readonly) NSString *iCloudDSID;
@property (nonatomic, readonly) NSString *iTunesAccountDSID;
@property (nonatomic, readonly) ACAccount *iTunesStoreAccount;
@property (nonatomic, retain) NSString *iTunesStorefront;
@property (nonatomic) bool internationalRoaming;
@property (nonatomic) bool isLATEnabled;
@property (nonatomic, readonly) bool isManagedAppleID;
@property (nonatomic, readonly) bool isManagediCloudAccount;
@property (nonatomic, readonly) bool isManagediTunesAccount;
@property (nonatomic) double jingleTimeoutInterval;
@property (nonatomic, readonly) bool limitAdTrackingRestrictionEnabledBySpringboard;
@property (nonatomic, readonly) NSString *localeIdentifier;
@property (nonatomic) int maxSegmentSendInterval;
@property (nonatomic, retain) NSString *osVersionAndBuild;
@property (nonatomic) int runState;
@property (nonatomic) int segmentRetrievalInterval;
@property (nonatomic, retain) NSString *storefrontLocalizationLanguage;
@property (nonatomic) float timezone;

+ (bool)educationModeEnabled;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)IDFA;
- (double)NSURLConnectionTimeout;
- (double)NSURLTransactionTimeout;
- (double)adServerTimeoutInterval;
- (id)bundleIdentifier;
- (void)clearAdvertisingIdentifier;
- (int)connectionType;
- (id)currentCarrierMCC;
- (id)currentCarrierMNC;
- (id)customJinglePayload;
- (id)defaultConfigurationServerURL;
- (id)defaultServerURL;
- (id)deviceDescription;
- (bool)deviceLimitsAdTracking;
- (id)deviceModel;
- (int)deviceRunStateForBundleIdentifier:(id)arg1;
- (bool)deviceUnlockedOnce;
- (bool)educationModeEnabled;
- (void)expire;
- (void)gatherTelephonyData;
- (bool)hasDeterminedRoamingStatus;
- (id)homeCarrierMCC;
- (id)homeCarrierMNC;
- (id)iCloudAccount;
- (id)iCloudAccountIdentifier;
- (id)iCloudDSID;
- (id)iTunesAccountDSID;
- (id)iTunesStoreAccount;
- (id)iTunesStorefront;
- (id)init;
- (bool)internationalRoaming;
- (bool)isLATEnabled;
- (bool)isLATRestrictedByProfile;
- (bool)isManagedAppleID;
- (bool)isManagediCloudAccount;
- (bool)isManagediTunesAccount;
- (double)jingleTimeoutInterval;
- (bool)limitAdTrackingRestrictionEnabledBySpringboard;
- (id)localeIdentifier;
- (int)maxSegmentSendInterval;
- (id)osVersionAndBuild;
- (bool)purpleBuddyWillRun;
- (void)reloadStorefront:(id /* block */)arg1;
- (int)runState;
- (int)segmentRetrievalInterval;
- (void)setAdServerTimeoutInterval:(double)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setConnectionType:(int)arg1;
- (void)setCurrentCarrierMCC:(id)arg1;
- (void)setCurrentCarrierMNC:(id)arg1;
- (void)setDefaultConfigurationServerURL:(id)arg1;
- (void)setDefaultServerURL:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setHasDeterminedRoamingStatus:(bool)arg1;
- (void)setHomeCarrierMCC:(id)arg1;
- (void)setHomeCarrierMNC:(id)arg1;
- (void)setITunesStorefront:(id)arg1;
- (void)setInternationalRoaming:(bool)arg1;
- (void)setIsLATEnabled:(bool)arg1;
- (void)setJingleTimeoutInterval:(double)arg1;
- (void)setMaxSegmentSendInterval:(int)arg1;
- (void)setNSURLConnectionTimeout:(double)arg1;
- (void)setNSURLTransactionTimeout:(double)arg1;
- (void)setOsVersionAndBuild:(id)arg1;
- (void)setRunState:(int)arg1;
- (void)setSegmentRetrievalInterval:(int)arg1;
- (void)setStorefrontLocalizationLanguage:(id)arg1;
- (void)setTimezone:(float)arg1;
- (id)storefrontLocalizationLanguage;
- (float)timezone;

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
