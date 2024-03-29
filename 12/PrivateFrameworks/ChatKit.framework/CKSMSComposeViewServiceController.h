<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKSMSComposeViewServiceController.h</title>
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

/PrivateFrameworks/ChatKit.framework/CKSMSComposeViewServiceController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit (1.0)
 */

@interface CKSMSComposeViewServiceController : UINavigationController <CKComposeChatControllerDelegate, CKSMSComposeViewServiceProtocol> {
    bool  _canEditRecipients;
    NSArray * _cloudPhotoIDs;
    <CKSMSComposeViewServiceControllerDelegate> * _composeDelegate;
    NSArray * _contentText;
    NSArray * _contentURLs;
    bool  _disableCameraAttachments;
    bool  _forceMMS;
    id /* block */  _gameCenterPickerBlock;
    CKModalTranscriptController * _modalTranscriptController;
    NSArray * _photoIDs;
    bool  _supportsAttachments;
    bool  _supportsMessageInspection;
    NSArray * _utiTypes;
}

@property (nonatomic) bool canEditRecipients;
@property (nonatomic) <CKSMSComposeViewServiceControllerDelegate> *composeDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ gameCenterPickerBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKModalTranscriptController *modalTranscriptController;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (bool)_isSecureForRemoteViewService;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)_forceMMSIfNecessary;
- (bool)_hostSandboxAllowsFileReadAtFileURL:(id)arg1;
- (void)_insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2 preview:(id)arg3 isFullyRealized:(bool)arg4 appendedVideoURL:(id)arg5 appendedBundleURL:(id)arg6;
- (void)_insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 preview:(id)arg4 isFullyRealized:(bool)arg5 appendedVideoURL:(id)arg6;
- (void)_willAppearInRemoteViewController;
- (void)chatController:(id)arg1 didReportSpamForConversation:(id)arg2;
- (void)chatController:(id)arg1 didSendCompositionInConversation:(id)arg2;
- (void)chatController:(id)arg1 forwardComposition:(id)arg2;
- (void)chatController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3;
- (void)composeChatController:(id)arg1 didSelectNewConversation:(id)arg2;
- (void)composeChatController:(id)arg1 shouldSendComposition:(id)arg2 inConversation:(id)arg3 completion:(id /* block */)arg4;
- (bool)composeChatControllerCanEditRecipients;
- (void)composeChatControllerDidCancelComposition:(id)arg1;
- (bool)composeChatControllerShouldShowBackButtonViewDuringSendAnimation:(id)arg1;
- (id)composeDelegate;
- (void)dealloc;
- (void)disableCameraAttachments;
- (void)donateInteractionWithConversation:(id)arg1;
- (void)forceCancelComposition;
- (void)forceMMS;
- (id /* block */)gameCenterPickerBlock;
- (id)init;
- (void)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2;
- (void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)insertFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3;
- (void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
- (void)insertRemoteItemForSending:(id)arg1;
- (id)modalTranscriptController;
- (void)prewarmCameraIfNecessaryForChatController:(id)arg1;
- (void)setCanEditRecipients:(bool)arg1;
- (void)setCloudPhotoIDs:(id)arg1;
- (void)setComposeDelegate:(id)arg1;
- (void)setContentText:(id)arg1;
- (void)setContentURLs:(id)arg1;
- (void)setGameCenterModeWithPickerBlock:(id /* block */)arg1;
- (void)setGameCenterPickedHandles:(id)arg1 playerNames:(id)arg2;
- (void)setGameCenterPickerBlock:(id /* block */)arg1;
- (void)setModalTranscriptController:(id)arg1;
- (void)setPendingAddresses:(id)arg1;
- (void)setPhotoIDs:(id)arg1;
- (void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3;
- (void)setTextEntryContentsVisible:(bool)arg1;
- (void)setUICustomizationData:(id)arg1;
- (void)setUTIs:(id)arg1;
- (bool)supportsAttachments;
- (bool)supportsMessageInspection;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
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
