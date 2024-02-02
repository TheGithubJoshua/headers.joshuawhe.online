<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UITableConstants.h</title>
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

/protocols/UITableConstants.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol UITableConstants <NSObject>

@required

+ (id)sharedConstants;

- (double)defaultAlphaForDraggingCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultAlphaForReorderingCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultBackgroundColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultBackgroundColorForTableViewStyle:(long long)arg1;
- (NSArray *)defaultBackgroundEffectsForTableViewStyle:(long long)arg1;
- (UIImage *)defaultCheckmarkImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultContentAccessoryPaddingForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultContentEditPaddingForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultContentReorderPaddingForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultDeleteImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultDeleteMinusRectForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultDetailTextColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIFont *)defaultDetailTextFontForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultDetailTextLabelFontSizeForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultDisclosureImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultDisclosurePressedImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultEditControlPaddingForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (struct CGSize { double x1; double x2; })defaultEditControlSizeForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultFocusedHorizontalOutsetForTableView:(id <UITable>)arg1;
- (double)defaultFocusedShadowRadiusForTableView:(id <UITable>)arg1;
- (UIColor *)defaultFooterBackgroundColorForView:(UITableViewHeaderFooterView *)arg1 inTableView:(id <UITable>)arg2;
- (UIFont *)defaultFooterFontForTableViewStyle:(long long)arg1;
- (UIFont *)defaultFooterFontForView:(UITableViewHeaderFooterView *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultFooterTextColorForTableViewStyle:(long long)arg1;
- (UIColor *)defaultFooterTextColorForView:(UITableViewHeaderFooterView *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultHeaderBackgroundColorForView:(UITableViewHeaderFooterView *)arg1 inTableView:(id <UITable>)arg2;
- (UIFont *)defaultHeaderFontForTableViewStyle:(long long)arg1;
- (UIFont *)defaultHeaderFontForView:(UITableViewHeaderFooterView *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultHeaderTextColorForTableViewStyle:(long long)arg1;
- (UIColor *)defaultHeaderTextColorForView:(UITableViewHeaderFooterView *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultInsertImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultLayoutMarginsForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultLayoutMarginsForTableView:(id <UITable>)arg1;
- (double)defaultLeadingCellMarginWidthForTableView:(id <UITable>)arg1;
- (double)defaultMarginWidthForTableView:(id <UITable>)arg1;
- (double)defaultMaskGradientHeightForTableView:(id <UITable>)arg1;
- (UIImage *)defaultMultiSelectHighlightedImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultMultiSelectNotSelectedImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultMultiSelectSelectedImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultPaddingBetweenHeaderAndRowsForTableView:(id <UITable>)arg1;
- (double)defaultPaddingBetweenRowsForTableView:(id <UITable>)arg1;
- (double)defaultPlainFirstSectionHeaderHeightForTableView:(id <UITable>)arg1;
- (double)defaultPlainHeaderLabelYPositionForTableView:(id <UITable>)arg1 headerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 textRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 isHeader:(bool)arg4;
- (UIImage *)defaultReorderControlImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (struct CGSize { double x1; double x2; })defaultReorderControlSizeForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (bool)defaultRowHeightDependsOnCellStyle;
- (double)defaultRowHeightForTableView:(id <UITable>)arg1;
- (double)defaultRowHeightForTableView:(id <UITable>)arg1 cellStyle:(long long)arg2;
- (double)defaultSectionFooterHeightForTableView:(id <UITable>)arg1;
- (double)defaultSectionHeaderHeightForTableView:(id <UITable>)arg1;
- (NSArray *)defaultSelectionEffectsForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultSelectionTintColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultSeparatorColorForTableViewStyle:(long long)arg1;
- (long long)defaultSeparatorStyleForTableViewStyle:(long long)arg1;
- (double)defaultSpaceBetweenEditAndReorderControlsForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultTextColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIFont *)defaultTextLabelFontForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultTextLabelFontSizeForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (double)defaultTrailingCellMarginWidthForTableView:(id <UITable>)arg1;
- (bool)imageViewOffsetByLayoutMarginsForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (bool)reorderingCellWantsShadows:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (<UITableConstants> *)sidebarVariant;
- (bool)supportsUserInterfaceStyles;
- (<UITableConstants> *)variantForActive:(bool)arg1 dark:(bool)arg2;

@optional

- (UIColor *)defaultDetailTextColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2 forUserInterfaceStyle:(long long)arg3;
- (UIImage *)defaultFocusedCheckmarkImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultFocusedDeleteImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultFocusedDetailTextColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultFocusedDisclosureImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultFocusedInsertImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultFocusedMultiSelectNotSelectedImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultFocusedMultiSelectSelectedImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultFocusedReorderControlImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultFocusedTextColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultHeaderTextColorForTableViewStyle:(long long)arg1 userInterfaceStyle:(long long)arg2;
- (UIColor *)defaultTextColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2 forUserInterfaceStyle:(long long)arg3;

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