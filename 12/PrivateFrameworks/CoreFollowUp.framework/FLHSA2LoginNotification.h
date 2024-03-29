<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FLHSA2LoginNotification.h</title>
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

/PrivateFrameworks/CoreFollowUp.framework/FLHSA2LoginNotification.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp (1)
 */

@interface FLHSA2LoginNotification : NSObject <NSSecureCoding> {
    NSString * _altDSID;
    NSString * _appleID;
    NSString * _approveButtonTitle;
    NSString * _codePrompt;
    NSString * _deviceColorString;
    NSString * _deviceModel;
    NSString * _deviceType;
    NSString * _dismissButtonTitle;
    NSString * _informativeText;
    NSNumber * _latitude;
    NSNumber * _longitude;
    NSString * _pushMessageID;
    NSSet * _supportedDismissActions;
    NSString * _title;
    bool  _userAllowedSignIn;
}

@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *appleID;
@property (nonatomic, copy) NSString *approveButtonTitle;
@property (nonatomic, copy) NSString *codePrompt;
@property (nonatomic, copy) NSString *deviceColorString;
@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic, copy) NSString *deviceType;
@property (nonatomic, copy) NSString *dismissButtonTitle;
@property (nonatomic, copy) NSString *informativeText;
@property (nonatomic, copy) NSNumber *latitude;
@property (nonatomic, copy) NSNumber *longitude;
@property (nonatomic, copy) NSString *pushMessageID;
@property (nonatomic, copy) NSSet *supportedDismissActions;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) bool userAllowedSignIn;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)appleID;
- (id)approveButtonTitle;
- (id)codePrompt;
- (id)deviceColorString;
- (id)deviceModel;
- (id)deviceType;
- (id)dismissButtonTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)followUpItemUserInfo;
- (id)informativeText;
- (id)initWithCoder:(id)arg1;
- (id)initWithFollowUpItemUserInfo:(id)arg1;
- (id)latitude;
- (id)longitude;
- (id)pushMessageID;
- (void)setAltDSID:(id)arg1;
- (void)setAppleID:(id)arg1;
- (void)setApproveButtonTitle:(id)arg1;
- (void)setCodePrompt:(id)arg1;
- (void)setDeviceColorString:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setDeviceType:(id)arg1;
- (void)setDismissButtonTitle:(id)arg1;
- (void)setInformativeText:(id)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setPushMessageID:(id)arg1;
- (void)setSupportedDismissActions:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserAllowedSignIn:(bool)arg1;
- (id)supportedDismissActions;
- (id)title;
- (bool)userAllowedSignIn;

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
