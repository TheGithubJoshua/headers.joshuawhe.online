<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SBAlertItem.h</title>
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

/PrivateFrameworks/SpringBoardUI.framework/SBAlertItem.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI (1.0)
 */

@interface SBAlertItem : NSObject <BSDescriptionProviding> {
    _SBAlertController * _alertController;
    bool  _allowInCar;
    bool  _allowInSetup;
    bool  _allowMessageInCar;
    NSArray * _allowedBundleIDs;
    UIImage * _attachmentImage;
    bool  _didEverActivate;
    bool  _didEverDeactivate;
    bool  _didPlayPresentationSound;
    UIImage * _headerImage;
    UIImage * _iconImage;
    NSString * _iconImagePath;
    bool  _ignoreIfAlreadyDisplaying;
    bool  _ignoresQuietMode;
    bool  _pendInSetupIfNotAllowed;
    bool  _pendWhileKeyBagLocked;
    bool  _presented;
    bool  _suppressForKeynote;
}

@property (setter=_setAttachmentImage:, nonatomic, retain) UIImage *_attachmentImage;
@property (setter=_setHeaderImage:, nonatomic, retain) UIImage *_headerImage;
@property (setter=_setIgnoresQuietMode:, nonatomic) bool _ignoresQuietMode;
@property (nonatomic) bool allowInCar;
@property (nonatomic) bool allowInSetup;
@property (nonatomic) bool allowMessageInCar;
@property (nonatomic, retain) NSArray *allowedBundleIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=setIconImage:, nonatomic, retain) UIImage *iconImage;
@property (getter=_iconImagePath, nonatomic, retain) NSString *iconImagePath;
@property (nonatomic) bool ignoreIfAlreadyDisplaying;
@property (nonatomic) bool pendInSetupIfNotAllowed;
@property (nonatomic) bool pendWhileKeyBagLocked;
@property (getter=_isPresented, setter=_setPresented:, nonatomic) bool presented;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressForKeynote;

+ (id)_alertItemsController;
+ (void)activateAlertItem:(id)arg1;

- (void).cxx_destruct;
- (id)_alertController;
- (id)_attachmentImage;
- (void)_clearAlertController;
- (void)_deactivationCompleted;
- (bool)_didEverActivate;
- (bool)_displayActionButtonOnLockScreen;
- (bool)_hasActiveKeyboardOnScreen;
- (id)_headerImage;
- (id)_iconImagePath;
- (bool)_ignoresQuietMode;
- (bool)_isPresented;
- (void)_noteVolumeOrLockPressed;
- (id)_prepareNewAlertControllerWithLockedState:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (id)_publicDescription;
- (void)_setAttachmentImage:(id)arg1;
- (void)_setHeaderImage:(id)arg1;
- (void)_setIgnoresQuietMode:(bool)arg1;
- (void)_setPresented:(bool)arg1;
- (id)alertController;
- (void)alertItemDidAppear;
- (void)alertItemDidDisappear;
- (int)alertPriority;
- (bool)allowInCar;
- (bool)allowInLoginWindow;
- (bool)allowInSetup;
- (bool)allowLockScreenDismissal;
- (bool)allowMenuButtonDismissal;
- (bool)allowMessageInCar;
- (id)allowedBundleIDs;
- (bool)behavesSuperModally;
- (void)buttonDismissed;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (void)deactivate;
- (void)deactivateForButton;
- (void)deactivateForReason:(int)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didActivate;
- (void)didDeactivateForReason:(int)arg1;
- (void)didFailToActivate;
- (bool)didPlayPresentationSound;
- (void)dismiss;
- (void)dismiss:(int)arg1;
- (bool)dismissOnLock;
- (bool)dismissesOverlaysOnLockScreen;
- (void)doCleanupAfterDeactivationAnimation;
- (bool)forcesModalAlertAppearance;
- (id)iconImage;
- (bool)ignoreIfAlreadyDisplaying;
- (id)init;
- (id)lockLabel;
- (bool)pendInSetupIfNotAllowed;
- (bool)pendWhileKeyBagLocked;
- (void)performUnlockAction;
- (void)playPresentationSound;
- (bool)reappearsAfterLock;
- (bool)reappearsAfterUnlock;
- (void)setAllowInCar:(bool)arg1;
- (void)setAllowInSetup:(bool)arg1;
- (void)setAllowMessageInCar:(bool)arg1;
- (void)setAllowedBundleIDs:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setIconImagePath:(id)arg1;
- (void)setIgnoreIfAlreadyDisplaying:(bool)arg1;
- (void)setPendInSetupIfNotAllowed:(bool)arg1;
- (void)setPendWhileKeyBagLocked:(bool)arg1;
- (void)setSuppressForKeynote:(bool)arg1;
- (id)shortLockLabel;
- (bool)shouldShowInEmergencyCall;
- (bool)shouldShowInLockScreen;
- (id)sound;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)suppressForKeynote;
- (bool)undimsScreen;
- (bool)unlocksScreen;
- (void)willActivate;
- (void)willDeactivateForReason:(int)arg1;
- (void)willRelockForButtonPress:(bool)arg1;

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
