<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SFWirelessChargingMonitor.h</title>
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

/PrivateFrameworks/Sharing.framework/SFWirelessChargingMonitor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing (1288.66)
 */

@interface SFWirelessChargingMonitor : NSObject {
    bool  _allDevicesCharged;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _invalidationHandler;
    SFWirelessChargingDevicePhone * _meChargingDevice;
    bool  _meDeviceWasWirelesslyCharging;
    SFPowerSourceMonitor * _monitor;
    id /* block */  _wirelessPowerSourceChangedHandler;
    id /* block */  _wirelessPowerSourceFoundHandler;
    id /* block */  _wirelessPowerSourceLostHandler;
}

@property (nonatomic, readonly) bool allDevicesCharged;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) SFWirelessChargingDevicePhone *meChargingDevice;
@property (nonatomic) bool meDeviceWasWirelesslyCharging;
@property (nonatomic, retain) SFPowerSourceMonitor *monitor;
@property (nonatomic, readonly, copy) NSSet *wirelessChargingDevices;
@property (nonatomic, copy) id /* block */ wirelessPowerSourceChangedHandler;
@property (nonatomic, copy) id /* block */ wirelessPowerSourceFoundHandler;
@property (nonatomic, copy) id /* block */ wirelessPowerSourceLostHandler;

- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)arg1;
- (bool)allDevicesCharged;
- (id)chargingDeviceForPowerSources:(id)arg1;
- (id)dispatchQueue;
- (void)evaluatePowerSources:(id)arg1 found:(bool)arg2 changed:(bool)arg3 lost:(bool)arg4;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)meChargingDevice;
- (bool)meDeviceWasWirelesslyCharging;
- (id)monitor;
- (void)refreshOnSameMatAsMeChargingDevice:(id)arg1 withMeWirelesslyCharging:(bool)arg2;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMeDeviceWasWirelesslyCharging:(bool)arg1;
- (void)setMonitor:(id)arg1;
- (void)setUpMonitor;
- (void)setWirelessPowerSourceChangedHandler:(id /* block */)arg1;
- (void)setWirelessPowerSourceFoundHandler:(id /* block */)arg1;
- (void)setWirelessPowerSourceLostHandler:(id /* block */)arg1;
- (id)wirelessChargingDevices;
- (id /* block */)wirelessPowerSourceChangedHandler;
- (id /* block */)wirelessPowerSourceFoundHandler;
- (id /* block */)wirelessPowerSourceLostHandler;

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