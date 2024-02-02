<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>IDSDaemonListenerProtocol.h</title>
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

/protocols/IDSDaemonListenerProtocol.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol IDSDaemonListenerProtocol <NSObject>

@optional

- (void)IDQueryCompletedWithFromURI:(NSString *)arg1 idStatusUpdates:(NSDictionary *)arg2 service:(NSString *)arg3 success:(bool)arg4 error:(NSError *)arg5;
- (void)OTRTestCallback:(NSString *)arg1 time:(double)arg2 error:(NSError *)arg3;
- (void)accessoryDataReceived:(NSData *)arg1 withGUID:(NSString *)arg2 forTopic:(NSString *)arg3 toIdentifier:(NSString *)arg4 fromID:(NSString *)arg5 context:(NSDictionary *)arg6;
- (void)accessoryReportMessageReceived:(NSString *)arg1 accessoryID:(NSString *)arg2 controllerID:(NSString *)arg3 withGUID:(NSString *)arg4 forTopic:(NSString *)arg5 toIdentifier:(NSString *)arg6 fromID:(NSString *)arg7 context:(NSDictionary *)arg8;
- (void)account:(NSString *)arg1 accountInfoChanged:(NSDictionary *)arg2;
- (void)account:(NSString *)arg1 aliasesChanged:(NSArray *)arg2;
- (void)account:(NSString *)arg1 dependentDevicesUpdated:(NSArray *)arg2;
- (void)account:(NSString *)arg1 dependentDevicesUpdatedUponReconnect:(NSArray *)arg2;
- (void)account:(NSString *)arg1 displayNameChanged:(NSString *)arg2;
- (void)account:(NSString *)arg1 localDeviceAdded:(NSDictionary *)arg2;
- (void)account:(NSString *)arg1 localDeviceRemoved:(NSDictionary *)arg2;
- (void)account:(NSString *)arg1 loginChanged:(NSString *)arg2;
- (void)account:(NSString *)arg1 profileChanged:(NSDictionary *)arg2;
- (void)account:(NSString *)arg1 registrationStatusInfoChanged:(NSDictionary *)arg2;
- (void)account:(NSString *)arg1 vettedAliasesChanged:(NSArray *)arg2;
- (void)accountAdded:(NSDictionary *)arg1;
- (void)accountDisabled:(NSString *)arg1 onService:(NSString *)arg2;
- (void)accountEnabled:(NSString *)arg1 onService:(NSString *)arg2;
- (void)accountRemoved:(NSDictionary *)arg1;
- (void)accountUpdated:(NSDictionary *)arg1;
- (void)accountsChanged:(NSArray *)arg1 forTopic:(NSString *)arg2;
- (void)adminAccessTokens:(NSArray *)arg1 error:(NSError *)arg2;
- (void)allocationDone:(NSString *)arg1 sessionInfo:(NSDictionary *)arg2;
- (void)applecareResponseForRequestID:(NSString *)arg1 withError:(NSError *)arg2;
- (void)checkTransportLogWithReason:(long long)arg1;
- (void)connectionComplete:(bool)arg1;
- (void)consentTokens:(NSArray *)arg1 error:(NSError *)arg2;
- (void)continuityDidConnectToPeer:(NSString *)arg1 withError:(NSError *)arg2;
- (void)continuityDidDisconnectFromPeer:(NSString *)arg1 withError:(NSError *)arg2;
- (void)continuityDidDiscoverPeerWithData:(NSData *)arg1 fromPeer:(NSString *)arg2;
- (void)continuityDidDiscoverType:(long long)arg1 withData:(NSData *)arg2 fromPeer:(NSString *)arg3;
- (void)continuityDidFailToStartAdvertisingOfType:(long long)arg1 withError:(NSError *)arg2;
- (void)continuityDidFailToStartScanningForType:(long long)arg1 withError:(NSError *)arg2;
- (void)continuityDidLosePeer:(NSString *)arg1;
- (void)continuityDidLosePeer:(NSString *)arg1 forType:(long long)arg2;
- (void)continuityDidStartAdvertisingOfType:(long long)arg1;
- (void)continuityDidStartScanningForType:(long long)arg1;
- (void)continuityDidStartTrackingPeer:(NSString *)arg1 error:(NSError *)arg2;
- (void)continuityDidStartTrackingPeer:(NSString *)arg1 forType:(long long)arg2 error:(NSError *)arg3;
- (void)continuityDidStopAdvertisingOfType:(long long)arg1;
- (void)continuityDidStopScanningForType:(long long)arg1;
- (void)continuityDidStopTrackingPeer:(NSString *)arg1;
- (void)continuityDidStopTrackingPeer:(NSString *)arg1 forType:(long long)arg2;
- (void)continuityDidUpdateState:(long long)arg1;
- (void)daemonConnected;
- (void)daemonDisconnected;
- (void)dataReceived:(NSData *)arg1 withGUID:(NSString *)arg2 forTopic:(NSString *)arg3 toIdentifier:(NSString *)arg4 fromID:(NSString *)arg5 context:(NSDictionary *)arg6;
- (void)deactivatePairedDevices;
- (void)deliveryStats:(NSDictionary *)arg1;
- (void)device:(NSString *)arg1 nsuuidChanged:(NSString *)arg2;
- (void)device:(NSString *)arg1 pairingAdded:(bool)arg2;
- (void)device:(NSString *)arg1 pairingDeleted:(bool)arg2;
- (void)deviceIdentifierDidChange:(NSString *)arg1;
- (void)didAuthenticatePhoneWithAuthenticationCertificateData:(NSData *)arg1 requestUUID:(NSString *)arg2 error:(NSError *)arg3;
- (void)didFetchPhoneUserSubscriptionSource:(NSNumber *)arg1 requestUUID:(NSString *)arg2 error:(NSError *)arg3;
- (void)didGeneratePhoneAuthenticationSignature:(NSData *)arg1 nonce:(NSData *)arg2 certificate:(NSData *)arg3 inputData:(NSData *)arg4 requestUUID:(NSString *)arg5 error:(NSError *)arg6;
- (void)didSetPhoneUserSubscriptionSource:(NSNumber *)arg1 requestUUID:(NSString *)arg2 error:(NSError *)arg3;
- (void)didSwitchActivePairedDevice:(NSString *)arg1;
- (void)didSwitchActivePairedDevice:(NSString *)arg1 forService:(NSString *)arg2 wasHandled:(bool*)arg3;
- (void)engramDataReceived:(NSDictionary *)arg1 withGUID:(NSString *)arg2 forTopic:(NSString *)arg3 toIdentifier:(NSString *)arg4 fromID:(NSString *)arg5 context:(NSDictionary *)arg6;
- (void)groupSessionDidTerminate:(NSString *)arg1;
- (void)groupSessionEnded:(NSString *)arg1 withReason:(unsigned int)arg2 error:(NSError *)arg3;
- (void)groupShareReceived:(NSData *)arg1 withGUID:(NSString *)arg2 forTopic:(NSString *)arg3 toIdentifier:(NSString *)arg4 fromID:(NSString *)arg5 context:(NSDictionary *)arg6;
- (void)iMessageReportSpamCheckUnknownResponseForRequestID:(NSString *)arg1 status:(long long)arg2 abusive:(bool)arg3 delay:(double)arg4 withError:(NSError *)arg5;
- (void)localDeviceInfo:(NSDictionary *)arg1;
- (void)localPairingResponseForRequestID:(NSString *)arg1 withError:(NSError *)arg2;
- (void)localPairingResponseForRequestID:(NSString *)arg1 withError:(NSError *)arg2 pairedDevices:(NSArray *)arg3;
- (void)messageIdentifier:(NSString *)arg1 alternateCallbackID:(NSString *)arg2 forAccount:(NSString *)arg3 updatedWithResponseCode:(long long)arg4 error:(NSError *)arg5 lastCall:(bool)arg6 context:(NSDictionary *)arg7;
- (void)messageIdentifier:(NSString *)arg1 alternateCallbackID:(NSString *)arg2 forAccount:(NSString *)arg3 willSendToDestinations:(NSArray *)arg4 skippedDestinations:(NSArray *)arg5 registrationPropertyToDestinations:(NSDictionary *)arg6;
- (void)messageIdentifier:(NSString *)arg1 forTopic:(NSString *)arg2 toIdentifier:(NSString *)arg3 fromIdentifier:(NSString *)arg4 hasBeenDeliveredWithContext:(NSDictionary *)arg5;
- (void)messageReceived:(NSDictionary *)arg1 withGUID:(NSString *)arg2 withPayload:(NSDictionary *)arg3 forTopic:(NSString *)arg4 toIdentifier:(NSString *)arg5 fromID:(NSString *)arg6 context:(NSDictionary *)arg7;
- (void)openedSocket:(NSObject<OS_xpc_object> *)arg1 forHandlerID:(NSString *)arg2 error:(NSError *)arg3;
- (void)pairedDeviceInfo:(NSDictionary *)arg1;
- (void)protobufReceived:(NSDictionary *)arg1 withGUID:(NSString *)arg2 forTopic:(NSString *)arg3 toIdentifier:(NSString *)arg4 fromID:(NSString *)arg5 context:(NSDictionary *)arg6;
- (void)receivedGroupSessionParticipantDataUpdate:(NSDictionary *)arg1 forTopic:(NSString *)arg2 toIdentifier:(NSString *)arg3 fromID:(NSString *)arg4;
- (void)receivedGroupSessionParticipantUpdate:(NSDictionary *)arg1 forTopic:(NSString *)arg2 toIdentifier:(NSString *)arg3 fromID:(NSString *)arg4;
- (void)refreshRegistrationForAccount:(NSString *)arg1;
- (void)refreshUserAccessTokens:(NSArray *)arg1 error:(NSError *)arg2;
- (void)registrationControlResponseForRequestID:(NSString *)arg1 withBoolAnswer:(bool)arg2 additionalContextData:(NSData *)arg3 andError:(NSError *)arg4;
- (void)registrationControlResponseForRequestID:(NSString *)arg1 withBoolAnswer:(bool)arg2 andError:(NSError *)arg3;
- (void)registrationControlResponseForRequestID:(NSString *)arg1 withError:(NSError *)arg2;
- (void)registrationControlStatusResponseForRequestID:(long long)arg1 requestID:(NSString *)arg2 withError:(NSError *)arg3;
- (void)registrationFailedForAccount:(NSString *)arg1 needsDeletion:(NSNumber *)arg2;
- (void)serviceUserIDs:(NSArray *)arg1 error:(NSError *)arg2;
- (void)session:(NSString *)arg1 audioEnabled:(bool)arg2;
- (void)session:(NSString *)arg1 didGetGroupSessionParticipants:(NSArray *)arg2 requestID:(NSNumber *)arg3 error:(NSNumber *)arg4;
- (void)session:(NSString *)arg1 didReceiveActiveParticipants:(NSArray *)arg2 success:(bool)arg3;
- (void)session:(NSString *)arg1 didReceiveReport:(NSArray *)arg2;
- (void)session:(NSString *)arg1 invitationSentToTokens:(NSSet *)arg2 shouldBreakBeforeMake:(bool)arg3;
- (void)session:(NSString *)arg1 muted:(bool)arg2;
- (void)session:(NSString *)arg1 participantDidJoinGroupWithInfo:(NSDictionary *)arg2;
- (void)session:(NSString *)arg1 participantDidLeaveGroupWithInfo:(NSDictionary *)arg2;
- (void)sessionAcceptReceived:(NSString *)arg1 fromID:(NSString *)arg2 withData:(NSData *)arg3;
- (void)sessionCancelReceived:(NSString *)arg1 fromID:(NSString *)arg2 withData:(NSData *)arg3;
- (void)sessionDeclineReceived:(NSString *)arg1 fromID:(NSString *)arg2 withData:(NSData *)arg3;
- (void)sessionDidJoinGroup:(NSString *)arg1 participantInfo:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)sessionDidJoinGroup:(NSString *)arg1 participantUpdateDictionary:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)sessionDidJoinGroup:(NSString *)arg1 participantsInfo:(NSArray *)arg2 error:(NSError *)arg3;
- (void)sessionDidLeaveGroup:(NSString *)arg1 error:(NSError *)arg2;
- (void)sessionEndReceived:(NSString *)arg1 fromID:(NSString *)arg2 withData:(NSData *)arg3;
- (void)sessionEnded:(NSString *)arg1 withReason:(unsigned int)arg2 error:(NSError *)arg3;
- (void)sessionInvitationReceivedWithPayload:(NSDictionary *)arg1 forTopic:(NSString *)arg2 sessionID:(NSString *)arg3 toIdentifier:(NSString *)arg4 fromID:(NSString *)arg5 transportType:(NSNumber *)arg6;
- (void)sessionMessageReceived:(NSString *)arg1 fromID:(NSString *)arg2 withData:(NSData *)arg3;
- (void)sessionStarted:(NSString *)arg1;
- (void)setupCompleteForAccount:(NSString *)arg1 transactionID:(NSString *)arg2 setupError:(NSError *)arg3;
- (void)setupCompleteWithInfo:(NSDictionary *)arg1;
- (void)updateDeviceIdentity:(NSData *)arg1 error:(NSError *)arg2;
- (void)userAccessTokens:(NSArray *)arg1 error:(NSError *)arg2;
- (void)xpcObject:(NSObject<OS_xpc_object> *)arg1 objectContext:(NSDictionary *)arg2;

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