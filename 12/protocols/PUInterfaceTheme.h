<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUInterfaceTheme.h</title>
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

/protocols/PUInterfaceTheme.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol PUInterfaceTheme <NSObject>

@required

- (UIColor *)airPlayControllerBackgroundColor;
- (UIColor *)airPlayVideoPlaceholderBackgroundColor;
- (UIImage *)airPlayVideoPlaceholderIcon;
- (UIColor *)airPlayVideoPlaceholderIconTintColor;
- (UIFont *)airPlayVideoPlaceholderMessageFont;
- (UIColor *)airPlayVideoPlaceholderMessageTextColor;
- (UIFont *)airPlayVideoPlaceholderTitleFont;
- (UIColor *)airPlayVideoPlaceholderTitleTextColor;
- (UIColor *)albumBadgeInTitleColor;
- (UIColor *)albumCornersBackgroundColor;
- (UIColor *)albumListBackgroundColor;
- (double)albumListDisabledAlbumStackViewAlpha;
- (double)albumListDisabledAlbumTitleAlpha;
- (UIFont *)albumListSectionTitleLabelFont;
- (UIFont *)albumListSubtitleLabelFont;
- (UIFont *)albumListTitleLabelFont;
- (NSAttributedString *)attributedStringForCloudFeedGroupHeaderWithText:(NSString *)arg1;
- (UIColor *)badgeOverThumbnailColor;
- (UIColor *)bannerBackgroundColor;
- (double)bannerHeight;
- (UIColor *)cloudFeedBackgroundColor;
- (NSDictionary *)cloudFeedDefaultTextAttributes;
- (NSDictionary *)cloudFeedEmphasizedTextAttributes;
- (NSDictionary *)cloudFeedInteractionLargerTextAttributes;
- (NSDictionary *)cloudFeedInteractionTextAttributes;
- (NSDictionary *)cloudFeedInvitationSubtitleTextAttributes;
- (NSDictionary *)cloudFeedInvitationTitleTextAttributes;
- (NSDictionary *)cloudFeedLargerDefaultTextAttributes;
- (NSDictionary *)cloudFeedLargerEmphasizedTextAttributes;
- (UIImage *)cloudFeedSectionHeaderBackgroundImage;
- (UIColor *)cloudFeedSeparatorColor;
- (double)cloudFeedSeparatorHeight;
- (NSDictionary *)cloudFeedWhiteDefaultTextAttributes;
- (NSDictionary *)cloudFeedWhiteEmphasizedTextAttributes;
- (UIFont *)cloudWelcomeViewTitleLabelFontForSize:(double)arg1;
- (NSString *)commentsButtonStringForCount:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })commentsButtonTextInset;
- (UIImage *)compactLoadErrorIcon;
- (void)configureAlbumListDeleteButton:(UIButton *)arg1;
- (void)configureAlbumListSectionTitleLabel:(UILabel *)arg1;
- (void)configureAlbumListStackViewPhonePhotoDecoration:(PUPhotoDecoration *)arg1;
- (void)configureAlbumListSubtitleLabel:(UILabel *)arg1 asOpaque:(bool)arg2;
- (void)configureAlbumListTitleLabel:(UILabel *)arg1 asOpaque:(bool)arg2;
- (void)configureAlbumListTitleTextField:(UITextField *)arg1 asOpaque:(bool)arg2;
- (void)configureBannerLabel:(UILabel *)arg1;
- (void)configureBannerStackView:(PUStackView *)arg1;
- (void)configureCloudFeedCommentButton:(UIButton *)arg1 withCount:(long long)arg2;
- (void)configureCloudFeedGroupHeaderTextCell:(PUFeedTextCell *)arg1 contentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 withText:(NSString *)arg3;
- (void)configureCloudFeedInvitationReplyButton:(UIButton *)arg1;
- (void)configureCloudFeedSectionHeaderTextCell:(PUFeedTextCell *)arg1 contentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 descriptionAttributedText:(NSAttributedString *)arg3 detailAttributedText:(NSAttributedString *)arg4;
- (void)configureCloudFeedStackView:(PUStackView *)arg1 withStackSize:(struct CGSize { double x1; double x2; })arg2;
- (void)configureEditPluginListCellLabel:(UILabel *)arg1;
- (void)configureEditPluginListNavigationController:(UINavigationController *)arg1;
- (void)configureEditPluginNavigationController:(UINavigationController *)arg1;
- (void)configureEditPluginUserDefaultsAccessorySwitch:(UISwitch *)arg1;
- (void)configureEditPluginUserDefaultsCell:(UITableViewCell *)arg1 withIcon:(UIImage *)arg2 title:(NSString *)arg3;
- (void)configureEditPluginUserDefaultsTableView:(UITableView *)arg1;
- (void)configureImportHeaderSubtitleLabel:(UILabel *)arg1;
- (void)configureImportHeaderTitleLabel:(UILabel *)arg1;
- (void)configureMapViewAnnotationCountLabel:(UILabel *)arg1;
- (void)configurePhotoCollectionGlobalFooterProgressView:(UIProgressView *)arg1 paused:(bool)arg2;
- (void)configurePhotoCollectionGlobalFooterSubtitleLabel:(UILabel *)arg1;
- (void)configurePhotoCollectionGlobalFooterSubtitleTextView:(UITextView *)arg1;
- (void)configurePhotoCollectionGlobalFooterTitleLabel:(UILabel *)arg1;
- (void)configurePhotoCollectionHeaderDateLabel:(UILabel *)arg1 forStyle:(long long)arg2;
- (void)configurePhotoCollectionHeaderLocationsLabel:(UILabel *)arg1 forStyle:(long long)arg2;
- (void)configurePhotoCollectionHeaderTitleLabel:(UILabel *)arg1 forStyle:(long long)arg2;
- (void)configureProgressIndicatorMessageLabel:(UILabel *)arg1;
- (void)configureSearchResultCountLabel:(UILabel *)arg1;
- (void)configureSearchSubtitleLabel:(UILabel *)arg1;
- (void)configureSearchTitleLabel:(UILabel *)arg1;
- (void)configureSlideshowMusicHeaderTitleLabel:(UILabel *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentCommentsButtonImageInset;
- (UIColor *)contentCommentsHiddenButtonImageColor;
- (NSDictionary *)contentCommentsHiddenButtonTextAttributes;
- (UIColor *)contentCommentsShownButtonImageColor;
- (NSDictionary *)contentCommentsShownButtonTextAttributes;
- (UIButton *)createCloudFeedCommentButton;
- (long long)defaultKeyboardAppearance;
- (unsigned long long)emptyPlaceholderStyle;
- (UIColor *)emptyPlaceholderViewBackgroundColor;
- (UIColor *)folderCellBackgroundColor;
- (UIColor *)gridViewCellBannerBackgroundColor;
- (UIImage *)gridViewCellBannerBackgroundImage;
- (UIColor *)gridViewCellBannerDestructiveTextColor;
- (UIColor *)gridViewCellBannerTextColor;
- (UIFont *)gridViewCellBannerTextFont;
- (double)padAlbumCornerRadius;
- (double)phoneAlbumCornerRadius;
- (long long)photoBrowserBarStyle;
- (UIColor *)photoBrowserChromeHiddenBackgroundColor;
- (UIColor *)photoBrowserChromeVisibleBackgroundColor;
- (UIFont *)photoBrowserPhotoPrimaryTitleFont;
- (UIFont *)photoBrowserPhotoSubtitleFont;
- (long long)photoBrowserStatusBarStyle;
- (UIFont *)photoBrowserTimeTitleFont;
- (UIColor *)photoBrowserTitleViewTappableTextColor;
- (UIColor *)photoBrowserTitleViewTextColor;
- (UIColor *)photoCollectionCloudQuotaBannerBackgroundColorHighlighted:(bool)arg1;
- (UIFont *)photoCollectionCloudQuotaBannerFont;
- (UIColor *)photoCollectionCloudQuotaBannerLinkTextColorHighlighted:(bool)arg1;
- (UIFont *)photoCollectionCloudQuotaBannerLinkTextFont;
- (long long)photoCollectionCloudQuotaBannerTextAlignment;
- (UIColor *)photoCollectionCloudQuotaBannerTextColorHighlighted:(bool)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })photoCollectionCloudQuotaBannerTextMargins;
- (NSDictionary *)photoCollectionGlobalFooterSubtitleTextViewAttributesDisabled:(bool)arg1;
- (NSDictionary *)photoCollectionGlobalFooterSubtitleTextViewLinkTextAttributes;
- (NSDictionary *)photoCollectionHeaderActionButtonAttributesForStyle:(long long)arg1;
- (UIFontDescriptor *)photoCollectionHeaderActionButtonFontDescriptorForStyle:(long long)arg1;
- (UIColor *)photoCollectionHeaderBackgroundColorForBackgroundStyle:(unsigned long long)arg1;
- (UIImage *)photoCollectionHeaderDisclosureIconForStyle:(long long)arg1;
- (struct UIOffset { double x1; double x2; })photoCollectionHeaderLocationIconOffsetForStyle:(long long)arg1;
- (UIFontDescriptor *)photoCollectionHeaderSubtitleFontDescriptorForStyle:(long long)arg1;
- (UIFontDescriptor *)photoCollectionHeaderTitleLabelFontDescriptorForStyle:(long long)arg1;
- (double)photoCollectionToolbarIconToTextSpacerWidth;
- (double)photoCollectionToolbarTextTitleSpacerWidth;
- (UIColor *)photoCollectionViewBackgroundColor;
- (int)photoCollectionViewBackgroundColorValue;
- (UIColor *)photoEditingActiveFilterTitleColor;
- (UIColor *)photoEditingAdjustmentsBarBackgroundColor;
- (UIColor *)photoEditingAdjustmentsBarCurrentPositionMarkerColor;
- (UIColor *)photoEditingAdjustmentsBarDisabledColor;
- (UIColor *)photoEditingAdjustmentsBarHighlightColor;
- (UIColor *)photoEditingAdjustmentsBarMainColor;
- (UIColor *)photoEditingAdjustmentsBarOriginalPositionMarkerColor;
- (UIColor *)photoEditingAdjustmentsBarPlayheadColor;
- (UIColor *)photoEditingAdjustmentsModeLabelColor;
- (UIFont *)photoEditingAdjustmentsModeLabelFont;
- (UIFont *)photoEditingAdjustmentsModePickerFont;
- (UIColor *)photoEditingAdjustmentsModePickerValueColor;
- (UIFont *)photoEditingAdjustmentsModePickerValueFont;
- (UIColor *)photoEditingAdjustmentsToolBackgroundColor;
- (UIColor *)photoEditingAutoEnhanceDisabledColor;
- (UIColor *)photoEditingAutoEnhanceEnabledColor;
- (UIColor *)photoEditingBackgroundColor;
- (UIColor *)photoEditingCropButtonColor;
- (UIColor *)photoEditingCropButtonSelectedColor;
- (UIColor *)photoEditingCropTiltWheelColor;
- (UIFont *)photoEditingCropTiltWheelFont;
- (UIColor *)photoEditingCropToggleButtonColor;
- (UIFont *)photoEditingCropToggleButtonFont;
- (UIColor *)photoEditingDepthBadgeDisabledColor;
- (UIColor *)photoEditingDepthBadgeDisabledTextColor;
- (UIColor *)photoEditingDepthBadgeEnabledColor;
- (UIColor *)photoEditingDepthBadgeEnabledTextColor;
- (UIColor *)photoEditingDepthButtonDisabledColor;
- (UIColor *)photoEditingDepthButtonEnabledColor;
- (UIFont *)photoEditingFilterTitleFont;
- (UIColor *)photoEditingInactiveFilterTitleColor;
- (UIColor *)photoEditingIrisDisabledColor;
- (UIColor *)photoEditingIrisEnabledColor;
- (UIColor *)photoEditingKeyPhotoSelectionNormalColor;
- (UIColor *)photoEditingOverlayBadgeBackgroundColor;
- (UIColor *)photoEditingOverlayBadgeColor;
- (UIFont *)photoEditingOverlayBadgeFont;
- (UIColor *)photoEditingPopoverBackgroundColor;
- (UIFont *)photoEditingToolbarButtonCompactFont;
- (UIFont *)photoEditingToolbarButtonNormalFont;
- (UIColor *)photoEditingToolbarDestructiveButtonColor;
- (UIColor *)photoEditingToolbarMainButtonColor;
- (UIColor *)photoEditingToolbarSecondaryButtonColor;
- (UIColor *)photoEditingTooltipColor;
- (UIFont *)photoEditingTooltipFont;
- (UIColor *)placeholderCellBackgroundColor;
- (UIColor *)playbackTimeLabelBackgroundColor;
- (UIFont *)playbackTimeLabelFont;
- (UIColor *)playheadBackgroundColor;
- (UIColor *)playheadColor;
- (UIImage *)regularLoadErrorIcon;
- (UIColor *)scrubberPlaceholderColor;
- (NSDictionary *)searchDefaultAttributes;
- (NSDictionary *)searchDimmedAttributes;
- (NSDictionary *)searchItalicTitleAttributes;
- (UIFont *)searchItalicTitleLabelFont;
- (UIFont *)searchRecentLabelFont;
- (UIColor *)searchRecentLabelTextColor;
- (UIFont *)searchResultCountLabelFont;
- (UIColor *)searchResultCountTextColor;
- (double)searchSingleTitleBottomBaselineDistance;
- (double)searchSingleTitleTopBaselineDistance;
- (double)searchSubtitleBottomBaselineDistance;
- (UIFont *)searchSubtitleLabelFont;
- (UIColor *)searchSubtitleTextColor;
- (UIColor *)searchTableViewBackgroundColor;
- (UIFont *)searchTitleLabelFont;
- (double)searchTitleSubtitleBaselineDistance;
- (double)searchTitleTopBaselineDistance;
- (NSDictionary *)sectionHeaderNotTappableTextAttributes;
- (UIFont *)sharedAlbumCommentCardAlbumTitleFont;
- (UIFont *)sharedAlbumCommentCardButtonFont;
- (UIFont *)sharedAlbumCommentCardTextFont;
- (UIFont *)sharedAlbumCommentCardTitleFont;
- (UIColor *)slideshowChromeBarTintColor;
- (UIColor *)slideshowMusicHeaderBackgroundColor;
- (UIColor *)slideshowMusicHeaderTextColor;
- (UIColor *)slideshowSeparatorColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })slideshowSeparatorInset;
- (NSDictionary *)textBlockBelowArtSubTitleTextAttributes;
- (NSDictionary *)textBlockBelowArtTitleEmphasizedTextAttributes;
- (NSDictionary *)textBlockBelowArtTitleTextAttributes;
- (UIColor *)tintColorForBarStyle:(long long)arg1;
- (UIColor *)toolbarAirPlayButtonColor;
- (UIColor *)toolbarCommentsHiddenButtonImageColor;
- (NSDictionary *)toolbarCommentsHiddenButtonTextAttributes;
- (UIColor *)toolbarCommentsShownButtonImageColor;
- (NSDictionary *)toolbarCommentsShownButtonTextAttributes;
- (UIImage *)topLevelNavigationBarBackButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (UIImage *)topLevelNavigationBarButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (UIColor *)topLevelNavigationBarButtonTintColor;
- (struct UIOffset { double x1; double x2; })topLevelNavigationBarButtonTitlePositionAdjustmentforBarMetrics:(long long)arg1;
- (NSDictionary *)topLevelNavigationBarButtonTitleTextAttributesForState:(unsigned long long)arg1;
- (UIImage *)topLevelNavigationBarDoneButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (NSDictionary *)topLevelNavigationBarDoneButtonTitleTextAttributesForState:(unsigned long long)arg1;
- (long long)topLevelStatusBarStyle;
- (UIColor *)videoEditingBackgroundColor;
- (UIFont *)videoEditingToolbarButtonNormalFont;
- (UIColor *)videoEditingToolbarDestructiveButtonColor;
- (UIColor *)videoEditingToolbarMainButtonColor;
- (UIColor *)videoEditingToolbarSecondaryButtonColor;
- (UIColor *)videoEditingToolbarToolButtonColor;
- (double)videoPaletteBottomMargin;
- (double)videoPaletteSideMargin;
- (UIColor *)videoScrubberTileBackgroundColor;

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
