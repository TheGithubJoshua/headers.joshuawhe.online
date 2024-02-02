<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>INRideCompletionStatus.h</title>
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

/Frameworks/Intents.framework/INRideCompletionStatus.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Intents.framework/Intents (1)
 */

@interface INRideCompletionStatus : NSObject <INCacheableContainer, INRideCompletionStatusExport, NSCopying, NSSecureCoding> {
    bool  _canceledByService;
    bool  _completed;
    NSUserActivity * _completionUserActivity;
    NSSet * _defaultTippingOptions;
    unsigned long long  _feedbackType;
    bool  _missedPickup;
    bool  _outstanding;
    INCurrencyAmount * _paymentAmount;
}

@property (getter=isCanceled, nonatomic, readonly) bool canceled;
@property (getter=isCanceledByService, nonatomic, readonly) bool canceledByService;
@property (getter=isCompleted, nonatomic, readonly) bool completed;
@property (nonatomic, retain) NSUserActivity *completionUserActivity;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSSet *defaultTippingOptions;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long feedbackType;
@property (readonly) unsigned long long hash;
@property (getter=isMissedPickup, nonatomic, readonly) bool missedPickup;
@property (getter=isOutstanding, nonatomic, readonly) bool outstanding;
@property (nonatomic, readonly) INCurrencyAmount *paymentAmount;
@property (readonly) Class superclass;

+ (id)canceledByService;
+ (id)canceledByUser;
+ (id)canceledMissedPickup;
+ (id)completed;
+ (id)completedWithOutstandingFeedbackType:(unsigned long long)arg1;
+ (id)completedWithOutstandingPaymentAmount:(id)arg1;
+ (id)completedWithSettledPaymentAmount:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_initCompleted:(bool)arg1 canceledByService:(bool)arg2 missedPickup:(bool)arg3 amount:(id)arg4 feedbackType:(unsigned long long)arg5 outstanding:(bool)arg6;
- (id)_initWithValue:(id)arg1;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_newValue;
- (id)completionUserActivity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultTippingOptions;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)feedbackType;
- (id)initWithCoder:(id)arg1;
- (bool)isCanceled;
- (bool)isCanceledByService;
- (bool)isCompleted;
- (bool)isMissedPickup;
- (bool)isOutstanding;
- (id)paymentAmount;
- (void)setCompletionUserActivity:(id)arg1;
- (void)setDefaultTippingOptions:(id)arg1;

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