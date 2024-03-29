<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TVPSecureKeyRequest.h</title>
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

/PrivateFrameworks/TVPlayback.framework/TVPSecureKeyRequest.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback (1)
 */

@interface TVPSecureKeyRequest : TVPResourceLoadingRequest {
    NSData * _certificateData;
    NSData * _contentIdentifierData;
    TVPPlaybackReportingEventCollection * _eventCollection;
    NSData * _keyRequestData;
    NSNumber * _rentalID;
    NSString * _reportingID;
    NSNumber * _requestCompletionTime;
    NSDate * _requestEndDate;
    unsigned long long  _requestID;
    NSDictionary * _requestOptions;
    NSDate * _requestStartDate;
    bool  _retrievesOfflineKeys;
    unsigned long long  _retryCount;
    NSDate * _startDate;
}

@property (nonatomic, copy) NSData *certificateData;
@property (nonatomic, copy) NSData *contentIdentifierData;
@property (nonatomic, retain) TVPPlaybackReportingEventCollection *eventCollection;
@property (nonatomic, readonly) bool isRenewal;
@property (nonatomic, copy) NSData *keyRequestData;
@property (nonatomic, readonly) bool offlineKeyUsageAllowed;
@property (nonatomic, copy) NSNumber *rentalID;
@property (nonatomic, readonly) NSString *reportingID;
@property (nonatomic, retain) NSNumber *requestCompletionTime;
@property (nonatomic, copy) NSDate *requestEndDate;
@property (nonatomic, readonly) unsigned long long requestID;
@property (nonatomic, copy) NSDictionary *requestOptions;
@property (nonatomic, copy) NSDate *requestStartDate;
@property (nonatomic) bool retrievesOfflineKeys;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic, copy) NSDate *startDate;

- (void).cxx_destruct;
- (id)certificateData;
- (id)contentIdentifierData;
- (id)eventCollection;
- (void)finishLoadingWithResponseData:(id)arg1 renewalDate:(id)arg2 keyType:(long long)arg3;
- (id)initWithAssetResourceLoadingRequest:(id)arg1;
- (bool)isRenewal;
- (id)keyRequestData;
- (void)loadKeyRequestDataAsynchronouslyWithCompletion:(id /* block */)arg1;
- (bool)loadKeyRequestDataWithError:(id*)arg1;
- (id)offlineKeyDataForResponseData:(id)arg1 error:(id*)arg2;
- (bool)offlineKeyUsageAllowed;
- (id)rentalID;
- (id)reportingID;
- (id)requestCompletionTime;
- (id)requestEndDate;
- (unsigned long long)requestID;
- (id)requestOptions;
- (id)requestStartDate;
- (bool)retrievesOfflineKeys;
- (unsigned long long)retryCount;
- (void)setCertificateData:(id)arg1;
- (void)setContentIdentifierData:(id)arg1;
- (void)setEventCollection:(id)arg1;
- (void)setKeyRequestData:(id)arg1;
- (void)setRentalID:(id)arg1;
- (void)setRequestCompletionTime:(id)arg1;
- (void)setRequestEndDate:(id)arg1;
- (void)setRequestOptions:(id)arg1;
- (void)setRequestStartDate:(id)arg1;
- (void)setRetrievesOfflineKeys:(bool)arg1;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

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
