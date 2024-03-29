<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MMCSHTTPContext.h</title>
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

/PrivateFrameworks/MMCS.framework/MMCSHTTPContext.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MMCS.framework/MMCS (438.212)
 */

@interface MMCSHTTPContext : NSObject <C2RequestDelegate, NSStreamDelegate, NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionTaskDelegatePrivate> {
    struct os_activity_s { } * _activityMarker;
    MMCSBoundedQueue * _boundedQueue;
    NSURLSessionDataTask * _dataTask;
    bool  _didOpen;
    struct mmcs_http_context { struct _C3Base { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; } x1; int x2; struct _Metricsinfo__HTTPMetricsInfo { struct _ProtobufCMessage { struct _ProtobufCMessageDescriptor {} *x_1_2_1; unsigned int x_1_2_2; struct _ProtobufCMessageUnknownField {} *x_1_2_3; } x_3_1_1; char *x_3_1_2; int x_3_1_3; int x_3_1_4; int x_3_1_5; int x_3_1_6; int x_3_1_7; double x_3_1_8; int x_3_1_9; double x_3_1_10; int x_3_1_11; double x_3_1_12; double x_3_1_13; double x_3_1_14; long long x_3_1_15; long long x_3_1_16; int x_3_1_17; long long x_3_1_18; unsigned long long x_3_1_19; unsigned long long x_3_1_20; int x_3_1_21; double x_3_1_22; int x_3_1_23; long long x_3_1_24; int x_3_1_25; long long x_3_1_26; unsigned int x_3_1_27; struct _Chunkserver__ErrorResponse {} *x_3_1_28; int x_3_1_29; double x_3_1_30; int x_3_1_31; double x_3_1_32; } x3; struct __CFString {} *x4; long long x5; double x6; double x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; } * _hc;
    NSInputStream * _inputStream;
    bool  _isHandlingError;
    bool  _isTaskDone;
    bool  _isValid;
    NSOutputStream * _outputStream;
    bool  _requestIsStreamed;
    NSDictionary * _timingData;
    NSURLSession * _urlSession;
}

