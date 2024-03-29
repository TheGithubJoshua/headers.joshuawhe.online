<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CEMSystemiCloudDeclaration.h</title>
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

/PrivateFrameworks/ConfigurationEngineModel.framework/CEMSystemiCloudDeclaration.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel (25.9)
 */

@interface CEMSystemiCloudDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowCloudAddressBook;
    NSNumber * _payloadAllowCloudBackup;
    NSNumber * _payloadAllowCloudBookmarks;
    NSNumber * _payloadAllowCloudCalendar;
    NSNumber * _payloadAllowCloudDesktopAndDocuments;
    NSNumber * _payloadAllowCloudDocumentSync;
    NSNumber * _payloadAllowCloudKeychainSync;
    NSNumber * _payloadAllowCloudMail;
    NSNumber * _payloadAllowCloudNotes;
    NSNumber * _payloadAllowCloudPhotoLibrary;
    NSNumber * _payloadAllowCloudReminders;
    NSNumber * _payloadAllowFindMyFriendsModification;
    NSNumber * _payloadAllowPhotoStream;
    NSNumber * _payloadAllowSharedStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowCloudAddressBook;
@property (nonatomic, copy) NSNumber *payloadAllowCloudBackup;
@property (nonatomic, copy) NSNumber *payloadAllowCloudBookmarks;
@property (nonatomic, copy) NSNumber *payloadAllowCloudCalendar;
@property (nonatomic, copy) NSNumber *payloadAllowCloudDesktopAndDocuments;
@property (nonatomic, copy) NSNumber *payloadAllowCloudDocumentSync;
@property (nonatomic, copy) NSNumber *payloadAllowCloudKeychainSync;
@property (nonatomic, copy) NSNumber *payloadAllowCloudMail;
@property (nonatomic, copy) NSNumber *payloadAllowCloudNotes;
@property (nonatomic, copy) NSNumber *payloadAllowCloudPhotoLibrary;
@property (nonatomic, copy) NSNumber *payloadAllowCloudReminders;
@property (nonatomic, copy) NSNumber *payloadAllowFindMyFriendsModification;
@property (nonatomic, copy) NSNumber *payloadAllowPhotoStream;
@property (nonatomic, copy) NSNumber *payloadAllowSharedStream;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowCloudBackup:(id)arg2 withAllowCloudDocumentSync:(id)arg3 withAllowFindMyFriendsModification:(id)arg4 withAllowPhotoStream:(id)arg5 withAllowSharedStream:(id)arg6 withAllowCloudPhotoLibrary:(id)arg7 withAllowCloudBookmarks:(id)arg8 withAllowCloudMail:(id)arg9 withAllowCloudCalendar:(id)arg10 withAllowCloudReminders:(id)arg11 withAllowCloudAddressBook:(id)arg12 withAllowCloudNotes:(id)arg13 withAllowCloudDesktopAndDocuments:(id)arg14 withAllowCloudKeychainSync:(id)arg15;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)multipleAllowed;
- (bool)mustBeSupervised;
- (id)payloadAllowCloudAddressBook;
- (id)payloadAllowCloudBackup;
- (id)payloadAllowCloudBookmarks;
- (id)payloadAllowCloudCalendar;
- (id)payloadAllowCloudDesktopAndDocuments;
- (id)payloadAllowCloudDocumentSync;
- (id)payloadAllowCloudKeychainSync;
- (id)payloadAllowCloudMail;
- (id)payloadAllowCloudNotes;
- (id)payloadAllowCloudPhotoLibrary;
- (id)payloadAllowCloudReminders;
- (id)payloadAllowFindMyFriendsModification;
- (id)payloadAllowPhotoStream;
- (id)payloadAllowSharedStream;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowCloudAddressBook:(id)arg1;
- (void)setPayloadAllowCloudBackup:(id)arg1;
- (void)setPayloadAllowCloudBookmarks:(id)arg1;
- (void)setPayloadAllowCloudCalendar:(id)arg1;
- (void)setPayloadAllowCloudDesktopAndDocuments:(id)arg1;
- (void)setPayloadAllowCloudDocumentSync:(id)arg1;
- (void)setPayloadAllowCloudKeychainSync:(id)arg1;
- (void)setPayloadAllowCloudMail:(id)arg1;
- (void)setPayloadAllowCloudNotes:(id)arg1;
- (void)setPayloadAllowCloudPhotoLibrary:(id)arg1;
- (void)setPayloadAllowCloudReminders:(id)arg1;
- (void)setPayloadAllowFindMyFriendsModification:(id)arg1;
- (void)setPayloadAllowPhotoStream:(id)arg1;
- (void)setPayloadAllowSharedStream:(id)arg1;

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
