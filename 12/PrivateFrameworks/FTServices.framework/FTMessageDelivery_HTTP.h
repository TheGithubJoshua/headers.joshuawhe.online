<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FTMessageDelivery_HTTP.h</title>
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

/PrivateFrameworks/FTServices.framework/FTMessageDelivery_HTTP.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices (1000)
 */

@interface FTMessageDelivery_HTTP : FTMessageDelivery <FTMessageQueueDelegate> {
    IDSServerBag * _iMessageServerBag;
    IDSServerBag * _idsServerBag;
    bool  _pendingRetryAfterAirplaneMode;
    <FTMessageDeliveryRemoteURLConnection> * _remoteConnection;
    <FTMessageDeliveryRemoteURLConnectionFactory> * _remoteConnectionFactory;
    id /* block */  _retryBackoffProvider;
    double  _retryTimeAfterAirplaneMode;
}

- (void).cxx_destruct;
- (void)_cleanupURLConnection;
- (void)_clearRetryTimer;
- (void)_dequeueIfNeeded;
- (void)_informDelegatesOfMessage:(id)arg1 result:(id)arg2 resultCode:(long long)arg3 error:(id)arg4;
- (void)_notifyDelegateAboutError:(id)arg1;
- (id)_processResultData:(id)arg1 forMessage:(id)arg2 error:(id*)arg3;
- (bool)_sendMessageAsynchronously:(id)arg1 error:(id*)arg2;
- (void)_serverBagLoaded:(id)arg1;
- (bool)_tryRetryMessageWithTimeInterval:(double)arg1;
- (void)_updateWiFiAssertions;
- (void)_urlRequestWithURL:(id)arg1 andData:(id)arg2 message:(id)arg3 missingAnisetteHeaders:(bool*)arg4 completionBlock:(id /* block */)arg5;
- (bool)busy;
- (void)cancelMessage:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithIDSServerBag:(id)arg1 iMessageServerBag:(id)arg2 remoteConnectionFactory:(id)arg3 retryBackoffProvider:(id /* block */)arg4;
- (void)invalidate;
- (void)networkStateChanged;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (bool)sendMessage:(id)arg1;
- (bool)sendMessageAtTopOfTheQueue:(id)arg1;

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
