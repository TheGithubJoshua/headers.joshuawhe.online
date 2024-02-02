<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ICQDaemonPersisted.h</title>
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

/PrivateFrameworks/iCloudQuotaDaemon.framework/ICQDaemonPersisted.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon (1)
 */

@interface ICQDaemonPersisted : NSObject {
    NSString * _accountAltDSID;
    double  _callbackInterval;
    bool  _failedToFetchFromServer;
    NSDictionary * _failureDetails;
    NSDate * _retrievalDate;
    NSDictionary * _serverDictionary;
}

@property (nonatomic, readonly) NSNumber *_cachedQuotaAvailable;
@property (nonatomic, readonly) NSMutableDictionary *_mutablePersistenceDictionary;
@property (nonatomic, readonly) NSDictionary *_persistenceDictionary;
@property (nonatomic, retain) NSString *accountAltDSID;
@property (nonatomic) double callbackInterval;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic) bool failedToFetchFromServer;
@property (nonatomic, retain) NSDictionary *failureDetails;
@property (nonatomic, retain) NSDate *retrievalDate;
@property (nonatomic, retain) NSDictionary *serverDictionary;

+ (id)_mutablePlaceholderPersistanceDictionary;
+ (id)_placeholderObject;
+ (id)_placeholderPersistenceDictionary;
+ (void)clearPersistedObject;
+ (void)clearPersistedObjectWithCompletion:(id /* block */)arg1;
+ (double)defaultCallbackInterval;
+ (id)persistedObject;
+ (id)persistenceDomain;
+ (id)persistenceKey;

- (void).cxx_destruct;
- (id)_cachedQuotaAvailable;
- (double)_callbackIntervalFromServerObject:(id)arg1;
- (id)_initWithAccount:(id)arg1 error:(id)arg2;
- (id)_initWithAccount:(id)arg1 serverDictionary:(id)arg2;
- (id)_initWithAccountAltDSID:(id)arg1 error:(id)arg2;
- (id)_mutablePersistenceDictionary;
- (id)_persistenceDictionary;
- (id)accountAltDSID;
- (double)callbackInterval;
- (id)expirationDate;
- (bool)failedToFetchFromServer;
- (id)failureDetails;
- (id)initWithDictionary:(id)arg1;
- (bool)isExpired;
- (bool)isValidForAccount:(id)arg1;
- (void)persistObject;
- (void)persistWithCompletion:(id /* block */)arg1;
- (id)retrievalDate;
- (id)serverDictionary;
- (void)setAccountAltDSID:(id)arg1;
- (void)setCallbackInterval:(double)arg1;
- (void)setFailedToFetchFromServer:(bool)arg1;
- (void)setFailureDetails:(id)arg1;
- (void)setRetrievalDate:(id)arg1;
- (void)setServerDictionary:(id)arg1;

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