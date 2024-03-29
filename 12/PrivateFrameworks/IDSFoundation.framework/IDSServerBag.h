<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>IDSServerBag.h</title>
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

/PrivateFrameworks/IDSFoundation.framework/IDSServerBag.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation (1000)
 */

@interface IDSServerBag : NSObject {
    bool  _allowSelfSignedCertificates;
    bool  _allowUnsignedBags;
    NSString * _apsEnvironmentName;
    NSDictionary * _bag;
    NSObject<OS_dispatch_queue> * _bagQueue;
    NSURL * _bagURL;
    NSNumber * _cacheTime;
    NSDictionary * _cachedBag;
    NSString * _cachedHash;
    NSString * _cachedURLString;
    NSData * _certData;
    IMConnectionMonitor * _connectionMonitor;
    unsigned long long  _hasPairedDeviceState;
    NSDate * _loadDate;
    IDSRemoteURLConnection * _remoteURLConnection;
    NSArray * _serverCerts;
    NSData * _serverGivenBag;
    NSData * _serverSignature;
    int  _token;
    int  _trustStatus;
    NSMutableURLRequest * _urlRequest;
}

@property (setter=_setBag:, retain) NSDictionary *_bag;
@property (retain) NSObject<OS_dispatch_queue> *_bagQueue;
@property (retain) NSNumber *_cacheTime;
@property (setter=_setCachedBag:, retain) NSDictionary *_cachedBag;
@property (setter=_setCachedHash:, retain) NSString *_cachedHash;
@property (setter=_setCachedURLString:, retain) NSString *_cachedURLString;
@property (retain) NSData *_certData;
@property (retain) IMConnectionMonitor *_connectionMonitor;
@property (retain) NSDate *_loadDate;
@property (retain) IDSRemoteURLConnection *_remoteURLConnection;
@property (setter=_setTrustStatus:) int _trustStatus;
@property (retain) NSMutableURLRequest *_urlRequest;
@property bool allowSelfSignedCertificates;
@property bool allowUnsignedBags;
@property (retain) NSString *apsEnvironmentName;
@property (retain) NSURL *bagURL;
@property unsigned long long hasPairedDeviceState;
@property (readonly) bool isInDebilitatedMode;
@property (readonly) bool isLoaded;
@property (readonly) bool isLoading;
@property (readonly) bool isServerAvailable;
@property (retain) NSArray *serverCerts;
@property (retain) NSData *serverGivenBag;
@property (retain) NSData *serverSignature;
@property int token;

+ (id)_bagCreationLock;
+ (id)_sharedInstance;
+ (id)_sharedInstanceForClass:(Class)arg1;
+ (id)defaultBag;
+ (id)sharedInstance;
+ (id)sharedInstanceForBagType:(long long)arg1;

- (void).cxx_destruct;
- (void)__saveCacheToPrefs;
- (bool)_allowInvalid;
- (id)_bag;
- (id)_bagDefaultsDomain;
- (void)_bagExternallyReloaded;
- (id)_bagQueue;
- (id)_cacheTime;
- (id)_cachedBag;
- (id)_cachedHash;
- (id)_cachedURLString;
- (void)_cancelCurrentLoad;
- (id)_certData;
- (void)_clearCache;
- (id)_connectionMonitor;
- (void)_generateURLRequest;
- (id)_initWithURL:(id)arg1 apsEnvironmentName:(id)arg2 allowSelfSignedCertificates:(bool)arg3 allowUnsignedBags:(bool)arg4;
- (void)_invalidate;
- (id)_loadDate;
- (void)_loadFromCache;
- (bool)_loadFromDictionary:(id)arg1 returningError:(id*)arg2;
- (bool)_loadFromSignedDictionary:(id)arg1 returningError:(id*)arg2;
- (void)_processBagResultData:(id)arg1 response:(id)arg2 inBackground:(bool)arg3;
- (id)_remoteURLConnection;
- (void)_saveCacheToPrefs;
- (void)_saveToCache;
- (void)_setBag:(id)arg1;
- (void)_setCachedBag:(id)arg1;
- (void)_setCachedHash:(id)arg1;
- (void)_setCachedURLString:(id)arg1;
- (void)_setTrustStatus:(int)arg1;
- (void)_startBagLoad:(bool)arg1;
- (int)_trustStatus;
- (id)_urlRequest;
- (bool)allowSelfSignedCertificates;
- (bool)allowUnsignedBags;
- (id)apsEnvironmentName;
- (id)bagURL;
- (void)connectionMonitorDidUpdate:(id)arg1;
- (void)dealloc;
- (void)forceBagLoad;
- (unsigned long long)hasPairedDeviceState;
- (bool)isInDebilitatedMode;
- (bool)isLoaded;
- (bool)isLoading;
- (bool)isServerAvailable;
- (id)objectForKey:(id)arg1;
- (id)serverCerts;
- (id)serverGivenBag;
- (id)serverSignature;
- (void)setAllowSelfSignedCertificates:(bool)arg1;
- (void)setAllowUnsignedBags:(bool)arg1;
- (void)setApsEnvironmentName:(id)arg1;
- (void)setBagURL:(id)arg1;
- (void)setHasPairedDeviceState:(unsigned long long)arg1;
- (void)setServerCerts:(id)arg1;
- (void)setServerGivenBag:(id)arg1;
- (void)setServerSignature:(id)arg1;
- (void)setToken:(int)arg1;
- (void)set_bagQueue:(id)arg1;
- (void)set_cacheTime:(id)arg1;
- (void)set_certData:(id)arg1;
- (void)set_connectionMonitor:(id)arg1;
- (void)set_loadDate:(id)arg1;
- (void)set_remoteURLConnection:(id)arg1;
- (void)set_urlRequest:(id)arg1;
- (void)startBagLoad;
- (int)token;
- (bool)trustRefFromCertificates:(id)arg1 trustRef:(struct __SecTrust {}**)arg2;
- (id)urlWithKey:(id)arg1;

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
