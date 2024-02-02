<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_MSMessageAppContext.h</title>
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

/Frameworks/Messages.framework/_MSMessageAppContext.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Messages.framework/Messages (1)
 */

@interface _MSMessageAppContext : NSObject <_MSMessageComposeExtensionImplProtocol> {
    MSConversation * _activeConversation;
    <_MSMessageComposeExtensionImplProtocol> * _containingContext;
    <_MSMessageComposeExtensionImplProtocol> * _context;
    NSMapTable * _conversationsByIdentifier;
    <_MSMessageComposeHostImplProtocol> * _hostContext;
    <_MSMessageComposeExtensionImplProtocol> * _keepAliveContext;
}

@property (nonatomic, readonly) MSConversation *activeConversation;
@property (nonatomic, retain) <_MSMessageComposeExtensionImplProtocol> *containingContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <_MSMessageComposeHostImplProtocol> *hostContext;
@property (nonatomic) unsigned long long presentationContext;
@property (nonatomic) unsigned long long presentationStyle;
@property (nonatomic, readonly) UIViewController *stickerViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIViewController *viewController;

+ (id)activeExtensionContext;

- (void).cxx_destruct;
- (void)_becomeActiveWithConversationState:(id)arg1 presentationState:(id)arg2;
- (void)_canSendMessage:(id)arg1 conversationState:(id)arg2 associatedText:(id)arg3 completion:(id /* block */)arg4;
- (void)_conversationDidChangeWithConversationState:(id)arg1;
- (void)_didCancelSendingMessage:(id)arg1 conversationState:(id)arg2;
- (void)_didReceiveMessage:(id)arg1 conversationState:(id)arg2;
- (void)_didRemoveAssetArchiveWithIdentifier:(id)arg1;
- (void)_didStartSendingMessage:(id)arg1 conversationState:(id)arg2;
- (void)_handleTextInputPayload:(id)arg1 withPayloadID:(id)arg2 completion:(id /* block */)arg3;
- (void)_hostDidBeginDeferredTeardown;
- (void)_keepContextAlive;
- (void)_prepareForPresentationWithCompletionHandler:(id /* block */)arg1;
- (void)_presentationDidChangeToPresentationState:(id)arg1;
- (void)_presentationWillChangeToPresentationState:(id)arg1;
- (void)_releaseKeepAliveContext;
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)_requestContentSizeThatFits:(id)arg1 presentationStyle:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_requestSnapshotWithCompletion:(id /* block */)arg1;
- (void)_resignActive;
- (void)_volumeButtonPressed:(bool)arg1;
- (id)activeConversation;
- (void)beginDisablingUserInteraction;
- (id)containingContext;
- (void)contentDidLoad;
- (void)dismiss;
- (void)dismissAndPresentPhotosApp;
- (void)endDisablingUserInteraction;
- (id)hostContext;
- (id)initWithAppContext:(id)arg1;
- (unsigned long long)presentationContext;
- (unsigned long long)presentationStyle;
- (void)removeAssetArchiveWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestPresentationStyle:(unsigned long long)arg1;
- (void)requestPresentationStyleExpanded:(bool)arg1;
- (void)requestResize;
- (void)setContainingContext:(id)arg1;
- (void)setHostContext:(id)arg1;
- (void)setPresentationContext:(unsigned long long)arg1;
- (void)setPresentationStyle:(unsigned long long)arg1;
- (void)stageAppItem:(id)arg1 skipShelf:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)stageAssetArchive:(id)arg1 skipShelf:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)stageMediaItem:(id)arg1 skipShelf:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)stageRichLink:(id)arg1 skipShelf:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)startDragMediaItem:(id)arg1 frameInRemoteView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fence:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)stickerViewController;
- (id)updatedConversationForConversationState:(id)arg1;
- (id)viewController;

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