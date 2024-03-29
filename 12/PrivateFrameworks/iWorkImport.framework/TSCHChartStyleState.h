<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSCHChartStyleState.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSCHChartStyleState.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSCHChartStyleState : TSCHPropertyValueStorageContainer <NSCopying> {
    TSCHChartStyleState * _themeChartStyleState;
}

@property (nonatomic, copy) NSMutableArray *categoryAxisStyles;
@property (nonatomic, retain) TSCHChartStyle *chartStyle;
@property (nonatomic, retain) TSCHLegendStyle *legendStyle;
@property (nonatomic, copy) NSMutableArray *paragraphStyles;
@property (nonatomic, copy) NSMutableDictionary *referenceLineStyles;
@property (nonatomic, retain) TSCHReferenceLineStyle *referenceLineThemeStyle;
@property (nonatomic, copy) NSMutableArray *seriesPrivateStyles;
@property (nonatomic, copy) NSMutableArray *seriesThemeStyles;
@property (nonatomic, readonly, retain) TSCHChartStyleState *stateForParentStyleLookup;
@property (nonatomic, retain) TSCHChartStyleState *themeChartStyleState;
@property (nonatomic, copy) NSMutableArray *valueAxisStyles;

+ (id)styleState;

- (void).cxx_destruct;
- (id)allStyles;
- (id)applyStyleSwapTuple:(id)arg1;
- (id)applyStyleSwapTuple:(id)arg1 ignoringBeforeValues:(bool)arg2;
- (id)categoryAxisStyles;
- (id)chartStyle;
- (void)checkParagraphStyleIndicies;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)enumerateSemanticTagsAndUsagesWithPropertySetType:(long long)arg1 usingBlock:(id /* block */)arg2;
- (id)fallbackSemanticTagForSemanticTag:(id)arg1;
- (id)fallbackSemanticUsageForSemanticUsage:(id)arg1;
- (id)legendStyle;
- (id)listOfStyles;
- (bool)otherStateIsEquivalent:(id)arg1;
- (bool)otherStateIsEquivalent:(id)arg1 ignoringSeriesThemeStyles:(bool)arg2;
- (void)p_addParagraphStyleForSemanticUsage:(id)arg1 mappedStyle:(id)arg2 mappedState:(id)arg3 fromPriorStyle:(id)arg4 andPriorState:(id)arg5 maintainPriorIndex:(bool)arg6 withStyleMapper:(id)arg7 withStylesheet:(id)arg8 toNewParagraphStylesTable:(id)arg9 andStyleMap:(id)arg10;
- (id)p_formatSemanticTag:(id)arg1;
- (id)p_locationOfStyleInNetwork:(id)arg1;
- (id)p_propertySetWithPropertySetType:(long long)arg1 forStyle:(id)arg2;
- (bool)paragraphStyleIndexesAreValid;
- (id)paragraphStyles;
- (id)referenceLineStyles;
- (id)referenceLineThemeStyle;
- (void)replaceAllInstancesOfStyle:(id)arg1 withStyle:(id)arg2;
- (void)replaceStylesUsingBlock:(id /* block */)arg1;
- (id)semanticTagToStyleMap;
- (id)semanticUsagesOfParagraphStylePropertiesWithPropertySetType:(long long)arg1;
- (id)semanticUsagesToParagraphStyleMapWithPropertySetType:(long long)arg1 filteredBySemanticUsages:(id)arg2;
- (id)seriesPrivateStyles;
- (id)seriesThemeStyles;
- (void)setCategoryAxisStyles:(id)arg1;
- (void)setChartStyle:(id)arg1;
- (void)setLegendStyle:(id)arg1;
- (void)setParagraphStyles:(id)arg1;
- (void)setReferenceLineStyles:(id)arg1;
- (void)setReferenceLineThemeStyle:(id)arg1;
- (void)setSeriesPrivateStyles:(id)arg1;
- (void)setSeriesThemeStyles:(id)arg1;
- (void)setStyle:(id)arg1 withSemanticTag:(id)arg2;
- (void)setThemeChartStyleState:(id)arg1;
- (void)setValueAxisStyles:(id)arg1;
- (id)stateByAdoptingStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)stateByExpandingForSeriesCount:(unsigned long long)arg1 andReferenceLineCount:(unsigned long long)arg2;
- (id)stateByExpandingReferenceLineStylesForCount:(unsigned long long)arg1;
- (id)stateByExpandingSeriesStylesForSeriesCount:(unsigned long long)arg1;
- (id)stateByOptimizingParagraphStyleTableWithStylesheet:(id)arg1;
- (id)stateByOptimizingParagraphStyleTableWithStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)stateByReducingReferenceLineStyles;
- (id)stateByReducingSeriesPrivateStyles;
- (id)stateByReducingSeriesPrivateStylesAndReferenceLineStyles;
- (id)stateForParentStyleLookup;
- (id)styleForSemanticTag:(id)arg1;
- (id)styleLookupSemanticTagForSemanticTag:(id)arg1;
- (id)styleNetworkDescription;
- (id)styleToSemanticTagsMap;
- (id)styleToUseForSemanticTag:(id)arg1;
- (id)stylesheet;
- (id)themeChartStyleState;
- (id)usesOfParagraphStylePropertiesWithPropertySetType:(long long)arg1;
- (id)valueAxisStyles;

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
