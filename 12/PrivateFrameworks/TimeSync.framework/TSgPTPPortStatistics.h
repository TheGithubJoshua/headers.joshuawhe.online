<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSgPTPPortStatistics.h</title>
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

/PrivateFrameworks/TimeSync.framework/TSgPTPPortStatistics.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync (740.2)
 */

@interface TSgPTPPortStatistics : NSObject {
    unsigned int  _allowedLostResponsesExceededCounter;
    unsigned int  _announceReceiptTimeoutCounter;
    unsigned int  _attemptedAnnounceCounter;
    unsigned int  _attemptedDelayRequestCounter;
    unsigned int  _attemptedDelayResponseCounter;
    unsigned int  _attemptedFollowUpCounter;
    unsigned int  _attemptedPDelayRequestCounter;
    unsigned int  _attemptedPDelayResponseCounter;
    unsigned int  _attemptedPDelayResponseFollowUpCounter;
    unsigned int  _attemptedSignalCounter;
    unsigned int  _attemptedSyncCounter;
    NSString * _portIdentifier;
    int  _portRole;
    int  _portType;
    unsigned int  _rawDelayExceededCounter;
    unsigned int  _rawDelayMeasurementCounter;
    unsigned int  _receivedAnnounceCounter;
    unsigned int  _receivedDelayRequestCounter;
    unsigned int  _receivedDelayResponseCounter;
    unsigned int  _receivedFollowUpCounter;
    unsigned int  _receivedPDelayRequestCounter;
    unsigned int  _receivedPDelayResponseCounter;
    unsigned int  _receivedPDelayResponseFollowUpCounter;
    unsigned int  _receivedPacketDiscardCounter;
    unsigned int  _receivedSignalCounter;
    unsigned int  _receivedSyncCounter;
    unsigned int  _syncReceiptTimeoutCounter;
    unsigned int  _transmittedAnnounceCounter;
    unsigned int  _transmittedDelayRequestCounter;
    unsigned int  _transmittedDelayResponseCounter;
    unsigned int  _transmittedFollowUpCounter;
    unsigned int  _transmittedPDelayRequestCounter;
    unsigned int  _transmittedPDelayResponseCounter;
    unsigned int  _transmittedPDelayResponseFollowUpCounter;
    unsigned int  _transmittedPacketDiscardCounter;
    unsigned int  _transmittedSignalCounter;
    unsigned int  _transmittedSyncCounter;
}

@property (nonatomic, readonly) unsigned int allowedLostResponsesExceededCounter;
@property (nonatomic, readonly) unsigned int announceReceiptTimeoutCounter;
@property (nonatomic, readonly) unsigned int attemptedAnnounceCounter;
@property (nonatomic, readonly) unsigned int attemptedDelayRequestCounter;
@property (nonatomic, readonly) unsigned int attemptedDelayResponseCounter;
@property (nonatomic, readonly) unsigned int attemptedFollowUpCounter;
@property (nonatomic, readonly) unsigned int attemptedPDelayRequestCounter;
@property (nonatomic, readonly) unsigned int attemptedPDelayResponseCounter;
@property (nonatomic, readonly) unsigned int attemptedPDelayResponseFollowUpCounter;
@property (nonatomic, readonly) unsigned int attemptedSignalCounter;
@property (nonatomic, readonly) unsigned int attemptedSyncCounter;
@property (nonatomic, readonly, copy) NSString *portIdentifier;
@property (nonatomic, readonly) int portRole;
@property (nonatomic, readonly) int portType;
@property (nonatomic, readonly) unsigned int rawDelayExceededCounter;
@property (nonatomic, readonly) unsigned int rawDelayMeasurementCounter;
@property (nonatomic, readonly) unsigned int receivedAnnounceCounter;
@property (nonatomic, readonly) unsigned int receivedDelayRequestCounter;
@property (nonatomic, readonly) unsigned int receivedDelayResponseCounter;
@property (nonatomic, readonly) unsigned int receivedFollowUpCounter;
@property (nonatomic, readonly) unsigned int receivedPDelayRequestCounter;
@property (nonatomic, readonly) unsigned int receivedPDelayResponseCounter;
@property (nonatomic, readonly) unsigned int receivedPDelayResponseFollowUpCounter;
@property (nonatomic, readonly) unsigned int receivedPacketDiscardCounter;
@property (nonatomic, readonly) unsigned int receivedSignalCounter;
@property (nonatomic, readonly) unsigned int receivedSyncCounter;
@property (nonatomic, readonly) unsigned int syncReceiptTimeoutCounter;
@property (nonatomic, readonly) unsigned int transmittedAnnounceCounter;
@property (nonatomic, readonly) unsigned int transmittedDelayRequestCounter;
@property (nonatomic, readonly) unsigned int transmittedDelayResponseCounter;
@property (nonatomic, readonly) unsigned int transmittedFollowUpCounter;
@property (nonatomic, readonly) unsigned int transmittedPDelayRequestCounter;
@property (nonatomic, readonly) unsigned int transmittedPDelayResponseCounter;
@property (nonatomic, readonly) unsigned int transmittedPDelayResponseFollowUpCounter;
@property (nonatomic, readonly) unsigned int transmittedPacketDiscardCounter;
@property (nonatomic, readonly) unsigned int transmittedSignalCounter;
@property (nonatomic, readonly) unsigned int transmittedSyncCounter;

- (unsigned int)allowedLostResponsesExceededCounter;
- (unsigned int)announceReceiptTimeoutCounter;
- (unsigned int)attemptedAnnounceCounter;
- (unsigned int)attemptedDelayRequestCounter;
- (unsigned int)attemptedDelayResponseCounter;
- (unsigned int)attemptedFollowUpCounter;
- (unsigned int)attemptedPDelayRequestCounter;
- (unsigned int)attemptedPDelayResponseCounter;
- (unsigned int)attemptedPDelayResponseFollowUpCounter;
- (unsigned int)attemptedSignalCounter;
- (unsigned int)attemptedSyncCounter;
- (void)dealloc;
- (id)init;
- (id)initWithPort:(id)arg1;
- (id)portIdentifier;
- (int)portRole;
- (int)portType;
- (unsigned int)rawDelayExceededCounter;
- (unsigned int)rawDelayMeasurementCounter;
- (unsigned int)receivedAnnounceCounter;
- (unsigned int)receivedDelayRequestCounter;
- (unsigned int)receivedDelayResponseCounter;
- (unsigned int)receivedFollowUpCounter;
- (unsigned int)receivedPDelayRequestCounter;
- (unsigned int)receivedPDelayResponseCounter;
- (unsigned int)receivedPDelayResponseFollowUpCounter;
- (unsigned int)receivedPacketDiscardCounter;
- (unsigned int)receivedSignalCounter;
- (unsigned int)receivedSyncCounter;
- (unsigned int)syncReceiptTimeoutCounter;
- (unsigned int)transmittedAnnounceCounter;
- (unsigned int)transmittedDelayRequestCounter;
- (unsigned int)transmittedDelayResponseCounter;
- (unsigned int)transmittedFollowUpCounter;
- (unsigned int)transmittedPDelayRequestCounter;
- (unsigned int)transmittedPDelayResponseCounter;
- (unsigned int)transmittedPDelayResponseFollowUpCounter;
- (unsigned int)transmittedPacketDiscardCounter;
- (unsigned int)transmittedSignalCounter;
- (unsigned int)transmittedSyncCounter;

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
