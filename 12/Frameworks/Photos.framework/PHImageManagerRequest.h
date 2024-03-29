<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PHImageManagerRequest.h</title>
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

/Frameworks/Photos.framework/PHImageManagerRequest.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Photos.framework/Photos (1)
 */

@interface PHImageManagerRequest : NSObject {
    PLCPLDownloadContext * _CPLDownloadContext;
    bool  _CPLDownloadDegraded;
    NSObject<OS_dispatch_group> * _CPLDownloadWaitGroup;
    <_PLImageLoadingAsset> * _asset;
    NSString * _assetUUID;
    PLImageFormat * _bestFormatIssuedSoFar;
    id /* block */  _cancellationHandler;
    bool  _cancelled;
    long long  _cloudSharedAssetPlaceholderKind;
    double  _creationTime;
    double  _creationTimeInterval;
    NSString * _debugFilename;
    id  _domain;
    bool  _finalResultSubmitted;
    bool  _isCloudSharedAsset;
    bool  _isPartOfBurst;
    PHImageManagerRequest * _nextRequest;
    long long  _originalImageOrientation;
    NSString * _pathForAdjustmentFile;
    unsigned long long  _phase;
    int  _registrationRefCount;
    int  _requestID;
    PLPreheatItem * _transientPreheatlItem;
}

@property (retain) PLCPLDownloadContext *CPLDownloadContext;
@property bool CPLDownloadDegraded;
@property (retain) NSObject<OS_dispatch_group> *CPLDownloadWaitGroup;
@property (nonatomic, readonly) <_PLImageLoadingAsset> *asset;
@property (nonatomic, readonly) NSString *assetUUID;
@property (nonatomic, retain) PLImageFormat *bestFormatIssuedSoFar;
@property (copy) id /* block */ cancellationHandler;
@property (nonatomic, readonly) long long cloudSharedAssetPlaceholderKind;
@property (nonatomic, readonly) double creationTime;
@property (nonatomic, readonly) double creationTimeInterval;
@property (nonatomic, readonly) NSString *debugFilename;
@property (nonatomic, readonly) id domain;
@property (nonatomic) bool finalResultSubmitted;
@property (nonatomic, readonly) bool isCloudSharedAsset;
@property (nonatomic, readonly) bool isPartOfBurst;
@property (nonatomic, readonly) bool isVideo;
@property (retain) PHImageManagerRequest *nextRequest;
@property (nonatomic, readonly) NSString *pathForAdjustmentFile;
@property (nonatomic) unsigned long long phase;
@property (nonatomic, readonly) int registrationRefCount;
@property (nonatomic, readonly) int requestID;
@property (retain) PLPreheatItem *transientPreheatlItem;

+ (int)nextRequestID;

- (void).cxx_destruct;
- (id)CPLDownloadContext;
- (bool)CPLDownloadDegraded;
- (id)CPLDownloadWaitGroup;
- (id)asset;
- (id)assetUUID;
- (bool)atomicDecrementRegistrationRefCountIfOne;
- (bool)atomicIncrementRegistrationRefCountIfZero;
- (id)bestFormatIssuedSoFar;
- (id /* block */)cancellationHandler;
- (void)clearResultHandler;
- (void)cloneIDAndResultHandlerFromRequest:(id)arg1;
- (long long)cloudSharedAssetPlaceholderKind;
- (double)creationTime;
- (double)creationTimeInterval;
- (id)debugFilename;
- (int)decrementRegistrationRefCount;
- (id)domain;
- (bool)finalResultSubmitted;
- (int)incrementRegistrationRefCount;
- (id)init;
- (id)initRequestWithAsset:(id)arg1 domain:(id)arg2;
- (id)initRequestWithID:(int)arg1 asset:(id)arg2 domain:(id)arg3;
- (id)initWithRequestID:(int)arg1;
- (bool)isCancelled;
- (bool)isCloudSharedAsset;
- (bool)isPartOfBurst;
- (bool)isVideo;
- (id)nextRequest;
- (long long)originalImageOrientation;
- (id)pathForAdjustmentFile;
- (unsigned long long)phase;
- (int)registrationRefCount;
- (int)requestID;
- (void)setBestFormatIssuedSoFar:(id)arg1;
- (void)setCPLDownloadContext:(id)arg1;
- (void)setCPLDownloadDegraded:(bool)arg1;
- (void)setCPLDownloadWaitGroup:(id)arg1;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setFinalResultSubmitted:(bool)arg1;
- (void)setNextRequest:(id)arg1;
- (void)setPhase:(unsigned long long)arg1;
- (void)setTransientPreheatlItem:(id)arg1;
- (id)transientPreheatlItem;

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
