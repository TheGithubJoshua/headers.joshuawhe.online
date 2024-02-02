<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CNFRegAppearanceController.h</title>
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

/PrivateFrameworks/CommunicationsSetupUI.framework/CNFRegAppearanceController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI (1)
 */

@interface CNFRegAppearanceController : NSObject

@property (nonatomic, readonly) bool actionSheetsUsePopoverStyle;
@property (nonatomic, readonly) UIColor *customBackgroundColor;
@property (nonatomic, readonly) bool firstNavigationBarHidden;
@property (nonatomic, readonly) long long keyboardAppearance;
@property (nonatomic, readonly, retain) UIImage *learnMoreArrowImage;
@property (nonatomic, readonly, retain) UIImage *learnMoreArrowImagePressed;
@property (nonatomic, readonly) bool learnMoreButtonDrawsUnderline;
@property (nonatomic, readonly, retain) UIColor *learnMoreShadowColor;
@property (nonatomic, readonly, retain) UIColor *learnMoreTextColor;
@property (nonatomic, readonly, retain) UIColor *learnMoreTextColorSelected;
@property (nonatomic, readonly) long long modalPresentationStyle;
@property (nonatomic, readonly) long long navigationBarActivityIndicatorStyle;
@property (nonatomic, readonly, retain) UIImage *navigationBarBackgroundImage;
@property (nonatomic, readonly) bool navigationBarHidesShadow;
@property (nonatomic, readonly) bool navigationBarHidesTitle;
@property (nonatomic, readonly) bool navigationBarIsTranslucent;
@property (nonatomic, readonly) long long navigationBarStyle;
@property (nonatomic, readonly, retain) UIColor *navigationBarTintColor;
@property (nonatomic, readonly) bool navigationBarTranslucent;
@property (nonatomic, readonly) UIColor *searchResultsTableSeparatorBottomShadowColor;
@property (nonatomic, readonly) UIColor *searchResultsTableSeparatorColor;
@property (nonatomic, readonly) long long searchResultsTableSeparatorStyle;
@property (nonatomic, readonly) UIColor *searchResultsTableSeparatorTopShadowColor;
@property (nonatomic, readonly, retain) UIColor *splashEntryFieldLabelTextColor;
@property (nonatomic, readonly, retain) UIColor *splashEntryFieldTextColor;
@property (nonatomic, readonly, retain) UIColor *splashEntryPlaceholderTextColor;
@property (nonatomic, readonly) bool splashScreenShowsIcon;
@property (nonatomic, readonly, retain) UIColor *splashSignInFieldsBackgroundColor;
@property (nonatomic, readonly, retain) UIColor *splashSignInFieldsBorderColor;
@property (nonatomic, readonly) long long splashSignInProgressIndicatorColor;
@property (nonatomic, readonly, retain) UIColor *splashTitleLabelTextColor;
@property (nonatomic, readonly) bool styleUsesCustomAccessoryView;
@property (nonatomic, readonly) bool styleUsesCustomSearchResultsStyle;
@property (nonatomic, readonly) bool styleUsesCustomSeparatorStyle;
@property (nonatomic, readonly) bool styleUsesCustomTableStyle;
@property (nonatomic, readonly, retain) UIColor *tableBackgroundColor;
@property (nonatomic, readonly, retain) UIColor *tableCellBackgroundColor;
@property (nonatomic, readonly, retain) UIImage *tableCellButtonImage;
@property (nonatomic, readonly, retain) UIImage *tableCellButtonImageSelected;
@property (nonatomic, readonly, retain) UIImage *tableCellCheckmarkImage;
@property (nonatomic, readonly, retain) UIImage *tableCellCheckmarkImageDisabled;
@property (nonatomic, readonly, retain) UIImage *tableCellCheckmarkImageSelected;
@property (nonatomic, readonly, retain) UIView *tableCellCustomAccessoryViewDisclosureIndicator;
@property (nonatomic, readonly, retain) UIColor *tableCellDetailLabelBackgroundColor;
@property (nonatomic, readonly, retain) UIColor *tableCellDetailLabelColor;
@property (nonatomic, readonly, retain) UIColor *tableCellEditableInsertionPointColor;
@property (nonatomic, readonly, retain) UIColor *tableCellEditableTextColor;
@property (nonatomic, readonly, retain) UIImage *tableCellEditableTextFieldClearButton;
@property (nonatomic, readonly, retain) UIImage *tableCellEditableTextFieldClearButtonPressed;
@property (nonatomic, readonly, retain) UIColor *tableCellEditableTextPlaceholderColor;
@property (nonatomic, readonly, retain) UIColor *tableCellTextLabelBackgroundColor;
@property (nonatomic, readonly, retain) UIColor *tableCellTextLabelColor;
@property (nonatomic, readonly, retain) UIFont *tableFooterFont;
@property (nonatomic, readonly) long long tableFooterTextAlignment;
@property (nonatomic, readonly, retain) UIColor *tableFooterTextColor;
@property (nonatomic, readonly, retain) UIFont *tableHeaderFont;
@property (nonatomic, readonly) long long tableHeaderTextAlignment;
@property (nonatomic, readonly, retain) UIColor *tableHeaderTextColor;
@property (nonatomic, readonly, retain) UIColor *tableHeaderTextColorSelected;
@property (nonatomic, readonly, retain) UIColor *tableHeaderTextShadowColor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } tableHeaderTextShadowOffset;
@property (nonatomic, readonly, retain) UIColor *tableSectionBorderColor;
@property (nonatomic, readonly, retain) UIImage *tableSectionShadowImage;
@property (nonatomic, readonly) UIColor *tableSeparatorBottomShadowColor;
@property (nonatomic, readonly) UIColor *tableSeparatorColor;
@property (nonatomic, readonly) long long tableSeparatorStyle;
@property (nonatomic, readonly) UIColor *tableSeparatorTopShadowColor;
@property (nonatomic, readonly) UIColor *userInteractionColor;
@property (nonatomic, readonly, retain) UIColor *webViewBackgroundColor;
@property (nonatomic, readonly, retain) UIView *webViewBackgroundView;
@property (nonatomic, readonly) bool webViewDrawsShadows;
@property (nonatomic, readonly) bool webViewIsOpaque;

