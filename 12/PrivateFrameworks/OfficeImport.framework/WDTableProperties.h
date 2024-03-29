<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WDTableProperties.h</title>
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

/PrivateFrameworks/OfficeImport.framework/WDTableProperties.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport (257.9)
 */

@interface WDTableProperties : NSObject <NSCopying> {
    WDDocument * mDocument;
    unsigned int  mOriginal;
    struct { 
        WDStyle *baseStyle; 
        unsigned short look; 
        WDShading *shading; 
        WDBorder *topBorder; 
        WDBorder *leftBorder; 
        WDBorder *bottomBorder; 
        WDBorder *rightBorder; 
        WDBorder *insideHorizontalBorder; 
        WDBorder *insideVerticalBorder; 
        int justification; 
        int alignment; 
        long long width; 
        int widthType; 
        short indent; 
        int indentType; 
        short cellSpacing; 
        int cellSpacingType; 
        int verticalAnchor; 
        int horizontalAnchor; 
        long long verticalPosition; 
        long long horizontalPosition; 
        long long leftDistanceFromText; 
        long long topDistanceFromText; 
        long long rightDistanceFromText; 
        long long bottomDistanceFromText; 
        int deleted; 
        int edited; 
        int formattingChanged; 
        bool biDirectional; 
        unsigned short indexToAuthorIDOfDeletion; 
        unsigned short indexToAuthorIDOfEdit; 
        unsigned short indexToAuthorIDOfFormattingChange; 
        NSDate *deletionDate; 
        NSDate *editDate; 
        NSDate *formattingChangeDate; 
        unsigned int baseStyleOverridden : 1; 
        bool lookOverridden; 
        unsigned int shadingOverridden : 1; 
        unsigned int topBorderOverridden : 1; 
        unsigned int leftBorderOverridden : 1; 
        unsigned int bottomBorderOverridden : 1; 
        unsigned int rightBorderOverridden : 1; 
        unsigned int insideHorizontalBorderOverridden : 1; 
        unsigned int insideVerticalBorderOverridden : 1; 
        unsigned int justificationOverridden : 1; 
        unsigned int alignmentOverridden : 1; 
        unsigned int widthOverridden : 1; 
        unsigned int widthTypeOverridden : 1; 
        unsigned int indentOverridden : 1; 
        unsigned int indentTypeOverridden : 1; 
        unsigned int cellSpacingOverridden : 1; 
        unsigned int cellSpacingTypeOverridden : 1; 
        unsigned int verticalAnchorOverridden : 1; 
        unsigned int horizontalAnchorOverridden : 1; 
        unsigned int verticalPositionOverridden : 1; 
        unsigned int horizontalPositionOverridden : 1; 
        unsigned int leftDistanceFromTextOverridden : 1; 
        unsigned int topDistanceFromTextOverridden : 1; 
        unsigned int rightDistanceFromTextOverridden : 1; 
        unsigned int bottomDistanceFromTextOverridden : 1; 
        unsigned int deletedOverridden : 1; 
        unsigned int editedOverridden : 1; 
        unsigned int formattingChangedOverridden : 1; 
        unsigned int biDirectionalOverridden : 1; 
        unsigned int indexToAuthorIDOfDeletionOverridden : 1; 
        unsigned int indexToAuthorIDOfEditOverridden : 1; 
        unsigned int indexToAuthorIDOfFormattingChangeOverridden : 1; 
        unsigned int deletionDateOverridden : 1; 
        unsigned int editDateOverridden : 1; 
        unsigned int formattingChangeDateOverridden : 1; 
    }  mOriginalProperties;
    unsigned int  mResolved;
    unsigned int  mTracked;
    struct { 
        WDStyle *baseStyle; 
        unsigned short look; 
        WDShading *shading; 
        WDBorder *topBorder; 
        WDBorder *leftBorder; 
        WDBorder *bottomBorder; 
        WDBorder *rightBorder; 
        WDBorder *insideHorizontalBorder; 
        WDBorder *insideVerticalBorder; 
        int justification; 
        int alignment; 
        long long width; 
        int widthType; 
        short indent; 
        int indentType; 
        short cellSpacing; 
        int cellSpacingType; 
        int verticalAnchor; 
        int horizontalAnchor; 
        long long verticalPosition; 
        long long horizontalPosition; 
        long long leftDistanceFromText; 
        long long topDistanceFromText; 
        long long rightDistanceFromText; 
        long long bottomDistanceFromText; 
        int deleted; 
        int edited; 
        int formattingChanged; 
        bool biDirectional; 
        unsigned short indexToAuthorIDOfDeletion; 
        unsigned short indexToAuthorIDOfEdit; 
        unsigned short indexToAuthorIDOfFormattingChange; 
        NSDate *deletionDate; 
        NSDate *editDate; 
        NSDate *formattingChangeDate; 
        unsigned int baseStyleOverridden : 1; 
        bool lookOverridden; 
        unsigned int shadingOverridden : 1; 
        unsigned int topBorderOverridden : 1; 
        unsigned int leftBorderOverridden : 1; 
        unsigned int bottomBorderOverridden : 1; 
        unsigned int rightBorderOverridden : 1; 
        unsigned int insideHorizontalBorderOverridden : 1; 
        unsigned int insideVerticalBorderOverridden : 1; 
        unsigned int justificationOverridden : 1; 
        unsigned int alignmentOverridden : 1; 
        unsigned int widthOverridden : 1; 
        unsigned int widthTypeOverridden : 1; 
        unsigned int indentOverridden : 1; 
        unsigned int indentTypeOverridden : 1; 
        unsigned int cellSpacingOverridden : 1; 
        unsigned int cellSpacingTypeOverridden : 1; 
        unsigned int verticalAnchorOverridden : 1; 
        unsigned int horizontalAnchorOverridden : 1; 
        unsigned int verticalPositionOverridden : 1; 
        unsigned int horizontalPositionOverridden : 1; 
        unsigned int leftDistanceFromTextOverridden : 1; 
        unsigned int topDistanceFromTextOverridden : 1; 
        unsigned int rightDistanceFromTextOverridden : 1; 
        unsigned int bottomDistanceFromTextOverridden : 1; 
        unsigned int deletedOverridden : 1; 
        unsigned int editedOverridden : 1; 
        unsigned int formattingChangedOverridden : 1; 
        unsigned int biDirectionalOverridden : 1; 
        unsigned int indexToAuthorIDOfDeletionOverridden : 1; 
        unsigned int indexToAuthorIDOfEditOverridden : 1; 
        unsigned int indexToAuthorIDOfFormattingChangeOverridden : 1; 
        unsigned int deletionDateOverridden : 1; 
        unsigned int editDateOverridden : 1; 
        unsigned int formattingChangeDateOverridden : 1; 
    }  mTrackedProperties;
}

