<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BRInterfaceAOP.h</title>
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

/PrivateFrameworks/ButtonResolver.framework/BRInterfaceAOP.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver ()
 */

@interface BRInterfaceAOP : BRInterface {
    unsigned int  _arrivalNotification;
    unsigned int  _connect;
    bool  _fastHaptics;
    NSMutableIndexSet * _freeSlots;
    bool  _isReady;
    HAButtonHapticsLoader * _loader;
    unsigned long long  _maxAssetSlots;
    id /* block */  _notificationBlock;
    NSString * _notificationName;
    struct IONotificationPort { } * _notificationPort;
    unsigned int  _service;
    NSMutableArray * _slotArray;
    NSMutableDictionary * _stateDict;
}

@property (nonatomic) unsigned int connect;
@property (nonatomic, readonly) bool fastHaptics;
@property (nonatomic) unsigned int service;

+ (int)_convertAssertion:(unsigned long long)arg1;
+ (int)_convertClickState:(unsigned long long)arg1;
+ (int)_convertForceFeel:(unsigned long long)arg1;
+ (id)interface;

- (void)_findService;
- (void)_receiveLoaderAvailableNotification:(id)arg1;
- (bool)_serviceSetProperty:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (bool)_setDefaultAOPConfigs;
- (bool)_setGlobalAOPConfigsFromBRFConfigs:(id)arg1;
- (bool)_setStateAOPConfigsFromStateData:(id)arg1 andSlotData:(id)arg2;
- (unsigned int)connect;
- (id)dataForSlot:(id)arg1 fromArray:(id)arg2;
- (void)dealloc;
- (id)description;
- (bool)disableStates:(id)arg1 clearAsset:(bool)arg2 error:(id*)arg3;
- (bool)enableStates:(id)arg1 error:(id*)arg2;
- (bool)fastHaptics;
- (id)init;
- (id)initWithFastHaptics:(bool)arg1;
- (bool)isReady;
- (unsigned long long)maxAssetSlots;
- (void)mergeStateChanges:(id)arg1 into:(id)arg2;
- (bool)playState:(unsigned long long)arg1 forSpeed:(unsigned long long)arg2 error:(id*)arg3;
- (id)propertyList;
- (void)scheduleReadyNotificationWithBlock:(id /* block */)arg1;
- (unsigned int)service;
- (bool)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id*)arg4;
- (void)setConnect:(unsigned int)arg1;
- (bool)setGlobalConfigs:(id)arg1 error:(id*)arg2;
- (void)setService:(unsigned int)arg1;
- (unsigned long long)unusedAssetSlots;
- (bool)updateReadyState;

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