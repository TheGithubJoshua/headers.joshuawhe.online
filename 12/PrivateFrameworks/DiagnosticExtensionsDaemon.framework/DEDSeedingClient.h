<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>DEDSeedingClient.h</title>
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

/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DEDSeedingClient.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon (1)
 */

@interface DEDSeedingClient : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate> {
    NSURLSession * _backgroundSession;
    NSString * _bugSessionIdentifier;
    DEDBugSessionConfiguration * _config;
    NSURLSession * _foregroundSession;
    NSObject<OS_os_log> * _log;
    <DEDSeedingClientDelegate> * _uploadDelegate;
}

@property (retain) NSURLSession *backgroundSession;
@property (retain) NSString *bugSessionIdentifier;
@property (retain) DEDBugSessionConfiguration *config;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSURLSession *foregroundSession;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_os_log> *log;
@property (readonly) Class superclass;
@property <DEDSeedingClientDelegate> *uploadDelegate;

- (void).cxx_destruct;
- (id)HTTPErrorWithResponse:(id)arg1 withData:(id)arg2;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (id)_formEncodedBodyForDictionary:(id)arg1;
- (id)_keyValuePairsForKey:(id)arg1 value:(id)arg2;
- (id)_serverErrorFromTask:(id)arg1;
- (id)backgroundSession;
- (id)beginUploadWithRequest:(id)arg1 fromFileURL:(id)arg2;
- (id)bodyDataForParameters:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3;
- (id)bugSessionIdentifier;
- (void)cancelPromise:(id)arg1 withSuccess:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)cleanup;
- (id)config;
- (id)contentTypeForParameterEncoding:(unsigned long long)arg1;
- (void)dataForURL:(id)arg1 success:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)dataForURLRequest:(id)arg1 success:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)deleteResourceAtURL:(id)arg1 success:(id /* block */)arg2 error:(id /* block */)arg3;
- (id)filePromiseURLForPromise:(id)arg1;
- (id)filerURL;
- (id)foregroundSession;
- (void)getFilerTokenForPromise:(id)arg1 withSuccess:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)getPromise:(id)arg1 withSuccess:(id /* block */)arg2 error:(id /* block */)arg3;
- (id)initWithConfiguration:(id)arg1 sessionID:(id)arg2 delegate:(id)arg3;
- (bool)isLoggedIn;
- (void)jsonForURL:(id)arg1 success:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)jsonForURLRequest:(id)arg1 success:(id /* block */)arg2 error:(id /* block */)arg3;
- (id)log;
- (id)loginWithTokenURL;
- (void)makePromiseWithUUID:(id)arg1 success:(id /* block */)arg2 error:(id /* block */)arg3;
- (id)newFilePromiseURL;
- (id)newFilerTokenURL;
- (void)performHTTPMethod:(id)arg1 toURL:(id)arg2 parameters:(id)arg3 encoding:(unsigned long long)arg4 success:(id /* block */)arg5 error:(id /* block */)arg6;
- (void)postToURL:(id)arg1 parameters:(id)arg2 encoding:(unsigned long long)arg3 success:(id /* block */)arg4 error:(id /* block */)arg5;
- (id)promiseConfiguration;
- (void)putToURL:(id)arg1 parameters:(id)arg2 encoding:(unsigned long long)arg3 success:(id /* block */)arg4 error:(id /* block */)arg5;
- (void)seedingLoginWithSuccess:(id /* block */)arg1 error:(id /* block */)arg2;
- (id)seedingURL;
- (void)sendFile:(id)arg1 promise:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setBackgroundSession:(id)arg1;
- (void)setBugSessionIdentifier:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setForegroundSession:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setUploadDelegate:(id)arg1;
- (void)updatePromise:(id)arg1 withAttachmentGroup:(id)arg2 status:(long long)arg3 success:(id /* block */)arg4 error:(id /* block */)arg5;
- (void)updatePromise:(id)arg1 withFilename:(id)arg2 size:(long long)arg3 status:(long long)arg4 success:(id /* block */)arg5 error:(id /* block */)arg6;
- (id)uploadDelegate;

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