- (int)alignment;
- (id)baseStyle;
- (bool)biDirectional;
- (id)bottomBorder;
- (long long)bottomDistanceFromText;
- (short)cellSpacing;
- (int)cellSpacingType;
- (void)clearBottomBorder;
- (void)clearInsideHorizontalBorder;
- (void)clearInsideVerticalBorder;
- (void)clearLeftBorder;
- (void)clearRightBorder;
- (void)clearShading;
- (void)clearTopBorder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)deleted;
- (id)deletionDate;
- (id)description;
- (id)document;
- (id)editDate;
- (int)edited;
- (id)formattingChangeDate;
- (int)formattingChanged;
- (int)horizontalAnchor;
- (long long)horizontalPosition;
- (short)indent;
- (int)indentType;
- (unsigned short)indexToAuthorIDOfDeletion;
- (unsigned short)indexToAuthorIDOfEdit;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (id)init;
- (id)initWithDocument:(id)arg1;
- (id)insideHorizontalBorder;
- (id)insideVerticalBorder;
- (bool)isAlignmentOverridden;
- (bool)isBaseStyleOverridden;
- (bool)isBiDirectionalOverridden;
- (bool)isBottomBorderOverridden;
- (bool)isBottomDistanceFromTextOverridden;
- (bool)isCellSpacingOverridden;
- (bool)isCellSpacingTypeOverridden;
- (bool)isDeletedOverridden;
- (bool)isDeletionDateOverridden;
- (bool)isEditDateOverridden;
- (bool)isEditedOverridden;
- (bool)isFormattingChangeDateOverridden;
- (bool)isFormattingChangedOverridden;
- (bool)isHorizontalAnchorOverridden;
- (bool)isHorizontalPositionOverridden;
- (bool)isIndentOverridden;
- (bool)isIndentTypeOverridden;
- (bool)isIndexToAuthorIDOfDeletionOverridden;
- (bool)isIndexToAuthorIDOfEditOverridden;
- (bool)isIndexToAuthorIDOfFormattingChangeOverridden;
- (bool)isInsideHorizontalBorderOverridden;
- (bool)isInsideVerticalBorderOverridden;
- (bool)isJustificationOverridden;
- (bool)isLeftBorderOverridden;
- (bool)isLeftDistanceFromTextOverridden;
- (bool)isLookOverridden;
- (bool)isRightBorderOverridden;
- (bool)isRightDistanceFromTextOverridden;
- (bool)isShadingOverridden;
- (bool)isTableFloating;
- (bool)isTopBorderOverridden;
- (bool)isTopDistanceFromTextOverridden;
- (bool)isVerticalAnchorOverridden;
- (bool)isVerticalPositionOverridden;
- (bool)isWidthOverridden;
- (bool)isWidthTypeOverridden;
- (int)justification;
- (id)leftBorder;
- (long long)leftDistanceFromText;
- (unsigned short)look;
- (void)moveOrignalToTracked;
- (id)mutableBottomBorder;
- (id)mutableInsideHorizontalBorder;
- (id)mutableInsideVerticalBorder;
- (id)mutableLeftBorder;
- (id)mutableRightBorder;
- (id)mutableShading;
- (id)mutableTopBorder;
- (int)resolveMode;
- (id)rightBorder;
- (long long)rightDistanceFromText;
- (void)setAlignment:(int)arg1;
- (void)setBaseStyle:(id)arg1;
- (void)setBiDirectional:(bool)arg1;
- (void)setBottomDistanceFromText:(long long)arg1;
- (void)setCellSpacing:(short)arg1;
- (void)setCellSpacingType:(int)arg1;
- (void)setDeleted:(int)arg1;
- (void)setDeletionDate:(id)arg1;
- (void)setEditDate:(id)arg1;
- (void)setEdited:(int)arg1;
- (void)setFormattingChangeDate:(id)arg1;
- (void)setFormattingChanged:(int)arg1;
- (void)setHorizontalAnchor:(int)arg1;
- (void)setHorizontalPosition:(long long)arg1;
- (void)setIndent:(short)arg1;
- (void)setIndentType:(int)arg1;
- (void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1;
- (void)setIndexToAuthorIDOfEdit:(unsigned short)arg1;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (void)setJustification:(int)arg1;
- (void)setLeftDistanceFromText:(long long)arg1;
- (void)setLook:(unsigned short)arg1;
- (void)setResolveMode:(int)arg1;
- (void)setRightDistanceFromText:(long long)arg1;
- (void)setTopDistanceFromText:(long long)arg1;
- (void)setVerticalAnchor:(int)arg1;
- (void)setVerticalPosition:(long long)arg1;
- (void)setWidth:(long long)arg1;
- (void)setWidthType:(int)arg1;
- (id)shading;
- (id)topBorder;
- (long long)topDistanceFromText;
- (int)verticalAnchor;
- (long long)verticalPosition;
- (long long)width;
- (int)widthType;

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
