<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TVRUIRemoteViewController.h</title>
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

/PrivateFrameworks/TVRemoteUI.framework/TVRUIRemoteViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI (1)
 */

@interface TVRUIRemoteViewController : UIViewController <TVRUIDeviceDelegate, TVRUIDeviceSearchDelegate, _TVRAlertControllerDelegate, _TVRUIDevicePickerDelegate, _TVRUIEventDelegate, _TVRUINetworkObserverDelegate> {
    <TVRUIDevice> * _activeDevice;
    NSString * _activeDeviceIdentifier;
    <TVRUIDevice> * _authenticatingDevice;
    _TVRAlertController * _authenticationAlertController;
    UIView * _backgroundView;
    UIView * _blackGradientView;
    TVRUIControlPanelViewController * _controlPanelViewController;
    TVRUIDevicePickerViewController * _devicePickerViewController;
    <TVRUIDeviceQuery> * _deviceQuery;
    bool  _editingSessionActive;
    _TVRUICubicSpringAnimator * _introAnimationHideLabelAnimator;
    UILabel * _introAnimationHintLabel;
    CCUICAPackageView * _introAnimationPackageView;
    _TVRUICubicSpringAnimator * _introAnimationShowLabelAnimator;
    UIView * _introAnimationView;
    _TVRAlertController * _keyboardController;
    _TVRKeyboardHaptic * _keyboardHaptic;
    TVRUIMediaControlsViewController * _mediaControlsViewController;
    _TVRMessageView * _messageView;
    _TVRUINetworkObserver * _networkObserver;
    NSString * _preferredDeviceIdentifier;
    bool  _registeredForVolumeEvents;
    SFClient * _sharingClient;
    _TVRSiriHaptic * _siriHaptic;
    <TVRUIStyleProvider> * _styleProvider;
    CUSystemMonitor * _systemMonitor;
    UIButton * _tapToRadarButton;
    TVRUITouchpadViewController * _touchpadViewController;
}

@property (nonatomic, retain) <TVRUIDevice> *activeDevice;
@property (nonatomic, copy) NSString *activeDeviceIdentifier;
@property (nonatomic, retain) <TVRUIDevice> *authenticatingDevice;
@property (nonatomic, retain) _TVRAlertController *authenticationAlertController;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) UIView *blackGradientView;
@property (nonatomic, retain) TVRUIControlPanelViewController *controlPanelViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TVRUIDevicePickerViewController *devicePickerViewController;
@property (nonatomic, retain) <TVRUIDeviceQuery> *deviceQuery;
@property (getter=isEditingSessionActive, nonatomic) bool editingSessionActive;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _TVRUICubicSpringAnimator *introAnimationHideLabelAnimator;
@property (nonatomic, retain) UILabel *introAnimationHintLabel;
@property (nonatomic, retain) CCUICAPackageView *introAnimationPackageView;
@property (nonatomic, retain) _TVRUICubicSpringAnimator *introAnimationShowLabelAnimator;
@property (nonatomic, retain) UIView *introAnimationView;
@property (nonatomic, retain) _TVRAlertController *keyboardController;
@property (nonatomic, retain) _TVRKeyboardHaptic *keyboardHaptic;
@property (nonatomic, retain) TVRUIMediaControlsViewController *mediaControlsViewController;
@property (nonatomic, retain) _TVRMessageView *messageView;
@property (nonatomic, retain) _TVRUINetworkObserver *networkObserver;
@property (nonatomic, retain) NSString *preferredDeviceIdentifier;
@property (nonatomic) bool registeredForVolumeEvents;
@property (nonatomic, retain) SFClient *sharingClient;
@property (nonatomic, retain) _TVRSiriHaptic *siriHaptic;
@property (nonatomic, retain) <TVRUIStyleProvider> *styleProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) CUSystemMonitor *systemMonitor;
@property (nonatomic, retain) UIButton *tapToRadarButton;
@property (nonatomic, retain) TVRUITouchpadViewController *touchpadViewController;

