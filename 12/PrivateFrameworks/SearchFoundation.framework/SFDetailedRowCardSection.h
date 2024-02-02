<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SFDetailedRowCardSection.h</title>
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

/PrivateFrameworks/SearchFoundation.framework/SFDetailedRowCardSection.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation (213.5.3)
 */

@interface SFDetailedRowCardSection : SFCardSection <NSCopying, NSSecureCoding, SFDetailedRowCardSection> {
    SFActionItem * _action;
    SFColor * _backgroundColor;
    SFButton * _button;
    bool  _canBeHidden;
    NSArray * _descriptions;
    SFRichText * _footnote;
    struct { 
        unsigned int canBeHidden : 1; 
        unsigned int hasTopPadding : 1; 
        unsigned int hasBottomPadding : 1; 
        unsigned int separatorStyle : 1; 
        unsigned int preventThumbnailImageScaling : 1; 
        unsigned int isSecondaryTitleDetached : 1; 
    }  _has;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    bool  _isSecondaryTitleDetached;
    bool  _preventThumbnailImageScaling;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    SFFormattedText * _secondaryTitle;
    SFImage * _secondaryTitleImage;
    int  _separatorStyle;
    SFImage * _thumbnail;
    SFRichText * _title;
    SFFormattedText * _trailingBottomText;
    SFFormattedText * _trailingMiddleText;
    SFFormattedText * _trailingTopText;
    NSString * _type;
}

@property (nonatomic, retain) SFActionItem *action;
@property (nonatomic, retain) SFColor *backgroundColor;
@property (nonatomic, retain) SFButton *button;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *descriptions;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) SFRichText *footnote;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideDivider;
@property (nonatomic) bool isSecondaryTitleDetached;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFCard *nextCard;
@property (nonatomic, copy) NSArray *parameterKeyPaths;
@property (nonatomic) bool preventThumbnailImageScaling;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (nonatomic, retain) SFFormattedText *secondaryTitle;
@property (nonatomic, retain) SFImage *secondaryTitleImage;
@property (nonatomic) int separatorStyle;
@property (readonly) Class superclass;
@property (nonatomic, retain) SFImage *thumbnail;
@property (nonatomic, retain) SFRichText *title;
@property (nonatomic, retain) SFFormattedText *trailingBottomText;
@property (nonatomic, retain) SFFormattedText *trailingMiddleText;
@property (nonatomic, retain) SFFormattedText *trailingTopText;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) SFUserReportRequest *userReportRequest;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)backgroundColor;
- (id)button;
- (bool)canBeHidden;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptions;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)footnote;
- (bool)hasBottomPadding;
- (bool)hasCanBeHidden;
- (bool)hasHasBottomPadding;
- (bool)hasHasTopPadding;
- (bool)hasIsSecondaryTitleDetached;
- (bool)hasPreventThumbnailImageScaling;
- (bool)hasSeparatorStyle;
- (bool)hasTopPadding;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isSecondaryTitleDetached;
- (id)jsonData;
- (bool)preventThumbnailImageScaling;
- (id)punchoutOptions;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (id)secondaryTitle;
- (id)secondaryTitleImage;
- (int)separatorStyle;
- (void)setAction:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setDescriptions:(id)arg1;
- (void)setFootnote:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setIsSecondaryTitleDetached:(bool)arg1;
- (void)setPreventThumbnailImageScaling:(bool)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSecondaryTitle:(id)arg1;
- (void)setSecondaryTitleImage:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTrailingBottomText:(id)arg1;
- (void)setTrailingMiddleText:(id)arg1;
- (void)setTrailingTopText:(id)arg1;
- (void)setType:(id)arg1;
- (id)thumbnail;
- (id)title;
- (id)trailingBottomText;
- (id)trailingMiddleText;
- (id)trailingTopText;
- (id)type;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUIViewClass;

// Image: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport

- (bool)_SUICKPInteractiveCardSectionViewController_shouldHandlePunchout;
- (bool)_SUICKPInteractiveCardSectionViewController_shouldRenderButtonOverlay;

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