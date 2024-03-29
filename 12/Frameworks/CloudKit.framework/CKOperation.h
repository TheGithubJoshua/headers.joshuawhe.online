<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKOperation.h</title>
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

/Frameworks/CloudKit.framework/CKOperation.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit (736.235)
 */

@interface CKOperation : NSOperation <ICLoggable> {
    CKOperationMMCSRequestOptions * _MMCSRequestOptions;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSError * _cancelError;
    NSObject<OS_voucher> * _clientVoucher;
    bool  _clouddConnectionInterrupted;
    CKOperationConfiguration * _configuration;
    id  _context;
    NSString * _deviceIdentifier;
    NSError * _error;
    CKOperationGroup * _group;
    NSObject<OS_os_transaction> * _isExecuting;
    bool  _isFinished;
    bool  _isFinishingOnCallbackQueue;
    bool  _isOutstandingOperation;
    id /* block */  _longLivedOperationWasPersistedBlock;
    CKOperationMetrics * _metrics;
    NSString * _operationID;
    CKEventMetric * _operationMetric;
    NSObject<OS_os_activity> * _osActivity;
    NSString * _parentSectionID;
    CKPlaceholderOperation * _placeholderOperation;
    bool  _queueHasStarted;
    id /* block */  _requestCompletedBlock;
    CKOperationConfiguration * _resolvedConfiguration;
    NSMutableArray * _savedRequestUUIDs;
    NSMutableDictionary * _savedResponseHTTPHeadersByRequestUUID;
    NSMutableDictionary * _savedW3CNavigationTimingByRequestUUID;
    NSString * _sectionID;
    CKTimeLogger * _timeLogger;
    NSObject<OS_dispatch_source> * _timeoutSource;
    bool  _usesBackgroundSession;
}

