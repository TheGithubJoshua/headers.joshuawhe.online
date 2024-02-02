<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_INPBPaymentRecord.h</title>
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

/Frameworks/Intents.framework/_INPBPaymentRecord.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Intents.framework/Intents (1)
 */

@interface _INPBPaymentRecord : PBCodable <NSCopying, NSSecureCoding, _INPBPaymentRecord> {
    _INPBCurrencyAmount * _currencyAmount;
    _INPBCurrencyAmount * _feeAmount;
    struct { 
        unsigned int status : 1; 
    }  _has;
    _INPBString * _note;
    _INPBContact * _payee;
    _INPBContact * _payer;
    _INPBPaymentMethodValue * _paymentMethod;
    int  _status;
}

@property (nonatomic, retain) _INPBCurrencyAmount *currencyAmount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBCurrencyAmount *feeAmount;
@property (nonatomic, readonly) bool hasCurrencyAmount;
@property (nonatomic, readonly) bool hasFeeAmount;
@property (nonatomic, readonly) bool hasNote;
@property (nonatomic, readonly) bool hasPayee;
@property (nonatomic, readonly) bool hasPayer;
@property (nonatomic, readonly) bool hasPaymentMethod;
@property (nonatomic) bool hasStatus;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBString *note;
@property (nonatomic, retain) _INPBContact *payee;
@property (nonatomic, retain) _INPBContact *payer;
@property (nonatomic, retain) _INPBPaymentMethodValue *paymentMethod;
@property (nonatomic) int status;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyAmount;
- (id)dictionaryRepresentation;
- (id)feeAmount;
- (bool)hasCurrencyAmount;
- (bool)hasFeeAmount;
- (bool)hasNote;
- (bool)hasPayee;
- (bool)hasPayer;
- (bool)hasPaymentMethod;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)note;
- (id)payee;
- (id)payer;
- (id)paymentMethod;
- (bool)readFrom:(id)arg1;
- (void)setCurrencyAmount:(id)arg1;
- (void)setFeeAmount:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setNote:(id)arg1;
- (void)setPayee:(id)arg1;
- (void)setPayer:(id)arg1;
- (void)setPaymentMethod:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
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