- (void).cxx_destruct;
- (void)_cancelHideConnectingAndShowDevicePicker;
- (void)_cancelPairing;
- (void)_cleanupIntroAnimation;
- (void)_connectToDevice:(id)arg1;
- (void)_createBlackGradientView;
- (void)_disableSearch;
- (void)_disableVolumeControl;
- (void)_disconnectSystemInitiated;
- (void)_disconnectUserInitiated;
- (void)_dismissAnyPresentedContentAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)_enableMediaControls:(bool)arg1 animated:(bool)arg2;
- (void)_enableSearch;
- (void)_enableVolumeControl;
- (void)_hideConnectingAndShowDevicePicker;
- (void)_hideMessageContent;
- (void)_installTapToRadarButton;
- (void)_layoutTouchpad:(bool)arg1;
- (void)_performSiriEffectsWithButtonEvent:(id)arg1;
- (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)_presentKeyboardWithAttributes:(id)arg1 initialText:(id)arg2;
- (void)_presentPairingAlert;
- (void)_setupChildViewControllers;
- (void)_setupDevicePickerController;
- (void)_showConnectingSpinner;
- (void)_showSearchingSpinnerIfNeeded;
- (void)_startIntroAnimation;
- (void)_switchToDismissalState;
- (void)_switchToPresentationState;
- (void)_tapToRadar;
- (void)_toggleControlAvailability;
- (void)_volumeDownButtonTouchDown:(id)arg1;
- (void)_volumeDownButtonTouchUp:(id)arg1;
- (void)_volumeUpButtonTouchDown:(id)arg1;
- (void)_volumeUpButtonTouchUp:(id)arg1;
- (id)activeDevice;
- (id)activeDeviceIdentifier;
- (void)alertController:(id)arg1 enteredText:(id)arg2;
- (void)alertController:(id)arg1 generatedTextInputPayload:(id)arg2;
- (void)alertControllerCancelled:(id)arg1;
- (void)alertControllerHitKeyboardReturnKey:(id)arg1;
- (void)alertControllerPressedDictationButton:(id)arg1;
- (void)alertControllerReleasedDictationButton:(id)arg1;
- (id)animatorForDismissalAsAlert;
- (id)animatorForPresentationAsAlert;
- (id)authenticatingDevice;
- (id)authenticationAlertController;
- (id)backgroundView;
- (id)blackGradientView;
- (void)clearMessageContent;
- (void)configureWithDeviceIdentifier:(id)arg1 type:(long long)arg2 showPicker:(bool)arg3;
- (void)connectionServiceDidInvalidate:(id)arg1;
- (id)controlPanelViewController;
- (void)dealloc;
- (void)device:(id)arg1 beganTextEditingWithAttributes:(id)arg2 initialText:(id)arg3;
- (void)device:(id)arg1 didUpdateAttributes:(id)arg2;
- (void)device:(id)arg1 didUpdateText:(id)arg2;
- (void)device:(id)arg1 endedTextEditingWithAttributes:(id)arg2 endingText:(id)arg3;
- (void)device:(id)arg1 needsMediaControls:(id)arg2;
- (void)device:(id)arg1 supportsVolumeControl:(bool)arg2;
- (void)deviceBeganConnecting:(id)arg1;
- (void)deviceDidConnect:(id)arg1;
- (void)deviceDidDisconnect:(id)arg1 reason:(long long)arg2 error:(id)arg3;
- (void)deviceDidEncounterAuthenticationChallenge:(id)arg1;
- (void)deviceHidesMediaControls:(id)arg1;
- (void)deviceListUpdated:(id)arg1;
- (void)devicePicked:(id)arg1;
- (id)devicePickerViewController;
- (void)devicePickerWillChangeState:(bool)arg1 animated:(bool)arg2;
- (id)deviceQuery;
- (void)fetchPreferredDeviceIdentifier;
- (void)generatedButtonEvent:(id)arg1;
- (void)generatedTouchEvent:(id)arg1;
- (id)init;
- (id)introAnimationHideLabelAnimator;
- (id)introAnimationHintLabel;
- (id)introAnimationPackageView;
- (id)introAnimationShowLabelAnimator;
- (id)introAnimationView;
- (bool)isEditingSessionActive;
- (id)keyboardController;
- (id)keyboardHaptic;
- (void)keyboardRequested;
- (id)mediaControlsViewController;
- (id)messageView;
- (id)networkObserver;
- (void)networkObserverDidUpdateState:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)preferredDeviceIdentifier;
- (bool)registeredForVolumeEvents;
- (void)setActiveDevice:(id)arg1;
- (void)setActiveDeviceIdentifier:(id)arg1;
- (void)setAuthenticatingDevice:(id)arg1;
- (void)setAuthenticationAlertController:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBlackGradientView:(id)arg1;
- (void)setControlPanelViewController:(id)arg1;
- (void)setDevicePickerViewController:(id)arg1;
- (void)setDeviceQuery:(id)arg1;
- (void)setEditingSessionActive:(bool)arg1;
- (void)setIntroAnimationHideLabelAnimator:(id)arg1;
- (void)setIntroAnimationHintLabel:(id)arg1;
- (void)setIntroAnimationPackageView:(id)arg1;
- (void)setIntroAnimationShowLabelAnimator:(id)arg1;
- (void)setIntroAnimationView:(id)arg1;
- (void)setKeyboardController:(id)arg1;
- (void)setKeyboardHaptic:(id)arg1;
- (void)setMediaControlsViewController:(id)arg1;
- (void)setMessageView:(id)arg1;
- (void)setNetworkObserver:(id)arg1;
- (void)setPreferredDeviceIdentifier:(id)arg1;
- (void)setRegisteredForVolumeEvents:(bool)arg1;
- (void)setSharingClient:(id)arg1;
- (void)setSiriHaptic:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setSystemMonitor:(id)arg1;
- (void)setTapToRadarButton:(id)arg1;
- (void)setTouchpadViewController:(id)arg1;
- (id)sharingClient;
- (void)showGenericUnableToConnectMessage;
- (void)showLoadingSpinner;
- (void)showMessageWithError:(id)arg1 andDevice:(id)arg2;
- (void)showMessageWithTitle:(id)arg1 message:(id)arg2;
- (void)showNoAssociatedNetworkMessage;
- (void)showNoWIFIConnectionMessage;
- (void)showSearchingSpinner;
- (id)siriHaptic;
- (void)startConnections;
- (void)stopConnections;
- (id)stringForDeviceDeviceIdentifierType:(long long)arg1;
- (id)styleProvider;
- (unsigned long long)supportedInterfaceOrientations;
- (id)systemMonitor;
- (id)tapToRadarButton;
- (id)touchpadViewController;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)volumeDownEventGenerated;
- (void)volumeUpEventGenerated;

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
