<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWDNFCHCIEndOfTransactionEvent.h</title>
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

/lib/libnfshared.dylib/AWDNFCHCIEndOfTransactionEvent.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCHCIEndOfTransactionEvent : PBCodable <NSCopying> {
    NSData * _aid;
    unsigned int  _avgRSSIValue;
    NSData * _cdi;
    unsigned int  _command;
    unsigned int  _commandStatus;
    unsigned int  _currencyCode;
    unsigned int  _cvm;
    unsigned int  _expressType;
    struct { 
        unsigned int iad : 1; 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int transactionTotal : 1; 
        unsigned int avgRSSIValue : 1; 
        unsigned int command : 1; 
        unsigned int commandStatus : 1; 
        unsigned int currencyCode : 1; 
        unsigned int cvm : 1; 
        unsigned int expressType : 1; 
        unsigned int informative : 1; 
        unsigned int maxRSSIValue : 1; 
        unsigned int minRSSIValue : 1; 
        unsigned int msc : 1; 
        unsigned int totalRSSISamples : 1; 
        unsigned int transactionStatus : 1; 
        unsigned int transactionType : 1; 
        unsigned int version : 1; 
    }  _has;
    unsigned long long  _iad;
    unsigned int  _informative;
    NSData * _maid;
    NSData * _maidDeprecated;
    unsigned int  _maxRSSIValue;
    NSData * _mcii;
    unsigned int  _minRSSIValue;
    unsigned int  _msc;
    unsigned long long  _timeDeltaFromReference;
    unsigned long long  _timestamp;
    unsigned int  _totalRSSISamples;
    NSData * _transactionId;
    unsigned int  _transactionStatus;
    unsigned long long  _transactionTotal;
    unsigned int  _transactionType;
    NSData * _uuidReference;
    unsigned int  _version;
}

@property (nonatomic, retain) NSData *aid;
@property (nonatomic) unsigned int avgRSSIValue;
@property (nonatomic, retain) NSData *cdi;
@property (nonatomic) unsigned int command;
@property (nonatomic) unsigned int commandStatus;
@property (nonatomic) unsigned int currencyCode;
@property (nonatomic) unsigned int cvm;
@property (nonatomic) unsigned int expressType;
@property (nonatomic, readonly) bool hasAid;
@property (nonatomic) bool hasAvgRSSIValue;
@property (nonatomic, readonly) bool hasCdi;
@property (nonatomic) bool hasCommand;
@property (nonatomic) bool hasCommandStatus;
@property (nonatomic) bool hasCurrencyCode;
@property (nonatomic) bool hasCvm;
@property (nonatomic) bool hasExpressType;
@property (nonatomic) bool hasIad;
@property (nonatomic) bool hasInformative;
@property (nonatomic, readonly) bool hasMaid;
@property (nonatomic, readonly) bool hasMaidDeprecated;
@property (nonatomic) bool hasMaxRSSIValue;
@property (nonatomic, readonly) bool hasMcii;
@property (nonatomic) bool hasMinRSSIValue;
@property (nonatomic) bool hasMsc;
@property (nonatomic) bool hasTimeDeltaFromReference;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTotalRSSISamples;
@property (nonatomic, readonly) bool hasTransactionId;
@property (nonatomic) bool hasTransactionStatus;
@property (nonatomic) bool hasTransactionTotal;
@property (nonatomic) bool hasTransactionType;
@property (nonatomic, readonly) bool hasUuidReference;
@property (nonatomic) bool hasVersion;
@property (nonatomic) unsigned long long iad;
@property (nonatomic) unsigned int informative;
@property (nonatomic, retain) NSData *maid;
@property (nonatomic, retain) NSData *maidDeprecated;
@property (nonatomic) unsigned int maxRSSIValue;
@property (nonatomic, retain) NSData *mcii;
@property (nonatomic) unsigned int minRSSIValue;
@property (nonatomic) unsigned int msc;
@property (nonatomic) unsigned long long timeDeltaFromReference;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int totalRSSISamples;
@property (nonatomic, retain) NSData *transactionId;
@property (nonatomic) unsigned int transactionStatus;
@property (nonatomic) unsigned long long transactionTotal;
@property (nonatomic) unsigned int transactionType;
@property (nonatomic, retain) NSData *uuidReference;
@property (nonatomic) unsigned int version;

