<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKPaymentTransaction.h</title>
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

/PrivateFrameworks/PassKitCore.framework/PKPaymentTransaction.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore (1)
 */

@interface PKPaymentTransaction : NSObject <NSSecureCoding, PKCloudStoreCoding> {
    NSString * _accountIdentifier;
    long long  _adjustmentType;
    long long  _adjustmentTypeReason;
    NSString * _administrativeArea;
    NSDecimalNumber * _amount;
    NSString * _authNetworkData;
    NSString * _cardIdentifier;
    NSString * _cardNumberSuffix;
    unsigned long long  _cardType;
    NSString * _clearingNetworkData;
    NSString * _currencyCode;
    bool  _deviceScoreIdentifiersRequired;
    bool  _deviceScoreIdentifiersSubmitted;
    bool  _enRoute;
    NSString * _endStation;
    NSData * _endStationCode;
    double  _endStationLatitude;
    double  _endStationLongitude;
    NSDate * _expirationDate;
    PKPaymentTransactionFees * _fees;
    PKPaymentTransactionForeignExchangeInformation * _foreignExchangeInformation;
    bool  _hasAssociatedPaymentApplication;
    bool  _hasNotificationServiceData;
    NSString * _identifier;
    bool  _isCloudKitArchived;
    NSString * _issueReportIdentifier;
    NSDate * _lastMerchantReprocessingDate;
    NSString * _lifecycleIdentifier;
    NSString * _locality;
    double  _locationAltitude;
    NSDate * _locationDate;
    double  _locationHorizontalAccuracy;
    double  _locationLatitude;
    double  _locationLongitude;
    double  _locationVerticalAccuracy;
    PKMerchant * _merchant;
    NSString * _merchantProvidedDescription;
    NSDictionary * _metadata;
    bool  _originatedByDevice;
    NSString * _paymentHash;
    NSArray * _payments;
    NSString * _peerPaymentCounterpartHandle;
    NSString * _peerPaymentMemo;
    NSDate * _peerPaymentMessageReceivedDate;
    long long  _peerPaymentType;
    NSDecimalNumber * _primaryFundingSourceAmount;
    NSString * _primaryFundingSourceCurrencyCode;
    bool  _processedForLocation;
    bool  _processedForMerchantCleanup;
    bool  _processedForStations;
    NSSet * _questions;
    PKAccountEvent * _redemptionEvent;
    long long  _redemptionType;
    NSString * _referenceIdentifier;
    NSUUID * _requestDeviceScoreIdentifier;
    bool  _requiresMerchantReprocessing;
    PKPaymentTransactionRewards * _rewards;
    unsigned long long  _rewardsEligibilityReason;
    NSDecimalNumber * _rewardsTotalAmount;
    NSString * _rewardsTotalCurrencyCode;
    NSDecimalNumber * _secondaryFundingSourceAmount;
    NSString * _secondaryFundingSourceCurrencyCode;
    NSString * _secondaryFundingSourceDPANSuffix;
    NSString * _secondaryFundingSourceDescription;
    NSString * _secondaryFundingSourceFPANIdentifier;
    long long  _secondaryFundingSourceNetwork;
    long long  _secondaryFundingSourceType;
    NSUUID * _sendDeviceScoreIdentifier;
    NSString * _serviceIdentifier;
    NSOrderedSet * _servicingEvents;
    bool  _shouldSuppressDate;
    NSString * _startStation;
    NSData * _startStationCode;
    double  _startStationLatitude;
    double  _startStationLongitude;
    NSString * _stationCodeProvider;
    NSDecimalNumber * _subtotalAmount;
    unsigned long long  _suppressBehavior;
    bool  _suppressNotifications;
    long long  _technologyType;
    NSTimeZone * _timeZone;
    NSDate * _transactionDate;
    long long  _transactionDeclinedReason;
    unsigned long long  _transactionSource;
    long long  _transactionStatus;
    NSDate * _transactionStatusChangedDate;
    long long  _transactionType;
    unsigned long long  _transitModifiers;
    long long  _transitType;
    unsigned long long  _updateReasons;
}

