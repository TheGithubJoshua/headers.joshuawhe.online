<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AMSMetricsEvent.h</title>
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

/PrivateFrameworks/AppleMediaServices.framework/AMSMetricsEvent.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices (1)
 */

@interface AMSMetricsEvent : NSObject <NSCopying> {
    ACAccount * _account;
    NSNumber * _databasePID;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableDictionary * _underlyingDictionary;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSString *appVersion;
@property (nonatomic, retain) NSNumber *baseVersion;
@property (nonatomic, retain) NSString *canaryIdentifier;
@property (nonatomic, readonly) NSDictionary *databaseEventBody;
@property (nonatomic, retain) NSNumber *databasePID;
@property (nonatomic, retain) NSNumber *eventTime;
@property (nonatomic, retain) NSString *eventType;
@property (nonatomic, retain) NSNumber *eventVersion;
@property (nonatomic, retain) NSString *osVersion;
@property (nonatomic, retain) NSNumber *timezoneOffset;
@property (nonatomic, retain) NSString *topic;
@property (nonatomic, readonly) NSMutableDictionary *underlyingDictionary;

+ (id)_buyParamsFromString:(id)arg1;
+ (id)_buyParamsStringFromAuthenticationContext:(id)arg1;
+ (bool)_isValidJSONProperty:(id)arg1;
+ (id)_topicFromAuthenticationContext:(id)arg1;
+ (id)createEventFromAuthenticationContext:(id)arg1 error:(id)arg2;
+ (id)metricsAuthenticationAttemptDictionaryForAuthKitError:(id)arg1;

- (void).cxx_destruct;
- (id)account;
- (void)addPropertiesWithDictionary:(id)arg1;
- (id)appVersion;
- (id)baseVersion;
- (id)canaryIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)databaseEventBody;
- (id)databasePID;
- (id)eventTime;
- (id)eventType;
- (id)eventVersion;
- (id)initWithDatabaseEventBody:(id)arg1;
- (id)initWithTopic:(id)arg1;
- (id)initWithUnderlyingDictionary:(id)arg1;
- (id)osVersion;
- (id)propertyForBodyKey:(id)arg1;
- (void)removePropertiesForKeys:(id)arg1;
- (id)reportingURLFromBaseURL:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setAppVersion:(id)arg1;
- (void)setBaseVersion:(id)arg1;
- (void)setCanaryIdentifier:(id)arg1;
- (void)setDatabasePID:(id)arg1;
- (void)setEventTime:(id)arg1;
- (void)setEventType:(id)arg1;
- (void)setEventVersion:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setProperty:(id)arg1 forBodyKey:(id)arg2;
- (void)setTimezoneOffset:(id)arg1;
- (void)setTopic:(id)arg1;
- (id)timezoneOffset;
- (id)topic;
- (id)underlyingDictionary;

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
