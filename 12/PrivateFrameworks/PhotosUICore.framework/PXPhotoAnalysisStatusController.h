<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXPhotoAnalysisStatusController.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXPhotoAnalysisStatusController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXPhotoAnalysisStatusController : PXObservable {
    bool  __didReceiveGraphFractionCompleted;
    NSError * __graphError;
    bool  __graphReady;
    NSDate * __initialUpdateDate;
    NSDate * __lastGraphBecameReadyDate;
    bool  __requestingGraphFractionCompleted;
    NSMutableArray * __retryBlocks;
    double  _graphFractionCompleted;
    long long  _graphStatus;
    bool  _hasBeenReadyForSomeTime;
    struct { 
        bool graphStatus; 
    }  _needsUpdateFlags;
}

@property (setter=_setDidReceiveGraphFractionCompleted:, nonatomic) bool _didReceiveGraphFractionCompleted;
@property (setter=_setGraphError:, nonatomic, retain) NSError *_graphError;
@property (getter=_isGraphReady, setter=_setGraphReady:, nonatomic) bool _graphReady;
@property (setter=_setInitialUpdateDate:, nonatomic, retain) NSDate *_initialUpdateDate;
@property (setter=_setLastGraphBecameReadyDate:, nonatomic, retain) NSDate *_lastGraphBecameReadyDate;
@property (getter=_isRequestingGraphFractionCompleted, setter=_setRequestingGraphFractionCompleted:, nonatomic) bool _requestingGraphFractionCompleted;
@property (nonatomic, readonly) NSMutableArray *_retryBlocks;
@property (setter=_setGraphFractionCompleted:, nonatomic) double graphFractionCompleted;
@property (setter=_setGraphStatus:, nonatomic) long long graphStatus;
@property (setter=_setHasBeenReadyForSomeTime:, nonatomic) bool hasBeenReadyForSomeTime;
@property (nonatomic, readonly) NSString *stateDescription;

+ (id)sharedStatusController;

- (void).cxx_destruct;
- (void)_dequeueAndPerformBlocks:(id)arg1;
- (bool)_didReceiveGraphFractionCompleted;
- (id)_graphError;
- (void)_handleGraphFractionCompletedReply:(id)arg1 error:(id)arg2;
- (void)_handleGraphReadyForSomeTimeForDate:(id)arg1;
- (void)_handleGraphReadyReplyWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_handleInitialGraceDelay;
- (id)_initialUpdateDate;
- (void)_invalidateGraphStatus;
- (bool)_isGraphReady;
- (bool)_isRequestingGraphFractionCompleted;
- (bool)_isWithinGracePeriod;
- (id)_lastGraphBecameReadyDate;
- (bool)_needsUpdate;
- (void)_requestGraphFractionCompleted;
- (void)_requestGraphReady;
- (id)_retryBlocks;
- (void)_setDidReceiveGraphFractionCompleted:(bool)arg1;
- (void)_setGraphError:(id)arg1;
- (void)_setGraphFractionCompleted:(double)arg1;
- (void)_setGraphReady:(bool)arg1;
- (void)_setGraphStatus:(long long)arg1;
- (void)_setHasBeenReadyForSomeTime:(bool)arg1;
- (void)_setInitialUpdateDate:(id)arg1;
- (void)_setLastGraphBecameReadyDate:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setRequestingGraphFractionCompleted:(bool)arg1;
- (void)_updateGraphStatusIfNeeded;
- (void)_updateIfNeeded;
- (void)didPerformChanges;
- (double)graphFractionCompleted;
- (long long)graphStatus;
- (bool)hasBeenReadyForSomeTime;
- (id)init;
- (id)mutableChangeObject;
- (void)registerRetryBlock:(id /* block */)arg1;
- (id)stateDescription;
- (void)update;

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
