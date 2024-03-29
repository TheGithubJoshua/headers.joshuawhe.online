<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWDNFCSECRSAuthorizeECommerce.h</title>
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

/lib/libnfshared.dylib/AWDNFCSECRSAuthorizeECommerce.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCSECRSAuthorizeECommerce : PBCodable <NSCopying> {
    NSData * _aid;
    unsigned int  _countryCode;
    unsigned int  _currencyCode;
    struct { 
        unsigned int otherAmount : 1; 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int transactionTotal : 1; 
        unsigned int countryCode : 1; 
        unsigned int currencyCode : 1; 
        unsigned int merchantCapabilities : 1; 
        unsigned int method : 1; 
        unsigned int status : 1; 
        unsigned int transactionType : 1; 
    }  _has;
    unsigned int  _merchantCapabilities;
    NSData * _merchantId;
    unsigned int  _method;
    unsigned long long  _otherAmount;
    unsigned int  _status;
    unsigned long long  _timeDeltaFromReference;
    unsigned long long  _timestamp;
    NSData * _transactionId;
    unsigned long long  _transactionTotal;
    unsigned int  _transactionType;
    NSData * _uuidReference;
}

@property (nonatomic, retain) NSData *aid;
@property (nonatomic) unsigned int countryCode;
@property (nonatomic) unsigned int currencyCode;
@property (nonatomic, readonly) bool hasAid;
@property (nonatomic) bool hasCountryCode;
@property (nonatomic) bool hasCurrencyCode;
@property (nonatomic) bool hasMerchantCapabilities;
@property (nonatomic, readonly) bool hasMerchantId;
@property (nonatomic) bool hasMethod;
@property (nonatomic) bool hasOtherAmount;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasTimeDeltaFromReference;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTransactionId;
@property (nonatomic) bool hasTransactionTotal;
@property (nonatomic) bool hasTransactionType;
@property (nonatomic, readonly) bool hasUuidReference;
@property (nonatomic) unsigned int merchantCapabilities;
@property (nonatomic, retain) NSData *merchantId;
@property (nonatomic) unsigned int method;
@property (nonatomic) unsigned long long otherAmount;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned long long timeDeltaFromReference;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSData *transactionId;
@property (nonatomic) unsigned long long transactionTotal;
@property (nonatomic) unsigned int transactionType;
@property (nonatomic, retain) NSData *uuidReference;

- (id)aid;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)countryCode;
- (unsigned int)currencyCode;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAid;
- (bool)hasCountryCode;
- (bool)hasCurrencyCode;
- (bool)hasMerchantCapabilities;
- (bool)hasMerchantId;
- (bool)hasMethod;
- (bool)hasOtherAmount;
- (bool)hasStatus;
- (bool)hasTimeDeltaFromReference;
- (bool)hasTimestamp;
- (bool)hasTransactionId;
- (bool)hasTransactionTotal;
- (bool)hasTransactionType;
- (bool)hasUuidReference;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)merchantCapabilities;
- (id)merchantId;
- (void)mergeFrom:(id)arg1;
- (unsigned int)method;
- (unsigned long long)otherAmount;
- (bool)readFrom:(id)arg1;
- (void)setAid:(id)arg1;
- (void)setCountryCode:(unsigned int)arg1;
- (void)setCurrencyCode:(unsigned int)arg1;
- (void)setHasCountryCode:(bool)arg1;
- (void)setHasCurrencyCode:(bool)arg1;
- (void)setHasMerchantCapabilities:(bool)arg1;
- (void)setHasMethod:(bool)arg1;
- (void)setHasOtherAmount:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTimeDeltaFromReference:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransactionTotal:(bool)arg1;
- (void)setHasTransactionType:(bool)arg1;
- (void)setMerchantCapabilities:(unsigned int)arg1;
- (void)setMerchantId:(id)arg1;
- (void)setMethod:(unsigned int)arg1;
- (void)setOtherAmount:(unsigned long long)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setTimeDeltaFromReference:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransactionId:(id)arg1;
- (void)setTransactionTotal:(unsigned long long)arg1;
- (void)setTransactionType:(unsigned int)arg1;
- (void)setUuidReference:(id)arg1;
- (unsigned int)status;
- (unsigned long long)timeDeltaFromReference;
- (unsigned long long)timestamp;
- (id)transactionId;
- (unsigned long long)transactionTotal;
- (unsigned int)transactionType;
- (id)uuidReference;
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
