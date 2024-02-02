<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SBUIProudLockContainerViewController.h</title>
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

/PrivateFrameworks/SpringBoardUIServices.framework/SBUIProudLockContainerViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices (1)
 */

@interface SBUIProudLockContainerViewController : UIViewController <SBUIProudLockContainerViewControllerOrientationProvider> {
    bool  _authenticated;
    <SBUIProudLockContainerViewControllerLockStatusProvider> * _authenticationInformationProvider;
    bool  _canLeaveCoachingCondition;
    bool  _canShowCameraCovered;
    bool  _canShowCoachingCondition;
    bool  _canShowScanningState;
    struct { 
        bool showScanningState; 
        bool showScanningStateDuringFaceDetect; 
        double minimumDurationBeforeShowScanningState; 
        bool bkCoachingHintsEnabled; 
        double minimumDurationBetweenLeavingCoachingAndCoaching; 
        double minimumDurationShowingCoaching; 
        double durationOnCameraCoveredGlyphBeforeCoaching; 
        double durationToSuppressCameraCoveredWhenWakingWithSmartCover; 
        bool coachingDelaysUnlock; 
        bool suppressFaceIDDisabledState; 
        bool spinBeforeCoaching; 
        unsigned long long substate; 
    }  _configuration;
    <SBUIProudLockContainerViewControllerDelegate> * _delegate;
    unsigned long long  _desiredCoachingCondition;
    long long  _desiredIconState;
    unsigned long long  _forceCount;
    bool  _guidanceTextVisible;
    bool  _hasSeenFaceSinceScreenOn;
    _UILegibilitySettings * _legibilitySettings;
    <SBUIProudLockContainerViewControllerOrientationProvider> * _orientationProvider;
    bool  _screenOn;
    bool  _shouldShowScanningState;
    bool  _suppressNotLooking;
    bool  _suppressScanningState;
    SBUIProudLockIconView * _testProudLockIconView;
    id /* block */  _unlockCompletion;
    int  _unlockSource;
}

@property (getter=isAuthenticated, nonatomic) bool authenticated;
@property (nonatomic) <SBUIProudLockContainerViewControllerLockStatusProvider> *authenticationInformationProvider;
@property (nonatomic, readonly) UIView *cameraCoveredView;
@property (nonatomic) bool canLeaveCoachingCondition;
@property (nonatomic) bool canShowCameraCovered;
@property (nonatomic) bool canShowCoachingCondition;
@property (nonatomic) bool canShowScanningState;
@property (nonatomic) struct { bool x1; bool x2; double x3; bool x4; double x5; double x6; double x7; double x8; bool x9; bool x10; bool x11; unsigned long long x12; } configuration;
@property (nonatomic) <SBUIProudLockContainerViewControllerDelegate> *delegate;
@property (nonatomic) unsigned long long forceCount;
@property (getter=isGuidanceTextVisible, nonatomic) bool guidanceTextVisible;
@property (nonatomic) bool hasSeenFaceSinceScreenOn;
@property (nonatomic, readonly) bool isPortrait;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (getter=isScreenOn, nonatomic) bool screenOn;
@property (nonatomic) bool shouldShowScanningState;
@property (nonatomic) bool suppressNotLooking;
@property (nonatomic) bool suppressScanningState;
@property (nonatomic, copy) id /* block */ unlockCompletion;

