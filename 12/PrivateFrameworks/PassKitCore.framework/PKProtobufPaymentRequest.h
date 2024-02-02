<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKProtobufPaymentRequest.h</title>
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

/PrivateFrameworks/PassKitCore.framework/PKProtobufPaymentRequest.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore (1)
 */

@interface PKProtobufPaymentRequest : PBRequest <NSCopying> {
    unsigned int  _apiType;
    NSData * _applicationData;
    NSData * _billingContact;
    NSString * _countryCode;
    NSString * _currencyCode;
    bool  _expectsMerchantSession;
    struct { 
        unsigned int apiType : 1; 
        unsigned int merchantCapabilities : 1; 
        unsigned int requiredBillingAddressFields : 1; 
        unsigned int requiredShippingAddressFields : 1; 
        unsigned int expectsMerchantSession : 1; 
    }  _has;
    unsigned int  _merchantCapabilities;
    NSString * _merchantIdentifier;
    PKProtobufPaymentMerchantSession * _merchantSession;
    NSString * _originatingURL;
    unsigned int  _requiredBillingAddressFields;
    NSMutableArray * _requiredBillingContactFields;
    unsigned int  _requiredShippingAddressFields;
    NSMutableArray * _requiredShippingContactFields;
    NSData * _shippingContact;
    NSMutableArray * _shippingMethods;
    NSMutableArray * _summaryItems;
    NSMutableArray * _supportedCountries;
    NSMutableArray * _supportedNetworks;
    NSMutableArray * _thumbnailURLs;
}

@property (nonatomic) unsigned int apiType;
@property (nonatomic, retain) NSData *applicationData;
@property (nonatomic, retain) NSData *billingContact;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, retain) NSString *currencyCode;
@property (nonatomic) bool expectsMerchantSession;
@property (nonatomic) bool hasApiType;
@property (nonatomic, readonly) bool hasApplicationData;
@property (nonatomic, readonly) bool hasBillingContact;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic, readonly) bool hasCurrencyCode;
@property (nonatomic) bool hasExpectsMerchantSession;
@property (nonatomic) bool hasMerchantCapabilities;
@property (nonatomic, readonly) bool hasMerchantIdentifier;
@property (nonatomic, readonly) bool hasMerchantSession;
@property (nonatomic, readonly) bool hasOriginatingURL;
@property (nonatomic) bool hasRequiredBillingAddressFields;
@property (nonatomic) bool hasRequiredShippingAddressFields;
@property (nonatomic, readonly) bool hasShippingContact;
@property (nonatomic) unsigned int merchantCapabilities;
@property (nonatomic, retain) NSString *merchantIdentifier;
@property (nonatomic, retain) PKProtobufPaymentMerchantSession *merchantSession;
@property (nonatomic, retain) NSString *originatingURL;
@property (nonatomic) unsigned int requiredBillingAddressFields;
@property (nonatomic, retain) NSMutableArray *requiredBillingContactFields;
@property (nonatomic) unsigned int requiredShippingAddressFields;
@property (nonatomic, retain) NSMutableArray *requiredShippingContactFields;
@property (nonatomic, retain) NSData *shippingContact;
@property (nonatomic, retain) NSMutableArray *shippingMethods;
@property (nonatomic, retain) NSMutableArray *summaryItems;
@property (nonatomic, retain) NSMutableArray *supportedCountries;
@property (nonatomic, retain) NSMutableArray *supportedNetworks;
@property (nonatomic, retain) NSMutableArray *thumbnailURLs;

+ (Class)requiredBillingContactFieldsType;
+ (Class)requiredShippingContactFieldsType;
+ (Class)shippingMethodsType;
+ (Class)summaryItemsType;
+ (Class)supportedCountriesType;
+ (Class)supportedNetworksType;
+ (Class)thumbnailURLsType;

- (void).cxx_destruct;
- (void)addRequiredBillingContactFields:(id)arg1;
- (void)addRequiredShippingContactFields:(id)arg1;
- (void)addShippingMethods:(id)arg1;
- (void)addSummaryItems:(id)arg1;
- (void)addSupportedCountries:(id)arg1;
- (void)addSupportedNetworks:(id)arg1;
- (void)addThumbnailURLs:(id)arg1;
- (unsigned int)apiType;
- (id)applicationData;
- (id)billingContact;
- (void)clearRequiredBillingContactFields;
- (void)clearRequiredShippingContactFields;
- (void)clearShippingMethods;
- (void)clearSummaryItems;
- (void)clearSupportedCountries;
- (void)clearSupportedNetworks;
- (void)clearThumbnailURLs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)currencyCode;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)expectsMerchantSession;
- (bool)hasApiType;
- (bool)hasApplicationData;
- (bool)hasBillingContact;
- (bool)hasCountryCode;
- (bool)hasCurrencyCode;
- (bool)hasExpectsMerchantSession;
- (bool)hasMerchantCapabilities;
- (bool)hasMerchantIdentifier;
- (bool)hasMerchantSession;
- (bool)hasOriginatingURL;
- (bool)hasRequiredBillingAddressFields;
- (bool)hasRequiredShippingAddressFields;
- (bool)hasShippingContact;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)merchantCapabilities;
- (id)merchantIdentifier;
- (id)merchantSession;
- (void)mergeFrom:(id)arg1;
- (id)originatingURL;
- (bool)readFrom:(id)arg1;
- (unsigned int)requiredBillingAddressFields;
- (id)requiredBillingContactFields;
- (id)requiredBillingContactFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)requiredBillingContactFieldsCount;
- (unsigned int)requiredShippingAddressFields;
- (id)requiredShippingContactFields;
- (id)requiredShippingContactFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)requiredShippingContactFieldsCount;
- (void)setApiType:(unsigned int)arg1;
- (void)setApplicationData:(id)arg1;
- (void)setBillingContact:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setExpectsMerchantSession:(bool)arg1;
- (void)setHasApiType:(bool)arg1;
- (void)setHasExpectsMerchantSession:(bool)arg1;
- (void)setHasMerchantCapabilities:(bool)arg1;
- (void)setHasRequiredBillingAddressFields:(bool)arg1;
- (void)setHasRequiredShippingAddressFields:(bool)arg1;
- (void)setMerchantCapabilities:(unsigned int)arg1;
- (void)setMerchantIdentifier:(id)arg1;
- (void)setMerchantSession:(id)arg1;
- (void)setOriginatingURL:(id)arg1;
- (void)setRequiredBillingAddressFields:(unsigned int)arg1;
- (void)setRequiredBillingContactFields:(id)arg1;
- (void)setRequiredShippingAddressFields:(unsigned int)arg1;
- (void)setRequiredShippingContactFields:(id)arg1;
- (void)setShippingContact:(id)arg1;
- (void)setShippingMethods:(id)arg1;
- (void)setSummaryItems:(id)arg1;
- (void)setSupportedCountries:(id)arg1;
- (void)setSupportedNetworks:(id)arg1;
- (void)setThumbnailURLs:(id)arg1;
- (id)shippingContact;
- (id)shippingMethods;
- (id)shippingMethodsAtIndex:(unsigned long long)arg1;
- (unsigned long long)shippingMethodsCount;
- (id)summaryItems;
- (id)summaryItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)summaryItemsCount;
- (id)supportedCountries;
- (id)supportedCountriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedCountriesCount;
- (id)supportedNetworks;
- (id)supportedNetworksAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedNetworksCount;
- (id)thumbnailURLs;
- (id)thumbnailURLsAtIndex:(unsigned long long)arg1;
- (unsigned long long)thumbnailURLsCount;
- (void)writeTo:(id)arg1;

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