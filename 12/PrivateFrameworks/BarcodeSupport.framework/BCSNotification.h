<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BCSNotification.h</title>
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

/PrivateFrameworks/BarcodeSupport.framework/BCSNotification.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport ()
 */

@interface BCSNotification : NSObject {
    BCSAction * _action;
    BCSNotificationIcon * _attachmentIcon;
    NSString * _identifier;
    NSMutableDictionary * _localActions;
    int  _requestingProcessID;
}

@property (nonatomic, readonly) BBBulletinRequest *bulletinRequest;
@property (nonatomic, readonly) bool canHandleActionLocally;
@property (nonatomic, readonly) long long codeType;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) int requestingProcessID;

+ (id)_tlAlertConfiguration;
+ (id)notificationForAction:(id)arg1;
+ (id)tempVCardFileURL;

- (void).cxx_destruct;
- (id)_actionDescriptionString;
- (id)_actionTypeStringForNFC;
- (id)_actionTypeStringForQRCode;
- (id)_bbActionFromActionPickerItem:(id)arg1;
- (bool)_contentIsPreviewable;
- (id)_defaultURL;
- (id)_fbOptionsHandlingUnlockIfNecessary;
- (void)_handleCalendarEventWithICSString:(id)arg1;
- (void)_handleContactInfo:(id)arg1;
- (id)_initWithAction:(id)arg1;
- (id)_orderAppLinkActionsByRecency:(id)arg1;
- (void)_performActionAfterUnlock:(id /* block */)arg1;
- (void)_performActionAfterUnlock:(bool)arg1 actionBlock:(id /* block */)arg2;
- (id)_pickerLabelForURLActionPickerItem:(id)arg1;
- (id)_previewableData;
- (bool)_shouldHandleActionPickerItemLocally:(id)arg1;
- (bool)_shouldManuallyRequireAuthenticationForURL:(id)arg1;
- (bool)_shouldRequireUserToPickTargetApp;
- (bool)_shouldScheduleBackgroundActionForLaunchBundleID:(id)arg1;
- (void)_showAppPickerAlertWithFBOptions:(id)arg1;
- (id)_supplementActions;
- (id)_title;
- (id)attachmentDataForConstraints:(id)arg1;
- (id)bulletinRequest;
- (bool)canHandleActionLocally;
- (long long)codeType;
- (void)didHandleBulletinActionWithIdentifier:(id)arg1;
- (void)handleActionWithIdentifier:(id)arg1 notificationResponseOriginID:(id)arg2;
- (id)identifier;
- (int)requestingProcessID;
- (void)setRequestingProcessID:(int)arg1;
- (bool)shouldHandleBulletinActionWithIdentifier:(id)arg1;

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