@property (nonatomic, retain) NSString *accountIdentifier;
@property (nonatomic) long long adjustmentType;
@property (nonatomic) long long adjustmentTypeReason;
@property (nonatomic, retain) NSString *administrativeArea;
@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic, readonly) NSSet *answeredQuestionsOnThisDevice;
@property (nonatomic, copy) NSString *authNetworkData;
@property (nonatomic, retain) NSString *cardIdentifier;
@property (nonatomic, retain) NSString *cardNumberSuffix;
@property (nonatomic) unsigned long long cardType;
@property (nonatomic, copy) NSString *clearingNetworkData;
@property (nonatomic, readonly) PKCurrencyAmount *currencyAmount;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic) bool deviceScoreIdentifiersRequired;
@property (nonatomic) bool deviceScoreIdentifiersSubmitted;
@property (nonatomic, readonly) NSString *displayLocation;
@property (nonatomic, readonly) unsigned long long disputeStatus;
@property (nonatomic, readonly) unsigned long long disputeType;
@property (nonatomic, readonly) unsigned long long effectiveTransactionSource;
@property (nonatomic) bool enRoute;
@property (nonatomic, copy) NSString *endStation;
@property (nonatomic, copy) NSData *endStationCode;
@property (nonatomic) double endStationLatitude;
@property (nonatomic, retain) CLLocation *endStationLocation;
@property (nonatomic) double endStationLongitude;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, retain) PKPaymentTransactionFees *fees;
@property (nonatomic, retain) PKPaymentTransactionForeignExchangeInformation *foreignExchangeInformation;
@property (nonatomic, readonly) NSString *formattedBalanceAdjustmentAbsoluteAmount;
@property (nonatomic, readonly) NSString *formattedBalanceAdjustmentAmount;
@property (nonatomic, readonly) NSString *formattedBalanceAdjustmentSubtotalAmount;
@property (nonatomic) bool hasAssociatedPaymentApplication;
@property (nonatomic, readonly) bool hasBackingData;
@property (nonatomic, readonly) bool hasEffectiveTransactionSource;
@property (nonatomic) bool hasNotificationServiceData;
@property (nonatomic, readonly) bool hasTransactionSource;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isCloudKitArchived;
@property (nonatomic, copy) NSString *issueReportIdentifier;
@property (nonatomic, retain) NSDate *lastMerchantReprocessingDate;
@property (nonatomic, copy) NSString *lifecycleIdentifier;
@property (nonatomic, retain) NSString *locality;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic) double locationAltitude;
@property (nonatomic, retain) NSDate *locationDate;
@property (nonatomic) double locationHorizontalAccuracy;
@property (nonatomic) double locationLatitude;
@property (nonatomic) double locationLongitude;
@property (nonatomic) double locationVerticalAccuracy;
@property (nonatomic, retain) PKMerchant *merchant;
@property (nonatomic, copy) NSString *merchantProvidedDescription;
@property (nonatomic, copy) NSDictionary *metadata;
@property (nonatomic) bool originatedByDevice;
@property (nonatomic, copy) NSString *paymentHash;
@property (nonatomic, retain) NSArray *payments;
@property (nonatomic, copy) NSString *peerPaymentCounterpartHandle;
@property (nonatomic, copy) NSString *peerPaymentMemo;
@property (nonatomic, copy) NSDate *peerPaymentMessageReceivedDate;
@property (nonatomic) long long peerPaymentStatus;
@property (nonatomic) long long peerPaymentType;
@property (nonatomic, readonly) CLLocation *preferredLocation;
@property (nonatomic, copy) NSDecimalNumber *primaryFundingSourceAmount;
@property (nonatomic, readonly) PKCurrencyAmount *primaryFundingSourceCurrencyAmount;
@property (nonatomic, copy) NSString *primaryFundingSourceCurrencyCode;
@property (nonatomic) bool processedForLocation;
@property (nonatomic) bool processedForMerchantCleanup;
@property (nonatomic) bool processedForStations;
@property (nonatomic, retain) NSSet *questions;
@property (nonatomic, retain) PKAccountEvent *redemptionEvent;
@property (nonatomic) long long redemptionType;
@property (nonatomic, copy) NSString *referenceIdentifier;
@property (nonatomic, copy) NSUUID *requestDeviceScoreIdentifier;
@property (nonatomic) bool requiresMerchantReprocessing;
@property (nonatomic, retain) PKPaymentTransactionRewards *rewards;
@property (nonatomic) unsigned long long rewardsEligibilityReason;
@property (nonatomic, retain) NSDecimalNumber *rewardsTotalAmount;
@property (nonatomic, readonly) PKCurrencyAmount *rewardsTotalCurrencyAmount;
@property (nonatomic, retain) NSString *rewardsTotalCurrencyCode;
@property (nonatomic, copy) NSDecimalNumber *secondaryFundingSourceAmount;
@property (nonatomic, readonly) PKCurrencyAmount *secondaryFundingSourceCurrencyAmount;
@property (nonatomic, copy) NSString *secondaryFundingSourceCurrencyCode;
@property (nonatomic, copy) NSString *secondaryFundingSourceDPANSuffix;
@property (nonatomic, copy) NSString *secondaryFundingSourceDescription;
@property (nonatomic, copy) NSString *secondaryFundingSourceFPANIdentifier;
@property (nonatomic) long long secondaryFundingSourceNetwork;
@property (nonatomic) long long secondaryFundingSourceType;
@property (nonatomic, copy) NSUUID *sendDeviceScoreIdentifier;
@property (nonatomic, copy) NSString *serviceIdentifier;
@property (nonatomic, retain) NSOrderedSet *servicingEvents;
@property (nonatomic) bool shouldSuppressDate;
@property (nonatomic, copy) NSString *startStation;
@property (nonatomic, copy) NSData *startStationCode;
@property (nonatomic) double startStationLatitude;
@property (nonatomic, retain) CLLocation *startStationLocation;
@property (nonatomic) double startStationLongitude;
@property (nonatomic, copy) NSString *stationCodeProvider;
@property (nonatomic, copy) NSDecimalNumber *subtotalAmount;
@property (nonatomic, readonly) PKCurrencyAmount *subtotalCurrencyAmount;
@property (nonatomic, readonly) bool supportsFuzzyMatching;
@property (nonatomic) unsigned long long suppressBehavior;
@property (nonatomic) bool suppressNotifications;
@property (nonatomic) long long technologyType;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, copy) NSDate *transactionDate;
@property (nonatomic) long long transactionDeclinedReason;
@property (nonatomic) unsigned long long transactionSource;
@property (nonatomic) long long transactionStatus;
@property (nonatomic, copy) NSDate *transactionStatusChangedDate;
@property (nonatomic) long long transactionType;
@property (nonatomic) unsigned long long transitModifiers;
@property (nonatomic) long long transitType;
@property (nonatomic, readonly) NSSet *unansweredQuestions;
@property (nonatomic, readonly) bool updateReasonIsInitialDownload;
@property (nonatomic, readonly) unsigned long long updateReasons;

