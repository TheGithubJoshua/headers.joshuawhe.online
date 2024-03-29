<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AFSettingsConnection.h</title>
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

/PrivateFrameworks/AssistantServices.framework/AFSettingsConnection.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices (1)
 */

@interface AFSettingsConnection : NSObject {
    NSXPCConnection * _connection;
    <AFSettingsDelegate> * _delegate;
    AFVoiceInfo * _selectedVoice;
    NSArray * _voices;
    NSObject<OS_dispatch_queue> * _voicesQueue;
}

@property (setter=_setDelegate:, nonatomic) <AFSettingsDelegate> *_delegate;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_clearConnection;
- (void)_clearSyncNeededForKey:(id)arg1;
- (id)_connection;
- (id)_delegate;
- (void)_fetchPeerData:(id /* block */)arg1;
- (id)_filterVoices:(id)arg1 forLanguage:(id)arg2;
- (void)_getSharedCompanionInfo:(id /* block */)arg1;
- (void)_runServiceMaintenance;
- (void)_setDelegate:(id)arg1;
- (void)_setSyncNeededForReason:(id)arg1;
- (void)_setSyncVerificationNeededAndFullReportNeeded:(bool)arg1 shouldPostNotification:(bool)arg2 completion:(id /* block */)arg3;
- (void)_setVoices:(id)arg1;
- (id)_settingsService;
- (id)_settingsServiceWithErrorHandler:(id /* block */)arg1;
- (void)_startDeepSyncVerificationForKeys:(id)arg1;
- (void)_syncDataWithAnchorKeys:(id)arg1 forceReset:(bool)arg2 reason:(id)arg3 completion:(id /* block */)arg4;
- (void)_tellDelegatePartialVerificationResult:(id)arg1;
- (void)_tellDelegateServerVerificationReport:(id)arg1;
- (void)_updateVoicesIncludingAssetInfo:(bool)arg1 completion:(id /* block */)arg2;
- (id)_voices;
- (id)accounts;
- (void)barrier;
- (void)configOverrides:(id /* block */)arg1;
- (void)createOfflineSpeechProfileWithLanguage:(id)arg1 JSONData:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void)deleteAccountWithIdentifier:(id)arg1;
- (void)disableAndDeleteCloudSyncWithCompletion:(id /* block */)arg1;
- (void)fetchAccountsWithCompletion:(id /* block */)arg1;
- (void)fetchEventRecordsFromAnalyticsStoreAtPath:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchExperimentConfigurationsWithCompletion:(id /* block */)arg1;
- (void)fetchExperimentContextWithCompletion:(id /* block */)arg1;
- (void)fetchSupportedLanguageCodes:(id /* block */)arg1;
- (void)forceMultiUserSync:(bool)arg1 download:(bool)arg2 completion:(id /* block */)arg3;
- (void)getAvailableVoicesForLanguage:(id)arg1 includeAssetInfo:(bool)arg2 completion:(id /* block */)arg3;
- (void)getAvailableVoicesForRecognitionLanguage:(id)arg1 completion:(id /* block */)arg2;
- (void)getAvailableVoicesForRecognitionLanguage:(id)arg1 includeAssetInfo:(bool)arg2 completion:(id /* block */)arg3;
- (void)getAvailableVoicesForSynthesisLanguage:(id)arg1 completion:(id /* block */)arg2;
- (void)getBluetoothDeviceWithAddress:(id)arg1 completion:(id /* block */)arg2;
- (void)getBluetoothDeviceWithUID:(id)arg1 completion:(id /* block */)arg2;
- (void)getConnectedBluetoothDeviceInfoArrayWithCompletion:(id /* block */)arg1;
- (void)getDevicesWithAvailablePHSAssetsForLanguage:(id)arg1 completion:(id /* block */)arg2;
- (void)getDevicesWithAvailablePHSAssetsOnDeviceCheck:(id /* block */)arg1;
- (void)getHorsemanSupplementalLanguageDictionary:(id /* block */)arg1;
- (void)getOfflineDictationStatusWithCompletion:(id /* block */)arg1;
- (void)getPairedBluetoothDeviceInfoArrayWithCompletion:(id /* block */)arg1;
- (void)getPeerIdentifiers:(id /* block */)arg1;
- (void)getSiriOutputVolumeWithCompletion:(id /* block */)arg1;
- (void)getStereoPairState:(id /* block */)arg1;
- (void)getStereoPartnerLastMyriadWinDate:(id /* block */)arg1;
- (void)getSupplementalLanguageDictionaryForProduct:(id)arg1 completion:(id /* block */)arg2;
- (void)getSupplementalLanguagesDictionary:(id /* block */)arg1;
- (void)getSupplementalLanguagesForProduct:(id)arg1 forBuildVersion:(id)arg2 completion:(id /* block */)arg3;
- (void)getSupplementalLanguagesModificationDate:(id /* block */)arg1;
- (id)init;
- (void)killDaemon;
- (void)purgeAnalyticsStoreWithCompletion:(id /* block */)arg1;
- (void)resetAnalyticsStoreWithCompletion:(id /* block */)arg1;
- (void)saveAccount:(id)arg1 setActive:(bool)arg2;
- (void)sendMetricsToServerWithCompletion:(id /* block */)arg1;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)setAssistantEnabled:(bool)arg1;
- (void)setConfigOverrides:(id)arg1 completion:(id /* block */)arg2;
- (void)setDictationEnabled:(bool)arg1;
- (void)setHorsemanSupplementalLanguageDictionary:(id)arg1 completion:(id /* block */)arg2;
- (void)setLanguage:(id)arg1;
- (void)setLanguage:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setOfflineDictationProfileOverridePath:(id)arg1 completion:(id /* block */)arg2;
- (void)setOutputVoice:(id)arg1;
- (void)setOutputVoice:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setSiriOutputVolume:(float)arg1 completion:(id /* block */)arg2;
- (void)setSupplementalLanguageDictionary:(id)arg1 forProduct:(id)arg2 completion:(id /* block */)arg3;
- (void)setSupplementalLanguages:(id)arg1 forProduct:(id)arg2 forBuildVersion:(id)arg3 completion:(id /* block */)arg4;
- (void)startAudioPlaybackRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)startRemoteRequest:(id)arg1 onPeer:(id)arg2 completion:(id /* block */)arg3;
- (void)startUIRequest:(id)arg1;
- (void)startUIRequestWithSpeechAudioFileURL:(id)arg1;
- (void)startUIRequestWithText:(id)arg1;
- (void)stopAllAudioPlaybackRequests:(bool)arg1;
- (void)stopAudioPlaybackRequest:(id)arg1 immediately:(bool)arg2;
- (void)updateOfflineSpeechProfileWithLanguage:(id)arg1 completion:(id /* block */)arg2;

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
