<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NCNotificationLongLookView.h</title>
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

/PrivateFrameworks/UserNotificationsUIKit.framework/NCNotificationLongLookView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit (1)
 */

@interface NCNotificationLongLookView : PLExpandedPlatterView <NCCustomContentContainingLookView, NCNotificationContentViewDelegate, NCNotificationStaticContentAccepting, UIGestureRecognizerDelegate> {
    unsigned long long  _customContentLocation;
    bool  _hidesNotificationContent;
    UITapGestureRecognizer * _lookViewTapGestureRecognizer;
    NCNotificationContentView * _notificationContentView;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (getter=isActionsHidden, nonatomic) bool actionsHidden;
@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (getter=isBackgroundBlurred, nonatomic) bool backgroundBlurred;
@property (nonatomic) bool clipsVisibleContentToBounds;
@property (nonatomic) double contentBottomInset;
@property (nonatomic) unsigned long long customContentLocation;
@property (nonatomic) struct CGSize { double x1; double x2; } customContentSize;
@property (nonatomic, readonly) UIView *customContentView;
@property (nonatomic, copy) NSDate *date;
@property (getter=isDateAllDay, nonatomic) bool dateAllDay;
@property (nonatomic) long long dateFormatStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationLongLookViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIControl *dismissControl;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } dismissControlInsets;
@property (nonatomic) long long dismissControlPosition;
@property (nonatomic) bool hasShadow;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesNotificationContent;
@property (nonatomic, readonly) NSArray *iconButtons;
@property (nonatomic, copy) NSArray *icons;
@property (nonatomic, retain) NSArray *interfaceActions;
@property (nonatomic, readonly) UITapGestureRecognizer *lookViewTapGestureRecognizer;
@property (nonatomic) unsigned long long messageNumberOfLines;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, copy) NSString *primarySubtitleText;
@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic, copy) NSString *summaryText;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImage *thumbnail;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) UIButton *utilityButton;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_actionsViewFrame;
- (void)_configureCustomContentView;
- (void)_configureLookViewTapGestureRecognizerIfNecessary;
- (void)_configureNotificationContentViewIfNecessary;
- (struct CGSize { double x1; double x2; })_contentSizeThatFitsContentWithSizeExcludingActions:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })_contentViewSize;
- (void)_layoutCustomContentView;
- (void)_layoutCustomContentViewInRelationToContentView;
- (void)_layoutMainContentView;
- (void)_layoutNotificationContentView;
- (bool)_lookViewTapGestureRecognizerShouldReceiveTouch:(id)arg1;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (unsigned long long)customContentLocation;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)hidesNotificationContent;
- (void)layoutSubviews;
- (long long)lookStyle;
- (id)lookViewTapGestureRecognizer;
- (void)notificationContentView:(id)arg1 willInteractWithURL:(id)arg2;
- (id)primarySubtitleText;
- (id)primaryText;
- (id)secondaryText;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setCustomContentLocation:(unsigned long long)arg1;
- (void)setHidesNotificationContent:(bool)arg1;
- (void)setPrimarySubtitleText:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

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
