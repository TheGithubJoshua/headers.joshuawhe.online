<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UITableConstants_Stark.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UITableConstants_Stark.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UITableConstants_Stark : NSObject <UITableConstants>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedConstants;

- (double)_defaultPlainHeaderFooterHeightForTableView:(id)arg1;
- (double)defaultAlphaForDraggingCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultAlphaForReorderingCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultBackgroundColorForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultBackgroundColorForTableViewStyle:(long long)arg1;
- (id)defaultBackgroundEffectsForTableViewStyle:(long long)arg1;
- (id)defaultCheckmarkImageForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultContentAccessoryPaddingForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultContentEditPaddingForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultContentReorderPaddingForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultDeleteImageForCell:(id)arg1 inTableView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultDeleteMinusRectForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultDetailTextColorForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultDetailTextFontForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultDetailTextLabelFontSizeForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultDisclosureImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultDisclosurePressedImageForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultEditControlPaddingForCell:(id)arg1 inTableView:(id)arg2;
- (struct CGSize { double x1; double x2; })defaultEditControlSizeForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultFocusedHorizontalOutsetForTableView:(id)arg1;
- (double)defaultFocusedShadowRadiusForTableView:(id)arg1;
- (id)defaultFooterBackgroundColorForView:(id)arg1 inTableView:(id)arg2;
- (id)defaultFooterFontForTableViewStyle:(long long)arg1;
- (id)defaultFooterFontForView:(id)arg1 inTableView:(id)arg2;
- (id)defaultFooterTextColorForTableViewStyle:(long long)arg1;
- (id)defaultFooterTextColorForView:(id)arg1 inTableView:(id)arg2;
- (double)defaultGroupedFooterHeightForTableView:(id)arg1;
- (double)defaultGroupedHeaderHeightForTableView:(id)arg1;
- (id)defaultHeaderBackgroundColorForView:(id)arg1 inTableView:(id)arg2;
- (id)defaultHeaderFontForTableViewStyle:(long long)arg1;
- (id)defaultHeaderFontForView:(id)arg1 inTableView:(id)arg2;
- (id)defaultHeaderTextColorForTableViewStyle:(long long)arg1;
- (id)defaultHeaderTextColorForView:(id)arg1 inTableView:(id)arg2;
- (id)defaultInsertImageForCell:(id)arg1 inTableView:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultLayoutMarginsForTableView:(id)arg1;
- (double)defaultLeadingCellMarginWidthForTableView:(id)arg1;
- (double)defaultMarginWidthForTableView:(id)arg1;
- (double)defaultMaskGradientHeightForTableView:(id)arg1;
- (id)defaultMultiSelectHighlightedImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultMultiSelectNotSelectedImageForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultMultiSelectSelectedImageForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultPaddingBetweenHeaderAndRowsForTableView:(id)arg1;
- (double)defaultPaddingBetweenRowsForTableView:(id)arg1;
- (double)defaultPlainFirstSectionHeaderHeightForTableView:(id)arg1;
- (double)defaultPlainHeaderLabelYPositionForTableView:(id)arg1 headerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 textRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 isHeader:(bool)arg4;
- (id)defaultReorderControlImageForCell:(id)arg1 inTableView:(id)arg2;
- (struct CGSize { double x1; double x2; })defaultReorderControlSizeForCell:(id)arg1 inTableView:(id)arg2;
- (bool)defaultRowHeightDependsOnCellStyle;
- (double)defaultRowHeightForTableView:(id)arg1;
- (double)defaultRowHeightForTableView:(id)arg1 cellStyle:(long long)arg2;
- (double)defaultSectionFooterHeightForTableView:(id)arg1;
- (double)defaultSectionHeaderHeightForTableView:(id)arg1;
- (id)defaultSelectionEffectsForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultSelectionTintColorForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultSeparatorColorForTableViewStyle:(long long)arg1;
- (long long)defaultSeparatorStyleForTableViewStyle:(long long)arg1;
- (double)defaultSpaceBetweenEditAndReorderControlsForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultTextColorForCell:(id)arg1 inTableView:(id)arg2;
- (id)defaultTextLabelFontForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultTextLabelFontSizeForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultTrailingCellMarginWidthForTableView:(id)arg1;
- (bool)imageViewOffsetByLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;
- (bool)reorderingCellWantsShadows:(id)arg1 inTableView:(id)arg2;
- (id)sidebarVariant;
- (bool)supportsUserInterfaceStyles;
- (id)variantForActive:(bool)arg1 dark:(bool)arg2;

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
