<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BiometricKitXPCExportedObject.h</title>
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

/PrivateFrameworks/BiometricSupport.framework/BiometricKitXPCExportedObject.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport (1)
 */

@interface BiometricKitXPCExportedObject : NSObject <BiometricKitXpcProtocol> {
    NSMutableDictionary * _clients;
    NSXPCConnection * _connection;
    BiometricKitXPCServer * _server;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BiometricKitXPCServer *server;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (id)client:(unsigned long long)arg1;
- (id)clients;
- (void)completeEnrollment:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)connect:(id)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (id)connection;
- (void)dealloc;
- (void)detectPresenceWithOptions:(id)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)diagnostics:(int)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)disconnect:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)dropUnlockToken:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)enableBackgroundFdet:(bool)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)enableMatchAutoRetry:(bool)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)enroll:(int)arg1 user:(unsigned int)arg2 options:(id)arg3 client:(unsigned long long)arg4 replyBlock:(id /* block */)arg5;
- (void)enrollContinue:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)fieldDiagnosticsControl:(unsigned int)arg1 inData:(id)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)fileRadarWithLogs:(id)arg1 description:(id)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)forceBioLockoutForUser:(unsigned int)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)getAugmentationEligibilityForIdentity:(id)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)getBioLockoutStateForUser:(unsigned int)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)getBiometryAvailabilityForUser:(unsigned int)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)getCalibrationDataInfo:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)getCountersignedStoreToken:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)getDeviceState:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)getFreeIdentityCount:(int)arg1 user:(unsigned int)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)getIdentitiesDatabaseHashForUser:(unsigned int)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)getIdentitiesDatabaseUUIDForUser:(unsigned int)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)getIdentityFromUUID:(id)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)getLastMatchEvent:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)getLogs:(bool)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)getMaxIdentityCount:(int)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)getNodeTopologyForIdentity:(id)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)getProtectedConfigurationForUser:(unsigned int)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)getProvisioningState:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)getSensorCalibrationStatus:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)getSensorInfo:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)getSystemProtectedConfiguration:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)identities:(id)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (id)init;
- (void)isAriadneSignpostsEnabled:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)isFingerOn:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)isXARTAvailable:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)logEventOrCode:(unsigned long long)arg1;
- (void)match:(id)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)notifyAppIsBackground:(bool)arg1 client:(unsigned long long)arg2;
- (void)notifyAppIsInactive:(bool)arg1 client:(unsigned long long)arg2;
- (void)pauseFaceDetectTimer:(bool)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)pullAlignmentData:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)pullCalibrationData:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)pullCaptureBuffer:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)pullDebugImageData:(bool)arg1 rotated:(bool)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)pullMatchPolicyInfoData:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)queryIdentityMigrationFailureForUser:(unsigned int)arg1 clear:(bool)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)registerDSID:(unsigned long long)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)registerDelegate:(bool)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)registerStoreToken:(id)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)removeAllIdentitiesForUser:(unsigned int)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)removeIdentity:(id)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)resetAppleConnectCounter:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (id)server;
- (void)setConnection:(id)arg1;
- (void)setDebugImages:(bool)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)setProtectedConfiguration:(id)arg1 user:(unsigned int)arg2 options:(id)arg3 client:(unsigned long long)arg4 replyBlock:(id /* block */)arg5;
- (void)setServer:(id)arg1;
- (void)setSystemProtectedConfiguration:(id)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)setTemplate:(id)arg1 forIdentity:(id)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)setUserDSID:(unsigned long long)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)startNewMatchAttempt:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (void)suspendEnrollment:(bool)arg1 client:(unsigned long long)arg2 replyBlock:(id /* block */)arg3;
- (void)terminate;
- (void)timestampEvent:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;
- (void)updateIdentity:(id)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(id /* block */)arg4;

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