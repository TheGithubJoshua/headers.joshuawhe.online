<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AMSDefaults.h</title>
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

/PrivateFrameworks/AppleMediaServices.framework/AMSDefaults.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices (1)
 */

@interface AMSDefaults : NSObject

+ (bool)_boolForKey:(id)arg1 defaultValue:(bool)arg2;
+ (bool)_boolForKey:(id)arg1 defaultValue:(bool)arg2 domain:(struct __CFString { }*)arg3;
+ (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2;
+ (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 domain:(struct __CFString { }*)arg3;
+ (double)_randomDouble;
+ (void)_setBool:(bool)arg1 forKey:(id)arg2;
+ (void)_setBool:(bool)arg1 forKey:(id)arg2 domain:(struct __CFString { }*)arg3;
+ (void)_setInteger:(long long)arg1 forKey:(id)arg2;
+ (void)_setValue:(id)arg1 forKey:(id)arg2;
+ (void)_setValue:(id)arg1 forKey:(id)arg2 domain:(struct __CFString { }*)arg3;
+ (id)_valueForKey:(id)arg1;
+ (id)_valueForKey:(id)arg1 domain:(struct __CFString { }*)arg2;
+ (bool)allowUpsellEnrollmentForAppliedAccounts;
+ (bool)alwaysSendCacheBuster;
+ (bool)alwaysSendGUID;
+ (id)bagURLCookies;
+ (long long)cardEnrollmentAutomatic;
+ (long long)cardEnrollmentManual;
+ (long long)cardEnrollmentSilent;
+ (long long)cardEnrollmentUpsell;
+ (id)defaultPaymentPassIdentifier;
+ (id)deviceOfferEligibility;
+ (id)deviceOffersSerialNumber;
+ (bool)didRetrieveDeviceOffers;
+ (bool)disableHARLogging;
+ (id)extendedBiometricACLVersion;
+ (long long)forceLoadUrlMetrics;
+ (bool)ignoreServerTrustEvaluation;
+ (bool)includeFullRequestInHARLogging;
+ (bool)includeFullResponseInHARLogging;
+ (id)mescalCertExpiration;
+ (id)metricsCanaryIdentifier;
+ (id)metricsTimingWindowStartTime;
+ (bool)migratedToNewCookieStorage;
+ (bool)perfomedDeviceOfferSetup;
+ (id)primaryBiometricACLVersion;
+ (long long)reversePushEnabled;
+ (void)setAllowUpsellEnrollmentForAppliedAccounts:(bool)arg1;
+ (void)setAlwaysSendCacheBuster:(bool)arg1;
+ (void)setAlwaysSendGUID:(bool)arg1;
+ (void)setBagURLCookies:(id)arg1;
+ (void)setCardEnrollmentAutomatic:(long long)arg1;
+ (void)setCardEnrollmentManual:(long long)arg1;
+ (void)setCardEnrollmentSilent:(long long)arg1;
+ (void)setCardEnrollmentUpsell:(long long)arg1;
+ (void)setDefaultPaymentPassIdentifier:(id)arg1;
+ (void)setDeviceOfferEligibility:(id)arg1;
+ (void)setDidRetrieveDeviceOffers:(bool)arg1;
+ (void)setDisableHARLogging:(bool)arg1;
+ (void)setExtendedBiometricACLVersion:(id)arg1;
+ (void)setForceLoadUrlMetrics:(long long)arg1;
+ (void)setIgnoreServerTrustEvaluation:(bool)arg1;
+ (void)setIncludeFullRequestInHARLogging:(bool)arg1;
+ (void)setIncludeFullResponseInHARLogging:(bool)arg1;
+ (void)setMescalCertExpiration:(id)arg1;
+ (void)setMetricsCanaryIdentifier:(id)arg1;
+ (void)setMetricsTimingWindowStartTime:(id)arg1;
+ (void)setMigratedToNewCookieStorage:(bool)arg1;
+ (void)setPerfomedDeviceOfferSetup:(bool)arg1;
+ (void)setPrimaryBiometricACLVersion:(id)arg1;
+ (void)setReversePushEnabled:(long long)arg1;
+ (void)setShowSandboxAccountUI:(bool)arg1;
+ (void)setStorefrontSuffixes:(id)arg1;
+ (bool)shouldSampleWithPercentage:(double)arg1 sessionDuration:(double)arg2 identifier:(id)arg3;
+ (bool)shouldSampleWithPercentageValue:(id)arg1 sessionDurationValue:(id)arg2 identifier:(id)arg3;
+ (bool)showSandboxAccountUI;
+ (bool)ss_ignoreServerTrustEvaluation;
+ (id)storefrontSuffixes;
+ (bool)useNewCookieStorage;

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