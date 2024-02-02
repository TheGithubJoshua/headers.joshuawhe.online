<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ATStoreInfo.h</title>
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

/PrivateFrameworks/AirTraffic.framework/ATStoreInfo.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic (116)
 */

@interface ATStoreInfo : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _assetDictionary;
    NSMutableDictionary * _downloadDictionary;
    ICStoreMediaResponseItem * _storeMediaResponseItem;
}

@property (nonatomic, retain) NSNumber *DSID;
@property (nonatomic, retain) NSString *XID;
@property (nonatomic, retain) NSNumber *adamID;
@property (nonatomic, retain) NSString *appleID;
@property (readonly) NSDictionary *assetDictionary;
@property (nonatomic, retain) NSNumber *cloudDSID;
@property (nonatomic, retain) NSNumber *collectionID;
@property (nonatomic, retain) NSString *dimensions;
@property (readonly) NSDictionary *downloadDictionary;
@property (nonatomic, retain) NSNumber *drmFree;
@property (nonatomic, retain) NSNumber *endpointType;
@property (nonatomic, retain) NSString *flavor;
@property (nonatomic, retain) NSNumber *matchStatus;
@property (nonatomic, retain) NSString *podcastEpisodeGUID;
@property (nonatomic, retain) NSString *redownloadParams;
@property (nonatomic, retain) NSNumber *redownloadStatus;
@property (nonatomic, retain) NSNumber *sagaID;
@property (nonatomic, retain) ICStoreMediaResponseItem *storeMediaResponseItem;
@property (nonatomic, retain) NSString *storefrontID;
@property (nonatomic, retain) NSNumber *subscriptionID;
@property (nonatomic, retain) NSString *syncID;
@property (nonatomic, retain) NSNumber *versionID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)DSID;
- (id)XID;
- (id)adamID;
- (id)appleID;
- (id)assetDictionary;
- (id)cloudDSID;
- (id)collectionID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dimensions;
- (id)downloadDictionary;
- (id)drmFree;
- (void)encodeWithCoder:(id)arg1;
- (id)endpointType;
- (id)flavor;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)matchStatus;
- (id)podcastEpisodeGUID;
- (id)redownloadParams;
- (id)redownloadStatus;
- (id)sagaID;
- (void)setAdamID:(id)arg1;
- (void)setAppleID:(id)arg1;
- (void)setCloudDSID:(id)arg1;
- (void)setCollectionID:(id)arg1;
- (void)setDSID:(id)arg1;
- (void)setDimensions:(id)arg1;
- (void)setDrmFree:(id)arg1;
- (void)setEndpointType:(id)arg1;
- (void)setFlavor:(id)arg1;
- (void)setMatchStatus:(id)arg1;
- (void)setPodcastEpisodeGUID:(id)arg1;
- (void)setRedownloadParams:(id)arg1;
- (void)setRedownloadStatus:(id)arg1;
- (void)setSagaID:(id)arg1;
- (void)setStoreMediaResponseItem:(id)arg1;
- (void)setStorefrontID:(id)arg1;
- (void)setSubscriptionID:(id)arg1;
- (void)setSyncID:(id)arg1;
- (void)setVersionID:(id)arg1;
- (void)setXID:(id)arg1;
- (id)storeMediaResponseItem;
- (id)storefrontID;
- (id)subscriptionID;
- (id)syncID;
- (id)versionID;

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