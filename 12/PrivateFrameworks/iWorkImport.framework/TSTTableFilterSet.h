<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSTTableFilterSet.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSTTableFilterSet.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSTTableFilterSet : TSPObject <TSPCopying> {
    struct vector<unsigned long, std::__1::allocator<unsigned long> > { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _filterOffsets;
    bool  _isEnabled;
    bool  _needsFormulaRewriteForImport;
    NSArray * _rules;
    int  _type;
}

@property (nonatomic, readonly) bool canAddRules;
@property (nonatomic, readonly) unsigned long long filterCount;
@property (nonatomic) int filterSetType;
@property (nonatomic) bool isEnabled;
@property (nonatomic) bool needsFormulaRewriteForImport;
@property (nonatomic, readonly) unsigned long long newFilterIndex;
@property (nonatomic, readonly) unsigned long long ruleCount;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)absoluteRuleIndicesForColumn:(struct TSUModelColumnIndex { unsigned short x1; })arg1 inTable:(id)arg2;
- (void)addRules:(id)arg1 inFilter:(unsigned long long)arg2;
- (id)baseColumnIndicesForRulesInTable:(id)arg1;
- (bool)canAddRules;
- (bool)containsFilterRulesInUIDForm;
- (id)copyByRewritingFilterRulesToGeometricFormWithContext:(id)arg1 withTableInfo:(id)arg2;
- (id)copyByRewritingFilterRulesToUidFormWithContext:(id)arg1 withTableInfo:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (void)enumerateFilterIndicesInTable:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateFiltersForColumn:(struct TSUModelColumnIndex { unsigned short x1; })arg1 withTable:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateFiltersInTable:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateRulesInFilterIndex:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)filterAtIndex:(unsigned long long)arg1 inTable:(id)arg2;
- (unsigned long long)filterCount;
- (id)filterIndicesForBaseColumn:(struct TSUModelColumnIndex { unsigned short x1; })arg1 inTable:(id)arg2;
- (int)filterSetType;
- (unsigned long long)firstFilterIndexForBaseColumn:(struct TSUModelColumnIndex { unsigned short x1; })arg1 inTable:(id)arg2;
- (unsigned long long)hash;
- (id)initWithFilterRules:(id)arg1 type:(int)arg2 context:(id)arg3;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (void)loadFromArchive:(const struct FilterSetArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TST::FilterRuleArchive> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct RepeatedField<unsigned int> { int x_6_1_1; int x_6_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_6_1_3; } x6; struct RepeatedField<bool> { int x_7_1_1; int x_7_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_7_1_3; } x7; int x8; bool x9; bool x10; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (bool)needsFormulaRewriteForImport;
- (unsigned long long)newFilterIndex;
- (unsigned long long)numberOfRulesInFilter:(unsigned long long)arg1;
- (void)p_addRules:(id)arg1 atRuleIndices:(id)arg2 inFilter:(unsigned long long)arg3 isNew:(bool)arg4;
- (bool)p_thresholdComparisonMatchesFilter:(long long)arg1 withPredicateType:(int)arg2;
- (void)removeRulesForBaseColumnIndices:(id)arg1 withTableInfo:(id)arg2;
- (id)removeRulesWithAbsoluteIndices:(id)arg1;
- (void)removeRulesWithIndices:(id)arg1 inFilter:(unsigned long long)arg2;
- (void)replaceRule:(id)arg1 atRuleIndex:(unsigned long long)arg2 inFilter:(unsigned long long)arg3;
- (bool)rowIsShown:(unsigned int)arg1 withHiddenStateExtent:(id)arg2 withCalcEngine:(id)arg3;
- (id)ruleAtAbsoluteIndex:(unsigned long long)arg1;
- (unsigned long long)ruleCount;
- (id)ruleInFilter:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)ruleIndexInFilter:(unsigned long long)arg1 matchingCell:(id)arg2;
- (void)saveToArchive:(struct FilterSetArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TST::FilterRuleArchive> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct RepeatedField<unsigned int> { int x_6_1_1; int x_6_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_6_1_3; } x6; struct RepeatedField<bool> { int x_7_1_1; int x_7_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_7_1_3; } x7; int x8; bool x9; bool x10; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setFilterSetType:(int)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setNeedsFormulaRewriteForImport:(bool)arg1;
- (id)viewColumnIndicesForRulesInTable:(id)arg1;

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
