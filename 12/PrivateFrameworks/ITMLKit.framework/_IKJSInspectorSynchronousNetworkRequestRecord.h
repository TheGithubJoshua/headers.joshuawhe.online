<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_IKJSInspectorSynchronousNetworkRequestRecord.h</title>
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

/PrivateFrameworks/ITMLKit.framework/_IKJSInspectorSynchronousNetworkRequestRecord.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit (1)
 */

@interface _IKJSInspectorSynchronousNetworkRequestRecord : NSObject <IKNetworkRequestRecord> {
    NSURLRequest * _URLRequest;
    NSURLResponse * _URLResponse;
    bool  _didSendURLRequest;
    NSString * _identifier;
    long long  _initiatorType;
    _IKJSInspectorNetworkLoader * _loader;
    long long  _resourceType;
    NSData * _responseBodyData;
}

@property (getter=urlRequest, nonatomic, copy) NSURLRequest *URLRequest;
@property (getter=urlResponse, nonatomic, copy) NSURLResponse *URLResponse;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) long long initiatorType;
@property (nonatomic) _IKJSInspectorNetworkLoader *loader;
@property (nonatomic, readonly) long long resourceType;
@property (nonatomic, copy) NSData *responseBodyData;
@property (readonly) Class superclass;

+ (long long)_protocolResourceTypeForType:(long long)arg1;
+ (long long)_responseSourceTypeForCacheType:(long long)arg1;

- (void).cxx_destruct;
- (void)_didCompleteLoadingFromCache:(long long)arg1 mimeType:(id)arg2 withResponseBody:(id)arg3 timestamp:(double)arg4;
- (void)_dispatchEvent:(long long)arg1 block:(id /* block */)arg2;
- (id)description;
- (void)didCompleteLoadingFromCache:(long long)arg1 mimeType:(id)arg2 withResponseBody:(id)arg3;
- (void)didCompleteLoadingFromCache:(long long)arg1 withResponseBody:(id)arg2 mimeType:(id)arg3;
- (void)didCompleteLoadingFromCache:(long long)arg1 withResponseBodyBlock:(id /* block */)arg2;
- (void)didCompleteLoadingFromMemoryWithRequest:(id)arg1 response:(id)arg2 withResponseBodyBlock:(id /* block */)arg3;
- (void)didCompleteLoadingWithResponseBody:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didReceiveData:(id)arg1;
- (void)didReceiveResponse:(id)arg1 timingData:(id)arg2;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 loader:(id)arg2 resourceType:(long long)arg3 initiatorType:(long long)arg4;
- (long long)initiatorType;
- (id)loader;
- (long long)resourceType;
- (id)responseBodyData;
- (void)setLoader:(id)arg1;
- (void)setResponseBodyData:(id)arg1;
- (void)setURLRequest:(id)arg1;
- (void)setURLResponse:(id)arg1;
- (id)urlRequest;
- (id)urlResponse;
- (void)willSendRequest:(id)arg1;

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
