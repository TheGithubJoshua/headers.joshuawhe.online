<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CTCellularPlanRequest.h</title>
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

/PrivateFrameworks/CellularPlanManager.framework/CTCellularPlanRequest.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager (6851.1)
 */

@interface CTCellularPlanRequest : NSObject <NSURLConnectionDataDelegate> {
    NSDictionary * _bootstrapSettings;
    id /* block */  _completionBlock;
    NSURLConnection * _connection;
    NSError * _error;
    NSDictionary * _internetSettings;
    struct dispatch_queue_s { } * _queue;
    NSMutableData * _receivedData;
    NSMutableURLRequest * _request;
    NSArray * _requestCookies;
    NSURLResponse * _response;
    NSArray * _responseCookies;
    int  nextConnectionTypeIndex;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) NSURLConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct dispatch_queue_s { }*queue;
@property (nonatomic, retain) NSMutableData *receivedData;
@property (nonatomic, retain) NSMutableURLRequest *request;
@property (nonatomic, retain) NSURLResponse *response;
@property (nonatomic) NSData *serializedCookies;
@property (readonly) Class superclass;

+ (id)connectionSettingsForServiceType:(long long)arg1;
+ (id)createSessionRequest;
+ (void)initialize;
+ (bool)isRetriableErrorCode:(long long)arg1;
+ (void)load;
+ (id)loadPlansRequestWithUrl:(id)arg1 postData:(id)arg2;
+ (id)newInitiatePurchaseWithSessionId:(id)arg1 planId:(id)arg2;
+ (id)newPurchaseWithSessionId:(id)arg1 receipt:(id)arg2 userId:(id)arg3 userName:(id)arg4;
+ (id)plansRequestWithSignIdMap:(id)arg1 renewalIccid:(id)arg2 urls:(id)arg3;
+ (id)requestHandoffTokenWithSignIdMap:(id)arg1 urls:(id)arg2;
+ (void)setBootstrapConnectionSettings:(id)arg1;
+ (void)setInternetConnectionSettings:(id)arg1;
+ (void)setRequestUrls:(id)arg1;
+ (id)subscriptionDetailsRequestWithIccids:(id)arg1 signIdMap:(id)arg2 urls:(id)arg3;

- (void)_callback;
- (bool)_canTryAnotherConnectionType;
- (id)_connectionSettingsForNextConnectionType;
- (id)_initWithUrl:(id)arg1 httpMethod:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4 internetSettings:(id)arg5 bootstrapSettings:(id)arg6;
- (bool)_isRetryableError:(id)arg1;
- (void)_startRequestWithNextConnectionTypeOrFail;
- (void)cancel;
- (id /* block */)completionBlock;
- (id)connection;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)error;
- (id)initGetWithUrl:(id)arg1;
- (id)initJsonPostWithUrl:(id)arg1 jsonData:(id)arg2;
- (id)initJsonPostWithUrl:(id)arg1 jsonData:(id)arg2 internetSettings:(id)arg3 bootstrapSettings:(id)arg4;
- (id)initPostWithUrl:(id)arg1;
- (id)initWithUrl:(id)arg1 httpMethod:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4;
- (struct dispatch_queue_s { }*)queue;
- (id)receivedData;
- (id)request;
- (id)response;
- (id)serializedCookies;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)setError:(id)arg1;
- (void)setQueue:(struct dispatch_queue_s { }*)arg1;
- (void)setReceivedData:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setSerializedCookies:(id)arg1;
- (void)startRequestWithReplyQueue:(struct dispatch_queue_s { }*)arg1 completion:(id /* block */)arg2;

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