@property (nonatomic, retain) CKOperationMMCSRequestOptions *MMCSRequestOptions;
@property (nonatomic, retain) NSDictionary *additionalRequestHTTPHeaders;
@property (nonatomic) bool allowsBackgroundNetworking;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) NSError *cancelError;
@property (nonatomic, retain) id clientVoucher;
@property (nonatomic) bool clouddConnectionInterrupted;
@property (nonatomic, copy) CKOperationConfiguration *configuration;
@property (nonatomic, readonly) id context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *deviceIdentifier;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) NSString *flowControlKey;
@property (nonatomic, retain) CKOperationGroup *group;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isExecuting;
@property (nonatomic) bool isFinished;
@property (nonatomic, readonly) bool isFinishingOnCallbackQueue;
@property (nonatomic) bool isOutstandingOperation;
@property (nonatomic, copy) id /* block */ longLivedOperationWasPersistedBlock;
@property (nonatomic, retain) CKOperationMetrics *metrics;
@property (nonatomic, copy) NSString *operationID;
@property (nonatomic, readonly) CKOperationInfo *operationInfo;
@property (nonatomic, readonly) CKEventMetric *operationMetric;
@property (nonatomic, retain) NSObject<OS_os_activity> *osActivity;
@property (nonatomic, readonly) NSString *parentSectionID;
@property (retain) CKPlaceholderOperation *placeholderOperation;
@property (nonatomic) bool preferAnonymousRequests;
@property bool queueHasStarted;
@property (nonatomic, copy) id /* block */ requestCompletedBlock;
@property (nonatomic, readonly) NSArray *requestUUIDs;
@property (nonatomic, readonly) CKOperationConfiguration *resolvedConfiguration;
@property (nonatomic, readonly) NSDictionary *responseHTTPHeadersByRequestUUID;
@property (nonatomic, retain) NSMutableArray *savedRequestUUIDs;
@property (nonatomic, retain) NSMutableDictionary *savedResponseHTTPHeadersByRequestUUID;
@property (nonatomic, retain) NSMutableDictionary *savedW3CNavigationTimingByRequestUUID;
@property (nonatomic, retain) NSString *sectionID;
@property (nonatomic, retain) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, retain) NSString *sourceApplicationSecondaryIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKTimeLogger *timeLogger;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timeoutSource;
@property (nonatomic) bool usesBackgroundSession;
@property (nonatomic, readonly) NSDictionary *w3cNavigationTimingByRequestUUID;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (bool)CKOperationShouldRun:(id*)arg1;
- (id)MMCSRequestOptions;
- (id)_findBestThrottleError:(id)arg1;
- (void)_finishInternalOnCallbackQueueWithError:(id)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCheckpointCallback:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleRemoteProxyFailureWithError:(id)arg1;
- (void)_handleStatisticsCallback:(id)arg1;
- (void)_installTimeoutSource;
- (void)_setIsExecuting:(bool)arg1;
- (void)_setIsFinished:(bool)arg1;
- (void)_start;
- (void)_uninstallTimeoutSource;
- (bool)_wantsFlowControl;
- (id)activityCreate;
- (id)additionalRequestHTTPHeaders;
- (bool)allowsBackgroundNetworking;
- (bool)allowsCellularAccess;
- (id)callbackQueue;
- (void)cancel;
- (id)cancelError;
- (void)cancelWithUnderlyingError:(id)arg1;
- (id)clientVoucher;
- (bool)clouddConnectionInterrupted;
- (id)configuration;
- (id)container;
- (id)context;
- (id)daemon;
- (void)dealloc;
- (id)description;
- (id)deviceIdentifier;
- (id)error;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)finishWithError:(id)arg1;
- (id)flowControlKey;
- (id)group;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isFinishingOnCallbackQueue;
- (bool)isLongLived;
- (bool)isOutstandingOperation;
- (id /* block */)longLivedOperationWasPersistedBlock;
- (void)main;
- (id)metrics;
- (Class)operationClass;
- (id)operationID;
- (id)operationInfo;
- (Class)operationInfoClass;
- (id)operationMetric;
- (id)osActivity;
- (id)parentSectionID;
- (void)performCKOperation;
- (id)placeholderOperation;
- (bool)preferAnonymousRequests;
- (void)processOperationResult:(id)arg1;
- (long long)qualityOfService;
- (bool)queueHasStarted;
- (id /* block */)requestCompletedBlock;
- (id)requestUUIDs;
- (id)resolvedConfiguration;
- (id)responseHTTPHeadersByRequestUUID;
- (id)savedRequestUUIDs;
- (id)savedResponseHTTPHeadersByRequestUUID;
- (id)savedW3CNavigationTimingByRequestUUID;
- (id)sectionID;
- (void)setAdditionalRequestHTTPHeaders:(id)arg1;
- (void)setAllowsBackgroundNetworking:(bool)arg1;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setCancelError:(id)arg1;
- (void)setClientVoucher:(id)arg1;
- (void)setClouddConnectionInterrupted:(bool)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setError:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setIsExecuting:(bool)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)setIsOutstandingOperation:(bool)arg1;
- (void)setLongLived:(bool)arg1;
- (void)setLongLivedOperationWasPersistedBlock:(id /* block */)arg1;
- (void)setMMCSRequestOptions:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setOperationID:(id)arg1;
- (void)setOsActivity:(id)arg1;
- (void)setPlaceholderOperation:(id)arg1;
- (void)setPreferAnonymousRequests:(bool)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setQueueHasStarted:(bool)arg1;
- (void)setRequestCompletedBlock:(id /* block */)arg1;
- (void)setSavedRequestUUIDs:(id)arg1;
- (void)setSavedResponseHTTPHeadersByRequestUUID:(id)arg1;
- (void)setSavedW3CNavigationTimingByRequestUUID:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (void)setTimeLogger:(id)arg1;
- (void)setTimeoutIntervalForRequest:(double)arg1;
- (void)setTimeoutIntervalForResource:(double)arg1;
- (void)setTimeoutSource:(id)arg1;
- (void)setUsesBackgroundSession:(bool)arg1;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (void)start;
- (id)timeLogger;
- (double)timeoutIntervalForRequest;
- (double)timeoutIntervalForResource;
- (id)timeoutSource;
- (bool)usesBackgroundSession;
- (id)w3cNavigationTimingByRequestUUID;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)longOperationDescription;
- (id)shortOperationDescription;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (id)ic_loggingIdentifier;
- (id)ic_loggingValues;
- (void)ic_removeAllCompletionBlocks;

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
