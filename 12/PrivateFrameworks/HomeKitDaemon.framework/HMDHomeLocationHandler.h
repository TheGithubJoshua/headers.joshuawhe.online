<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HMDHomeLocationHandler.h</title>
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

/PrivateFrameworks/HomeKitDaemon.framework/HMDHomeLocationHandler.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon (484.7.17.1)
 */

@interface HMDHomeLocationHandler : HMFObject <HMDBatchLocationDelegate, HMDHomeMessageReceiver, NSSecureCoding> {
    HMDHome * _home;
    CLLocation * _location;
    int  _locationAuthorization;
    NSDate * _locationUpdateTimestamp;
    HMFMessageDispatcher * _msgDispatcher;
    CLRegion * _region;
    NSTimeZone * _timeZone;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic) int locationAuthorization;
@property (nonatomic, readonly) HMDHomeLocationData *locationData;
@property (nonatomic, retain) NSDate *locationUpdateTimestamp;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) CLRegion *region;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)hasMessageReceiverChildren;
+ (bool)mergeLocationDataForLocalHome:(id)arg1 withCloudHome:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_canExtractBatchLocations;
- (void)_evaluateHomeRegionStateForCurrentDeviceLocation:(id)arg1;
- (id)_handleHomeLocationData:(id)arg1 message:(id)arg2;
- (void)_handleLocationAuthorization:(int)arg1;
- (void)_handleLocationAuthorizationChangedNotification:(id)arg1;
- (void)_handleRetrieveLocation:(id)arg1;
- (bool)_needToExtractBatchLocations;
- (void)_registerForMessages;
- (void)_registerForRegionUpdate;
- (void)_sendLocationUpdate;
- (void)_updateTimeZone:(id)arg1;
- (void)accessoriesBecomeReachable;
- (void)accessoriesBecomeUnreachable;
- (void)accessoryAdded;
- (void)configure:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3;
- (void)dealloc;
- (id)description;
- (void)didDetermineBatchLocation:(id)arg1;
- (void)didDetermineLocation:(id)arg1;
- (void)didDetermineState:(long long)arg1 forRegion:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)getReachableIPAccessory:(unsigned long long*)arg1 btleAccessory:(unsigned long long*)arg2 mediaAccessory:(unsigned long long*)arg3;
- (id)home;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isDate:(id)arg1 laterThanDate:(id)arg2;
- (bool)isLocation:(id)arg1 closeToLocation:(id)arg2;
- (id)location;
- (int)locationAuthorization;
- (id)locationData;
- (id)locationUpdateTimestamp;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)region;
- (void)runTransactionWithLocation:(id)arg1 updateTime:(id)arg2;
- (void)setHome:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationAuthorization:(int)arg1;
- (void)setLocationUpdateTimestamp:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)timeZone;
- (id)workQueue;

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