<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NSURLDownload.h</title>
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

/Frameworks/CFNetwork.framework/NSURLDownload.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork (978.0.7)
 */

@interface NSURLDownload : NSObject <NSURLAuthenticationChallengeSender> {
    NSURLDownloadInternal * _internal;
}

@property (readonly, copy) NSString *debugDescription;
@property bool deletesFileUponFailure;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSURLRequest *request;
@property (readonly, copy) NSData *resumeData;
@property (readonly) Class superclass;

+ (id)_downloadWithLoadingCFURLConnection:(struct _CFURLConnection { }*)arg1 request:(struct _CFURLRequest { }*)arg2 response:(struct _CFURLResponse { }*)arg3 delegate:(id)arg4 proxy:(id)arg5;
+ (id)_downloadWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5;
+ (id)_downloadWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3;
+ (bool)_isEncodingMIMETypeResumable:(id)arg1;
+ (bool)canResumeDownloadDecodedWithEncodingMIMEType:(id)arg1;

- (id)_delegate;
- (bool)_deletesFileAfterFailure;
- (id)_directoryPath;
- (bool)_downloadActive;
- (id)_initWithLoadingCFURLConnection:(struct _CFURLConnection { }*)arg1 request:(struct _CFURLRequest { }*)arg2 response:(struct _CFURLResponse { }*)arg3 delegate:(id)arg4 proxy:(id)arg5;
- (id)_initWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3;
- (id)_initWithResumeInformation:(id)arg1 delegate:(id)arg2 path:(id)arg3;
- (id)_originatingURL;
- (id)_resumeInformation;
- (void)_setDelegate:(id)arg1;
- (void)_setDelegateQueue:(id)arg1;
- (void)_setDeletesFileAfterFailure:(bool)arg1;
- (void)_setDirectoryPath:(id)arg1;
- (void)_setOriginatingURL:(id)arg1;
- (void)cancel;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)cleanupChallenges;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)dealloc;
- (bool)deletesFileUponFailure;
- (id)description;
- (id)init;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (id)initWithResumeData:(id)arg1 delegate:(id)arg2 path:(id)arg3;
- (void)releaseDelegate;
- (id)request;
- (id)resumeData;
- (bool)sendCanAuthenticateAgainstProtectionSpace:(struct _CFURLProtectionSpace { }*)arg1;
- (void)sendDecideDestinationWithSuggestedObjectName:(struct __CFString { }*)arg1;
- (void)sendDidCreateDestination:(struct __CFURL { }*)arg1;
- (void)sendDidFail:(struct __CFError { }*)arg1;
- (void)sendDidFinish;
- (void)sendDidReceiveChallenge:(struct _CFURLAuthChallenge { }*)arg1;
- (void)sendDidReceiveData:(long long)arg1;
- (void)sendDidReceiveResponse:(struct _CFURLResponse { }*)arg1;
- (void)sendDidStart:(struct _CFURLDownload { }*)arg1;
- (unsigned char)sendDownloadShouldUseCredentialStorage;
- (bool)sendShouldDecodeDataOfMIMEType:(struct __CFString { }*)arg1;
- (void)sendWillResumeWithResponse:(struct _CFURLResponse { }*)arg1 startingByte:(unsigned long long)arg2;
- (struct _CFURLRequest { }*)sendWillSendRequest:(struct _CFURLRequest { }*)arg1 redirectResponse:(struct _CFURLResponse { }*)arg2;
- (void)setDeletesFileUponFailure:(bool)arg1;
- (void)setDestination:(id)arg1 allowOverwrite:(bool)arg2;
- (id)url;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)withDelegate:(id /* block */)arg1;

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