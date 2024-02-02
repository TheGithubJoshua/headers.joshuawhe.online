<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MSCLComposePostViewController.h</title>
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

/PrivateFrameworks/MediaSocial.framework/MSCLComposePostViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial (1)
 */

@interface MSCLComposePostViewController : SKUIViewController <MSCLAttachmentAlertDelegate, MSCLAttachmentPropertiesDelegate, MSCLAudioPickerDelegate, MSCLComposeImagePickerDelegate, MSCLComposePostViewDelegate, MSCLSoundBiteViewControllerDelegate, MSCLTagListDelegate> {
    MSCLAccountStore * _accountStore;
    MSCLAttachmentDownloadOperation * _attachmentDownloadOperation;
    bool  _attachmentWasDownloadedAndNeedsRemoval;
    NSMutableArray * _attachments;
    SKUIMediaSocialAuthor * _attributionAuthor;
    MSCLComposeLabelValueButton * _attributionButton;
    MSCLAudioPickerViewController * _audioPickerController;
    MSCLAuthorView * _authorSelectionView;
    MSCLComposePostView * _composeView;
    MSCLConfiguration * _configuration;
    <MSCLComposePostViewControllerDelegate> * _delegate;
    bool  _didAppear;
    MSCLAttachment * _editingAttachment;
    MSCLComposeLabelValueButton * _externalServicesButton;
    MSCLComposeImagePickerController * _imagePickerController;
    SKUIResourceLoader * _resourceLoader;
    SKUIMediaSocialAuthor * _selectedAuthor;
    NSMutableArray * _soundBiteViewControllers;
    MSCLTagListViewController * _tagCompletionViewController;
}

@property (nonatomic) MSCLAttachmentDownloadOperation *attachmentDownloadOperation;
@property (nonatomic) bool attachmentWasDownloadedAndNeedsRemoval;
@property (nonatomic, readonly) MSCLConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSCLComposePostViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)MSCLComposeImagePicker:(id)arg1 didFinishWithAttachments:(id)arg2;
- (void)MSCLComposeImagePickerDidCancel:(id)arg1;
- (void)_addAttachments:(id)arg1;
- (long long)_allowedCharacterCount;
- (void)_attachmentButtonAction:(id)arg1;
- (id)_attachmentViews;
- (void)_attributionButtonAction:(id)arg1;
- (bool)_canShowEditorForAttachment:(id)arg1;
- (id)_defaultAttributionAuthorForDestinationAuthor:(id)arg1;
- (void)_dismissTagCompletionViewController;
- (void)_editPropertiesForAttachment:(id)arg1 animated:(bool)arg2;
- (id)_enabledExternalServices;
- (void)_externalServicesButtonAction:(id)arg1;
- (id)_footerViews;
- (id)_getSoundBite;
- (bool)_hasSoundBite;
- (id)_headerViews;
- (void)_ingestAttachment:(id)arg1 animated:(bool)arg2;
- (void)_pickAuthorAction:(id)arg1;
- (void)_reloadAttachmentUI;
- (void)_reloadExternalServicesButton;
- (void)_reloadTagCompletionViewController;
- (id)_resourceLoader;
- (id)_scrollableHeaderViews;
- (void)_setAttributionAuthor:(id)arg1;
- (void)_setSelectedAuthor:(id)arg1;
- (void)_socialAccountStoreDidChangeNotification:(id)arg1;
- (void)_updatePostButton;
- (void)addAttachments:(id)arg1 animated:(bool)arg2;
- (void)attachmentAlertController:(id)arg1 didFinishWithResult:(long long)arg2;
- (id)attachmentDownloadOperation;
- (void)attachmentPropertiesController:(id)arg1 didEditAttachment:(id)arg2;
- (bool)attachmentWasDownloadedAndNeedsRemoval;
- (void)audioPicker:(id)arg1 didFinishWithAttachment:(id)arg2;
- (void)audioPickerDidCancel:(id)arg1;
- (void)composePostView:(id)arg1 didRemoveAttachmentView:(id)arg2 atIndex:(long long)arg3;
- (void)composePostView:(id)arg1 didSelectAttachment:(id)arg2 atIndex:(long long)arg3;
- (id)composePostView:(id)arg1 tagForString:(id)arg2;
- (void)composePostViewTextDidChange:(id)arg1;
- (void)composePostViewTextSelectionDidChange:(id)arg1;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (void)getPostDescriptionUsingBlock:(id /* block */)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)loadView;
- (id)parentViewControllerForMSCLComposeImagePicker:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)setAttachmentDownloadOperation:(id)arg1;
- (void)setAttachmentWasDownloadedAndNeedsRemoval:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tagList:(id)arg1 didSelectTag:(id)arg2;
- (void)viewControllerDidCompleteRecording:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

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