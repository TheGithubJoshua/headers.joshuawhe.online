<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKTransitAppletHistory.h</title>
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

/PrivateFrameworks/PassKitCore.framework/PKTransitAppletHistory.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore (1)
 */

@interface PKTransitAppletHistory : NSObject <NSSecureCoding> {
    NSDecimalNumber * _balance;
    bool  _blacklisted;
    NSString * _currency;
    NSSet * _enrouteTransitTypes;
    NSDate * _expirationDate;
    NSArray * _historyRecords;
    NSArray * _inStationDetails;
    NSNumber * _loyaltyBalance;
    NSString * _serviceProvider;
    long long  _source;
}

@property (nonatomic, copy) NSDecimalNumber *balance;
@property (getter=isBlacklisted, nonatomic) bool blacklisted;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic, copy) NSSet *enrouteTransitTypes;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, copy) NSArray *historyRecords;
@property (getter=isInStation, nonatomic, readonly) bool inStation;
@property (nonatomic, copy) NSArray *inStationDetails;
@property (nonatomic, copy) NSNumber *loyaltyBalance;
@property (nonatomic, copy) NSString *serviceProvider;
@property (nonatomic) long long source;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)balance;
- (id)currency;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)enrouteTransitTypes;
- (id)expirationDate;
- (id)felicaHistory;
- (id)historyRecords;
- (id)inStationDetails;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 source:(long long)arg2;
- (bool)isBlacklisted;
- (bool)isInStation;
- (id)loyaltyBalance;
- (void)sanitizeValuesWithState:(id)arg1;
- (id)serviceProvider;
- (void)setBalance:(id)arg1;
- (void)setBlacklisted:(bool)arg1;
- (void)setCurrency:(id)arg1;
- (void)setEnrouteTransitTypes:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setHistoryRecords:(id)arg1;
- (void)setInStationDetails:(id)arg1;
- (void)setLoyaltyBalance:(id)arg1;
- (void)setServiceProvider:(id)arg1;
- (void)setSource:(long long)arg1;
- (long long)source;

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