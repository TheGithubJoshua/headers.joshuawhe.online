<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SSBookDownload.h</title>
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

/PrivateFrameworks/StoreServices.framework/SSBookDownload.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices (1)
 */

@interface SSBookDownload : SSDownload {
    NSString * _downloadPhaseIdentifierOverride;
    <SSBookDownloadQueue> * _downloadQueue;
    <SSBookDownloadStatus> * _downloadStatus;
}

@property (nonatomic, readonly) NSString *downloadID;
@property (nonatomic, retain) NSString *downloadPhaseIdentifierOverride;
@property (nonatomic, readonly) <SSBookDownloadStatus> *downloadStatus;

- (void).cxx_destruct;
- (void)_becomeManagedOnConnection:(id)arg1;
- (bool)addAsset:(id)arg1 forType:(id)arg2;
- (id)assetsForType:(id)arg1;
- (id)backgroundNetworkingJobGroupName;
- (long long)bytesDownloaded;
- (long long)bytesTotal;
- (id)downloadID;
- (id)downloadPhaseIdentifier;
- (id)downloadPhaseIdentifierOverride;
- (id)downloadPolicy;
- (long long)downloadSizeLimit;
- (id)downloadStatus;
- (double)estimatedSecondsRemaining;
- (id)initWithDownloadStatus:(id)arg1;
- (bool)isBackgroundNetworkingUserInitiated;
- (bool)isCancelable;
- (bool)isEligibleForRestore:(id*)arg1;
- (id)metadata;
- (id)networkConstraints;
- (void)pause;
- (double)percentComplete;
- (long long)persistentIdentifier;
- (void)prioritizeAboveDownload:(id)arg1 completionBlock:(id /* block */)arg2;
- (bool)removeAsset:(id)arg1;
- (void)restart;
- (void)resume;
- (void)setBackgroundNetworkingJobGroupName:(id)arg1;
- (void)setBackgroundNetworkingUserInitiated:(bool)arg1;
- (void)setDownloadHandler:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setDownloadPhaseIdentifierOverride:(id)arg1;
- (void)setDownloadPolicy:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNetworkConstraints:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setValuesWithStoreDownloadMetadata:(id)arg1;
- (id)status;
- (id)valueForProperty:(id)arg1;

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
