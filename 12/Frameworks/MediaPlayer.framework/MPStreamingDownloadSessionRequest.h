<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MPStreamingDownloadSessionRequest.h</title>
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

/Frameworks/MediaPlayer.framework/MPStreamingDownloadSessionRequest.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer (1.0)
 */

@interface MPStreamingDownloadSessionRequest : NSObject {
    NSString * _assetSourceStoreFrontID;
    NSString * _buyParameters;
    id /* block */  _downloadSessionAlternativeConfigurationOptionsBlock;
    long long  _endpointType;
    long long  _equivalencySourceAdamID;
    MPMediaPlaybackItemMetadata * _playbackItemMetadata;
    unsigned long long  _preferredAssetQuality;
    bool  _prefersHLS;
    NSString * _requestingBundleIdentifier;
    NSString * _requestingBundleVersion;
    bool  _shouldStartLeaseSession;
    bool  _shouldUseAccountLessStreaming;
    bool  _shouldUseStreamingRedownload;
    long long  _storeAdamID;
    bool  _streamingRental;
}

@property (nonatomic, copy) NSString *assetSourceStoreFrontID;
@property (nonatomic, readonly, copy) NSString *buyParameters;
@property (nonatomic, copy) id /* block */ downloadSessionAlternativeConfigurationOptionsBlock;
@property (nonatomic, readonly) long long endpointType;
@property (nonatomic) long long equivalencySourceAdamID;
@property (nonatomic, retain) MPMediaPlaybackItemMetadata *playbackItemMetadata;
@property (nonatomic) unsigned long long preferredAssetQuality;
@property (nonatomic) bool prefersHLS;
@property (nonatomic, copy) NSString *requestingBundleIdentifier;
@property (nonatomic, copy) NSString *requestingBundleVersion;
@property (nonatomic) bool shouldStartLeaseSession;
@property (nonatomic) bool shouldUseAccountLessStreaming;
@property (nonatomic) bool shouldUseStreamingRedownload;
@property (nonatomic, readonly) long long storeAdamID;
@property (getter=isStreamingRental, nonatomic) bool streamingRental;
@property (nonatomic, readonly) bool usesSubscriptionLease;

- (void).cxx_destruct;
- (id)assetSourceStoreFrontID;
- (id)buyParameters;
- (id /* block */)downloadSessionAlternativeConfigurationOptionsBlock;
- (long long)endpointType;
- (long long)equivalencySourceAdamID;
- (bool)isStreamingRental;
- (id)playbackItemMetadata;
- (unsigned long long)preferredAssetQuality;
- (bool)prefersHLS;
- (id)requestingBundleIdentifier;
- (id)requestingBundleVersion;
- (void)setAssetSourceStoreFrontID:(id)arg1;
- (void)setDownloadSessionAlternativeConfigurationOptionsBlock:(id /* block */)arg1;
- (void)setEquivalencySourceAdamID:(long long)arg1;
- (void)setPlaybackItemMetadata:(id)arg1;
- (void)setPreferredAssetQuality:(unsigned long long)arg1;
- (void)setPrefersHLS:(bool)arg1;
- (void)setRequestingBundleIdentifier:(id)arg1;
- (void)setRequestingBundleVersion:(id)arg1;
- (void)setShouldStartLeaseSession:(bool)arg1;
- (void)setShouldUseAccountLessStreaming:(bool)arg1;
- (void)setShouldUseStreamingRedownload:(bool)arg1;
- (void)setStreamingRental:(bool)arg1;
- (bool)shouldStartLeaseSession;
- (bool)shouldUseAccountLessStreaming;
- (bool)shouldUseStreamingRedownload;
- (long long)storeAdamID;
- (bool)usesSubscriptionLease;

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