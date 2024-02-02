<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SKUIRedeemCameraViewController.h</title>
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

/PrivateFrameworks/StoreKitUI.framework/SKUIRedeemCameraViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI (1)
 */

@interface SKUIRedeemCameraViewController : SKUIRedeemStepViewController <CRCodeRedeemerControllerDelegate, SKUIRedeemCameraViewControllerDelegate, SKUIRedeemCameraViewDelegate> {
    UIBarButtonItem * _activityBarButtonItem;
    bool  _alreadyPushed;
    CRCodeRedeemerController * _camera;
    <SKUIRedeemViewCameraOverrideDelegate> * _cameraOverrideDelegate;
    long long  _category;
    <SKUIRedeemCameraViewControllerDelegate> * _delegate;
    UIBarButtonItem * _flipButton;
    bool  _fullscreen;
    NSString * _initialCode;
    UIBarButtonItem * _redeemButton;
    SKUIRedeem * _successfulRedeem;
}

@property (nonatomic) <SKUIRedeemViewCameraOverrideDelegate> *cameraOverrideDelegate;
@property (nonatomic, readonly) long long category;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIRedeemCameraViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *initialCode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)SKUIRedeemCameraView:(id)arg1 textFieldDidChange:(id)arg2;
- (void)SKUIRedeemCameraView:(id)arg1 textFieldDidRedeem:(id)arg2;
- (void)SKUIRedeemPreflightImagesDidLoad:(id)arg1;
- (void)_cameraRedeemDidFinish:(id)arg1 error:(id)arg2;
- (void)_cancelAction:(id)arg1;
- (bool)_enabled;
- (void)_flipAction:(id)arg1;
- (void)_performRedeemOperationWithCode:(id)arg1 cameraRecognized:(bool)arg2 allowOverride:(bool)arg3 completion:(id /* block */)arg4;
- (void)_redeemAction:(id)arg1;
- (void)_redeemDidFinish:(id)arg1 error:(id)arg2;
- (void)_setEnabled:(bool)arg1;
- (void)_updateRightBarButtonItemsForRedeemInputState:(long long)arg1;
- (id)cameraOverrideDelegate;
- (void)cancelRedeemerViewForSKUIRedeemCameraView:(id)arg1;
- (long long)category;
- (void)codeRedeemerController:(id)arg1 didEndWithInfo:(id)arg2;
- (void)codeRedeemerControllerDidCancel:(id)arg1;
- (void)codeRedeemerControllerDidDisplayMessage:(id)arg1;
- (id)contentScrollView;
- (void)dealloc;
- (id)delegate;
- (bool)disablesAutomaticKeyboardDismissal;
- (id)initWithRedeemCategory:(long long)arg1;
- (id)initWithRedeemCategoryFullscreen:(long long)arg1;
- (id)initialCode;
- (void)loadView;
- (void)performRedeemOperationWithCode:(id)arg1 cameraRecognized:(bool)arg2 completion:(id /* block */)arg3;
- (void)presentFullScreenCameraViewForSKUIRedeemCameraView:(id)arg1;
- (void)redeemCameraViewController:(id)arg1 didFinishWithRedeem:(id)arg2;
- (id)redeemerViewForSKUIRedeemCameraView:(id)arg1;
- (void)setCameraOverrideDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInitialCode:(id)arg1;
- (void)showITunesPassLearnMoreForSKUIRedeemCameraView:(id)arg1;
- (void)startRedeemerViewForSKUIRedeemCameraView:(id)arg1;

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