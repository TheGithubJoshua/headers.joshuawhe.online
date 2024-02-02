<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CNFRegWizardController.h</title>
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

/PrivateFrameworks/CommunicationsSetupUI.framework/CNFRegWizardController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI (1)
 */

@interface CNFRegWizardController : PSSetupController <CNFRegFirstRunDelegate> {
    _UIBackdropView * _backdropView;
    <CNFRegWizardControllerDelegate> * _firstRunDelegate;
    CNFRegController * _regController;
    id  _resignListener;
    id  _resumeListener;
    long long  _serviceType;
    struct { 
        unsigned int automaticKeyboardWasDisabled : 1; 
        unsigned int shouldListenForSuspension : 1; 
        unsigned int canStartNested : 1; 
        unsigned int canShowSplashScreen : 1; 
        unsigned int canShowDisabledScreen : 1; 
        unsigned int hideLearnMoreButton : 1; 
        unsigned int showSplashOnSignin : 1; 
        unsigned int skipReloadOnNextViewWillAppear : 1; 
        unsigned int allowCancel : 1; 
        unsigned int allowSMS : 1; 
        unsigned int shouldTerminateInBackground : 1; 
    }  _wizardFlags;
}

@property (nonatomic) bool allowCancel;
@property (nonatomic) bool allowSMS;
@property (nonatomic, retain) _UIBackdropView *backdropView;
@property (nonatomic) bool canShowDisabledScreen;
@property (nonatomic) bool canShowSplashScreen;
@property (nonatomic) bool canStartNested;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CNFRegWizardControllerDelegate> *firstRunDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideLearnMoreButton;
@property (nonatomic, retain) CNFRegController *regController;
@property (nonatomic) bool shouldListenForSuspension;
@property (nonatomic) bool shouldTerminateInBackground;
@property (nonatomic) bool showSplashOnSignin;
@property (readonly) Class superclass;

+ (void)setGlobalAppearanceStyle:(long long)arg1;
+ (void)setSupportsAutoRotation:(bool)arg1;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground;
- (void)_applicationDidFinishLaunching;
- (void)_checkRestrictions;
- (void)_doCancel;
- (int)_firstRunState:(id)arg1;
- (void)_restrictionsChanged;
- (void)_startListeningForResignResume;
- (void)_stopListeningForResignResume;
- (void)_updateNavigationBarHiddenForCurrentState;
- (void)_updateNavigationBarHiddenForPop;
- (void)_updateNavigationBarHiddenForPush;
- (void)_updateNavigationBarTitle;
- (bool)allowCancel;
- (bool)allowSMS;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (id)backdropView;
- (bool)canShowDisabledScreen;
- (bool)canShowSplashScreen;
- (bool)canStartNested;
- (id)controllerClassesToShow:(bool)arg1;
- (id)controllersToShow;
- (id)controllersToShow:(bool)arg1;
- (void)dealloc;
- (void)dismissFinished:(bool)arg1;
- (void)dismissWithState:(unsigned long long)arg1;
- (void)firstRunController:(id)arg1 finishedWithState:(unsigned long long)arg2;
- (id)firstRunDelegate;
- (bool)hideLearnMoreButton;
- (id)init;
- (id)initWithRegController:(id)arg1;
- (id)initWithServiceTypes:(long long)arg1;
- (id)popViewControllerAnimated:(bool)arg1;
- (id)popViewControllerWithTransition:(int)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)pushViewController:(id)arg1 transition:(int)arg2;
- (id)regController;
- (void)setAllowCancel:(bool)arg1;
- (void)setAllowSMS:(bool)arg1;
- (void)setBackdropView:(id)arg1;
- (void)setCanShowDisabledScreen:(bool)arg1;
- (void)setCanShowSplashScreen:(bool)arg1;
- (void)setCanStartNested:(bool)arg1;
- (void)setFirstRunDelegate:(id)arg1;
- (void)setHideLearnMoreButton:(bool)arg1;
- (void)setRegController:(id)arg1;
- (void)setShouldListenForSuspension:(bool)arg1;
- (void)setShouldTerminateInBackground:(bool)arg1;
- (void)setShowSplashOnSignin:(bool)arg1;
- (void)setSkipReloadOnNextViewWillAppear:(bool)arg1;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (void)setupController;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldListenForSuspension;
- (bool)shouldShowFirstRunController;
- (bool)shouldTerminateInBackground;
- (bool)showSplashOnSignin;
- (bool)skipReloadOnNextViewWillAppear;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

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