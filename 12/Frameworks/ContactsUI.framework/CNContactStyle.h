<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CNContactStyle.h</title>
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

/Frameworks/ContactsUI.framework/CNContactStyle.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI (492)
 */

@interface CNContactStyle : NSObject <NSSecureCoding> {
    UIColor * _backgroundColor;
    long long  _barStyle;
    bool  _blurSupported;
    UIColor * _contactHeaderBackgroundColor;
    UIColor * _contactHeaderDropShadowColor;
    UIColor * _disabledTextColor;
    UIColor * _headerBackgroundColor;
    UIColor * _highlightedTextColor;
    long long  _inlineActionsViewStyle;
    long long  _keyboardAppearance;
    long long  _modalTransitionStyle;
    UIColor * _notesTextColor;
    UIColor * _placeholderTextColor;
    UIColor * _readOnlyTextColor;
    UIColor * _searchBarBackgroundColor;
    UIColor * _sectionBackgroundColor;
    UIColor * _sectionIndexBackgroundColor;
    UIColor * _selectedCellBackgroundColor;
    long long  _separatorBackdropOverlayBlendMode;
    UIColor * _separatorColor;
    long long  _separatorStyle;
    bool  _shouldPresentInCurrentContext;
    UIColor * _suggestedLabelTextColor;
    UIColor * _suggestedValueTextColor;
    UIColor * _taglineTextColor;
    UIColor * _textColor;
    UIColor * _tintColorOverride;
    long long  _topActionsViewStyle;
    UIColor * _transportBackgroundColor;
    UIColor * _transportBoldBackgroundColor;
    UIColor * _transportBorderColor;
    bool  _usesOpaqueBackground;
    bool  _usesTranslucentBarStyle;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) long long barStyle;
@property (nonatomic) bool blurSupported;
@property (nonatomic, readonly) UIFont *boldTextFont;
@property (nonatomic, retain) UIColor *contactHeaderBackgroundColor;
@property (nonatomic, retain) UIColor *contactHeaderDropShadowColor;
@property (nonatomic, retain) UIColor *disabledTextColor;
@property (nonatomic, retain) UIColor *headerBackgroundColor;
@property (nonatomic, retain) UIColor *highlightedTextColor;
@property (nonatomic) long long inlineActionsViewStyle;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long modalTransitionStyle;
@property (nonatomic, retain) UIColor *notesTextColor;
@property (nonatomic, retain) UIColor *placeholderTextColor;
@property (nonatomic, retain) UIColor *readOnlyTextColor;
@property (nonatomic, retain) UIColor *searchBarBackgroundColor;
@property (nonatomic, retain) UIColor *sectionBackgroundColor;
@property (nonatomic, retain) UIColor *sectionIndexBackgroundColor;
@property (nonatomic, retain) UIColor *selectedCellBackgroundColor;
@property (nonatomic) long long separatorBackdropOverlayBlendMode;
@property (nonatomic, retain) UIColor *separatorColor;
@property (nonatomic) long long separatorStyle;
@property (nonatomic) bool shouldPresentInCurrentContext;
@property (nonatomic, retain) UIColor *suggestedLabelTextColor;
@property (nonatomic, retain) UIColor *suggestedValueTextColor;
@property (nonatomic, retain) UIColor *taglineTextColor;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, readonly) UIFont *textFont;
@property (nonatomic, retain) UIColor *tintColorOverride;
@property (nonatomic) long long topActionsViewStyle;
@property (nonatomic, retain) UIColor *transportBackgroundColor;
@property (nonatomic, retain) UIColor *transportBoldBackgroundColor;
@property (nonatomic, retain) UIColor *transportBorderColor;
@property (nonatomic) bool usesOpaqueBackground;
@property (nonatomic) bool usesTranslucentBarStyle;

+ (id)currentStyle;
+ (id)darkStyle;
+ (id)defaultStyle;
+ (id)faceTimeStyle;
+ (void)setCurrentStyle:(id)arg1;
+ (id)siriStyle;
+ (id)starkStyle;
+ (bool)supportsSecureCoding;
+ (id)testStyle;
+ (id)watchStyle;

- (void).cxx_destruct;
- (id)backgroundColor;
- (long long)barStyle;
- (bool)blurSupported;
- (id)boldTextFont;
- (id)contactHeaderBackgroundColor;
- (id)contactHeaderDropShadowColor;
- (id)disabledTextColor;
- (void)encodeWithCoder:(id)arg1;
- (id)headerBackgroundColor;
- (id)highlightedTextColor;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)inlineActionsViewStyle;
- (long long)keyboardAppearance;
- (long long)modalTransitionStyle;
- (id)notesTextColor;
- (id)placeholderTextColor;
- (id)readOnlyTextColor;
- (id)searchBarBackgroundColor;
- (id)sectionBackgroundColor;
- (id)sectionIndexBackgroundColor;
- (id)selectedCellBackgroundColor;
- (long long)separatorBackdropOverlayBlendMode;
- (id)separatorColor;
- (long long)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setBarStyle:(long long)arg1;
- (void)setBlurSupported:(bool)arg1;
- (void)setContactHeaderBackgroundColor:(id)arg1;
- (void)setContactHeaderDropShadowColor:(id)arg1;
- (void)setDisabledTextColor:(id)arg1;
- (void)setHeaderBackgroundColor:(id)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setInlineActionsViewStyle:(long long)arg1;
- (void)setKeyboardAppearance:(long long)arg1;
- (void)setModalTransitionStyle:(long long)arg1;
- (void)setNotesTextColor:(id)arg1;
- (void)setPlaceholderTextColor:(id)arg1;
- (void)setReadOnlyTextColor:(id)arg1;
- (void)setSearchBarBackgroundColor:(id)arg1;
- (void)setSectionBackgroundColor:(id)arg1;
- (void)setSectionIndexBackgroundColor:(id)arg1;
- (void)setSelectedCellBackgroundColor:(id)arg1;
- (void)setSeparatorBackdropOverlayBlendMode:(long long)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setSeparatorStyle:(long long)arg1;
- (void)setShouldPresentInCurrentContext:(bool)arg1;
- (void)setSuggestedLabelTextColor:(id)arg1;
- (void)setSuggestedValueTextColor:(id)arg1;
- (void)setTaglineTextColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTintColorOverride:(id)arg1;
- (void)setTopActionsViewStyle:(long long)arg1;
- (void)setTransportBackgroundColor:(id)arg1;
- (void)setTransportBoldBackgroundColor:(id)arg1;
- (void)setTransportBorderColor:(id)arg1;
- (void)setUsesOpaqueBackground:(bool)arg1;
- (void)setUsesTranslucentBarStyle:(bool)arg1;
- (bool)shouldPresentInCurrentContext;
- (id)suggestedLabelTextColor;
- (id)suggestedValueTextColor;
- (id)taglineTextColor;
- (id)textColor;
- (id)textFont;
- (id)tintColorOverride;
- (long long)topActionsViewStyle;
- (id)transportBackgroundColor;
- (id)transportBoldBackgroundColor;
- (id)transportBorderColor;
- (bool)usesOpaqueBackground;
- (bool)usesTranslucentBarStyle;

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