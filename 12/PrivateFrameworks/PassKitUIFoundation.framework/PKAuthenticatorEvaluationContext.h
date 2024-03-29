<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKAuthenticatorEvaluationContext.h</title>
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

/PrivateFrameworks/PassKitUIFoundation.framework/PKAuthenticatorEvaluationContext.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation ()
 */

@interface PKAuthenticatorEvaluationContext : NSObject <LAUIDelegate> {
    LAContext * _LAContext;
    NSMutableArray * _accessHandlers;
    unsigned long long  _activeMechanisms;
    PKAuthenticator * _authenticator;
    long long  _coachingState;
    long long  _coachingStatus;
    unsigned long long  _completedMechanisms;
    id /* block */  _completionHandler;
    NSObject<OS_dispatch_source> * _delayedBiometricMissFeedback;
    NSObject<OS_dispatch_source> * _delayedCoachingStateUpdate;
    <PKAuthenticatorDelegate> * _delegate;
    double  _evaluationMinimumTime;
    unsigned long long  _externalContextInvalidationPolicy;
    unsigned long long  _externalContextOptions;
    bool  _fingerPresent;
    bool  _fingerPresentTimeoutExpired;
    bool  _fingerPresentTimeoutRequired;
    bool  _invalidated;
    NSObject<OS_dispatch_source> * _liftFingerTimeout;
    bool  _passcodeActive;
    bool  _passphraseActive;
    unsigned long long  _pearlFlags;
    long long  _pearlState;
    unsigned long long  _presentationFlags;
    PKAuthenticatorEvaluationRequest * _request;
    bool  _shouldLiftFinger;
    double  _touchIDBeginTime;
    bool  _usingExternalContext;
}

@property (nonatomic, readonly) bool biometricMatch;
@property (nonatomic, readonly) long long coachingState;
@property (nonatomic) <PKAuthenticatorDelegate> *delegate;
@property (nonatomic, readonly) bool fingerPresent;
@property (nonatomic, readonly) bool fingerPresentTimeoutExpired;
@property (nonatomic, readonly) bool fingerPresentTimeoutRequired;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic, readonly) bool passcodeActive;
@property (nonatomic, readonly) bool passphraseActive;
@property (nonatomic, readonly) long long pearlState;
@property (nonatomic, readonly) unsigned long long presentationFlags;
@property (nonatomic, readonly) PKAuthenticatorEvaluationRequest *request;
@property (nonatomic, readonly) bool shouldLiftFinger;
@property (nonatomic, readonly) bool userIntentAvailable;

- (void).cxx_destruct;
- (void)_clearLiftFingerTimer;
- (void)_createContextWithExternalizedContext:(id)arg1;
- (bool)_delegateSupportsPasscodeDismissal;
- (bool)_delegateSupportsPasscodePresentation;
- (bool)_delegateSupportsPassphraseDismissal;
- (bool)_delegateSupportsPassphrasePresentation;
- (unsigned long long)_didPresentFlagForAuthenticatorViewType:(long long)arg1 custom:(bool)arg2;
- (void)_dismissAuthenticatorViewOfType:(long long)arg1;
- (void)_handleLiftFinger;
- (void)_presentAuthenticatorViewOfType:(long long)arg1 withParams:(id)arg2;
- (unsigned long long)_presentationFlagForAuthenticatorViewType:(long long)arg1;
- (void)_requestRemoteAuthenticatorViewControllerOfType:(long long)arg1 withClassName:(id)arg2 bundleIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)_setCoachingState:(long long)arg1;
- (void)_setLiftFingerTimer;
- (void)_setPearlState:(long long)arg1;
- (void)_updateCoachingState;
- (void)_updatePearlState;
- (void)accessLAContext:(id /* block */)arg1;
- (bool)biometricMatch;
- (long long)coachingState;
- (void)dealloc;
- (void)delayCoachingTransition:(id)arg1;
- (id)delegate;
- (void)evaluateWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)event:(long long)arg1 params:(id)arg2 reply:(id /* block */)arg3;
- (void)fallbackToPasscode;
- (bool)fingerPresent;
- (bool)fingerPresentTimeoutExpired;
- (bool)fingerPresentTimeoutRequired;
- (void)handlePasscodeEventWithParameters:(id)arg1;
- (void)handlePassphraseEventWithParameters:(id)arg1;
- (void)handlePearlEventWithParameters:(id)arg1;
- (void)handlePushButtonEventWithParameters:(id)arg1;
- (void)handleTouchIDEventWithParameters:(id)arg1;
- (id /* block */)hoistCompletionHandler;
- (id)init;
- (id)initWithRequest:(id)arg1 completionHandler:(id /* block */)arg2 forAuthenticator:(id)arg3;
- (void)invalidate;
- (void)invalidateWithIntent:(long long)arg1;
- (bool)isInvalidated;
- (bool)passcodeActive;
- (bool)passphraseActive;
- (long long)pearlState;
- (unsigned long long)presentationFlags;
- (id)request;
- (void)setDelegate:(id)arg1;
- (bool)shouldLiftFinger;
- (bool)userIntentAvailable;

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
