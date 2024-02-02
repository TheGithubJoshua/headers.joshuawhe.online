<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ANAccountNotification.h</title>
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

/PrivateFrameworks/AccountNotification.framework/ANAccountNotification.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification (1)
 */

@interface ANAccountNotification : NSObject <NSSecureCoding> {
    NSString * _accountTypeID;
    ANNotificationAction * _activateAction;
    NSString * _activateButtonTitle;
    NSString * _callbackMachService;
    ANNotificationAction * _clearAction;
    NSDate * _date;
    long long  _destinations;
    ANNotificationAction * _dismissAction;
    NSString * _dismissButtonTitle;
    NSString * _eventIdentifier;
    NSString * _identifier;
    NSString * _message;
    long long  _sectionSubtype;
    NSString * _title;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSString *accountTypeID;
@property (nonatomic, retain) ANNotificationAction *activateAction;
@property (nonatomic, copy) NSString *activateButtonTitle;
@property (nonatomic, copy) NSString *callbackMachService;
@property (nonatomic, retain) ANNotificationAction *clearAction;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic) long long destinations;
@property (nonatomic, retain) ANNotificationAction *dismissAction;
@property (nonatomic, copy) NSString *dismissButtonTitle;
@property (nonatomic, copy) NSString *eventIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) long long sectionSubtype;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountTypeID;
- (id)activateAction;
- (id)activateButtonTitle;
- (id)callbackMachService;
- (id)clearAction;
- (id)date;
- (id)description;
- (long long)destinations;
- (id)dismissAction;
- (id)dismissButtonTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)eventIdentifier;
- (id)identifier;
- (id)initForAccountWithType:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithManagedObject:(id)arg1;
- (id)message;
- (long long)sectionSubtype;
- (void)setActivateAction:(id)arg1;
- (void)setActivateButtonTitle:(id)arg1;
- (void)setCallbackMachService:(id)arg1;
- (void)setClearAction:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDestinations:(long long)arg1;
- (void)setDismissAction:(id)arg1;
- (void)setDismissButtonTitle:(id)arg1;
- (void)setEventIdentifier:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setSectionSubtype:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)title;
- (id)userInfo;

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