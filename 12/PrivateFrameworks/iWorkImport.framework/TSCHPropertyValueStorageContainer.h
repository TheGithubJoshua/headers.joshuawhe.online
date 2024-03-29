<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSCHPropertyValueStorageContainer.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSCHPropertyValueStorageContainer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSCHPropertyValueStorageContainer : NSObject {
    NSMutableArray * mCategoryAxisNonStyles;
    NSMutableArray * mCategoryAxisStyles;
    <TSCHStyleActAlike> * mChartNonStyle;
    <TSCHStyleActAlike> * mChartStyle;
    <TSCHStyleActAlike> * mLegendNonStyle;
    <TSCHStyleActAlike> * mLegendStyle;
    NSMutableArray * mParagraphStyles;
    NSMutableDictionary * mReferenceLineNonStyles;
    NSMutableDictionary * mReferenceLineStyles;
    <TSCHStyleActAlike> * mReferenceLineThemeStyle;
    NSMutableArray * mSeriesNonStyles;
    NSMutableArray * mSeriesPrivateStyles;
    NSMutableArray * mSeriesThemeStyles;
    NSMutableArray * mValueAxisNonStyles;
    NSMutableArray * mValueAxisStyles;
}

@property (setter=p_setCategoryAxisNonStyles:, nonatomic, copy) NSArray *p_categoryAxisNonStyles;
@property (setter=p_setCategoryAxisStyles:, nonatomic, copy) NSArray *p_categoryAxisStyles;
@property (setter=p_setChartNonStyle:, nonatomic, retain) <TSCHStyleActAlike> *p_chartNonStyle;
@property (setter=p_setChartStyle:, nonatomic, retain) <TSCHStyleActAlike> *p_chartStyle;
@property (setter=p_setLegendNonStyle:, nonatomic, retain) <TSCHStyleActAlike> *p_legendNonStyle;
@property (setter=p_setLegendStyle:, nonatomic, retain) <TSCHStyleActAlike> *p_legendStyle;
@property (setter=p_setMutableCategoryAxisNonStyles:, nonatomic, retain) NSMutableArray *p_mutableCategoryAxisNonStyles;
@property (setter=p_setMutableCategoryAxisStyles:, nonatomic, retain) NSMutableArray *p_mutableCategoryAxisStyles;
@property (setter=p_setMutableParagraphStyles:, nonatomic, retain) NSMutableArray *p_mutableParagraphStyles;
@property (setter=p_setMutableRefLineNonStyles:, nonatomic, retain) NSMutableDictionary *p_mutableRefLineNonStyles;
@property (setter=p_setMutableRefLineStyles:, nonatomic, retain) NSMutableDictionary *p_mutableRefLineStyles;
@property (setter=p_setMutableSeriesNonStyles:, nonatomic, retain) NSMutableArray *p_mutableSeriesNonStyles;
@property (setter=p_setMutableSeriesPrivateStyles:, nonatomic, retain) NSMutableArray *p_mutableSeriesPrivateStyles;
@property (setter=p_setMutableSeriesThemeStyles:, nonatomic, retain) NSMutableArray *p_mutableSeriesThemeStyles;
@property (setter=p_setMutableValueAxisNonStyles:, nonatomic, retain) NSMutableArray *p_mutableValueAxisNonStyles;
@property (setter=p_setMutableValueAxisStyles:, nonatomic, retain) NSMutableArray *p_mutableValueAxisStyles;
@property (setter=p_setParagraphStyles:, nonatomic, copy) NSArray *p_paragraphStyles;
@property (setter=p_setReferenceLineNonStyles:, nonatomic, copy) NSDictionary *p_referenceLineNonStyles;
@property (setter=p_setReferenceLineStyles:, nonatomic, copy) NSDictionary *p_referenceLineStyles;
@property (setter=p_setReferenceLineThemeStyle:, nonatomic, retain) <TSCHStyleActAlike> *p_referenceLineThemeStyle;
@property (setter=p_setSeriesNonStyles:, nonatomic, copy) NSArray *p_seriesNonStyles;
@property (setter=p_setSeriesPrivateStyles:, nonatomic, copy) NSArray *p_seriesPrivateStyles;
@property (setter=p_setSeriesThemeStyles:, nonatomic, copy) NSArray *p_seriesThemeStyles;
@property (setter=p_setValueAxisNonStyles:, nonatomic, copy) NSArray *p_valueAxisNonStyles;
@property (setter=p_setValueAxisStyles:, nonatomic, copy) NSArray *p_valueAxisStyles;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (void).cxx_destruct;
- (void)loadFromArchive:(const struct PropertyValueStorageContainerArchive { int (**x1)(); struct ExtensionSet { struct Arena {} *x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; union AllocatedData { struct KeyValue {} *x_4_2_1; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > {} *x_4_2_2; } x_2_1_4; } x2; struct InternalMetadataWithArena { void *x_3_1_1; } x3; struct HasBits<1> { unsigned int x_4_1_1[1]; } x4; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_5_1_1; } x5; struct Reference {} *x6; struct Reference {} *x7; struct Reference {} *x8; struct Reference {} *x9; struct SparseReferenceArray {} *x10; struct SparseReferenceArray {} *x11; struct SparseReferenceArray {} *x12; struct SparseReferenceArray {} *x13; struct SparseReferenceArray {} *x14; struct SparseReferenceArray {} *x15; struct SparseReferenceArray {} *x16; struct SparseReferenceArray {} *x17; }*)arg1 unarchiver:(id)arg2;
- (id)p_categoryAxisNonStyles;
- (id)p_categoryAxisStyles;
- (id)p_chartNonStyle;
- (id)p_chartStyle;
- (id)p_legendNonStyle;
- (id)p_legendStyle;
- (id)p_mutableCategoryAxisNonStyles;
- (id)p_mutableCategoryAxisStyles;
- (id)p_mutableParagraphStyles;
- (id)p_mutableRefLineNonStyles;
- (id)p_mutableRefLineStyles;
- (id)p_mutableSeriesNonStyles;
- (id)p_mutableSeriesPrivateStyles;
- (id)p_mutableSeriesThemeStyles;
- (id)p_mutableValueAxisNonStyles;
- (id)p_mutableValueAxisStyles;
- (id)p_paragraphStyles;
- (id)p_referenceLineNonStyles;
- (id)p_referenceLineStyles;
- (id)p_referenceLineThemeStyle;
- (id)p_seriesNonStyles;
- (id)p_seriesPrivateStyles;
- (id)p_seriesThemeStyles;
- (void)p_setCategoryAxisNonStyles:(id)arg1;
- (void)p_setCategoryAxisStyles:(id)arg1;
- (void)p_setChartNonStyle:(id)arg1;
- (void)p_setChartStyle:(id)arg1;
- (void)p_setLegendNonStyle:(id)arg1;
- (void)p_setLegendStyle:(id)arg1;
- (void)p_setMutableCategoryAxisNonStyles:(id)arg1;
- (void)p_setMutableCategoryAxisStyles:(id)arg1;
- (void)p_setMutableParagraphStyles:(id)arg1;
- (void)p_setMutableRefLineNonStyles:(id)arg1;
- (void)p_setMutableRefLineStyles:(id)arg1;
- (void)p_setMutableSeriesNonStyles:(id)arg1;
- (void)p_setMutableSeriesPrivateStyles:(id)arg1;
- (void)p_setMutableSeriesThemeStyles:(id)arg1;
- (void)p_setMutableValueAxisNonStyles:(id)arg1;
- (void)p_setMutableValueAxisStyles:(id)arg1;
- (void)p_setParagraphStyles:(id)arg1;
- (void)p_setReferenceLineNonStyles:(id)arg1;
- (void)p_setReferenceLineStyles:(id)arg1;
- (void)p_setReferenceLineThemeStyle:(id)arg1;
- (void)p_setSeriesNonStyles:(id)arg1;
- (void)p_setSeriesPrivateStyles:(id)arg1;
- (void)p_setSeriesThemeStyles:(id)arg1;
- (void)p_setValueAxisNonStyles:(id)arg1;
- (void)p_setValueAxisStyles:(id)arg1;
- (id)p_valueAxisNonStyles;
- (id)p_valueAxisStyles;
- (void)saveToArchive:(struct PropertyValueStorageContainerArchive { int (**x1)(); struct ExtensionSet { struct Arena {} *x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; union AllocatedData { struct KeyValue {} *x_4_2_1; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > {} *x_4_2_2; } x_2_1_4; } x2; struct InternalMetadataWithArena { void *x_3_1_1; } x3; struct HasBits<1> { unsigned int x_4_1_1[1]; } x4; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_5_1_1; } x5; struct Reference {} *x6; struct Reference {} *x7; struct Reference {} *x8; struct Reference {} *x9; struct SparseReferenceArray {} *x10; struct SparseReferenceArray {} *x11; struct SparseReferenceArray {} *x12; struct SparseReferenceArray {} *x13; struct SparseReferenceArray {} *x14; struct SparseReferenceArray {} *x15; struct SparseReferenceArray {} *x16; struct SparseReferenceArray {} *x17; }*)arg1 archiver:(id)arg2;

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
