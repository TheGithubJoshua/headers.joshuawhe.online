<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSCHChartMediator.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSCHChartMediator.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSCHChartMediator : NSObject <NSCopying, TSCHUnretainedParent> {
    TSCHChartInfo * mChartInfo;
    TSUIntToIntDictionary * mGridSeriesIndexForRemoteSeriesIndex;
    <TSCHNotifyOnModify> * mObjectToNotify;
    TSUIntToIntDictionary * mRemoteSeriesIndexForGridSeriesIndex;
}

@property (nonatomic) TSCHChartInfo *chartInfo;
@property (nonatomic, readonly) int direction;
@property (nonatomic, readonly) bool isPhantom;
@property (nonatomic) <TSCHNotifyOnModify> *objectToNotify;

+ (id)propertiesThatInvalidateMediator;

- (void).cxx_destruct;
- (id)categoryLabelFormulas;
- (id)chartInfo;
- (void)clearParent;
- (id)commandSetCategoryName:(id)arg1 forCategoryIndex:(unsigned long long)arg2;
- (id)commandSetSeriesName:(id)arg1 forSeriesIndex:(unsigned long long)arg2;
- (id)commandToChangeCategoryLabelFormulas:(id)arg1;
- (id)commandToSetChartGridDirection:(int)arg1 documentRoot:(id)arg2;
- (id)commandToSetErrorBarCustomFormula:(id)arg1 seriesIndex:(unsigned long long)arg2 dataType:(int)arg3;
- (id)commandToSetNewSeriesIndex:(unsigned long long)arg1 forSeriesIndex:(unsigned long long)arg2;
- (id)commandToSetSeriesDataFormula:(id)arg1 seriesDimension:(id)arg2;
- (id)commandToSetSeriesNameFormula:(id)arg1 seriesIndex:(unsigned long long)arg2;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataFormatterForAxis:(id)arg1 documentRoot:(id)arg2;
- (id)dataFormatterForSeries:(id)arg1 index:(unsigned long long)arg2 axisType:(int)arg3 documentRoot:(id)arg4;
- (void)dealloc;
- (int)direction;
- (id)errorBarCustomFormulaForSeriesIndex:(unsigned long long)arg1 dataType:(int)arg2;
- (bool)hasCategoryReferences;
- (bool)hasTractReference;
- (id)init;
- (id)initWithChartInfo:(id)arg1;
- (void)invalidateAndSynchronizeMediator;
- (bool)isEditing;
- (bool)isPhantom;
- (void)loadFromArchive:(const struct ChartMediatorArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedField<unsigned int> { int x_5_1_1; int x_5_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_5_1_3; } x5; struct RepeatedField<unsigned int> { int x_6_1_1; int x_6_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_6_1_3; } x6; struct Reference {} *x7; }*)arg1;
- (id)objectToNotify;
- (id)p_errorBarDataForSeries:(unsigned long long)arg1 withSpec:(struct { unsigned long long x1; int (*x2)(); void *x3; })arg2 updateType:(int)arg3;
- (unsigned long long)p_gridSeriesIndexForRemoteSeriesIndex:(unsigned long long)arg1;
- (unsigned long long)p_remoteSeriesIndexForGridSeriesIndex:(unsigned long long)arg1;
- (void)pauseCalculationEngine;
- (bool)preferSeriesToValues;
- (void)resumeCalculationEngine;
- (void)saveToArchive:(struct ChartMediatorArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedField<unsigned int> { int x_5_1_1; int x_5_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_5_1_3; } x5; struct RepeatedField<unsigned int> { int x_6_1_1; int x_6_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_6_1_3; } x6; struct Reference {} *x7; }*)arg1;
- (id)seriesDataFormulaForSeriesDimension:(id)arg1;
- (id)seriesNameFormulaForSeriesIndex:(unsigned long long)arg1;
- (void)setChartInfo:(id)arg1;
- (void)setObjectToNotify:(id)arg1;
- (void)updateGridWithSpec:(struct { unsigned long long x1; int (*x2)(); void *x3; })arg1;
- (void)willModify;

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