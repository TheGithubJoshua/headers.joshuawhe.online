<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>LOGMSGEVENTLogMsgEventTableBookingSession.h</title>
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

/PrivateFrameworks/GeoServices.framework/LOGMSGEVENTLogMsgEventTableBookingSession.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface LOGMSGEVENTLogMsgEventTableBookingSession : PBCodable <NSCopying> {
    bool  _addedSpecialRequest;
    long long  _blurredBookingTimestamp;
    long long  _blurredReservationTimestamp;
    NSString * _bookTableAppId;
    NSString * _bookTableSessionId;
    double  _durationOfSessionInSeconds;
    int  _endState;
    int  _endView;
    NSMutableArray * _errorMessages;
    struct { 
        unsigned int blurredBookingTimestamp : 1; 
        unsigned int blurredReservationTimestamp : 1; 
        unsigned int durationOfSessionInSeconds : 1; 
        unsigned int muid : 1; 
        unsigned int endState : 1; 
        unsigned int endView : 1; 
        unsigned int tableSize : 1; 
        unsigned int addedSpecialRequest : 1; 
        unsigned int installCompleted : 1; 
        unsigned int installNeeded : 1; 
        unsigned int swipedAvailableTimes : 1; 
        unsigned int tappedDatePicker : 1; 
    }  _has;
    bool  _installCompleted;
    bool  _installNeeded;
    NSString * _installNeededTappedAppId;
    unsigned long long  _muid;
    bool  _swipedAvailableTimes;
    unsigned int  _tableSize;
    bool  _tappedDatePicker;
}

@property (nonatomic) bool addedSpecialRequest;
@property (nonatomic) long long blurredBookingTimestamp;
@property (nonatomic) long long blurredReservationTimestamp;
@property (nonatomic, retain) NSString *bookTableAppId;
@property (nonatomic, retain) NSString *bookTableSessionId;
@property (nonatomic) double durationOfSessionInSeconds;
@property (nonatomic) int endState;
@property (nonatomic) int endView;
@property (nonatomic, retain) NSMutableArray *errorMessages;
@property (nonatomic) bool hasAddedSpecialRequest;
@property (nonatomic) bool hasBlurredBookingTimestamp;
@property (nonatomic) bool hasBlurredReservationTimestamp;
@property (nonatomic, readonly) bool hasBookTableAppId;
@property (nonatomic, readonly) bool hasBookTableSessionId;
@property (nonatomic) bool hasDurationOfSessionInSeconds;
@property (nonatomic) bool hasEndState;
@property (nonatomic) bool hasEndView;
@property (nonatomic) bool hasInstallCompleted;
@property (nonatomic) bool hasInstallNeeded;
@property (nonatomic, readonly) bool hasInstallNeededTappedAppId;
@property (nonatomic) bool hasMuid;
@property (nonatomic) bool hasSwipedAvailableTimes;
@property (nonatomic) bool hasTableSize;
@property (nonatomic) bool hasTappedDatePicker;
@property (nonatomic) bool installCompleted;
@property (nonatomic) bool installNeeded;
@property (nonatomic, retain) NSString *installNeededTappedAppId;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) bool swipedAvailableTimes;
@property (nonatomic) unsigned int tableSize;
@property (nonatomic) bool tappedDatePicker;

+ (Class)errorMessageType;

- (void).cxx_destruct;
- (int)StringAsEndState:(id)arg1;
- (int)StringAsEndView:(id)arg1;
- (void)addErrorMessage:(id)arg1;
- (bool)addedSpecialRequest;
- (long long)blurredBookingTimestamp;
- (long long)blurredReservationTimestamp;
- (id)bookTableAppId;
- (id)bookTableSessionId;
- (void)clearErrorMessages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)durationOfSessionInSeconds;
- (int)endState;
- (id)endStateAsString:(int)arg1;
- (int)endView;
- (id)endViewAsString:(int)arg1;
- (id)errorMessageAtIndex:(unsigned long long)arg1;
- (id)errorMessages;
- (unsigned long long)errorMessagesCount;
- (bool)hasAddedSpecialRequest;
- (bool)hasBlurredBookingTimestamp;
- (bool)hasBlurredReservationTimestamp;
- (bool)hasBookTableAppId;
- (bool)hasBookTableSessionId;
- (bool)hasDurationOfSessionInSeconds;
- (bool)hasEndState;
- (bool)hasEndView;
- (bool)hasInstallCompleted;
- (bool)hasInstallNeeded;
- (bool)hasInstallNeededTappedAppId;
- (bool)hasMuid;
- (bool)hasSwipedAvailableTimes;
- (bool)hasTableSize;
- (bool)hasTappedDatePicker;
- (unsigned long long)hash;
- (bool)installCompleted;
- (bool)installNeeded;
- (id)installNeededTappedAppId;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (bool)readFrom:(id)arg1;
- (void)setAddedSpecialRequest:(bool)arg1;
- (void)setBlurredBookingTimestamp:(long long)arg1;
- (void)setBlurredReservationTimestamp:(long long)arg1;
- (void)setBookTableAppId:(id)arg1;
- (void)setBookTableSessionId:(id)arg1;
- (void)setDurationOfSessionInSeconds:(double)arg1;
- (void)setEndState:(int)arg1;
- (void)setEndView:(int)arg1;
- (void)setErrorMessages:(id)arg1;
- (void)setHasAddedSpecialRequest:(bool)arg1;
- (void)setHasBlurredBookingTimestamp:(bool)arg1;
- (void)setHasBlurredReservationTimestamp:(bool)arg1;
- (void)setHasDurationOfSessionInSeconds:(bool)arg1;
- (void)setHasEndState:(bool)arg1;
- (void)setHasEndView:(bool)arg1;
- (void)setHasInstallCompleted:(bool)arg1;
- (void)setHasInstallNeeded:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasSwipedAvailableTimes:(bool)arg1;
- (void)setHasTableSize:(bool)arg1;
- (void)setHasTappedDatePicker:(bool)arg1;
- (void)setInstallCompleted:(bool)arg1;
- (void)setInstallNeeded:(bool)arg1;
- (void)setInstallNeededTappedAppId:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setSwipedAvailableTimes:(bool)arg1;
- (void)setTableSize:(unsigned int)arg1;
- (void)setTappedDatePicker:(bool)arg1;
- (bool)swipedAvailableTimes;
- (unsigned int)tableSize;
- (bool)tappedDatePicker;
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
