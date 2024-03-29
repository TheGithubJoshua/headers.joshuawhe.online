<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ABStyleProvider.h</title>
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

/protocols/ABStyleProvider.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol ABStyleProvider <NSObject, NSSecureCoding>

@required

- (int)abCellStyleForCardTableLinkingUI;
- (int)abCellStyleForCardTableWhenEditing:(bool)arg1;
- (int)abCellStyleForGroupsTableGrouped;
- (int)abCellStyleForGroupsTablePlain;
- (int)abCellStyleForMembersTable;
- (UIButton *)accessoryButtonForRelatedNames;
- (UIView *)accessoryViewForFavoritesBadge;
- (UIView *)accessoryViewForMailVIPBadge;
- (UIView *)accessoryViewForVideoBadge;
- (UIImage *)cardActionButtonBackgroundHighlighted;
- (UIImage *)cardActionButtonBackgroundNormal;
- (double)cardActionButtonHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cardActionButtonImageInsets;
- (double)cardActionButtonSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cardActionButtonTitleDoubleLineInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cardActionButtonTitleSingleLineInsets;
- (long long)cardActionButtonType;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cardActionButtonsInsets;
- (UIImage *)cardActionConferenceIcon;
- (UIImage *)cardActionConferenceIconPressed;
- (bool)cardActionsAllowFaceTimeFavorites;
- (bool)cardActionsAllowVoiceFavorites;
- (bool)cardAlwaysShowsNotes;
- (long long)cardCellAccessoryType;
- (long long)cardCellAccessoryTypeEdit;
- (long long)cardCellAccessoryTypeEditRingtone;
- (long long)cardCellAccessoryTypeRingtone;
- (UIColor *)cardCellBackgroundColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cardCellBackgroundInsetsWhenEditing:(bool)arg1;
- (double)cardCellBadgePaddingLeft;
- (UIColor *)cardCellDisabledBackgroundColor;
- (UIColor *)cardCellDividerColorVertical:(bool)arg1;
- (UIColor *)cardCellDividerShadowColorVertical:(bool)arg1;
- (UIImage *)cardCellFacebookBadge;
- (long long)cardCellSelectionStyle;
- (double)cardCellVerticalSpacingBetweenAlertsOfSimilarType;
- (UIColor *)cardClippingImageLabelBevelColor;
- (UIColor *)cardClippingImageLabelColor;
- (double)cardContentOccluderDefaultBottomFadingHeight;
- (double)cardContentOccluderDefaultTopFadingHeight;
- (double)cardDeleteButtonHeight;
- (UIImage *)cardDeleteButtonImage;
- (UIImage *)cardDeleteButtonImagePressed;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cardDeleteButtonInsets;
- (UIColor *)cardHeaderBackgroundColor;
- (UIColor *)cardHeaderDefaultLabelTextColor;
- (double)cardHeaderDisplayImageLeftMargin;
- (double)cardHeaderDisplayImageTopMargin;
- (double)cardHeaderEditingImageLeftMargin;
- (double)cardHeaderEditingImageTopMargin;
- (double)cardHeaderImageNameEditorSpacing;
- (double)cardHeaderImageNameSpacing;
- (bool)cardHeaderNameViewAlignOnBottom;
- (double)cardHeaderSpacingFromCardBodyWhenEditing:(bool)arg1;
- (double)cardHeaderViewLeftMargin;
- (double)cardHeaderViewTopMargin;
- (UIColor *)cardHeadlineShadowColor;
- (UIColor *)cardHeadlineTextColor;
- (UIFont *)cardHeadlineTextFont;
- (UIColor *)cardLabelBackgroundColor;
- (UIColor *)cardLabelDisabledTextColor;
- (UIColor *)cardLabelEditingTextColor;
- (UIFont *)cardLabelEditingTextFont;
- (UIColor *)cardLabelEmphasizedHighlightedTextColor;
- (UIColor *)cardLabelHighlightedShadowColor;
- (UIColor *)cardLabelHighlightedTextColor;
- (UIColor *)cardLabelImportantHighlightedTextColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cardLabelInsets;
- (UIColor *)cardLabelSelectedBackgroundColor;
- (UIColor *)cardLabelShadowColor;
- (struct CGSize { double x1; double x2; })cardLabelShadowOffset;
- (UIColor *)cardLabelTextColor;
- (UIFont *)cardLabelTextFont;
- (double)cardLabelWidth;
- (double)cardLinkingHeaderLabelHeight;
- (double)cardMaxHeightForSwellTextViewWhenEditing:(bool)arg1;
- (unsigned long long)cardNameNumberOfLines;
- (UIView *)cardNotesHeaderView;
- (double)cardNotesHeaderViewHeight;
- (bool)cardNotesLabelIncludesSource;
- (double)cardNotesMinimumHeightWhenEditing:(bool)arg1;
- (double)cardPhotoFrameBorderSize;
- (struct CGSize { double x1; double x2; })cardPhotoOffset;
- (struct CGSize { double x1; double x2; })cardPhotoShadowOffset;
- (bool)cardPhotoShouldApplyOverlayImageWhenLabelPresent;
- (bool)cardPhotoShouldApplyOverlayImageWhenPersonImagePresent;
- (bool)cardPlaceholderImageShouldApplyMaskAndOverlay;
- (bool)cardSectionAlwaysWantsHeader;
- (UIColor *)cardSectionBackgroundColor;
- (bool)cardSectionDrawsDefaultTopShadow;
- (UIFont *)cardSectionHeaderFont;
- (double)cardSectionHeaderHeightForBottomActions;
- (double)cardSectionHeaderHeightForFirstCardActions;
- (double)cardSectionHeaderHeightForFollowingCardActions;
- (double)cardSectionHeaderHorizontalPadding;
- (UIColor *)cardSectionHeaderShadowColor;
- (struct CGSize { double x1; double x2; })cardSectionHeaderShadowOffset;
- (UIColor *)cardSectionHeaderTextColor;
- (bool)cardShouldUseSeparateSectionsForUnknownCardActions;
- (UIColor *)cardTableBackgroundColor;
- (UIColor *)cardTableCellBorderColor;
- (bool)cardTableShouldAdjustForKeyboard;
- (bool)cardTableShouldRemoveBackgroundView;
- (bool)cardTableUsesRowFadeAnimation;
- (UITableViewCell *)cardTableView:(UITableView *)arg1 prepareCell:(UITableViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (bool)cardTableView:(UITableView *)arg1 wantsHeaderForProperty:(int)arg2 inSection:(long long)arg3 whenEditing:(bool)arg4;
- (double)cardTableViewLinkingHeaderBottomPaddingWhenEditing:(bool)arg1;
- (double)cardTableViewLinkingHeaderTopPaddingWhenEditing:(bool)arg1;
- (double)cardTableViewSectionFooterHeightWhenEditing:(bool)arg1;
- (double)cardTableViewSectionHeaderHeightWhenEditing:(bool)arg1;
- (unsigned long long)cardTagNumberOfLines;
- (UIColor *)cardTaglineShadowColor;
- (UIColor *)cardTaglineTextColor;
- (UIFont *)cardTaglineTextFont;
- (UIColor *)cardValueBackgroundColor;
- (UIImage *)cardValueClearButtonImage;
- (UIColor *)cardValueDisabledTextColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cardValueEditingInsets;
- (UIColor *)cardValueHighlightedShadowColor;
- (UIColor *)cardValueHighlightedTextColor;
- (bool)cardValueHighlightsWhenTouched;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cardValueInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cardValueInsetsWhenEditing:(bool)arg1;
- (UIColor *)cardValueShadowColor;
- (struct CGSize { double x1; double x2; })cardValueShadowOffset;
- (UIColor *)cardValueTappableColor;
- (UIColor *)cardValueTextColor;
- (UIFont *)cardValueTextFont;
- (long long)composeModalPresentationStyle;
- (NSString *)copyLocalizedLabel:(NSString *)arg1;
- (NSString *)copyLocalizedPropertyName:(int)arg1 lowercase:(bool)arg2;
- (Class)customCardActionCellClass;
- (Class)customCardCellClass;
- (void)customSetEmphasized:(bool)arg1 onCell:(UITableViewCell *)arg2;
- (bool)datePickerHasNavigationTitle;
- (int)dialogStyleForDeleteConfirmation;
- (UIColor *)editorViewColor;
- (UIFont *)editorViewLargeFont;
- (UIFont *)editorViewSmallFont;
- (UIColor *)groupAccountNameColor;
- (UIFont *)groupAccountNameFont;
- (UIColor *)groupAccountNameShadowColor;
- (struct CGSize { double x1; double x2; })groupAccountNameShadowOffset;
- (UIColor *)groupCellBackgroundColor;
- (UIColor *)groupCellHighlightedTextColor;
- (long long)groupCellSelectionStyle;
- (UIColor *)groupCellShadowColor;
- (struct CGSize { double x1; double x2; })groupCellShadowOffset;
- (UIColor *)groupCellTextColor;
- (UIColor *)groupHeaderBackgroudColor;
- (bool)groupSectionDrawsDefaultTopShadow;
- (double)groupSectionHeaderHeight;
- (double)groupSectionHeaderHorizontalPadding;
- (UIColor *)groupsTableBackgroundColor;
- (bool)groupsTableShouldRemoveBackgroundView;
- (bool)labelPickerShouldPushCustomLabelCreator;
- (bool)labelPickerUsesOpaqueBackground;
- (_UIGraphicsLetterpressStyle *)letterpressStyle;
- (bool)linkedCardsShouldAllowDeletion;
- (bool)linkedPhotoLabelStringsDescribeSourceOnly;
- (bool)linkedPhotoPickerIncludesCurrentPhoto;
- (UIView *)memberHeaderBackgroundView;
- (UIFont *)memberNameBoldFont;
- (UIFont *)memberNameBoldFontForSectionHeader;
- (UIColor *)memberNameDisabledTextColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })memberNameInsets;
- (double)memberNameInterComponentSpacing;
- (UIImage *)memberNameMeCardDisabledImage;
- (UIImage *)memberNameMeCardImage;
- (UIImage *)memberNameMeCardSelectedImage;
- (UIColor *)memberNameMeCardShadowColor;
- (UIColor *)memberNameMeCardTextColor;
- (UIFont *)memberNamePlaceholderFont;
- (UIFont *)memberNameRegularFont;
- (UIFont *)memberNameRegularFontForSectionHeader;
- (UIColor *)memberNameSelectedColor;
- (UIColor *)memberNameSelectedShadowColor;
- (UIColor *)memberNameShadowColor;
- (struct CGSize { double x1; double x2; })memberNameShadowOffset;
- (UIColor *)memberNameTextColor;
- (double)memberScrollBarInset;
- (UIColor *)memberSearchFieldBackgroundColor;
- (UIImage *)memberSectionListHeaderImage;
- (UIColor *)memberSelectedBackgroundColor;
- (bool)memberShowContactPhoto;
- (UIColor *)membersBackgroundColor;
- (unsigned long long)membersCountToShowIndex;
- (unsigned long long)membersCountToShowSections;
- (UIColor *)membersHeaderBackgroundColor;
- (UIColor *)membersHeaderContentViewBackgroundColor;
- (double)membersIndexMaximumHeight;
- (UIColor *)membersIndexTextColor;
- (UIColor *)membersIndexTrackingBackgroundColor;
- (UIColor *)membersSearchBackgroundColor;
- (bool)membersSearchBarIsInTableHeader;
- (UIColor *)membersSearchCellBackgroundColor;
- (long long)membersSelectionStyle;
- (UIView *)newAccessoryDisclosureIndicatorForCellStyle:(int)arg1;
- (UIButton *)newCardActionButton;
- (UIView *)newCustomCardTableScrollingBackgroundView;
- (UIView *)newTableFooterViewForCellStyle:(int)arg1;
- (long long)peoplePickerBarStyle;
- (bool)peoplePickerBarStyleIsTranslucent;
- (UIColor *)personActionColor;
- (UIFont *)personActionFont;
- (UIColor *)personActionHighlightedColor;
- (UIColor *)personActionShadowColor;
- (struct CGSize { double x1; double x2; })personActionShadowOffset;
- (double)personEditorFieldVerticalInset;
- (UIColor *)personHeaderPasteboardColor;
- (UIColor *)personHeaderShadowColor;
- (struct CGSize { double x1; double x2; })personHeaderShadowOffset;
- (UIColor *)personLabelColor;
- (UIFont *)personLabelFont;
- (double)personLabelFontMinSize;
- (UIColor *)personLabelHighlightedColor;
- (UIColor *)personLabelShadowColor;
- (struct CGSize { double x1; double x2; })personLabelShadowOffset;
- (UIFont *)personNoValueLabelFont;
- (UIColor *)personNoValueLabelShadowColor;
- (struct CGSize { double x1; double x2; })personNoValueLabelShadowOffset;
- (UIColor *)personNoValueLabelTextColor;
- (bool)personTableHeaderViewScrollsWhenEditing:(bool)arg1;
- (UIColor *)personValueColor;
- (UIColor *)personValueEmphasizedColor;
- (UIColor *)personValueEmphasizedHighlightColor;
- (UIFont *)personValueFont;
- (double)personValueFontMinSize;
- (UIColor *)personValueHighlightColor;
- (UIColor *)personValueImportantColor;
- (UIColor *)personValueImportantHighlightColor;
- (UIImage *)personViewGetFavoritesBadge;
- (UIImage *)personViewGetFavoritesBadgeHighlighted;
- (UIImage *)personViewGetNameViewAccessoryImage;
- (UIImage *)personViewGetNameViewAccessoryImageSelected;
- (double)personViewHeaderImageHeight;
- (double)personViewHeaderImageWidth;
- (double)personViewHeaderMinimumHeight;
- (double)personViewHeaderNameViewTextHorizontalInset;
- (double)personViewHeaderNameViewTextVerticalInset;
- (double)personViewHeaderRightMargin;
- (double)personViewHorizontalCellInset;
- (double)personViewRowHeightWhenEditing:(bool)arg1;
- (double)personViewVerticalSpacing;
- (long long)pickerTransitionStyle;
- (bool)presentDatePickerInPopover;
- (bool)presentModalViewInPopover;
- (bool)presentNewContactsControllersInPopover;
- (bool)refreshTinyActionCell;
- (bool)reloadCallAction;
- (bool)searchControllerForceKeyboardDisplayEnabled;
- (bool)searchIsAlwaysActive;
- (void)selectCustomPartWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 occupiedCorners:(unsigned long long)arg2 forCell:(UITableViewCell *)arg3;
- (void)selectLabelPartForCell:(UITableViewCell *)arg1;
- (void)selectValuePartForCell:(UITableViewCell *)arg1;
- (void)selectWholePartForCell:(UITableViewCell *)arg1;
- (UIColor *)separatorBottomShadowColorForCellStyle:(int)arg1;
- (UIColor *)separatorColorForCellStyle:(int)arg1;
- (long long)separatorStyleForCellStyle:(int)arg1;
- (UIColor *)separatorTopShadowColorForCellStyle:(int)arg1;
- (bool)serverSearchNavigationBarHidingEnabled;
- (void)setIndicatesFaceTimeHistory:(bool)arg1 onActionButton:(UIButton *)arg2;
- (UIColor *)shadowColorForCellStyle:(int)arg1;
- (bool)shouldApplyMaskImage;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldDefinePickerTransitionStyle;
- (bool)shouldPropagateStylesThroughUnknownPersonActions;
- (bool)shouldPropagateStylesToPickers;
- (bool)shouldShowCardPhotoPlaceholder;
- (bool)shouldUseCardContentProviderWhenAvailable;
- (bool)shouldUsePeoplePickerBarStyle;
- (long long)unknownModalPresentationStyle;
- (void)unselectAllCellParts:(UITableViewCell *)arg1;

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
