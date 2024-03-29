<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKUIBehaviorNano.h</title>
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

/PrivateFrameworks/ChatKit.framework/CKUIBehaviorNano.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit (1.0)
 */

@interface CKUIBehaviorNano : CKUIBehavior

- (struct CGSize { double x1; double x2; })aggregateAcknowledgmentTranscriptBalloonSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })attachmentBalloonAlignmentRectInsets;
- (struct CGSize { double x1; double x2; })attachmentBalloonSize;
- (id)attachmentTextFont;
- (double)audioBalloonWaveformTimeSpace;
- (bool)automaticallyShowsKeyboard;
- (double)balloonBalloonTranscriptSpace:(unsigned char)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })balloonMaskAlignmentRectInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })balloonMaskCapInsets;
- (struct CGSize { double x1; double x2; })balloonMaskSize;
- (double)balloonMaskTailHeight;
- (double)balloonMaskTailWidth;
- (double)balloonMaxWidthForTranscriptWidth:(double)arg1 marginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 shouldShowPluginButtons:(bool)arg3 shouldShowCharacterCount:(bool)arg4;
- (id)balloonName;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })bigEmojiBalloonMaskAlignmentRectInsets;
- (double)bottomConversationListSpace;
- (double)bottomTranscriptSpace;
- (bool)calculatesWidthForAttachmentBalloons;
- (double)checkmarkHorizontalPadding;
- (id)contactAttachmentNameFont;
- (id)contactAttachmentOrgFont;
- (double)contactBalloonHeight;
- (double)contactBalloonInnerItemSpacing;
- (double)contactBalloonMinWidth;
- (double)contactBalloonNameOrgSpacing;
- (double)contactBalloonOrgBottomSpacing;
- (double)contactBalloonTopNameSpacing;
- (struct CGSize { double x1; double x2; })contactImageSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contactPhotoTranscriptInsets;
- (double)conversationListCellBackgroundPadding;
- (double)conversationListCellLeftMargin;
- (unsigned long long)conversationListCellMaxSummaryLength;
- (double)conversationListCellRightMargin;
- (unsigned long long)conversationListCellSummaryNumberOfLines;
- (id)conversationListDateFont;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })conversationListFilterSegmentInset;
- (id)conversationListGroupCountFont;
- (id)conversationListSenderFont;
- (id)conversationListSummaryFont;
- (bool)darkUIEnabled;
- (id)datestampTranscriptBoldTextAttributes;
- (id)datestampTranscriptTextAttributes;
- (unsigned long long)defaultConversationLoadMoreCount;
- (unsigned long long)defaultConversationViewingMessageCount;
- (id)defaultWaveformImage;
- (struct CGSize { double x1; double x2; })documentIconSize;
- (double)emojiPreviewMaxWidth;
- (double)extensionBalloonMaximumHeight;
- (id)grayChevronImage;
- (id)gray_chevronImage;
- (bool)handlesBalloonViewTitleTapsSeparately;
- (bool)hidesUnreadIndicatorWhenEditing;
- (bool)hyphenatesTextContent;
- (id)impactBalloonName;
- (id)impactSkinnyBalloonName;
- (bool)isSizeConstrained;
- (double)largeTranscriptSpace;
- (struct CGSize { double x1; double x2; })mapThumbnailFillSizeForWidth:(double)arg1;
- (double)maxTranscriptPortraitHeight;
- (double)mediumTranscriptSpace;
- (id)messageAcknowledgmentPickerBarAcknowledgmentOrder;
- (id)messageAcknowledgmentPickerBarBubbleImage;
- (id)messageAcknowledgmentPickerBarBubbleName;
- (id)messageAcknowledgmentPickerBarBubbleTailName;
- (struct CGSize { double x1; double x2; })messageAcknowledgmentPickerBarItemViewSize;
- (struct CGSize { double x1; double x2; })messageAcknowledgmentTranscriptAcknowledgmentImageSize;
- (struct CGPoint { double x1; double x2; })messageAcknowledgmentTranscriptBalloonRelativePosition;
- (struct CGSize { double x1; double x2; })messageAcknowledgmentTranscriptBalloonSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })messageAcknowledgmentTranscriptGlyphInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })minTranscriptMarginInsets;
- (bool)opensLocationsInMapsApp;
- (id)orbComposeImage;
- (id)orbDetailsImage;
- (id)orbReplyImage;
- (id)orbShareLocationImage;
- (id)playButtonArrowImage;
- (long long)playButtonBackdropStyle;
- (id)playButtonImage;
- (bool)playButtonPunchesOutArrow;
- (bool)playsInlineVideo;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })pluginBalloonInsetsForMessageFromMe:(bool)arg1;
- (double)previewMaxWidth;
- (bool)promptsForReadReceiptsSetting;
- (bool)recordsRecentContact;
- (bool)resetsIdleTimer;
- (bool)scrollToBottomStopsAtTopOfLastBubble;
- (double)senderSummaryConversationListSpace;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })senderTranscriptInsets;
- (id)senderTranscriptTextAttributes;
- (bool)shouldAdjustWidthForSendFailure;
- (bool)shouldFillAttachmentBalloon;
- (bool)shouldGrabBackgroundAssertion;
- (bool)shouldHideStatusBarForFullScreenEffects;
- (bool)shouldInsetForStatusBar;
- (bool)shouldShowContactPhotosInTranscript;
- (bool)shouldShowSearchBarInConversationList;
- (bool)shouldUseDynamicGradient;
- (bool)shouldUseRotisserieScrolling;
- (bool)shouldUseTranslucentBars;
- (bool)showsCompositionPanel;
- (bool)showsConversationListCellChevronImage;
- (bool)showsFileSizeInSubtitle;
- (bool)showsNoMessagesDialog;
- (bool)showsPlaceCardForBalloonViewTitleTap;
- (bool)showsProgressInNavigationBar;
- (bool)showsReplyButtonsInTranscript;
- (bool)showsSegmentedControlForFilteredConversationList;
- (bool)showsSendAnimation;
- (bool)showsVCalViewer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })skinnyBalloonMaskCapInsets;
- (struct CGSize { double x1; double x2; })skinnyBalloonMaskSize;
- (id)skinnyBalloonName;
- (id)skinnyTaillessBalloonName;
- (double)smallTranscriptSpace;
- (id)stampTranscriptBoldTextAttributes;
- (id)stampTranscriptTextAttributes;
- (id)strokedBalloonName;
- (id)strokedTaillessBalloonName;
- (double)summaryDateConversationListSpace;
- (bool)supportsContiguousAttachments;
- (id)systemGrayChevronImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })taillessAttachmentBalloonAlignmentRectInsets;
- (id)taillessBallonName;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })taillessBalloonMaskAlignmentRectInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })taillessBalloonMaskCapInsets;
- (struct CGSize { double x1; double x2; })taillessBalloonMaskSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })taillessSkinnyBalloonMaskCapInsets;
- (struct CGSize { double x1; double x2; })taillessSkinnyBalloonMaskSize;
- (id)theme;
- (struct CGSize { double x1; double x2; })thumbnailFillSizeForWidth:(double)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)timestampsPushBalloons;
- (double)toFieldPreferredHeight;
- (double)topConversationListSpace;
- (double)topTranscriptSpace;
- (id)transcriptBoldTextFont;
- (double)transcriptButtonCharge;
- (id)transcriptDrawerFont;
- (double)transcriptDrawerGestureAcceleration;
- (double)transcriptDrawerMaxContentOffsetXForMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (double)transcriptDrawerSpace;
- (id)transcriptTextFont;
- (double)transcriptWaveformWidthForDuration:(double)arg1;
- (bool)useSingleLineForContactVCardNames;
- (bool)usesDataDetectorsUI;
- (bool)usesEntryView;
- (bool)usesNavigationBarControls;
- (double)waveformHeight;
- (id)whiteChevronImage;

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
