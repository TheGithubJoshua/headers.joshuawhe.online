<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CNUIUserActionTarget.h</title>
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

/PrivateFrameworks/ContactsUICore.framework/CNUIUserActionTarget.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore (999.9.9)
 */

@interface CNUIUserActionTarget : NSObject {
    NSString * _actionType;
    NSString * _bundleIdentifier;
    <CNTUCallProvider> * _callProvider;
    NSString * _name;
    NSString * _teamIdentifier;
}

@property (nonatomic, readonly) NSString *actionType;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (retain) <CNTUCallProvider> *callProvider;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *teamIdentifier;

+ (id)descriptorForRequiredKeysForActionDiscovering;
+ (id)targetForEmailWithMail;
+ (id)targetForPayWithWallet;
+ (id)targetForSendMessageIntentWithAppProxy:(id)arg1;
+ (id)targetForStartAudioCallIntentWithAppProxy:(id)arg1;
+ (id)targetForStartVideoCallIntentWithAppProxy:(id)arg1;
+ (id)targetForTextWithMessages;
+ (id)targetForTextWithSkype;
+ (id)targetForVideoWithCallProvider:(id)arg1;
+ (id)targetForVideoWithFaceTime;
+ (id)targetForVideoWithSkype;
+ (id)targetForVoiceWithCallProvider:(id)arg1;
+ (id)targetForVoiceWithFaceTime;
+ (id)targetForVoiceWithSkype;
+ (id)targetForVoiceWithTelephony;

- (void).cxx_destruct;
- (id)actionType;
- (id)actionsForContact:(id)arg1 discoveringEnvironment:(id)arg2;
- (id)actionsForEmailAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForInstantMessageAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForPhoneNumbers:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForSocialProfiles:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)bundleIdentifier;
- (id)callProvider;
- (unsigned long long)hash;
- (id)init;
- (id)initWithName:(id)arg1 bundleIdentifier:(id)arg2 teamIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCallProvider:(id)arg1;
- (void)setName:(id)arg1;
- (void)setTeamIdentifier:(id)arg1;
- (id)teamIdentifier;

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