+ (id)appearanceControllerForStyle:(long long)arg1;
+ (id)defaultAppearanceController;
+ (id)globalAppearanceController;
+ (id)gradientAppearanceController;
+ (id)modernAppearanceController;
+ (id)modernTransparentDarkAppearanceController;
+ (id)modernTransparentLightAppearanceController;
+ (id)stripedAppearanceController;

- (bool)actionSheetsUsePopoverStyle;
- (id)customBackgroundColor;
- (bool)firstNavigationBarHidden;
- (long long)keyboardAppearance;
- (id)learnMoreArrowImage;
- (id)learnMoreArrowImagePressed;
- (bool)learnMoreButtonDrawsUnderline;
- (id)learnMoreShadowColor;
- (id)learnMoreTextColor;
- (id)learnMoreTextColorSelected;
- (long long)modalPresentationStyle;
- (long long)navigationBarActivityIndicatorStyle;
- (id)navigationBarBackgroundImage;
- (bool)navigationBarHidesShadow;
- (bool)navigationBarHidesTitle;
- (bool)navigationBarIsTranslucent;
- (long long)navigationBarStyle;
- (id)navigationBarTintColor;
- (bool)navigationBarTranslucent;
- (id)searchResultsTableSeparatorBottomShadowColor;
- (id)searchResultsTableSeparatorColor;
- (long long)searchResultsTableSeparatorStyle;
- (id)searchResultsTableSeparatorTopShadowColor;
- (id)splashEntryFieldLabelTextColor;
- (id)splashEntryFieldTextColor;
- (id)splashEntryPlaceholderTextColor;
- (bool)splashScreenShowsIcon;
- (id)splashSignInFieldsBackgroundColor;
- (id)splashSignInFieldsBorderColor;
- (long long)splashSignInProgressIndicatorColor;
- (id)splashTitleLabelTextColor;
- (bool)styleUsesCustomAccessoryView;
- (bool)styleUsesCustomSearchResultsStyle;
- (bool)styleUsesCustomSeparatorStyle;
- (bool)styleUsesCustomTableStyle;
- (id)tableBackgroundColor;
- (id)tableCellBackgroundColor;
- (id)tableCellButtonImage;
- (id)tableCellButtonImageSelected;
- (id)tableCellCheckmarkImage;
- (id)tableCellCheckmarkImageDisabled;
- (id)tableCellCheckmarkImageSelected;
- (id)tableCellCustomAccessoryViewDisclosureIndicator;
- (id)tableCellDetailLabelBackgroundColor;
- (id)tableCellDetailLabelColor;
- (id)tableCellEditableInsertionPointColor;
- (id)tableCellEditableTextColor;
- (id)tableCellEditableTextFieldClearButton;
- (id)tableCellEditableTextFieldClearButtonPressed;
- (id)tableCellEditableTextPlaceholderColor;
- (id)tableCellTextLabelBackgroundColor;
- (id)tableCellTextLabelColor;
- (id)tableFooterFont;
- (long long)tableFooterTextAlignment;
- (id)tableFooterTextColor;
- (id)tableHeaderFont;
- (long long)tableHeaderTextAlignment;
- (id)tableHeaderTextColor;
- (id)tableHeaderTextColorSelected;
- (id)tableHeaderTextShadowColor;
- (struct CGSize { double x1; double x2; })tableHeaderTextShadowOffset;
- (id)tableSectionBorderColor;
- (id)tableSectionShadowImage;
- (id)tableSeparatorBottomShadowColor;
- (id)tableSeparatorColor;
- (long long)tableSeparatorStyle;
- (id)tableSeparatorTopShadowColor;
- (id)userInteractionColor;
- (id)webViewBackgroundColor;
- (id)webViewBackgroundView;
- (bool)webViewDrawsShadows;
- (bool)webViewIsOpaque;

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