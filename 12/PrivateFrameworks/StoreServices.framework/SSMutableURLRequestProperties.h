<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SSMutableURLRequestProperties.h</title>
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

/PrivateFrameworks/StoreServices.framework/SSMutableURLRequestProperties.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices (1)
 */

@interface SSMutableURLRequestProperties : SSURLRequestProperties

@property (copy) NSData *HTTPBody;
@property (retain) NSInputStream *HTTPBodyStream;
@property (copy) NSDictionary *HTTPHeaders;
@property (copy) NSString *HTTPMethod;
@property (getter=isITunesStoreRequest) bool ITunesStoreRequest;
@property long long KBSyncType;
@property (retain) NSURL *URL;
@property (copy) NSString *URLBagKey;
@property long long URLBagType;
@property (copy) id /* block */ URLBagURLBlock;
@property (copy) NSArray *URLs;
@property (copy) NSDictionary *additionalMetrics;
@property long long allowedRetryCount;
@property bool allowsBootstrapCellularData;
@property unsigned long long cachePolicy;
@property (copy) NSString *clientAuditBundleIdentifier;
@property (copy) NSData *clientAuditTokenData;
@property (copy) NSString *clientIdentifier;
@property long long expectedContentLength;
@property (getter=isLargeDownload) bool largeDownload;
@property long long machineDataStyle;
@property unsigned long long networkServiceType;
@property (copy) NSDictionary *requestParameters;
@property bool requiresCellularDataNetwork;
@property bool requiresExtendedValidationCertificates;
@property bool requiresExternal;
@property bool requiresHTTPS;
@property bool shouldAddKBSyncData;
@property bool shouldDecodeResponse;
@property bool shouldDisableCellular;
@property bool shouldDisableCellularFallback;
@property bool shouldDisableReversePush;
@property bool shouldDisableReversePushSampling;
@property bool shouldProcessProtocol;
@property bool shouldSendSecureToken;
@property bool shouldSetCookies;
@property double timeoutInterval;
@property (copy) NSArray *userAgentComponents;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAdditionalMetrics:(id)arg1;
- (void)setAllowedRetryCount:(long long)arg1;
- (void)setAllowsBootstrapCellularData:(bool)arg1;
- (void)setCachePolicy:(unsigned long long)arg1;
- (void)setClientAuditBundleIdentifier:(id)arg1;
- (void)setClientAuditTokenData:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setExpectedContentLength:(long long)arg1;
- (void)setHTTPBody:(id)arg1;
- (void)setHTTPBodyStream:(id)arg1;
- (void)setHTTPHeaders:(id)arg1;
- (void)setHTTPMethod:(id)arg1;
- (void)setITunesStoreRequest:(bool)arg1;
- (void)setKBSyncType:(long long)arg1;
- (void)setLargeDownload:(bool)arg1;
- (void)setMachineDataStyle:(long long)arg1;
- (void)setMultiPartFormDataWithDictionary:(id)arg1;
- (void)setNetworkServiceType:(unsigned long long)arg1;
- (void)setRequestParameters:(id)arg1;
- (void)setRequiresCellularDataNetwork:(bool)arg1;
- (void)setRequiresExtendedValidationCertificates:(bool)arg1;
- (void)setRequiresExternal:(bool)arg1;
- (void)setRequiresHTTPS:(bool)arg1;
- (void)setShouldAddKBSyncData:(bool)arg1;
- (void)setShouldDecodeResponse:(bool)arg1;
- (void)setShouldDisableCellular:(bool)arg1;
- (void)setShouldDisableCellularFallback:(bool)arg1;
- (void)setShouldDisableReversePush:(bool)arg1;
- (void)setShouldDisableReversePushSampling:(bool)arg1;
- (void)setShouldProcessProtocol:(bool)arg1;
- (void)setShouldSendSecureToken:(bool)arg1;
- (void)setShouldSetCookies:(bool)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setURL:(id)arg1;
- (void)setURLBagKey:(id)arg1;
- (void)setURLBagType:(long long)arg1;
- (void)setURLBagURLBlock:(id /* block */)arg1;
- (void)setURLs:(id)arg1;
- (void)setUserAgentComponents:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;

// Image: /System/Library/PrivateFrameworks/Radio.framework/Radio

+ (id)newForRadioRequestURL:(id)arg1;
+ (id)newForRadioRequestURL:(id)arg1 accountUniqueIdentifier:(id)arg2;

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