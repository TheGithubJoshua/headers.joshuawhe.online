<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HFAccessorySettingAdapter.h</title>
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

/PrivateFrameworks/Home.framework/HFAccessorySettingAdapter.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Home.framework/Home (1)
 */

@interface HFAccessorySettingAdapter : NSObject <HFAccessorySettingsObserver, HFMediaObjectObserver> {
    HMAccessory * _accessory;
    HMAccessorySettings * _accessorySettings;
    HFHomeKitDispatcher * _dispatcher;
    NSMutableDictionary * _keyPathStringToFuture;
    NSSet * _keyPaths;
    <HFMediaProfileContainer> * _mediaProfileContainer;
    unsigned long long  _mode;
    id /* block */  _updateHandler;
    HFMediaProfileContainerSettingsValueManager * _valueManager;
    NSMutableDictionary * _watchedSettings;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) HMAccessorySettings *accessorySettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HFHomeKitDispatcher *dispatcher;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) NSMutableDictionary *keyPathStringToFuture;
@property (nonatomic, readonly, copy) NSSet *keyPaths;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic, readonly) unsigned long long mode;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) id /* block */ updateHandler;
@property (nonatomic, readonly) HFMediaProfileContainerSettingsValueManager *valueManager;
@property (nonatomic, retain) NSMutableDictionary *watchedSettings;

+ (id)createDefaultHomeSettingAdapterCollectionForProfile:(id)arg1;

- (void).cxx_destruct;
- (id)_beginMonitoringSettingsKeyPath:(id)arg1;
- (id)_endMonitoringSettingsKeyPath:(id)arg1;
- (id)_missingKeyPaths;
- (void)_reportUpdatedValueForSetting:(id)arg1;
- (bool)_setupKeyPaths;
- (void)_setupMissingKeyPaths;
- (void)_tearDownKeyPaths;
- (void)_teardownSetting:(id)arg1;
- (bool)_updateRootAccessorySettings;
- (bool)_updateRootAccessorySettingsIfNeeded;
- (void)_watchSetting:(id)arg1;
- (id)accessory;
- (void)accessorySettingWasUpdated:(id)arg1 value:(id)arg2;
- (id)accessorySettings;
- (void)accessorySettings:(id)arg1 didUpdateSetting:(id)arg2;
- (void)accessorySettings:(id)arg1 didWriteValueForSettings:(id)arg2 failedSettings:(id)arg3;
- (void)accessorySettings:(id)arg1 willWriteValueForSettings:(id)arg2;
- (id)dispatcher;
- (id)home;
- (id)init;
- (id)initWithMediaProfileContainer:(id)arg1 keyPaths:(id)arg2;
- (id)initWithMediaProfileContainer:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(id /* block */)arg4;
- (id)initWithMediaProfileContainer:(id)arg1 keyPaths:(id)arg2 updateHandler:(id /* block */)arg3;
- (id)keyPathStringToFuture;
- (id)keyPaths;
- (void)mediaObject:(id)arg1 didUpdateSettings:(id)arg2;
- (id)mediaProfileContainer;
- (unsigned long long)mode;
- (void)setDispatcher:(id)arg1;
- (void)setKeyPathStringToFuture:(id)arg1;
- (void)setWatchedSettings:(id)arg1;
- (id)settingForKeyPath:(id)arg1;
- (id)settingWatchFutureForKeyPath:(id)arg1;
- (void)settingsDidUpdate:(id)arg1;
- (id /* block */)updateHandler;
- (id)updateSetting:(id)arg1 value:(id)arg2;
- (id)updateSettingWithKeyPath:(id)arg1 value:(id)arg2;
- (id)valueManager;
- (id)watchedSettings;

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