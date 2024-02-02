<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UICloudSharingController.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UICloudSharingController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UICloudSharingController : UIViewController <UIActionSheetPresentationControllerDelegate, _UISharingPublicController> {
    unsigned long long  _availablePermissions;
    _UIResilientRemoteViewContainerViewController * _childViewController;
    CKContainer * _container;
    <UICloudSharingControllerDelegate> * _delegate;
    <_UICloudSharingControllerDelegate_Internal> * _internalDelegate;
    bool  _isDelayingPresentation;
    UIViewController * _originalPresentingViewController;
    NSDictionary * _participantDetails;
    id /* block */  _preparationHandler;
    bool  _primaryAuxiliarySwitchState;
    NSString * _primaryAuxiliarySwitchTitle;
    _UIShareInvitationRemoteViewController * _remoteViewController;
    bool  _secondaryAuxiliarySwitchState;
    NSString * _secondaryAuxiliarySwitchTitle;
    CKShare * _share;
    bool  _shareNeedsDeletion;
    UIViewController * _strongReferenceToOurself;
    NSObject<OS_dispatch_semaphore> * _viewServiceValidSema;
}

@property (nonatomic) unsigned long long availablePermissions;
@property (getter=_childViewController, setter=_setChildViewController:, nonatomic, retain) _UIResilientRemoteViewContainerViewController *childViewController;
@property (nonatomic, retain) CKContainer *container;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UICloudSharingControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <_UICloudSharingControllerDelegate_Internal> *internalDelegate;
@property (getter=_originalPresentingViewController, setter=_setOriginalPresentingViewController:, nonatomic) UIViewController *originalPresentingViewController;
@property (getter=_participantDetails, setter=_setParticipantDetails:, nonatomic, retain) NSDictionary *participantDetails;
@property (nonatomic, copy) id /* block */ preparationHandler;
@property (getter=_primaryAuxiliarySwitchState, setter=_setPrimaryAuxiliarySwitchState:, nonatomic) bool primaryAuxiliarySwitchState;
@property (getter=_primaryAuxiliarySwitchTitle, setter=_setPrimaryAuxiliarySwitchTitle:, nonatomic, retain) NSString *primaryAuxiliarySwitchTitle;
@property (getter=_remoteViewController, nonatomic, readonly) _UIShareInvitationRemoteViewController *remoteViewController;
@property (getter=_secondaryAuxiliarySwitchState, setter=_setSecondaryAuxiliarySwitchState:, nonatomic) bool secondaryAuxiliarySwitchState;
@property (getter=_secondaryAuxiliarySwitchTitle, setter=_setSecondaryAuxiliarySwitchTitle:, nonatomic, retain) NSString *secondaryAuxiliarySwitchTitle;
@property (nonatomic, retain) CKShare *share;
@property (getter=_strongReferenceToOurself, setter=_setStrongReferenceToOurself:, nonatomic, retain) UIViewController *strongReferenceToOurself;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)__viewControllerWillBePresented:(bool)arg1;
- (void)_callPreparationHandler:(id /* block */)arg1;
- (id)_childViewController;
- (void)_cloudSharingControllerDidModifyPrimarySwitch:(bool)arg1;
- (void)_cloudSharingControllerDidModifySecondarySwitch:(bool)arg1;
- (bool)_commonInit;
- (id)_customPresentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_deleteShareAfterDismissalWithoutSave:(id /* block */)arg1;
- (void)_didDismiss;
- (void)_dismissForActivityRepresentation:(id /* block */)arg1;
- (void)_dismissViewControllerWithError:(id)arg1;
- (id)_originalPresentingViewController;
- (id)_participantDetails;
- (void)_performAuxiliaryActionWithCompletion:(id /* block */)arg1;
- (void)_performHeaderActionWithCompletion:(id /* block */)arg1;
- (bool)_primaryAuxiliarySwitchState;
- (id)_primaryAuxiliarySwitchTitle;
- (id)_remoteViewController;
- (void)_representFullscreenAfterActivityDismissal:(id /* block */)arg1;
- (void)_requestSavedShareWithCompletion:(id /* block */)arg1;
- (bool)_requiresCustomPresentationController;
- (bool)_secondaryAuxiliarySwitchState;
- (id)_secondaryAuxiliarySwitchTitle;
- (void)_sendDidStopSharingDelegate;
- (void)_setChildViewController:(id)arg1;
- (void)_setOriginalPresentingViewController:(id)arg1;
- (void)_setParticipantDetails:(id)arg1;
- (void)_setPrimaryAuxiliarySwitchState:(bool)arg1;
- (void)_setPrimaryAuxiliarySwitchTitle:(id)arg1;
- (void)_setSecondaryAuxiliarySwitchState:(bool)arg1;
- (void)_setSecondaryAuxiliarySwitchTitle:(id)arg1;
- (void)_setStrongReferenceToOurself:(id)arg1;
- (void)_shareDidChange:(id)arg1;
- (void)_shareWasMadePrivate;
- (id)_sharingViewPresentationController;
- (id)_strongReferenceToOurself;
- (id)activityItemSource;
- (unsigned long long)availablePermissions;
- (id)container;
- (void)dealloc;
- (id)delegate;
- (id)initWithPreparationHandler:(id /* block */)arg1;
- (id)initWithShare:(id)arg1 container:(id)arg2;
- (id)initWithShare:(id)arg1 preparationHandler:(id /* block */)arg2;
- (id)internalDelegate;
- (id /* block */)preparationHandler;
- (void)setAvailablePermissions:(unsigned long long)arg1;
- (void)setContainer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInternalDelegate:(id)arg1;
- (void)setPreparationHandler:(id /* block */)arg1;
- (void)setShare:(id)arg1;
- (id)share;

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