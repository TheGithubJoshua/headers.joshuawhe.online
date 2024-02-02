<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKMerchant.h</title>
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

/PrivateFrameworks/PassKitCore.framework/PKMerchant.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore (1)
 */

@interface PKMerchant : NSObject <NSSecureCoding, PKCloudStoreCoding> {
    long long  _adamIdentifier;
    NSString * _city;
    long long  _cleanConfidenceLevel;
    NSString * _displayName;
    NSString * _fallbackDetailedCategory;
    long long  _fallbackcategory;
    NSString * _industryCategory;
    long long  _industryCode;
    PKMapsBrand * _mapsBrand;
    PKMapsMerchant * _mapsMerchant;
    NSString * _merchantIdentifier;
    NSString * _name;
    NSURL * _originURL;
    NSString * _rawCANL;
    NSString * _rawCity;
    NSString * _rawCountry;
    NSString * _rawName;
    NSString * _rawState;
    NSString * _state;
    bool  _useRawMerchantData;
    NSString * _webMerchantIdentifier;
    NSString * _webMerchantName;
    NSString * _zip;
}

@property (nonatomic) long long adamIdentifier;
@property (nonatomic, readonly) NSURL *businessChatURL;
@property (nonatomic, readonly) long long category;
@property (nonatomic, copy) NSString *city;
@property (nonatomic) long long cleanConfidenceLevel;
@property (nonatomic, readonly) NSString *detailedCategory;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, copy) NSString *fallbackDetailedCategory;
@property (nonatomic) long long fallbackcategory;
@property (nonatomic, readonly) bool hasMapsMatch;
@property (nonatomic, readonly) NSString *heroImageAttribution;
@property (nonatomic, readonly) NSURL *heroImageURL;
@property (nonatomic, copy) NSString *industryCategory;
@property (nonatomic) long long industryCode;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) NSURL *logoImageURL;
@property (nonatomic, retain) PKMapsBrand *mapsBrand;
@property (nonatomic, retain) PKMapsMerchant *mapsMerchant;
@property (nonatomic, copy) NSString *merchantIdentifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSURL *originURL;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, copy) NSString *rawCANL;
@property (nonatomic, copy) NSString *rawCity;
@property (nonatomic, copy) NSString *rawCountry;
@property (nonatomic, copy) NSString *rawName;
@property (nonatomic, copy) NSString *rawState;
@property (nonatomic, copy) NSString *state;
@property (nonatomic) bool useRawMerchantData;
@property (nonatomic, copy) NSString *webMerchantIdentifier;
@property (nonatomic, copy) NSString *webMerchantName;
@property (nonatomic, copy) NSString *zip;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_regenerateDisplayName;
- (long long)adamIdentifier;
- (id)businessChatURL;
- (long long)category;
- (id)city;
- (long long)cleanConfidenceLevel;
- (id)description;
- (id)detailedCategory;
- (id)displayName;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackDetailedCategory;
- (long long)fallbackcategory;
- (bool)hasCloudArchivableDeviceData;
- (bool)hasMapsMatch;
- (unsigned long long)hash;
- (id)heroImageAttribution;
- (id)heroImageURL;
- (id)industryCategory;
- (long long)industryCode;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isCloudArchivableDeviceDataEqual:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMerchant:(id)arg1;
- (bool)isValid;
- (unsigned long long)itemType;
- (id)jsonDictionaryRepresentation;
- (id)logoImageURL;
- (id)mapsBrand;
- (id)mapsMerchant;
- (id)merchantIdentifier;
- (id)name;
- (id)originURL;
- (id)phoneNumber;
- (id)rawCANL;
- (id)rawCity;
- (id)rawCountry;
- (id)rawName;
- (id)rawState;
- (id)recordTypesAndNames;
- (void)setAdamIdentifier:(long long)arg1;
- (void)setCity:(id)arg1;
- (void)setCleanConfidenceLevel:(long long)arg1;
- (void)setFallbackDetailedCategory:(id)arg1;
- (void)setFallbackcategory:(long long)arg1;
- (void)setIndustryCategory:(id)arg1;
- (void)setIndustryCode:(long long)arg1;
- (void)setMapsBrand:(id)arg1;
- (void)setMapsMerchant:(id)arg1;
- (void)setMerchantIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOriginURL:(id)arg1;
- (void)setRawCANL:(id)arg1;
- (void)setRawCity:(id)arg1;
- (void)setRawCountry:(id)arg1;
- (void)setRawName:(id)arg1;
- (void)setRawState:(id)arg1;
- (void)setState:(id)arg1;
- (void)setUseRawMerchantData:(bool)arg1;
- (void)setWebMerchantIdentifier:(id)arg1;
- (void)setWebMerchantName:(id)arg1;
- (void)setZip:(id)arg1;
- (id)state;
- (id)uniqueIdentifier;
- (bool)useRawMerchantData;
- (id)webMerchantIdentifier;
- (id)webMerchantName;
- (id)zip;

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