<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSCHChartAxis.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSCHChartAxis.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSCHChartAxis : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHStyleOwning, TSCHUnretainedParent> {
    TSUFastReadInvalidatingCache * mAnalysisCache;
    TSCHChartAxisID * mAxisID;
    TSCHChartModel * mChartModel;
    TSUFastReadInvalidatingCache * mInterceptCache;
    TSUFastReadInvalidatingCache * mMultiDataSetAnalysisCache;
    <TSCHStyleActAlike> * mNonStyle;
    unsigned long long  mNonStyleIndex;
    TSUWeakReference * mNonTransientCounterpart;
    <TSCHStyleActAlike> * mStyle;
    unsigned long long  mStyleIndex;
}

@property (nonatomic, readonly) TSCHChartAxisID *axisID;
@property (nonatomic, readonly) int currentAxisScaleSetting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isCategory;
@property (readonly) bool isRangeContinuous;
@property (nonatomic, readonly) TSULocale *locale;
@property (nonatomic, readonly) TSCHChartModel *model;
@property (nonatomic, readonly) NSArray *referenceLines;
@property (readonly) Class superclass;
@property (readonly) bool supportsReferenceLines;

+ (id)axisForInfo:(id)arg1;
+ (id)defaultNumberFormat;
+ (id)paragraphStyleForLabelsFontForInfo:(id)arg1;
+ (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })sizeOfLabelsForInfo:(id)arg1 onlyHeight:(bool)arg2;
+ (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })sizeOfSeriesLabelsForInfo:(id)arg1;
+ (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })sizeOfSeriesLabelsForInfo:(id)arg1 onlyHeight:(bool)arg2;
+ (unsigned char)styleOwnerPathType;

