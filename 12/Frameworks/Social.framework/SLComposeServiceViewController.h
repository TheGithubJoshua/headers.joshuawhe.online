<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SLComposeServiceViewController.h</title>
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

/Frameworks/Social.framework/SLComposeServiceViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Social.framework/Social (87)
 */

@interface SLComposeServiceViewController : UIViewController <UINavigationControllerDelegate, UITextViewDelegate> {
    UIAlertController * _alertController;
    NSMutableArray * _attachments;
    UIViewController * _autoCompletionViewController;
    bool  _autoCompletionViewControllerAffectsSheetSize;
    NSNumber * _charactersRemaining;
    NSMutableArray * _constraints;
    SLSheetContentView * _contentView;
    bool  _didCallPresentSheet;
    bool  _didFirstSheetActionLoad;
    bool  _hasPresentedSheet;
    NSObject<SLSheetViewHostProtocol> * _hostProxy;
    bool  _inPostButtonTapped;
    bool  _isPresentingActionViewController;
    bool  _isShowingLocationDeniedAlert;
    UIView * _maskView;
    unsigned long long  _maxImageAttachmentSize;
    SLSheetNavigationController * _navigationController;
    NSString * _placeholder;
    bool  _preventSheetPositionChanges;
    SLSheetPreviewImageSource * _previewImageSource;
    UIImage * _serviceIconImage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sheetFrameStartingRotation;
    SLSheetRootViewController * _sheetRootViewController;
    bool  _suppressKeyboard;
    bool  _triggerPresentationAnimationOnKeyboard;
    unsigned long long  _unfulfilledItemProviderRepresentations;
    UIViewController * _viewControllerForTrackingSheetSize;
    SLSheetMasklayer * _vignetteLayer;
    bool  _waitingForAnimateAlongsideTransitionBlock;
    bool  _wasPresented;
}

@property (nonatomic, retain) UIViewController *autoCompletionViewController;
@property (nonatomic, retain) NSNumber *charactersRemaining;
@property (retain) NSMutableArray *constraints;
@property (nonatomic, readonly) NSString *contentText;
@property (nonatomic, retain) SLSheetContentView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maxImageAttachmentSize;
@property (nonatomic, retain) SLSheetNavigationController *navigationController;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic) bool preventSheetPositionChanges;
@property (nonatomic, retain) SLSheetRootViewController *sheetRootViewController;
@property (readonly) UIView *sheetView;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressKeyboard;
@property (nonatomic, readonly) UITextView *textView;
@property (readonly) bool wasPresented;

+ (id)_imageAttachmentLoadDownsamplePreviewQueue;
+ (bool)_preventsAppearanceProxyCustomization;
+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (id)URLAttachments;
- (void)_addAttachment:(id)arg1;
- (void)_adjustContentViewIntrinsicHeightForPreviewView;
- (void)_animateCardSendFinished;
- (void)_animateSheetCancelFinished;
- (void)_animateSheetPresentationFinished;
- (void)_animateVignetteMaskFromSheetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toSheetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 duration:(double)arg3;
- (bool)_areAttachmentsReady;
- (void)_convertExtensionItemProvidersToAttachments:(id)arg1;
- (void)_downsampleImageAttachment:(id)arg1;
- (void)_imageAttachmentDataDidLoad:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSheetSize;
- (void)_loadImageAttachmentData:(id)arg1;
- (void)_loadPreviewView;
- (void)_performCommonInitialization:(id)arg1;
- (void)_positionSheetViewAnimatedForViewController:(id)arg1;
- (void)_positionSheetViewForViewController:(id)arg1;
- (void)_positionVignetteForSheetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_presentSheet;
- (void)_presentedViewControllerContentSizeDidChange;
- (long long)_previewDisplayFormat;
- (void)_setViewControllerForTrackingSheetSize:(id)arg1;
- (double)_sheetMinBottomMarginForVerticalSizeClass;
- (void)_updateContentViewWithCharactersRemaining;
- (void)_willAppearInRemoteViewController;
- (void)addAttachment:(id)arg1;
- (void)animateCardSendOrientation:(long long)arg1;
- (void)animateSheetCancelWithDuration:(double)arg1;
- (void)animateSheetPresentationWithDuration:(double)arg1;
- (id)attachments;
- (id)autoCompletionViewController;
- (void)cancel;
- (void)cancelButtonTapped:(id)arg1;
- (id)charactersRemaining;
- (id)configurationItems;
- (id)constraints;
- (id)contentText;
- (id)contentView;
- (void)createPreviewIfNeeded;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)didSelectCancel;
- (void)didSelectPost;
- (void)didSendWithSuccess:(bool)arg1 error:(id)arg2;
- (void)hideKeyboardAnimated:(bool)arg1;
- (void)hideKeyboardWithAnimationTime:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithServiceIconImage:(id)arg1;
- (bool)isContentValid;
- (void)keyboardDidChange:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)loadPreviewView;
- (void)loadView;
- (unsigned long long)maxImageAttachmentSize;
- (id)navigationController;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)networkActivityIndicatorNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)placeholder;
- (void)popConfigurationViewController;
- (void)positionSheetView;
- (void)postButtonTapped:(id)arg1;
- (void)presentSettingsAlertWithTitle:(id)arg1 message:(id)arg2 targetURL:(id)arg3;
- (void)presentationAnimationDidFinish;
- (bool)preventSheetPositionChanges;
- (id)previewImageSource;
- (void)pushActionViewController:(id)arg1;
- (void)pushConfigurationViewController:(id)arg1;
- (void)reloadConfigurationItems;
- (void)reloadSheetActions;
- (void)send;
- (void)setAutoCompletionViewController:(id)arg1;
- (void)setCharactersRemaining:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setHostProxy:(id)arg1;
- (void)setMaxImageAttachmentSize:(unsigned long long)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setPostButtonTitle:(id)arg1;
- (void)setPreventSheetPositionChanges:(bool)arg1;
- (void)setServiceIconImage:(id)arg1;
- (void)setSheetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSheetRootViewController:(id)arg1;
- (void)setSuppressKeyboard:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)sheetActions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sheetFrameForViewController:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sheetFrameForViewController:(id)arg1 topSpaceProportion:(double)arg2 topSpaceOffset:(double)arg3;
- (id)sheetRootViewController;
- (id)sheetView;
- (bool)shouldAutorotate;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)shouldShowNetworkActivityIndicator:(bool)arg1;
- (void)showKeyboardAnimated:(bool)arg1;
- (void)showKeyboardWithAnimationTime:(double)arg1;
- (void)showLocationDeniedAlertWithTitle:(id)arg1 settingsURL:(id)arg2;
- (bool)suppressKeyboard;
- (id)text;
- (id)textView;
- (void)textViewDidChange:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateKeyboardSize;
- (void)updateSheetForVerticalSizeClass;
- (void)validateContent;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wasPresented;

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