- (id)aid;
- (unsigned int)avgRSSIValue;
- (id)cdi;
- (unsigned int)command;
- (unsigned int)commandStatus;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)currencyCode;
- (unsigned int)cvm;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)expressType;
- (bool)hasAid;
- (bool)hasAvgRSSIValue;
- (bool)hasCdi;
- (bool)hasCommand;
- (bool)hasCommandStatus;
- (bool)hasCurrencyCode;
- (bool)hasCvm;
- (bool)hasExpressType;
- (bool)hasIad;
- (bool)hasInformative;
- (bool)hasMaid;
- (bool)hasMaidDeprecated;
- (bool)hasMaxRSSIValue;
- (bool)hasMcii;
- (bool)hasMinRSSIValue;
- (bool)hasMsc;
- (bool)hasTimeDeltaFromReference;
- (bool)hasTimestamp;
- (bool)hasTotalRSSISamples;
- (bool)hasTransactionId;
- (bool)hasTransactionStatus;
- (bool)hasTransactionTotal;
- (bool)hasTransactionType;
- (bool)hasUuidReference;
- (bool)hasVersion;
- (unsigned long long)hash;
- (unsigned long long)iad;
- (unsigned int)informative;
- (bool)isEqual:(id)arg1;
- (id)maid;
- (id)maidDeprecated;
- (unsigned int)maxRSSIValue;
- (id)mcii;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minRSSIValue;
- (unsigned int)msc;
- (bool)readFrom:(id)arg1;
- (void)setAid:(id)arg1;
- (void)setAvgRSSIValue:(unsigned int)arg1;
- (void)setCdi:(id)arg1;
- (void)setCommand:(unsigned int)arg1;
- (void)setCommandStatus:(unsigned int)arg1;
- (void)setCurrencyCode:(unsigned int)arg1;
- (void)setCvm:(unsigned int)arg1;
- (void)setExpressType:(unsigned int)arg1;
- (void)setHasAvgRSSIValue:(bool)arg1;
- (void)setHasCommand:(bool)arg1;
- (void)setHasCommandStatus:(bool)arg1;
- (void)setHasCurrencyCode:(bool)arg1;
- (void)setHasCvm:(bool)arg1;
- (void)setHasExpressType:(bool)arg1;
- (void)setHasIad:(bool)arg1;
- (void)setHasInformative:(bool)arg1;
- (void)setHasMaxRSSIValue:(bool)arg1;
- (void)setHasMinRSSIValue:(bool)arg1;
- (void)setHasMsc:(bool)arg1;
- (void)setHasTimeDeltaFromReference:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalRSSISamples:(bool)arg1;
- (void)setHasTransactionStatus:(bool)arg1;
- (void)setHasTransactionTotal:(bool)arg1;
- (void)setHasTransactionType:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setIad:(unsigned long long)arg1;
- (void)setInformative:(unsigned int)arg1;
- (void)setMaid:(id)arg1;
- (void)setMaidDeprecated:(id)arg1;
- (void)setMaxRSSIValue:(unsigned int)arg1;
- (void)setMcii:(id)arg1;
- (void)setMinRSSIValue:(unsigned int)arg1;
- (void)setMsc:(unsigned int)arg1;
- (void)setTimeDeltaFromReference:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalRSSISamples:(unsigned int)arg1;
- (void)setTransactionId:(id)arg1;
- (void)setTransactionStatus:(unsigned int)arg1;
- (void)setTransactionTotal:(unsigned long long)arg1;
- (void)setTransactionType:(unsigned int)arg1;
- (void)setUuidReference:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned long long)timeDeltaFromReference;
- (unsigned long long)timestamp;
- (unsigned int)totalRSSISamples;
- (id)transactionId;
- (unsigned int)transactionStatus;
- (unsigned long long)transactionTotal;
- (unsigned int)transactionType;
- (id)uuidReference;
- (unsigned int)version;
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
