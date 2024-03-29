<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VSSubscription.h</title>
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

/Frameworks/VideoSubscriberAccount.framework/VSSubscription.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount (291.60.3)
 */

@interface VSSubscription : NSObject <NSCopying, NSSecureCoding> {
    long long  _accessLevel;
    NSString * _billingIdentifier;
    NSDate * _creationDate;
    NSString * _derivedSubscriptionInfo;
    NSDate * _expirationDate;
    NSDate * _modificationDate;
    NSString * _providedSubscriptionInfo;
    VSSubscriptionSource * _source;
    NSString * _subscriberIdentifierHash;
    NSArray * _tierIdentifiers;
}

@property (nonatomic) long long accessLevel;
@property (nonatomic, copy) NSString *billingIdentifier;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSString *derivedSubscriptionInfo;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic, copy) NSString *providedSubscriptionInfo;
@property (nonatomic, copy) VSSubscriptionSource *source;
@property (nonatomic, copy) NSString *subscriberIdentifierHash;
@property (nonatomic, copy) NSString *subscriptionInfo;
@property (nonatomic, copy) NSArray *tierIdentifiers;
@property (nonatomic, readonly, copy) NSData *versionHash;

+ (id)keyPathsForValuesAffectingSubscriptionInfo;
+ (id)keyPathsForValuesAffectingVersionHash;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_updateHash:(id)arg1 withValueForProperty:(id)arg2;
- (long long)accessLevel;
- (id)billingIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)derivedSubscriptionInfo;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)modificationDate;
- (id)providedSubscriptionInfo;
- (void)setAccessLevel:(long long)arg1;
- (void)setBillingIdentifier:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDerivedSubscriptionInfo:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setProvidedSubscriptionInfo:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setSubscriberIdentifierHash:(id)arg1;
- (void)setSubscriptionInfo:(id)arg1;
- (void)setTierIdentifiers:(id)arg1;
- (id)source;
- (id)subscriberIdentifierHash;
- (id)subscriptionInfo;
- (id)tierIdentifiers;
- (id)versionHash;

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
