<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PBRequester.h</title>
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

/PrivateFrameworks/ProtocolBuffer.framework/PBRequester.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer (263.2)
 */

@interface PBRequester : NSObject <NSURLConnectionDelegate> {
    NSURL * _URL;
    NSArray * _clientCertificates;
    NSURLConnection * _connection;
    NSDictionary * _connectionProperties;
    NSRunLoop * _connectionRunLoop;
    NSMutableData * _data;
    PBDataReader * _dataReader;
    <PBRequesterDelegate> * _delegate;
    bool  _didNotifyRequestCompleted;
    unsigned long long  _downloadPayloadSize;
    struct { 
        unsigned int ignoresResponse : 1; 
        unsigned int loading : 1; 
        unsigned int needsCancel : 1; 
        unsigned int responseStatusSet : 1; 
        unsigned int parsedResponseHeader : 1; 
        unsigned int delegateDidReceiveResponse : 1; 
        unsigned int delegateDidFinish : 1; 
        unsigned int delegateDidCancel : 1; 
        unsigned int delegateDidFailWithError : 1; 
        unsigned int paused : 1; 
        unsigned int resuming : 1; 
    }  _flags;
    NSMutableDictionary * _httpRequestHeaders;
    NSDictionary * _httpResponseHeaders;
    NSMutableArray * _internalRequests;
    NSMutableArray * _internalResponses;
    unsigned long long  _lastGoodDataOffset;
    NSString * _logRequestToFile;
    NSString * _logResponseToFile;
    NSMutableArray * _requests;
    long long  _responseStatusCode;
    NSMutableArray * _responses;
    bool  _shouldHandleCookies;
    NSThread * _startThread;
    unsigned long long  _timeRequestSent;
    unsigned long long  _timeResponseReceived;
    double  _timeoutSeconds;
    struct __CFRunLoopTimer { } * _timeoutTimer;
    unsigned long long  _uploadPayloadSize;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) NSArray *clientCertificates;
@property (nonatomic, retain) NSURLConnection *connection;
@property (nonatomic, retain) NSRunLoop *connectionRunLoop;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PBRequesterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long downloadPayloadSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *httpRequestHeaders;
@property (nonatomic, retain) NSDictionary *httpResponseHeaders;
@property (nonatomic) bool ignoresResponse;
@property (nonatomic, retain) NSString *logRequestToFile;
@property (nonatomic, retain) NSString *logResponseToFile;
@property bool needsCancel;
@property (nonatomic, readonly) unsigned long long requestResponseTime;
@property (nonatomic, readonly) NSArray *requests;
@property (nonatomic) bool shouldHandleCookies;
@property (readonly) Class superclass;
@property (nonatomic) double timeoutSeconds;
@property (nonatomic, readonly) unsigned long long uploadPayloadSize;

+ (bool)usesEncodedMessages;

- (id)URL;
- (id)_applicationID;
- (void)_cancelNoNotify;
- (void)_cancelWithErrorDomain:(id)arg1 errorCode:(long long)arg2 userInfo:(id)arg3;
- (void)_cleanup;
- (id)_connectionRunLoop;
- (void)_failWithError:(id)arg1;
- (void)_failWithErrorDomain:(id)arg1 errorCode:(long long)arg2 userInfo:(id)arg3;
- (id)_languageLocale;
- (void)_logErrorIfNecessary:(id)arg1;
- (void)_logRequestsIfNecessary:(id)arg1;
- (void)_logResponsesIfNecessary:(id)arg1;
- (id)_osVersion;
- (void)_removeTimeoutTimer;
- (void)_resetTimeoutTimer;
- (bool)_sendPayload:(id)arg1 error:(id*)arg2;
- (void)_serializePayload:(id /* block */)arg1;
- (void)_start;
- (void)_startTimeoutTimer;
- (void)_timeoutTimerFired;
- (bool)_tryParseData;
- (void)addInternalRequest:(id)arg1;
- (void)addRequest:(id)arg1;
- (void)cancel;
- (void)cancelWithErrorCode:(long long)arg1;
- (void)cancelWithErrorCode:(long long)arg1 description:(id)arg2;
- (void)clearRequests;
- (id)clientCertificates;
- (id)connection;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequestForEstablishedConnection:(id)arg2 properties:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connectionRunLoop;
- (void)dealloc;
- (id)decodeResponseData:(id)arg1;
- (id)delegate;
- (unsigned long long)downloadPayloadSize;
- (void)encodeRequestData:(id)arg1 startRequestCallback:(id /* block */)arg2;
- (void)handleResponse:(id)arg1 forInternalRequest:(id)arg2;
- (id)httpRequestHeaders;
- (id)httpResponseHeaders;
- (bool)ignoresResponse;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2;
- (id)internalRequests;
- (bool)isPaused;
- (id)logRequestToFile;
- (id)logResponseToFile;
- (bool)needsCancel;
- (struct _CFURLRequest { }*)newCFMutableURLRequestWithURL:(id)arg1;
- (id)newConnectionWithCFURLRequest:(struct _CFURLRequest { }*)arg1 delegate:(id)arg2;
- (id)newConnectionWithCFURLRequest:(struct _CFURLRequest { }*)arg1 delegate:(id)arg2 connectionProperties:(id)arg3;
- (void)pause;
- (bool)readResponsePreamble:(id)arg1;
- (id)requestPreamble;
- (unsigned long long)requestResponseTime;
- (id)requests;
- (id)responseForInternalRequest:(id)arg1;
- (id)responseForRequest:(id)arg1;
- (void)resume;
- (void)setClientCertificates:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setConnectionRunLoop:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHttpRequestHeader:(id)arg1 forKey:(id)arg2;
- (void)setHttpRequestHeaders:(id)arg1;
- (void)setHttpResponseHeaders:(id)arg1;
- (void)setIgnoresResponse:(bool)arg1;
- (void)setLogRequestToFile:(id)arg1;
- (void)setLogResponseToFile:(id)arg1;
- (void)setNeedsCancel;
- (void)setNeedsCancel:(bool)arg1;
- (void)setShouldHandleCookies:(bool)arg1;
- (void)setTimeoutSeconds:(double)arg1;
- (void)setURL:(id)arg1;
- (bool)shouldHandleCookies;
- (void)start;
- (void)startWithConnectionProperties:(id)arg1;
- (double)timeoutSeconds;
- (id)tryReadResponseData:(id)arg1 forRequest:(id)arg2 forResponseClass:(Class)arg3;
- (unsigned long long)uploadPayloadSize;
- (void)writeRequest:(id)arg1 into:(id)arg2;

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
