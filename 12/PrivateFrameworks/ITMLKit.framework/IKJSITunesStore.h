<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>IKJSITunesStore.h</title>
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

/PrivateFrameworks/ITMLKit.framework/IKJSITunesStore.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit (1)
 */

@interface IKJSITunesStore : IKJSObject <IKJSITunesStore, NSObject, _IKJSITunesStore, _IKJSITunesStoreProxy> {
    IKURLBagCache * _bagCache;
    NSString * _cookieURL;
    NSNumber * _lastAccountDSID;
    NSDictionary * _lastKnownStatusDictionary;
    SSMetricsController * _metricsController;
    id  _ssAccountStoreChangedToken;
    NSString * _storeFrontSuffix;
    id  _subscriptionStatusDidChangeToken;
    id  _urlBagCacheUpdateToken;
}

@property (nonatomic, readonly) NSString *DSID;
@property (nonatomic, readonly) NSDictionary *accountInfo;
@property (nonatomic, retain) IKURLBagCache *bagCache;
@property (nonatomic, retain) id cookie;
@property (nonatomic, retain) NSString *cookieURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isManagedAppleID, nonatomic, readonly) bool managedAppleID;
@property (nonatomic, readonly) NSString *networkConnectionType;
@property (nonatomic, retain) NSString *storefront;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userAgent;

+ (void)setHeadersForURL:(id)arg1 inRequestProperties:(id)arg2;
+ (void)setITunesStoreHeaders:(id)arg1;

- (void).cxx_destruct;
- (id)DSID;
- (void)_accountStoreChanged;
- (void)_bagCacheUpdated;
- (id)_subscriptionStatusDictionaryWithStatus:(id)arg1 isFinal:(bool)arg2;
- (void)_subscriptionStatusDidChanged:(id)arg1;
- (id)accountInfo;
- (id)asPrivateIKJSITunesStore;
- (void)authenticate:(id)arg1 :(id)arg2;
- (id)bagCache;
- (void)clearCookies;
- (id)cookie;
- (id)cookieURL;
- (void)dealloc;
- (id)eligibilityForService:(id)arg1;
- (void)evaluateScripts:(id)arg1 :(id)arg2;
- (void)flushUnreportedEvents;
- (id)getBag;
- (void)getServiceEligibility:(id)arg1 :(id)arg2;
- (id)initWithAppContext:(id)arg1;
- (id)initWithAppContext:(id)arg1 urlBagCache:(id)arg2;
- (void)invalidateBag;
- (bool)isManagedAppleID;
- (void)loadStoreContent:(id)arg1 :(id)arg2;
- (id)makeStoreXMLHttpRequest;
- (id)networkConnectionType;
- (void)recordEvent:(id)arg1 :(id)arg2;
- (void)setBagCache:(id)arg1;
- (void)setCookie:(id)arg1;
- (void)setCookieURL:(id)arg1;
- (void)setStorefront:(id)arg1;
- (void)signOut;
- (id)storefront;
- (void)updateServiceEligibility:(id)arg1;
- (id)userAgent;

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