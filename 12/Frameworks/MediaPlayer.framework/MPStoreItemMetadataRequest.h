<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MPStoreItemMetadataRequest.h</title>
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

/Frameworks/MediaPlayer.framework/MPStoreItemMetadataRequest.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer (1.0)
 */

@interface MPStoreItemMetadataRequest : NSObject {
    bool  _allowLocalEquivalencies;
    NSString * _clientIdentifier;
    ICClientInfo * _clientInfo;
    ICUserIdentity * _delegatedUserIdentity;
    NSArray * _itemIdentifiers;
    long long  _personalizationStyle;
    NSString * _platform;
    unsigned long long  _reason;
    double  _retryDelay;
    bool  _shouldIgnoreCache;
    bool  _shouldRequireCachedResults;
    NSNumber * _timeoutInterval;
    ICUserIdentity * _userIdentity;
    ICUserIdentityStore * _userIdentityStore;
}

@property (nonatomic) bool allowLocalEquivalencies;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, copy) ICClientInfo *clientInfo;
@property (nonatomic, copy) ICUserIdentity *delegatedUserIdentity;
@property (nonatomic, copy) NSArray *itemIdentifiers;
@property (nonatomic) long long personalizationStyle;
@property (getter=isPersonalized, nonatomic, readonly) bool personalized;
@property (nonatomic, copy) NSString *platform;
@property (nonatomic) unsigned long long reason;
@property (nonatomic, copy) NSString *requestingBundleIdentifier;
@property (nonatomic, copy) NSString *requestingBundleVersion;
@property (nonatomic) double retryDelay;
@property (nonatomic) bool shouldIgnoreCache;
@property (nonatomic) bool shouldRequireCachedResults;
@property (nonatomic, readonly, copy) ICStorePlatformRequest *storePlatformRequest;
@property (nonatomic, copy) NSNumber *timeoutInterval;
@property (nonatomic, copy) ICUserIdentity *userIdentity;
@property (nonatomic, retain) ICUserIdentityStore *userIdentityStore;

+ (id)itemIdentifiersForModelObjects:(id)arg1;

- (void).cxx_destruct;
- (bool)allowLocalEquivalencies;
- (id)clientIdentifier;
- (id)clientInfo;
- (id)delegatedUserIdentity;
- (id)init;
- (bool)isPersonalized;
- (id)itemIdentifiers;
- (long long)personalizationStyle;
- (id)platform;
- (unsigned long long)reason;
- (id)requestingBundleIdentifier;
- (id)requestingBundleVersion;
- (double)retryDelay;
- (void)setAllowLocalEquivalencies:(bool)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setDelegatedUserIdentity:(id)arg1;
- (void)setItemIdentifiers:(id)arg1;
- (void)setPersonalizationStyle:(long long)arg1;
- (void)setPlatform:(id)arg1;
- (void)setReason:(unsigned long long)arg1;
- (void)setRequestingBundleIdentifier:(id)arg1;
- (void)setRequestingBundleVersion:(id)arg1;
- (void)setRetryDelay:(double)arg1;
- (void)setShouldIgnoreCache:(bool)arg1;
- (void)setShouldRequireCachedResults:(bool)arg1;
- (void)setTimeoutInterval:(id)arg1;
- (void)setUserIdentity:(id)arg1;
- (void)setUserIdentityStore:(id)arg1;
- (bool)shouldIgnoreCache;
- (bool)shouldRequireCachedResults;
- (id)storePlatformRequest;
- (id)timeoutInterval;
- (id)userIdentity;
- (id)userIdentityStore;

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