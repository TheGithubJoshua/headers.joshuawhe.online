<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AMSURLSession.h</title>
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

/PrivateFrameworks/AppleMediaServices.framework/AMSURLSession.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices (1)
 */

@interface AMSURLSession : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate> {
    NSURLSessionConfiguration * _configuration;
    <NSURLSessionDelegate><AMSURLProtocolDelegate> * _delegate;
    NSOperationQueue * _delegateQueue;
    <AMSURLHandling> * _protocolHandler;
    <AMSRequestEncoding> * _requestEncoder;
    <AMSResponseDecoding> * _responseDecoder;
    AMSURLSecurityPolicy * _securityPolicy;
    NSURLSession * _session;
}

@property (nonatomic, readonly) NSURLSessionConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NSURLSessionDelegate><AMSURLProtocolDelegate> *delegate;
@property (nonatomic, readonly) NSOperationQueue *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <AMSURLHandling> *protocolHandler;
@property (nonatomic, retain) <AMSRequestEncoding> *requestEncoder;
@property (nonatomic, retain) <AMSResponseDecoding> *responseDecoder;
@property (nonatomic, retain) AMSURLSecurityPolicy *securityPolicy;
@property (nonatomic, readonly) NSURLSession *session;
@property (readonly) Class superclass;

+ (id)defaultSession;
+ (id)sharedAuthKitSession;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_completeTask:(id)arg1 decodedObject:(id)arg2 error:(id)arg3;
- (id)_createSharedDataForTask:(id)arg1 properties:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_handleURLAction:(id)arg1 task:(id)arg2 error:(id*)arg3;
- (id)_prepareTaskWithRequest:(id)arg1 properties:(id)arg2;
- (void)_retryTask:(id)arg1 action:(id)arg2 error:(id*)arg3;
- (id)configuration;
- (id)dataTaskPromiseWithRequest:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)delegate;
- (id)delegateQueue;
- (void)finishTasksAndInvalidate;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)invalidateAndCancel;
- (id)protocolHandler;
- (id)requestEncoder;
- (bool)respondsToSelector:(SEL)arg1;
- (id)responseDecoder;
- (id)securityPolicy;
- (id)session;
- (void)setDelegate:(id)arg1;
- (void)setProtocolHandler:(id)arg1;
- (void)setRequestEncoder:(id)arg1;
- (void)setResponseDecoder:(id)arg1;
- (void)setSecurityPolicy:(id)arg1;

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