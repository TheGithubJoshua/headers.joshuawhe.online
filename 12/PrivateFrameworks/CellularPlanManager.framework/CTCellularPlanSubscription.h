<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CTCellularPlanSubscription.h</title>
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

/PrivateFrameworks/CellularPlanManager.framework/CTCellularPlanSubscription.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager (6851.1)
 */

@interface CTCellularPlanSubscription : NSObject <NSCopying, NSSecureCoding> {
    int  _accountStatus;
    NSString * _accountURL;
    bool  _autoRenew;
    double  _billingEndDate;
    double  _billingStartDate;
    NSString * _carrierName;
    NSArray * _dataUsage;
    NSArray * _homeCountryList;
    NSString * _iccid;
    NSString * _planDescription;
    int  _planStatus;
    int  _planType;
    int  _subscriptionResult;
    double  _timestamp;
}

@property (nonatomic, readonly) int accountStatus;
@property (nonatomic, readonly) NSString *accountURL;
@property (nonatomic, readonly) bool autoRenew;
@property (nonatomic, readonly) double billingEndDate;
@property (nonatomic, readonly) double billingStartDate;
@property (nonatomic) NSString *carrierName;
@property (nonatomic, readonly) NSArray *dataUsage;
@property (nonatomic, readonly) NSArray *homeCountryList;
@property (nonatomic, readonly) NSString *iccid;
@property (nonatomic, readonly) NSString *planDescription;
@property (nonatomic) int planStatus;
@property (nonatomic, readonly) int planType;
@property (nonatomic) int subscriptionResult;
@property (nonatomic, readonly) double timestamp;

+ (bool)supportsSecureCoding;

- (int)accountStatus;
- (id)accountURL;
- (bool)autoRenew;
- (double)billingEndDate;
- (double)billingStartDate;
- (id)carrierName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataUsage;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)homeCountryList;
- (id)iccid;
- (id)initWithCoder:(id)arg1;
- (id)initWithIccid:(id)arg1 subscriptionResult:(int)arg2 autoRenew:(bool)arg3 billingStartDate:(double)arg4 billingEndDate:(double)arg5 carrierName:(id)arg6 planType:(int)arg7 planDescription:(id)arg8 planStatus:(int)arg9 accountStatus:(int)arg10 accountURL:(id)arg11 timestamp:(double)arg12 homeCountryList:(id)arg13 dataUsage:(id)arg14;
- (bool)isEqualOrNewerThanSubscription:(id)arg1;
- (id)planDescription;
- (int)planStatus;
- (int)planType;
- (void)setCarrierName:(id)arg1;
- (void)setPlanStatus:(int)arg1;
- (void)setSubscriptionResult:(int)arg1;
- (int)subscriptionResult;
- (double)timestamp;

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