+ (id)cloudStoreTransactionDeviceDataRecordTypeRecordNamePrefix;
+ (id)paymentTransactionFromSource:(unsigned long long)arg1;
+ (id)paymentTransactionWithSource:(unsigned long long)arg1;
+ (id)paymentTransactionWithSource:(unsigned long long)arg1 dictionary:(id)arg2 hasNotificationServiceData:(bool)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_formatBalanceAdjustmentAmount:(id)arg1;
- (id)_latestDipusteEvent;
- (id)_transactionSourceString;
- (id)_transactionTypeString;
- (id)_transitSubtypeString;
- (id)accountIdentifier;
- (void)addUpdateReasons:(unsigned long long)arg1;
- (long long)adjustmentType;
- (long long)adjustmentTypeReason;
- (id)administrativeArea;
- (id)amount;
- (void)answeredQuestion:(unsigned long long)arg1;
- (id)answeredQuestionsOnThisDevice;
- (id)authNetworkData;
- (id)cardIdentifier;
- (id)cardNumberSuffix;
- (unsigned long long)cardType;
- (id)clearingNetworkData;
- (id)currencyAmount;
- (id)currencyCode;
- (id)description;
- (bool)deviceScoreIdentifiersRequired;
- (bool)deviceScoreIdentifiersSubmitted;
- (id)dictionaryRepresentation;
- (id)displayLocation;
- (unsigned long long)disputeStatus;
- (unsigned long long)disputeType;
- (unsigned long long)effectiveTransactionSource;
- (bool)enRoute;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endStation;
- (id)endStationCode;
- (double)endStationLatitude;
- (id)endStationLocation;
- (double)endStationLongitude;
- (id)expirationDate;
- (id)fees;
- (id)foreignExchangeInformation;
- (id)formattedBalanceAdjustmentAbsoluteAmount;
- (id)formattedBalanceAdjustmentAmount;
- (id)formattedBalanceAdjustmentSubtotalAmount;
- (id)formattedTransitTransactionMessage:(bool)arg1;
- (bool)hasAssociatedPaymentApplication;
- (bool)hasBackingData;
- (bool)hasCloudArchivableDeviceData;
- (bool)hasEffectiveTransactionSource;
- (bool)hasNotificationServiceData;
- (bool)hasTransactionSource;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isCloudArchivableDeviceDataEqual:(id)arg1;
- (bool)isCloudKitArchived;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPaymentTransaction:(id)arg1;
- (id)issueReportIdentifier;
- (unsigned long long)itemType;
- (id)lastMerchantReprocessingDate;
- (id)lifecycleIdentifier;
- (id)locality;
- (id)location;
- (double)locationAltitude;
- (id)locationDate;
- (double)locationHorizontalAccuracy;
- (double)locationLatitude;
- (double)locationLongitude;
- (double)locationVerticalAccuracy;
- (id)merchant;
- (id)merchantProvidedDescription;
- (id)metadata;
- (bool)originatedByDevice;
- (id)paymentHash;
- (id)payments;
- (id)peerPaymentCounterpartHandle;
- (id)peerPaymentMemo;
- (id)peerPaymentMessageReceivedDate;
- (long long)peerPaymentStatus;
- (long long)peerPaymentType;
- (id)preferredLocation;
- (id)primaryFundingSourceAmount;
- (id)primaryFundingSourceCurrencyAmount;
- (id)primaryFundingSourceCurrencyCode;
- (bool)processedForLocation;
- (bool)processedForMerchantCleanup;
- (bool)processedForStations;
- (id)questions;
- (id)recordTypesAndNames;
- (id)redemptionEvent;
- (long long)redemptionType;
- (id)referenceIdentifier;
- (id)requestDeviceScoreIdentifier;
- (bool)requiresMerchantReprocessing;
- (id)rewards;
- (unsigned long long)rewardsEligibilityReason;
- (id)rewardsTotalAmount;
- (id)rewardsTotalCurrencyAmount;
- (id)rewardsTotalCurrencyCode;
- (id)secondaryFundingSourceAmount;
- (id)secondaryFundingSourceCurrencyAmount;
- (id)secondaryFundingSourceCurrencyCode;
- (id)secondaryFundingSourceDPANSuffix;
- (id)secondaryFundingSourceDescription;
- (id)secondaryFundingSourceFPANIdentifier;
- (long long)secondaryFundingSourceNetwork;
- (long long)secondaryFundingSourceType;
- (id)sendDeviceScoreIdentifier;
- (id)serviceIdentifier;
- (id)servicingEvents;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAdjustmentType:(long long)arg1;
- (void)setAdjustmentTypeReason:(long long)arg1;
- (void)setAdministrativeArea:(id)arg1;
- (void)setAmount:(id)arg1;
- (void)setAuthNetworkData:(id)arg1;
- (void)setCardIdentifier:(id)arg1;
- (void)setCardNumberSuffix:(id)arg1;
- (void)setCardType:(unsigned long long)arg1;
- (void)setClearingNetworkData:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setDeviceScoreIdentifiersRequired:(bool)arg1;
- (void)setDeviceScoreIdentifiersSubmitted:(bool)arg1;
- (void)setEnRoute:(bool)arg1;
- (void)setEndStation:(id)arg1;
- (void)setEndStationCode:(id)arg1;
- (void)setEndStationLatitude:(double)arg1;
- (void)setEndStationLocation:(id)arg1;
- (void)setEndStationLongitude:(double)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setFees:(id)arg1;
- (void)setForeignExchangeInformation:(id)arg1;
- (void)setHasAssociatedPaymentApplication:(bool)arg1;
- (void)setHasNotificationServiceData:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsCloudKitArchived:(bool)arg1;
- (void)setIssueReportIdentifier:(id)arg1;
- (void)setLastMerchantReprocessingDate:(id)arg1;
- (void)setLifecycleIdentifier:(id)arg1;
- (void)setLocality:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationAltitude:(double)arg1;
- (void)setLocationDate:(id)arg1;
- (void)setLocationHorizontalAccuracy:(double)arg1;
- (void)setLocationLatitude:(double)arg1;
- (void)setLocationLongitude:(double)arg1;
- (void)setLocationVerticalAccuracy:(double)arg1;
- (void)setMerchant:(id)arg1;
- (void)setMerchantProvidedDescription:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setOriginatedByDevice:(bool)arg1;
- (void)setPaymentHash:(id)arg1;
- (void)setPayments:(id)arg1;
- (void)setPeerPaymentCounterpartHandle:(id)arg1;
- (void)setPeerPaymentMemo:(id)arg1;
- (void)setPeerPaymentMessageReceivedDate:(id)arg1;
- (void)setPeerPaymentStatus:(long long)arg1;
- (void)setPeerPaymentType:(long long)arg1;
- (void)setPrimaryFundingSourceAmount:(id)arg1;
- (void)setPrimaryFundingSourceCurrencyCode:(id)arg1;
- (void)setProcessedForLocation:(bool)arg1;
- (void)setProcessedForMerchantCleanup:(bool)arg1;
- (void)setProcessedForStations:(bool)arg1;
- (void)setQuestions:(id)arg1;
- (void)setRedemptionEvent:(id)arg1;
- (void)setRedemptionType:(long long)arg1;
- (void)setReferenceIdentifier:(id)arg1;
- (void)setRequestDeviceScoreIdentifier:(id)arg1;
- (void)setRequiresMerchantReprocessing:(bool)arg1;
- (void)setRewards:(id)arg1;
- (void)setRewardsEligibilityReason:(unsigned long long)arg1;
- (void)setRewardsTotalAmount:(id)arg1;
- (void)setRewardsTotalCurrencyCode:(id)arg1;
- (void)setSecondaryFundingSourceAmount:(id)arg1;
- (void)setSecondaryFundingSourceCurrencyCode:(id)arg1;
- (void)setSecondaryFundingSourceDPANSuffix:(id)arg1;
- (void)setSecondaryFundingSourceDescription:(id)arg1;
- (void)setSecondaryFundingSourceFPANIdentifier:(id)arg1;
- (void)setSecondaryFundingSourceNetwork:(long long)arg1;
- (void)setSecondaryFundingSourceType:(long long)arg1;
- (void)setSendDeviceScoreIdentifier:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setServicingEvents:(id)arg1;
- (void)setShouldSuppressDate:(bool)arg1;
- (void)setStartStation:(id)arg1;
- (void)setStartStationCode:(id)arg1;
- (void)setStartStationLatitude:(double)arg1;
- (void)setStartStationLocation:(id)arg1;
- (void)setStartStationLongitude:(double)arg1;
- (void)setStationCodeProvider:(id)arg1;
- (void)setSubtotalAmount:(id)arg1;
- (void)setSuppressBehavior:(unsigned long long)arg1;
- (void)setSuppressNotifications:(bool)arg1;
- (void)setTechnologyType:(long long)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTransactionDate:(id)arg1;
- (void)setTransactionDeclinedReason:(long long)arg1;
- (void)setTransactionSource:(unsigned long long)arg1;
- (void)setTransactionStatus:(long long)arg1;
- (void)setTransactionStatusChangedDate:(id)arg1;
- (void)setTransactionType:(long long)arg1;
- (void)setTransitModifiers:(unsigned long long)arg1;
- (void)setTransitType:(long long)arg1;
- (bool)shouldSuppressDate;
- (id)startStation;
- (id)startStationCode;
- (double)startStationLatitude;
- (id)startStationLocation;
- (double)startStationLongitude;
- (id)stationCodeProvider;
- (id)subtotalAmount;
- (id)subtotalCurrencyAmount;
- (bool)supportsFuzzyMatching;
- (unsigned long long)suppressBehavior;
- (bool)suppressNotifications;
- (long long)technologyType;
- (id)timeZone;
- (id)transactionDate;
- (long long)transactionDeclinedReason;
- (unsigned long long)transactionSource;
- (long long)transactionStatus;
- (id)transactionStatusChangedDate;
- (long long)transactionType;
- (unsigned long long)transitModifiers;
- (long long)transitType;
- (id)unansweredQuestions;
- (bool)updateReasonIsInitialDownload;
- (unsigned long long)updateReasons;
- (id)updateReasonsDescription;

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