- (void)adjustMinMaxForDataRangeInAnalysis:(id)arg1;
- (int)adjustedNumberFormatType;
- (id)analysis;
- (id)axisID;
- (unsigned long long)axisIndex;
- (double)axisInterceptPosition;
- (id)chartInfo;
- (void)clearParent;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1;
- (id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)arg1;
- (id)context;
- (int)currentAxisScaleSetting;
- (double)currentDataSetModelAverage;
- (double)currentDataSetModelMax;
- (double)currentDataSetModelMedian;
- (double)currentDataSetModelMin;
- (id)customFormatForGridValueType:(int)arg1;
- (id)dataFormatter;
- (id)dataFormatterForSeries:(id)arg1 index:(unsigned long long)arg2;
- (void)dealloc;
- (id)defaultProperties;
- (int)defaultPropertyForGeneric:(int)arg1;
- (id)description;
- (double)doubleAxisToModelValue:(double)arg1;
- (double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2;
- (id)drawableInfo;
- (bool)editableFormatForValueStrings;
- (float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2;
- (id)formattedStringForAxisValue:(id)arg1;
- (id)formattedStringForSeries:(id)arg1 index:(unsigned long long)arg2;
- (id)formattedStringForSeries:(id)arg1 index:(unsigned long long)arg2 multiDataSetIndex:(unsigned long long)arg3;
- (id)g_genericToDefaultPropertyMap;
- (id)g_operationPropertyNameForGenericProperty:(int)arg1;
- (id)gridValueAxisToModelValue:(double)arg1;
- (int)gridValueType;
- (bool)hasCustomFormatForGridValueType:(int)arg1;
- (bool)hasFloatValueForProperty:(int)arg1 value:(float*)arg2;
- (bool)hasIntValueForProperty:(int)arg1 value:(int*)arg2;
- (bool)hasObjectValueForProperty:(int)arg1 value:(id*)arg2;
- (unsigned long long)indexForSelectionPathLabelIndex:(unsigned long long)arg1;
- (id)initWithAxisID:(id)arg1 model:(id)arg2;
- (id)inspectorStringForSeries:(id)arg1 index:(unsigned long long)arg2 value:(id)arg3;
- (int)intValueForProperty:(int)arg1 defaultValue:(int)arg2;
- (id)interceptAnalysis;
- (double)interceptForAxis:(id)arg1;
- (void)invalidateMultiDataSetAnalysis;
- (void)invalidateTransientState;
- (bool)isCategory;
- (bool)isRangeContinuous;
- (id)locale;
- (id)majorGridLocations;
- (double)max;
- (double)min;
- (id)minorGridLocations;
- (id)model;
- (double)modelMax;
- (double)modelMin;
- (id)multiDataSetAnalysis;
- (unsigned long long)nonStyleIndex;
- (id)nonstyle;
- (id)objectValueForProperty:(int)arg1;
- (id)operationPropertyNameFromGenericProperty:(int)arg1;
- (id)p_axisAnalysisFromCurrentModel;
- (id)p_axisDataFormatterFromCurrentModel;
- (int)p_axisGridValueType;
- (unsigned long long)p_count;
- (id)p_dataFormatterForSeries:(id)arg1 index:(unsigned long long)arg2 onlyForValidValue:(bool)arg3;
- (id)p_fixupNegativeStyleForDataFormatter:(id)arg1;
- (id)p_genericToDefaultPropertyMap;
- (id)p_interceptAnalysisFromCurrentModel;
- (id)p_multiDataAxisAnalysisFromCurrentModel;
- (id)p_nonTransientCounterpart;
- (unsigned long long)p_rangeCount;
- (void)p_setupMultiDataSetAnalysisCacheIfNeeded;
- (void)propertiesWereMutated:(id)arg1;
- (double)range;
- (id)referenceLineAtIndex:(unsigned long long)arg1;
- (id)referenceLineWithUUID:(id)arg1;
- (id)referenceLines;
- (unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)arg1;
- (unsigned long long)selectionPathLabelIndexForMultiDataSetIndex:(unsigned long long)arg1;
- (void)setNonStyle:(id)arg1 index:(unsigned long long)arg2;
- (void)setStyle:(id)arg1 index:(unsigned long long)arg2;
- (bool)shouldAnalyzeAxisValue:(double)arg1;
- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })sizeOfLabelsForInfo:(id)arg1 enumerator:(id)arg2 onlyHeight:(bool)arg3;
- (int)specificPropertyForGeneric:(int)arg1;
- (id)style;
- (unsigned long long)styleIndex;
- (bool)supportsFormattedStringForInvalidValue;
- (bool)supportsReferenceLines;
- (id)swapTuplesForMutations:(id)arg1 forImport:(bool)arg2;
- (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
- (double)unitSpaceCenterValueForSeries:(id)arg1 index:(unsigned long long)arg2;
- (double)unitSpaceCenterValueForValue:(double)arg1;
- (double)unitSpaceCenterValueHalfOffset;
- (double*)unitSpaceCenterValuesForSeries:(id)arg1 indexes:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (double)unitSpaceHalfOffsetForCountSpaceHalfOffset;
- (double)unitSpaceValueForCountSpaceValue:(double)arg1;
- (double)unitSpaceValueForCountSpaceValue:(double)arg1 min:(double)arg2 count:(double)arg3;
- (double)unitSpaceValueForDataSpaceValue:(double)arg1;
- (double)unitSpaceValueForDataSpaceValue:(double)arg1 min:(double)arg2 max:(double)arg3;
- (double)unitSpaceValueForDataSpaceValue:(double)arg1 series:(id)arg2 index:(unsigned long long)arg3;
- (double)unitSpaceValueForSeries:(id)arg1 index:(unsigned long long)arg2;
- (double)unitSpaceValueForSeries:(id)arg1 index:(unsigned long long)arg2 min:(double)arg3 max:(double)arg4;
- (double*)unitSpaceValuesForSeries:(id)arg1 indexes:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (double*)unitSpaceValuesForSeries:(id)arg1 indexes:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 min:(double)arg3 max:(double)arg4;
- (void)updateAxisDateInterceptInAnalysis:(id)arg1;
- (void)updateGridValueTypeInterceptInAnalysis:(id)arg1;
- (void)updateMinMaxGridLocationsInAnalysis:(id)arg1;
- (void)updateModelAxisAnalysis:(id)arg1;
- (void)updateMultiDataModelAxisAnalysis:(id)arg1;
- (id)valueForFormattedString:(id)arg1;
- (id)valueForProperty:(int)arg1;

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
