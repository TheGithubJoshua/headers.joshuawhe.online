<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SKProduct.h</title>
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

/Frameworks/StoreKit.framework/SKProduct.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit (1)
 */

@interface SKProduct : NSObject {
    id  _internal;
}

@property (getter=_localeIdentifier, setter=_setLocaleIdentifier:, nonatomic, copy) NSString *_localeIdentifier;
@property (nonatomic, readonly) NSArray *contentLengths;
@property (nonatomic, readonly) NSString *contentVersion;
@property (nonatomic, readonly) NSArray *discounts;
@property (nonatomic, readonly) NSArray *downloadContentLengths;
@property (nonatomic, readonly) NSString *downloadContentVersion;
@property (getter=isDownloadable, nonatomic, readonly) bool downloadable;
@property (nonatomic, readonly) SKProductDiscount *introductoryPrice;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSDecimalNumber *price;
@property (nonatomic, readonly) NSLocale *priceLocale;
@property (nonatomic, readonly) NSString *productIdentifier;
@property (nonatomic, readonly) NSString *subscriptionGroupIdentifier;
@property (nonatomic, readonly) SKProductSubscriptionPeriod *subscriptionPeriod;

+ (id)productsFromDictionaries:(id)arg1;
+ (id)productsFromXPCEncodingsArray:(id)arg1;

- (void).cxx_destruct;
- (id)_localeIdentifier;
- (void)_setContentVersion:(id)arg1;
- (void)_setDiscounts:(id)arg1;
- (void)_setDownloadContentLengths:(id)arg1;
- (void)_setDownloadable:(bool)arg1;
- (void)_setIntroductoryPrice:(id)arg1;
- (void)_setLocale:(id)arg1;
- (void)_setLocaleIdentifier:(id)arg1;
- (void)_setLocalizedDescription:(id)arg1;
- (void)_setLocalizedTitle:(id)arg1;
- (void)_setPrice:(id)arg1;
- (void)_setPriceLocale:(id)arg1;
- (void)_setProductIdentifier:(id)arg1;
- (void)_setSubscriptionGroupIdentifier:(id)arg1;
- (void)_setSubscriptionPeriod:(id)arg1;
- (id)contentLengths;
- (id)contentVersion;
- (id)copyXPCEncoding;
- (id)discounts;
- (id)downloadContentLengths;
- (id)downloadContentVersion;
- (bool)downloadable;
- (id)init;
- (id)initMinusLocaleWithDictionary:(id)arg1;
- (id)initMinusLocaleWithXPCEncoding:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)introductoryPrice;
- (bool)isDownloadable;
- (id)localizedDescription;
- (id)localizedTitle;
- (id)price;
- (id)priceLocale;
- (id)productIdentifier;
- (id)subscriptionGroupIdentifier;
- (id)subscriptionPeriod;

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