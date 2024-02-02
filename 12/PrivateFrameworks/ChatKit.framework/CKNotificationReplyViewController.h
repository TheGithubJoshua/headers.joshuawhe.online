<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKNotificationReplyViewController.h</title>
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

/PrivateFrameworks/ChatKit.framework/CKNotificationReplyViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit (1.0)
 */

@interface CKNotificationReplyViewController : UIViewController <CKAudioControllerDelegate, CKBalloonViewDelegate, CKInlineReplyRaiseControllerDelegate, CKMessageEntryViewDelegate> {
    CKAudioController * _audioController;
    CKAudioMediaObject * _audioMediaObject;
    UIView * _audioMessageView;
    CKAudioBalloonView * _balloonView;
    CKConversation * _conversation;
    NSObject<CKNotificationReplyViewControllerDelegate> * _delegate;
    bool  _didSendMessage;
    CKMessageEntryView * _entryView;
    bool  _isAudioMessage;
    bool  _isAudioPlaybackOnly;
    bool  _isRaise;
    CKInlineReplyRaiseController * _raiseController;
    bool  _shouldShowKeyboard;
    CKScheduledUpdater * _typingUpdater;
}

@property (nonatomic, retain) CKAudioController *audioController;
@property (nonatomic, retain) CKAudioMediaObject *audioMediaObject;
@property (nonatomic, retain) UIView *audioMessageView;
@property (nonatomic, retain) CKAudioBalloonView *balloonView;
@property (nonatomic, retain) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CKNotificationReplyViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didSendMessage;
@property (nonatomic, retain) CKMessageEntryView *entryView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAudioMessage;
@property (nonatomic) bool isAudioPlaybackOnly;
@property (nonatomic) bool isRaise;
@property (nonatomic, retain) CKInlineReplyRaiseController *raiseController;
@property (nonatomic) bool shouldShowKeyboard;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKScheduledUpdater *typingUpdater;

+ (bool)_isSecureForRemoteViewService;

- (void).cxx_destruct;
- (double)audioBubbleHeight;
- (id)audioController;
- (void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
- (void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (void)audioControllerDidPause:(id)arg1;
- (void)audioControllerDidStop:(id)arg1;
- (id)audioMediaObject;
- (id)audioMessageView;
- (id)balloonView;
- (void)balloonViewDoubleTapped:(id)arg1;
- (void)balloonViewLongTouched:(id)arg1;
- (void)balloonViewTapped:(id)arg1;
- (bool)canBecomeFirstResponder;
- (id)conversation;
- (void)dealloc;
- (id)delegate;
- (bool)didSendMessage;
- (id)entryView;
- (id)initWithConversation:(id)arg1;
- (void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg1;
- (void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg1;
- (bool)isAudioMessage;
- (bool)isAudioPlaybackOnly;
- (bool)isRaise;
- (void)messageEntryView:(id)arg1 didTapMediaObject:(id)arg2;
- (void)messageEntryView:(id)arg1 sendButtonLongPressEnded:(struct CGPoint { double x1; double x2; })arg2;
- (void)messageEntryView:(id)arg1 sendButtonLongPressMoved:(struct CGPoint { double x1; double x2; })arg2;
- (bool)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
- (void)messageEntryViewDidBeginEditing:(id)arg1;
- (void)messageEntryViewDidChange:(id)arg1;
- (void)messageEntryViewDidEndEditing:(id)arg1;
- (double)messageEntryViewMaxHeight:(id)arg1;
- (struct CGSize { double x1; double x2; })messageEntryViewMaxShelfPluginViewSize:(id)arg1;
- (void)messageEntryViewRaiseGestureAutoSend:(id)arg1;
- (void)messageEntryViewRecordingDidChange:(id)arg1;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
- (void)messageEntryViewSendButtonLongPressBegan:(id)arg1;
- (bool)messageEntryViewShouldBeginEditing:(id)arg1;
- (void)playSendSoundForMessage:(id)arg1;
- (double)preferredContentHeight;
- (void)proximityStateDidChange:(bool)arg1;
- (id)raiseController;
- (void)raiseControllerDidStartRecording:(id)arg1;
- (void)raiseControllerDidStopRecording:(id)arg1;
- (void)sendMessage;
- (void)setAudioController:(id)arg1;
- (void)setAudioMediaObject:(id)arg1;
- (void)setAudioMessageView:(id)arg1;
- (void)setBalloonView:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidSendMessage:(bool)arg1;
- (void)setEntryView:(id)arg1;
- (void)setIsAudioMessage:(bool)arg1;
- (void)setIsAudioPlaybackOnly:(bool)arg1;
- (void)setIsRaise:(bool)arg1;
- (void)setRaiseController:(id)arg1;
- (void)setShouldShowKeyboard:(bool)arg1;
- (void)setTypingUpdater:(id)arg1;
- (void)setupConversation;
- (void)setupView;
- (bool)shouldShowKeyboard;
- (bool)showsKeyboard;
- (id)textInputContextIdentifier;
- (id)typingUpdater;
- (void)updateTyping;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (id)viewForTyping;
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