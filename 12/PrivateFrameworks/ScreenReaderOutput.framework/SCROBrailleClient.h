<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SCROBrailleClient.h</title>
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

/PrivateFrameworks/ScreenReaderOutput.framework/SCROBrailleClient.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput (562.845)
 */

@interface SCROBrailleClient : NSObject {
    NSData * _aggregatedStatusCache;
    NSData * _aggregatedStatusPending;
    SCROConnection * _connection;
    SCRCTargetSelectorTimer * _deathTimer;
    id  _delegate;
    bool  _delegateWantsKeypresses;
    bool  _delegateWantsReplaceTextRange;
    bool  _displayDescriptorCallbackEnabled;
    bool  _isReady;
    bool  _keepConnectionAlive;
    NSLock * _lock;
    NSMutableAttributedString * _mainStringCache;
    NSMutableAttributedString * _mainStringPending;
    bool  _needsDisplay;
    bool  _wantsDisconnectMessage;
    bool  _wantsDisplayConfigurationChanged;
    bool  _wantsReconnectMessage;
}

@property (nonatomic) int inputContractionMode;
@property (nonatomic) bool inputEightDotBraille;
@property (nonatomic) bool wordWrapEnabled;

+ (void)logBrailleRequests:(bool)arg1;
+ (id)statusAttributeDotText;

- (void).cxx_destruct;
- (void)_deathTimerHandler;
- (void)_deviceConnected:(id)arg1;
- (id)_getWorkingString;
- (id)_lazyConnection;
- (void)_refreshAfterReconnect;
- (void)_registerDelegate;
- (void)_setupDeviceDetection;
- (id)aggregatedStatus;
- (bool)alwaysUsesNemethCodeForTechnicalText;
- (bool)automaticBrailleTranslationEnabled;
- (int)contractionMode;
- (void)dealloc;
- (id)delegate;
- (void)display;
- (bool)displayDescriptorCallbackEnabled;
- (void)displayIfNeeded;
- (int)displayMode;
- (id)driverConfiguration;
- (void)exitCurrentDisplayMode;
- (void)handleCallback:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (int)inputContractionMode;
- (bool)inputEightDotBraille;
- (bool)isConfigured;
- (bool)isConnected;
- (bool)keepConnectionAlive;
- (void)loadDisplayWithBluetoothDeviceAddress:(id)arg1;
- (id)mainAttributedString;
- (long long)masterStatusCellIndex;
- (bool)needsDisplay;
- (void)panDisplayLeft:(int)arg1;
- (void)panDisplayRight:(int)arg1;
- (id)pendingAggregatedStatus;
- (id)pendingMainAttributedString;
- (unsigned int)persistentKeyModifiers;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfCellRepresentingCharacterAtIndex:(long long)arg1;
- (void)removeDisplayWithBluetoothDeviceAddress:(id)arg1;
- (void)selectAllForToken:(long long)arg1;
- (void)setAggregatedStatus:(id)arg1;
- (void)setAlertString:(id)arg1 timeout:(double)arg2 priority:(int)arg3;
- (void)setAlwaysUsesNemethCodeForTechnicalText:(bool)arg1;
- (void)setAnnouncementString:(id)arg1;
- (void)setAnnouncementsDisplayMode;
- (void)setAutomaticBrailleTranslationEnabled:(bool)arg1;
- (void)setContractionMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayDescriptorCallbackEnabled:(bool)arg1;
- (void)setExpandedStatusDisplayModeWithStatus:(id)arg1;
- (void)setFocused:(bool)arg1 forToken:(long long)arg2;
- (void)setInputContractionMode:(int)arg1;
- (void)setInputEightDotBraille:(bool)arg1;
- (void)setKeepConnectionAlive:(bool)arg1;
- (void)setKeyboardHelpIsOn:(bool)arg1;
- (void)setMainAttributedString:(id)arg1;
- (void)setMasterStatusCellIndex:(long long)arg1;
- (void)setPersistentKeyModifiers:(unsigned int)arg1;
- (void)setPrepareToMemorizeNextKey:(bool)arg1 immediate:(bool)arg2 forDisplayWithToken:(int)arg3;
- (void)setPrimaryBrailleDisplay:(int)arg1;
- (void)setSelection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 forToken:(long long)arg2;
- (void)setShowDotsSevenAndEight:(bool)arg1;
- (void)setShowEightDotBraille:(bool)arg1;
- (void)setTableIdentifier:(id)arg1;
- (void)setVirtualStatusAlignment:(int)arg1;
- (void)setWordWrapEnabled:(bool)arg1;
- (bool)showDotsSevenAndEight;
- (bool)showEightDotBraille;
- (void)showNextAnnouncement;
- (void)showPreviousAnnouncement;
- (void)simulateKeypress:(id)arg1;
- (id)tableIdentifier;
- (id)tokenArray;
- (long long)tokenForRouterIndex:(long long)arg1 location:(long long*)arg2 appToken:(id*)arg3 forDisplayWithToken:(int)arg4;
- (void)unselectAllForToken:(long long)arg1;
- (int)virtualStatusAlignment;
- (bool)wordWrapEnabled;

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