@property (nonatomic) struct os_activity_s { }*activityMarker;
@property (nonatomic, retain) MMCSBoundedQueue *boundedQueue;
@property (nonatomic, retain) NSURLSessionDataTask *dataTask;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didOpen;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct mmcs_http_context { struct _C3Base { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; } x1; int x2; struct _Metricsinfo__HTTPMetricsInfo { struct _ProtobufCMessage { struct _ProtobufCMessageDescriptor {} *x_1_2_1; unsigned int x_1_2_2; struct _ProtobufCMessageUnknownField {} *x_1_2_3; } x_3_1_1; char *x_3_1_2; int x_3_1_3; int x_3_1_4; int x_3_1_5; int x_3_1_6; int x_3_1_7; double x_3_1_8; int x_3_1_9; double x_3_1_10; int x_3_1_11; double x_3_1_12; double x_3_1_13; double x_3_1_14; long long x_3_1_15; long long x_3_1_16; int x_3_1_17; long long x_3_1_18; unsigned long long x_3_1_19; unsigned long long x_3_1_20; int x_3_1_21; double x_3_1_22; int x_3_1_23; long long x_3_1_24; int x_3_1_25; long long x_3_1_26; unsigned int x_3_1_27; struct _Chunkserver__ErrorResponse {} *x_3_1_28; int x_3_1_29; double x_3_1_30; int x_3_1_31; double x_3_1_32; } x3; struct __CFString {} *x4; long long x5; double x6; double x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; }*hc;
@property (nonatomic, retain) NSInputStream *inputStream;
@property (nonatomic) bool isHandlingError;
@property (nonatomic) bool isTaskDone;
@property (nonatomic) bool isValid;
@property (nonatomic, retain) NSOutputStream *outputStream;
@property (nonatomic) bool requestIsStreamed;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *timingData;
@property (nonatomic, retain) NSURLSession *urlSession;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(bool)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (struct os_activity_s { }*)activityMarker;
- (id)boundedQueue;
- (void)cleanupRequest;
- (void)cleanupResponse;
- (long long)countOfRequestBodyBytesSent;
- (bool)createNewRequestBodyInputStream;
- (id)dataTask;
- (void)dealloc;
- (id)description;
- (bool)didOpen;
- (struct mmcs_http_context { struct _C3Base { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; } x1; int x2; struct _Metricsinfo__HTTPMetricsInfo { struct _ProtobufCMessage { struct _ProtobufCMessageDescriptor {} *x_1_2_1; unsigned int x_1_2_2; struct _ProtobufCMessageUnknownField {} *x_1_2_3; } x_3_1_1; char *x_3_1_2; int x_3_1_3; int x_3_1_4; int x_3_1_5; int x_3_1_6; int x_3_1_7; double x_3_1_8; int x_3_1_9; double x_3_1_10; int x_3_1_11; double x_3_1_12; double x_3_1_13; double x_3_1_14; long long x_3_1_15; long long x_3_1_16; int x_3_1_17; long long x_3_1_18; unsigned long long x_3_1_19; unsigned long long x_3_1_20; int x_3_1_21; double x_3_1_22; int x_3_1_23; long long x_3_1_24; int x_3_1_25; long long x_3_1_26; unsigned int x_3_1_27; struct _Chunkserver__ErrorResponse {} *x_3_1_28; int x_3_1_29; double x_3_1_30; int x_3_1_31; double x_3_1_32; } x3; struct __CFString {} *x4; long long x5; double x6; double x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; }*)hc;
- (id)initWithContext:(struct mmcs_http_context { struct _C3Base { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; } x1; int x2; struct _Metricsinfo__HTTPMetricsInfo { struct _ProtobufCMessage { struct _ProtobufCMessageDescriptor {} *x_1_2_1; unsigned int x_1_2_2; struct _ProtobufCMessageUnknownField {} *x_1_2_3; } x_3_1_1; char *x_3_1_2; int x_3_1_3; int x_3_1_4; int x_3_1_5; int x_3_1_6; int x_3_1_7; double x_3_1_8; int x_3_1_9; double x_3_1_10; int x_3_1_11; double x_3_1_12; double x_3_1_13; double x_3_1_14; long long x_3_1_15; long long x_3_1_16; int x_3_1_17; long long x_3_1_18; unsigned long long x_3_1_19; unsigned long long x_3_1_20; int x_3_1_21; double x_3_1_22; int x_3_1_23; long long x_3_1_24; int x_3_1_25; long long x_3_1_26; unsigned int x_3_1_27; struct _Chunkserver__ErrorResponse {} *x_3_1_28; int x_3_1_29; double x_3_1_30; int x_3_1_31; double x_3_1_32; } x3; struct __CFString {} *x4; long long x5; double x6; double x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; }*)arg1 options:(const struct mmcs_http_context_options { struct __CFString {} *x1; struct __CFHTTPMessage {} *x2; struct _mmcs_http_request_options {} *x3; double x4; double x5; unsigned long long x6; int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); void *x14; int (*x15)(); void *x16; unsigned char x17; double x18; struct os_activity_s {} *x19; }*)arg2 activityMarker:(struct os_activity_s { }*)arg3;
- (id)inputStream;
- (void)invalidate;
- (void)invalidateStreamPair;
- (bool)isHandlingError;
- (bool)isTaskDone;
- (bool)isValid;
- (id)outputStream;
- (bool)requestBodyCanAcceptData;
- (void)requestBodyDone;
- (bool)requestIsStreamed;
- (bool)send;
- (void)setActivityMarker:(struct os_activity_s { }*)arg1;
- (void)setBoundedQueue:(id)arg1;
- (void)setDataTask:(id)arg1;
- (void)setDidOpen:(bool)arg1;
- (void)setHc:(struct mmcs_http_context { struct _C3Base { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; } x1; int x2; struct _Metricsinfo__HTTPMetricsInfo { struct _ProtobufCMessage { struct _ProtobufCMessageDescriptor {} *x_1_2_1; unsigned int x_1_2_2; struct _ProtobufCMessageUnknownField {} *x_1_2_3; } x_3_1_1; char *x_3_1_2; int x_3_1_3; int x_3_1_4; int x_3_1_5; int x_3_1_6; int x_3_1_7; double x_3_1_8; int x_3_1_9; double x_3_1_10; int x_3_1_11; double x_3_1_12; double x_3_1_13; double x_3_1_14; long long x_3_1_15; long long x_3_1_16; int x_3_1_17; long long x_3_1_18; unsigned long long x_3_1_19; unsigned long long x_3_1_20; int x_3_1_21; double x_3_1_22; int x_3_1_23; long long x_3_1_24; int x_3_1_25; long long x_3_1_26; unsigned int x_3_1_27; struct _Chunkserver__ErrorResponse {} *x_3_1_28; int x_3_1_29; double x_3_1_30; int x_3_1_31; double x_3_1_32; } x3; struct __CFString {} *x4; long long x5; double x6; double x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; }*)arg1;
- (void)setInputStream:(id)arg1;
- (void)setIsHandlingError:(bool)arg1;
- (void)setIsTaskDone:(bool)arg1;
- (void)setIsValid:(bool)arg1;
- (void)setOutputStream:(id)arg1;
- (void)setRequestIsStreamed:(bool)arg1;
- (void)setTimingData:(id)arg1;
- (void)setUrlSession:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)timingData;
- (id)urlSession;
- (long long)writeRequestBody:(const char *)arg1 maxLength:(unsigned long long)arg2;

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
