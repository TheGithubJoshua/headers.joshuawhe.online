<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PDSlideBase.h</title>
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

/PrivateFrameworks/OfficeImport.framework/PDSlideBase.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport (257.9)
 */

@interface PDSlideBase : NSObject {
    PDAnimation * mAnimation;
    OADBackground * mBackground;
    OADTableStyle * mDefaultTableStyle;
    NSArray * mDrawables;
    unsigned int  mIsDoneWithContent;
    unsigned int  mIsHidden;
    NSString * mName;
    PDTransition * mPpt2011Transition;
    unsigned int  mSlideId;
    PDTransition * mTransition;
}

@property (nonatomic) unsigned int slideId;

+ (int)inheritedPlaceholderType:(int)arg1;

- (void)addSlideNumberPlaceholder:(id)arg1;
- (id)animation;
- (id)background;
- (id)colorMap;
- (id)colorScheme;
- (void)dealloc;
- (id)defaultTableStyle;
- (id)defaultTextListStyle;
- (id)defaultTheme;
- (id)description;
- (void)doneWithContent;
- (id)drawables;
- (id)drawingTheme;
- (id)fontScheme;
- (void)generatePpt9Animations:(id)arg1;
- (bool)hasPpt10Animations;
- (bool)hasPpt9Animations;
- (id)inheritedTextStyleForPlaceholderType:(int)arg1;
- (id)init;
- (bool)isHidden;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)name;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)parentSlideBase;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(bool)arg4;
- (id)parentTextStyleForTables;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(bool)arg3;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 useBaseTypeMatch:(bool)arg3 overrideIndex:(bool)arg4;
- (id)placeholders;
- (id)ppt2011Transition;
- (void)removeUnnecessaryOverrides;
- (void)setBackground:(id)arg1;
- (void)setDefaultTableStyle:(id)arg1;
- (void)setDrawables:(id)arg1;
- (void)setDrawablesNoHierarchy:(id)arg1;
- (void)setIsHidden:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPpt2011Transition:(id)arg1;
- (void)setPpt9AnimationDataForCacheItem:(id)arg1 order:(int)arg2 state:(id)arg3;
- (void)setSlideId:(unsigned int)arg1;
- (void)setTransition:(id)arg1;
- (void)setUpDrawablePropertyHierarchy;
- (void)setUpPropertyHierarchyForDrawable:(id)arg1;
- (void)setUpPropertyHierarchyForDrawablePreservingEffectiveValues:(id)arg1;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (unsigned int)slideId;
- (id)styleMatrix;
- (id)transition;

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
