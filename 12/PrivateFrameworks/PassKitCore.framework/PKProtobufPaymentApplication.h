<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKProtobufPaymentApplication.h</title>
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

/PrivateFrameworks/PassKitCore.framework/PKProtobufPaymentApplication.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore (1)
 */

@interface PKProtobufPaymentApplication : PBCodable <NSCopying> {
    NSString * _applicationIdentifier;
    bool  _auxiliary;
    NSString * _displayName;
    NSString * _dpanIdentifier;
    NSString * _dpanSuffix;
    struct { 
        unsigned int inAppPINRequiredAmount : 1; 
        unsigned int inAppPriority : 1; 
        unsigned int paymentNetworkIdentifier : 1; 
        unsigned int paymentType : 1; 
        unsigned int state : 1; 
        unsigned int auxiliary : 1; 
        unsigned int inAppPINRequired : 1; 
        unsigned int supportsContactlessPayment : 1; 
        unsigned int supportsInAppPayment : 1; 
    }  _has;
    bool  _inAppPINRequired;
    long long  _inAppPINRequiredAmount;
    NSString * _inAppPINRequiredCurrency;
    long long  _inAppPriority;
    unsigned int  _paymentNetworkIdentifier;
    unsigned int  _paymentType;
    NSString * _sanitizedDpan;
    NSString * _secureElementIdenfitier;
    unsigned int  _state;
    bool  _supportsContactlessPayment;
    bool  _supportsInAppPayment;
    NSString * _suspendedReason;
}

@property (nonatomic, retain) NSString *applicationIdentifier;
@property (nonatomic) bool auxiliary;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *dpanIdentifier;
@property (nonatomic, retain) NSString *dpanSuffix;
@property (nonatomic, readonly) bool hasApplicationIdentifier;
@property (nonatomic) bool hasAuxiliary;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic, readonly) bool hasDpanIdentifier;
@property (nonatomic, readonly) bool hasDpanSuffix;
@property (nonatomic) bool hasInAppPINRequired;
@property (nonatomic) bool hasInAppPINRequiredAmount;
@property (nonatomic, readonly) bool hasInAppPINRequiredCurrency;
@property (nonatomic) bool hasInAppPriority;
@property (nonatomic) bool hasPaymentNetworkIdentifier;
@property (nonatomic) bool hasPaymentType;
@property (nonatomic, readonly) bool hasSanitizedDpan;
@property (nonatomic, readonly) bool hasSecureElementIdenfitier;
@property (nonatomic) bool hasState;
@property (nonatomic) bool hasSupportsContactlessPayment;
@property (nonatomic) bool hasSupportsInAppPayment;
@property (nonatomic, readonly) bool hasSuspendedReason;
@property (nonatomic) bool inAppPINRequired;
@property (nonatomic) long long inAppPINRequiredAmount;
@property (nonatomic, retain) NSString *inAppPINRequiredCurrency;
@property (nonatomic) long long inAppPriority;
@property (nonatomic) unsigned int paymentNetworkIdentifier;
@property (nonatomic) unsigned int paymentType;
@property (nonatomic, retain) NSString *sanitizedDpan;
@property (nonatomic, retain) NSString *secureElementIdenfitier;
@property (nonatomic) unsigned int state;
@property (nonatomic) bool supportsContactlessPayment;
@property (nonatomic) bool supportsInAppPayment;
@property (nonatomic, retain) NSString *suspendedReason;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (bool)auxiliary;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)dpanIdentifier;
- (id)dpanSuffix;
- (bool)hasApplicationIdentifier;
- (bool)hasAuxiliary;
- (bool)hasDisplayName;
- (bool)hasDpanIdentifier;
- (bool)hasDpanSuffix;
- (bool)hasInAppPINRequired;
- (bool)hasInAppPINRequiredAmount;
- (bool)hasInAppPINRequiredCurrency;
- (bool)hasInAppPriority;
- (bool)hasPaymentNetworkIdentifier;
- (bool)hasPaymentType;
- (bool)hasSanitizedDpan;
- (bool)hasSecureElementIdenfitier;
- (bool)hasState;
- (bool)hasSupportsContactlessPayment;
- (bool)hasSupportsInAppPayment;
- (bool)hasSuspendedReason;
- (unsigned long long)hash;
- (bool)inAppPINRequired;
- (long long)inAppPINRequiredAmount;
- (id)inAppPINRequiredCurrency;
- (long long)inAppPriority;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)paymentNetworkIdentifier;
- (unsigned int)paymentType;
- (bool)readFrom:(id)arg1;
- (id)sanitizedDpan;
- (id)secureElementIdenfitier;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setAuxiliary:(bool)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDpanIdentifier:(id)arg1;
- (void)setDpanSuffix:(id)arg1;
- (void)setHasAuxiliary:(bool)arg1;
- (void)setHasInAppPINRequired:(bool)arg1;
- (void)setHasInAppPINRequiredAmount:(bool)arg1;
- (void)setHasInAppPriority:(bool)arg1;
- (void)setHasPaymentNetworkIdentifier:(bool)arg1;
- (void)setHasPaymentType:(bool)arg1;
- (void)setHasState:(bool)arg1;
- (void)setHasSupportsContactlessPayment:(bool)arg1;
- (void)setHasSupportsInAppPayment:(bool)arg1;
- (void)setInAppPINRequired:(bool)arg1;
- (void)setInAppPINRequiredAmount:(long long)arg1;
- (void)setInAppPINRequiredCurrency:(id)arg1;
- (void)setInAppPriority:(long long)arg1;
- (void)setPaymentNetworkIdentifier:(unsigned int)arg1;
- (void)setPaymentType:(unsigned int)arg1;
- (void)setSanitizedDpan:(id)arg1;
- (void)setSecureElementIdenfitier:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setSupportsContactlessPayment:(bool)arg1;
- (void)setSupportsInAppPayment:(bool)arg1;
- (void)setSuspendedReason:(id)arg1;
- (unsigned int)state;
- (bool)supportsContactlessPayment;
- (bool)supportsInAppPayment;
- (id)suspendedReason;
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