- (void).cxx_destruct;
- (long long)_actualIconState;
- (void)_allowCameraCoveredImmediately:(bool)arg1;
- (void)_allowCoachingCondition;
- (void)_allowCoachingConditionImmediately:(bool)arg1;
- (void)_allowLeavingCoachingCondition;
- (void)_allowScanningState;
- (bool)_canTransitionToState:(long long)arg1;
- (void)_clearCoachingCondition;
- (void)_dontCallThis_showLockIfNeededAnimated:(bool)arg1 force:(bool)arg2 completion:(id /* block */)arg3;
- (void)_dontCallThis_updateCoachingCondition:(unsigned long long)arg1 animated:(bool)arg2;
- (unsigned long long)_effectiveCoachingConditionForCondition:(unsigned long long)arg1;
- (unsigned long long)_effectiveCoachingConditionForCondition:(unsigned long long)arg1 orientation:(long long)arg2;
- (long long)_iconViewStateForCoachingCondition:(unsigned long long)arg1;
- (bool)_isBiometricLockedOut;
- (bool)_isShowingCoachingCondition:(unsigned long long)arg1;
- (void)_performForcedUpdate:(id /* block */)arg1;
- (id)_proudLockIconView;
- (void)_reallyAllowCameraCovered;
- (void)_reallyAllowCoachingConditionAnimated:(bool)arg1;
- (void)_reallyAllowLeavingCoachingCondition;
- (void)_setCoachingCondition:(unsigned long long)arg1 animated:(bool)arg2;
- (void)_setCoachingCondition:(unsigned long long)arg1 animated:(bool)arg2 force:(bool)arg3;
- (void)_setCoachingCondition:(unsigned long long)arg1 animated:(bool)arg2 skipScanningState:(bool)arg3 force:(bool)arg4;
- (void)_setCounterTransformForOrientation:(long long)arg1;
- (void)_setIconState:(long long)arg1 animated:(bool)arg2;
- (void)_setIconState:(long long)arg1 animated:(bool)arg2 options:(long long)arg3 force:(bool)arg4 completion:(id /* block */)arg5;
- (void)_setLocalTransformForOrientation:(long long)arg1;
- (void)_startScanningStateTimer;
- (void)_updateIconViewStateAnimated:(bool)arg1;
- (void)_updateIconViewStateAnimated:(bool)arg1 force:(bool)arg2 completion:(id /* block */)arg3;
- (void)_updateLockForFaceInView;
- (void)_updateLockForMatchStarted;
- (void)_updateScanningState;
- (id)authenticationInformationProvider;
- (id)cameraCoveredView;
- (bool)canLeaveCoachingCondition;
- (bool)canShowCameraCovered;
- (bool)canShowCoachingCondition;
- (bool)canShowScanningState;
- (struct { bool x1; bool x2; double x3; bool x4; double x5; double x6; double x7; double x8; bool x9; bool x10; bool x11; unsigned long long x12; })configuration;
- (id)delegate;
- (unsigned long long)forceCount;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (bool)hasSeenFaceSinceScreenOn;
- (id)initWithAuthenticationInformationProvider:(id)arg1;
- (bool)isAuthenticated;
- (bool)isGuidanceTextVisible;
- (bool)isPortrait;
- (bool)isScreenOn;
- (id)legibilitySettings;
- (void)loadView;
- (id)orientationProvider;
- (void)reset;
- (void)setAuthenticated:(bool)arg1;
- (void)setAuthenticated:(bool)arg1 completion:(id /* block */)arg2;
- (void)setAuthenticationInformationProvider:(id)arg1;
- (void)setCanLeaveCoachingCondition:(bool)arg1;
- (void)setCanShowCameraCovered:(bool)arg1;
- (void)setCanShowCoachingCondition:(bool)arg1;
- (void)setCanShowScanningState:(bool)arg1;
- (void)setConfiguration:(struct { bool x1; bool x2; double x3; bool x4; double x5; double x6; double x7; double x8; bool x9; bool x10; bool x11; unsigned long long x12; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setForceCount:(unsigned long long)arg1;
- (void)setGuidanceTextVisible:(bool)arg1;
- (void)setHasSeenFaceSinceScreenOn:(bool)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setOrientationProvider:(id)arg1;
- (void)setScreenOn:(bool)arg1;
- (void)setScreenOn:(bool)arg1 fromUnlockSource:(int)arg2;
- (void)setShouldShowScanningState:(bool)arg1;
- (void)setSuppressNotLooking:(bool)arg1;
- (void)setSuppressScanningState:(bool)arg1;
- (void)setTestProudLockIconView:(id)arg1;
- (void)setUnlockCompletion:(id /* block */)arg1;
- (bool)shouldShowScanningState;
- (bool)suppressNotLooking;
- (bool)suppressScanningState;
- (id)testProudLockIconView;
- (id /* block */)unlockCompletion;
- (void)updateForScreenWillTurnOff;
- (void)updateLockForBiometricMatchFailure;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

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