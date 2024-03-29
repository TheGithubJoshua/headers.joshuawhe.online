<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEOPDMerchantLookupParameters.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEOPDMerchantLookupParameters.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEOPDMerchantLookupParameters : PBCodable <NSCopying> {
    GEOPDAdamAppIdentifier * _appIdentifier;
    bool  _enableBrandMuidFallback;
    struct { 
        unsigned int industryCode : 1; 
        unsigned int transactionLocationAge : 1; 
        unsigned int transactionTimestamp : 1; 
        unsigned int transactionStatus : 1; 
        unsigned int transactionType : 1; 
        unsigned int enableBrandMuidFallback : 1; 
    }  _has;
    NSString * _industryCategory;
    long long  _industryCode;
    NSString * _merchantCode;
    GEOPDMerchantInformation * _merchantInformation;
    NSString * _paymentNetwork;
    NSString * _rawMerchantCode;
    NSString * _terminalId;
    NSString * _transactionCurrencyCode;
    NSString * _transactionId;
    GEOLocation * _transactionLocation;
    double  _transactionLocationAge;
    int  _transactionStatus;
    double  _transactionTimestamp;
    int  _transactionType;
    PBUnknownFields * _unknownFields;
    GEOPDWarsawMerchantIdentifier * _warsawMerchantIdentifier;
}

@property (nonatomic, retain) GEOPDAdamAppIdentifier *appIdentifier;
@property (nonatomic) bool enableBrandMuidFallback;
@property (nonatomic, readonly) bool hasAppIdentifier;
@property (nonatomic) bool hasEnableBrandMuidFallback;
@property (nonatomic, readonly) bool hasIndustryCategory;
@property (nonatomic) bool hasIndustryCode;
@property (nonatomic, readonly) bool hasMerchantCode;
@property (nonatomic, readonly) bool hasMerchantInformation;
@property (nonatomic, readonly) bool hasPaymentNetwork;
@property (nonatomic, readonly) bool hasRawMerchantCode;
@property (nonatomic, readonly) bool hasTerminalId;
@property (nonatomic, readonly) bool hasTransactionCurrencyCode;
@property (nonatomic, readonly) bool hasTransactionId;
@property (nonatomic, readonly) bool hasTransactionLocation;
@property (nonatomic) bool hasTransactionLocationAge;
@property (nonatomic) bool hasTransactionStatus;
@property (nonatomic) bool hasTransactionTimestamp;
@property (nonatomic) bool hasTransactionType;
@property (nonatomic, readonly) bool hasWarsawMerchantIdentifier;
@property (nonatomic, retain) NSString *industryCategory;
@property (nonatomic) long long industryCode;
@property (nonatomic, retain) NSString *merchantCode;
@property (nonatomic, retain) GEOPDMerchantInformation *merchantInformation;
@property (nonatomic, retain) NSString *paymentNetwork;
@property (nonatomic, retain) NSString *rawMerchantCode;
@property (nonatomic, retain) NSString *terminalId;
@property (nonatomic, retain) NSString *transactionCurrencyCode;
@property (nonatomic, retain) NSString *transactionId;
@property (nonatomic, retain) GEOLocation *transactionLocation;
@property (nonatomic) double transactionLocationAge;
@property (nonatomic) int transactionStatus;
@property (nonatomic) double transactionTimestamp;
@property (nonatomic) int transactionType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDWarsawMerchantIdentifier *warsawMerchantIdentifier;

- (void).cxx_destruct;
- (int)StringAsTransactionStatus:(id)arg1;
- (int)StringAsTransactionType:(id)arg1;
- (id)appIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enableBrandMuidFallback;
- (bool)hasAppIdentifier;
- (bool)hasEnableBrandMuidFallback;
- (bool)hasIndustryCategory;
- (bool)hasIndustryCode;
- (bool)hasMerchantCode;
- (bool)hasMerchantInformation;
- (bool)hasPaymentNetwork;
- (bool)hasRawMerchantCode;
- (bool)hasTerminalId;
- (bool)hasTransactionCurrencyCode;
- (bool)hasTransactionId;
- (bool)hasTransactionLocation;
- (bool)hasTransactionLocationAge;
- (bool)hasTransactionStatus;
- (bool)hasTransactionTimestamp;
- (bool)hasTransactionType;
- (bool)hasWarsawMerchantIdentifier;
- (unsigned long long)hash;
- (id)industryCategory;
- (long long)industryCode;
- (bool)isEqual:(id)arg1;
- (id)merchantCode;
- (id)merchantInformation;
- (void)mergeFrom:(id)arg1;
- (id)paymentNetwork;
- (id)rawMerchantCode;
- (bool)readFrom:(id)arg1;
- (void)setAppIdentifier:(id)arg1;
- (void)setEnableBrandMuidFallback:(bool)arg1;
- (void)setHasEnableBrandMuidFallback:(bool)arg1;
- (void)setHasIndustryCode:(bool)arg1;
- (void)setHasTransactionLocationAge:(bool)arg1;
- (void)setHasTransactionStatus:(bool)arg1;
- (void)setHasTransactionTimestamp:(bool)arg1;
- (void)setHasTransactionType:(bool)arg1;
- (void)setIndustryCategory:(id)arg1;
- (void)setIndustryCode:(long long)arg1;
- (void)setMerchantCode:(id)arg1;
- (void)setMerchantInformation:(id)arg1;
- (void)setPaymentNetwork:(id)arg1;
- (void)setRawMerchantCode:(id)arg1;
- (void)setTerminalId:(id)arg1;
- (void)setTransactionCurrencyCode:(id)arg1;
- (void)setTransactionId:(id)arg1;
- (void)setTransactionLocation:(id)arg1;
- (void)setTransactionLocationAge:(double)arg1;
- (void)setTransactionStatus:(int)arg1;
- (void)setTransactionTimestamp:(double)arg1;
- (void)setTransactionType:(int)arg1;
- (void)setWarsawMerchantIdentifier:(id)arg1;
- (id)terminalId;
- (id)transactionCurrencyCode;
- (id)transactionId;
- (id)transactionLocation;
- (double)transactionLocationAge;
- (int)transactionStatus;
- (id)transactionStatusAsString:(int)arg1;
- (double)transactionTimestamp;
- (int)transactionType;
- (id)transactionTypeAsString:(int)arg1;
- (id)unknownFields;
- (id)warsawMerchantIdentifier;
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
