<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HDIDSOutgoingResponse.h</title>
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

/PrivateFrameworks/HealthDaemon.framework/HDIDSOutgoingResponse.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon (1)
 */

@interface HDIDSOutgoingResponse : NSObject <HDNanoSyncDescription> {
    NSData * _data;
    bool  _doNotCompress;
    bool  _forceLocalDelivery;
    NSString * _idsIdentifier;
    HDIDSMessageCenter * _messageCenter;
    unsigned short  _messageID;
    id  _pbResponse;
    NSDictionary * _persistentUserInfo;
    unsigned long long  _priority;
    NSString * _requestIdsIdentifier;
    unsigned short  _requestMessageID;
    double  _sendTimeout;
    bool  _sent;
    IDSDevice * _toDevice;
}

@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool doNotCompress;
@property (nonatomic) bool forceLocalDelivery;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *idsIdentifier;
@property (nonatomic, retain) HDIDSMessageCenter *messageCenter;
@property (nonatomic) unsigned short messageID;
@property (nonatomic, retain) id pbResponse;
@property (nonatomic, retain) NSDictionary *persistentUserInfo;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, copy) NSString *requestIdsIdentifier;
@property (nonatomic) unsigned short requestMessageID;
@property (nonatomic) double sendTimeout;
@property (getter=isSent) bool sent;
@property (readonly) Class superclass;
@property (nonatomic, retain) IDSDevice *toDevice;

- (void).cxx_destruct;
- (void)configureWithActivationRestore:(id)arg1 syncStore:(id)arg2;
- (void)configureWithStatus:(id)arg1 syncStore:(id)arg2;
- (id)data;
- (void)dealloc;
- (id)description;
- (bool)doNotCompress;
- (bool)forceLocalDelivery;
- (id)idsIdentifier;
- (id)init;
- (bool)isSent;
- (id)messageCenter;
- (unsigned short)messageID;
- (id)nanoSyncDescription;
- (id)pbResponse;
- (id)persistentUserInfo;
- (unsigned long long)priority;
- (id)requestIdsIdentifier;
- (unsigned short)requestMessageID;
- (void)send;
- (double)sendTimeout;
- (void)setData:(id)arg1;
- (void)setDoNotCompress:(bool)arg1;
- (void)setForceLocalDelivery:(bool)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setMessageCenter:(id)arg1;
- (void)setMessageID:(unsigned short)arg1;
- (void)setPbResponse:(id)arg1;
- (void)setPersistentUserInfo:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setRequestIdsIdentifier:(id)arg1;
- (void)setRequestMessageID:(unsigned short)arg1;
- (void)setSendTimeout:(double)arg1;
- (void)setSent:(bool)arg1;
- (void)setToDevice:(id)arg1;
- (id)toDevice;

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
