<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKProtobufPaymentToken.h</title>
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

/PrivateFrameworks/PassKitCore.framework/PKProtobufPaymentToken.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore (1)
 */

@interface PKProtobufPaymentToken : PBCodable <NSCopying> {
    NSString * _instrumentName;
    NSString * _network;
    NSData * _paymentData;
    PKProtobufPaymentMethod * _paymentMethod;
    NSString * _redeemURL;
    NSString * _retryNonce;
    NSString * _transactionIdentifier;
}

@property (nonatomic, readonly) bool hasInstrumentName;
@property (nonatomic, readonly) bool hasNetwork;
@property (nonatomic, readonly) bool hasPaymentData;
@property (nonatomic, readonly) bool hasPaymentMethod;
@property (nonatomic, readonly) bool hasRedeemURL;
@property (nonatomic, readonly) bool hasRetryNonce;
@property (nonatomic, readonly) bool hasTransactionIdentifier;
@property (nonatomic, retain) NSString *instrumentName;
@property (nonatomic, retain) NSString *network;
@property (nonatomic, retain) NSData *paymentData;
@property (nonatomic, retain) PKProtobufPaymentMethod *paymentMethod;
@property (nonatomic, retain) NSString *redeemURL;
@property (nonatomic, retain) NSString *retryNonce;
@property (nonatomic, retain) NSString *transactionIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInstrumentName;
- (bool)hasNetwork;
- (bool)hasPaymentData;
- (bool)hasPaymentMethod;
- (bool)hasRedeemURL;
- (bool)hasRetryNonce;
- (bool)hasTransactionIdentifier;
- (unsigned long long)hash;
- (id)instrumentName;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)network;
- (id)paymentData;
- (id)paymentMethod;
- (bool)readFrom:(id)arg1;
- (id)redeemURL;
- (id)retryNonce;
- (void)setInstrumentName:(id)arg1;
- (void)setNetwork:(id)arg1;
- (void)setPaymentData:(id)arg1;
- (void)setPaymentMethod:(id)arg1;
- (void)setRedeemURL:(id)arg1;
- (void)setRetryNonce:(id)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (id)transactionIdentifier;
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