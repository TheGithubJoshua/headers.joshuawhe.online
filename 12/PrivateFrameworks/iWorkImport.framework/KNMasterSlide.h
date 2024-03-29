<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>KNMasterSlide.h</title>
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

/PrivateFrameworks/iWorkImport.framework/KNMasterSlide.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface KNMasterSlide : KNAbstractSlide <TSKTransformableObject> {
    NSArray * _bodyListStyles;
    NSArray * _bodyParagraphStyles;
    bool  _calculatedHasBug16580905;
    KNClassicStylesheetRecord * _classicStylesheetRecord;
    bool  _hasBug16580905;
    NSString * _name;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _objectRect;
    bool  _slideObjectsLayerWithMaster;
    NSString * _thumbnailTextForBodyPlaceholder;
    NSString * _thumbnailTextForTitlePlaceholder;
}

@property (nonatomic, copy) NSArray *bodyListStyles;
@property (nonatomic, copy) NSArray *bodyParagraphStyles;
@property (nonatomic, readonly) KNClassicStylesheetRecord *classicStylesheetRecord;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } objectRect;
@property (nonatomic) bool slideObjectsLayerWithMaster;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *thumbnailTextForBodyPlaceholder;
@property (nonatomic, copy) NSString *thumbnailTextForTitlePlaceholder;

+ (bool)hasLocalizedThumbnailText;
+ (void)initialize;
+ (id)masterGuideColor;
+ (void)mastersNotEquivalentWithFile:(id)arg1 lineNumber:(long long)arg2 reason:(id)arg3;
+ (id)p_defaultMasterGuideColor;
+ (void)setMasterGuideColor:(id)arg1;

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (void)addBuild:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)bodyListStyles;
- (id)bodyParagraphStyles;
- (unsigned long long)buildChunkCount;
- (id)buildChunks;
- (unsigned long long)buildCount;
- (id)builds;
- (id)childEnumerator;
- (id)classicStylesheetRecord;
- (bool)containsProperty:(int)arg1;
- (id)description;
- (void)flushClassicStylesheetRecord;
- (void)generateObjectPlaceholderIfNecessary;
- (bool)hasBug16580905;
- (id)imagePlaceholders;
- (id)initWithSlideNode:(id)arg1 context:(id)arg2;
- (void)insertBuildChunk:(id)arg1 afterChunk:(id)arg2 generateIdentifier:(bool)arg3;
- (int)intValueForProperty:(int)arg1;
- (bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (bool)isMasterSlide;
- (bool)isObjectVisible;
- (bool)isThemeContent;
- (void)loadFromUnarchiver:(id)arg1;
- (id)name;
- (id)nonPlaceholderObjects;
- (id)objectForProperty:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })objectRect;
- (id)p_defaultTagForDrawable:(id)arg1;
- (id)p_defaultThumbnailTextForPlaceholder:(id)arg1;
- (id)packageLocator;
- (id)referencedStyles;
- (void)removeBuild:(id)arg1;
- (void)removeBuildChunk:(id)arg1 rollbackGeneratedIdentifier:(bool)arg2;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setBodyListStyles:(id)arg1;
- (void)setBodyParagraphStyles:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObjectRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSlideObjectsLayerWithMaster:(bool)arg1;
- (void)setThumbnailTextForBodyPlaceholder:(id)arg1;
- (void)setThumbnailTextForTitlePlaceholder:(id)arg1;
- (bool)slideObjectsLayerWithMaster;
- (bool)supportsBuilds;
- (id)tagsforNewPlaceholderInfos:(id)arg1;
- (id)thumbnailTextForBodyPlaceholder;
- (id)thumbnailTextForPlaceholder:(id)arg1;
- (id)thumbnailTextForTitlePlaceholder;
- (void)updatePlaceholderText;
- (void)wasAddedToTheme:(id)arg1;
- (void)willBeAddedToTheme:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

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
