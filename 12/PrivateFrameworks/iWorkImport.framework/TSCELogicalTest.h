<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSCELogicalTest.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSCELogicalTest.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSCELogicalTest : NSObject {
    NSDate * _date;
    struct TSCEEvaluationContext { struct TSCEEvaluationStack { struct vector<TSCEValue, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_1_2_1; struct TSCEValue {} *x_1_2_2; struct __compressed_pair<TSCEValue *, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_3_3_1; } x_1_2_3; } x_1_1_1; int x_1_1_2; } x1; id x2; id x3; bool x4; bool x5; bool x6; struct TSCEWarningReportingContext { bool x_7_1_1; bool x_7_1_2; id x_7_1_3; } x7; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_8_1_1; } x8; struct TSUCellCoord { unsigned int x_9_1_1; unsigned short x_9_1_2; bool x_9_1_3; bool x_9_1_4; } x9; } * _evaluationContext;
    TSCERegexMatcher * _matcher;
    int  _operation;
    NSString * _string;
    struct TSCENumberValue { 
        int (**_vptr$TSCEAbstractValue)(); 
        double _double; 
        int _baseUnits[1]; 
        struct TSCEFormat { 
            struct TSCEFormatStruct { 
                int mFormatType; 
                union { 
                    struct { 
                        unsigned int mCurrencyCodeIndex : 16; 
                        unsigned int mDecimalPlaces : 8; 
                        unsigned int mNegativeStyle : 3; 
                        unsigned int mShowThousandsSeparator : 1; 
                        unsigned int mUseAccountingStyle : 1; 
                    } mNumberStruct; 
                    struct { 
                        unsigned int mFractionAccuracy : 8; 
                    } mFractionFormatStruct; 
                    struct { 
                        unsigned int mBase : 8; 
                        unsigned int mBasePlaces : 8; 
                        unsigned int mBaseUseMinusSign : 1; 
                    } mBaseFormatStruct; 
                    struct { 
                        unsigned int mUseAutomaticUnits : 1; 
                        int mDurationUnitSmallest; 
                        int mDurationUnitLargest; 
                        int mDurationStyle; 
                    } mDurationFormatStruct; 
                } ; 
                TSKDateTimeFormat *_dateTimeFormat; 
                TSKCustomFormatWrapper *_customFormatWrapper; 
                TSKBooleanFormat *_booleanFormat; 
            } _formatStruct; 
            unsigned char _formatState; 
        } _format; 
        bool _isUnitlessZero; 
    }  _value;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic) /* Warning: unhandled struct encoding: '{TSCEEvaluationContext={TSCEEvaluationStack={vector<TSCEValue' */ struct *evaluationContext; /* unknown property attribute:  std::__1::equal_to<TSCECategoryRef> >=f}}}^{TSCEDependencyTracker}}^{TSCERandGenerator}@} */
@property (nonatomic, retain) TSCERegexMatcher *matcher;
@property (nonatomic, retain) NSString *string;

+ (id)logicalTestWithCriterion:(struct TSCEValue { unsigned long long x1[18]; int x2; })arg1 functionSpec:(id)arg2 evaluationContext:(struct TSCEEvaluationContext { struct TSCEEvaluationStack { struct vector<TSCEValue, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_1_2_1; struct TSCEValue {} *x_1_2_2; struct __compressed_pair<TSCEValue *, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_3_3_1; } x_1_2_3; } x_1_1_1; int x_1_1_2; } x1; id x2; id x3; bool x4; bool x5; bool x6; struct TSCEWarningReportingContext { bool x_7_1_1; bool x_7_1_2; id x_7_1_3; } x7; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_8_1_1; } x8; struct TSUCellCoord { unsigned int x_9_1_1; unsigned short x_9_1_2; bool x_9_1_3; bool x_9_1_4; } x9; }*)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)compare:(struct TSCEValue { unsigned long long x1[18]; int x2; })arg1 withContext:(struct TSCEEvaluationContext { struct TSCEEvaluationStack { struct vector<TSCEValue, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_1_2_1; struct TSCEValue {} *x_1_2_2; struct __compressed_pair<TSCEValue *, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_3_3_1; } x_1_2_3; } x_1_1_1; int x_1_1_2; } x1; id x2; id x3; bool x4; bool x5; bool x6; struct TSCEWarningReportingContext { bool x_7_1_1; bool x_7_1_2; id x_7_1_3; } x7; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_8_1_1; } x8; struct TSUCellCoord { unsigned int x_9_1_1; unsigned short x_9_1_2; bool x_9_1_3; bool x_9_1_4; } x9; }*)arg2;
- (unsigned long long)cost;
- (int)criteriaParser:(id)arg1;
- (id)date;
- (id)description;
- (struct TSCEEvaluationContext { struct TSCEEvaluationStack { struct vector<TSCEValue, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_1_2_1; struct TSCEValue {} *x_1_2_2; struct __compressed_pair<TSCEValue *, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_3_3_1; } x_1_2_3; } x_1_1_1; int x_1_1_2; } x1; id x2; id x3; bool x4; bool x5; bool x6; struct TSCEWarningReportingContext { bool x_7_1_1; bool x_7_1_2; id x_7_1_3; } x7; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_8_1_1; } x8; struct TSUCellCoord { unsigned int x_9_1_1; unsigned short x_9_1_2; bool x_9_1_3; bool x_9_1_4; } x9; }*)evaluationContext;
- (id)initWithCriterion:(struct TSCEValue { unsigned long long x1[18]; int x2; })arg1 functionSpec:(id)arg2 evaluationContext:(struct TSCEEvaluationContext { struct TSCEEvaluationStack { struct vector<TSCEValue, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_1_2_1; struct TSCEValue {} *x_1_2_2; struct __compressed_pair<TSCEValue *, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_3_3_1; } x_1_2_3; } x_1_1_1; int x_1_1_2; } x1; id x2; id x3; bool x4; bool x5; bool x6; struct TSCEWarningReportingContext { bool x_7_1_1; bool x_7_1_2; id x_7_1_3; } x7; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_8_1_1; } x8; struct TSUCellCoord { unsigned int x_9_1_1; unsigned short x_9_1_2; bool x_9_1_3; bool x_9_1_4; } x9; }*)arg3;
- (bool)isEqual:(id)arg1;
- (id)matcher;
- (void)setDate:(id)arg1;
- (void)setEvaluationContext:(struct TSCEEvaluationContext { struct TSCEEvaluationStack { struct vector<TSCEValue, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_1_2_1; struct TSCEValue {} *x_1_2_2; struct __compressed_pair<TSCEValue *, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_3_3_1; } x_1_2_3; } x_1_1_1; int x_1_1_2; } x1; id x2; id x3; bool x4; bool x5; bool x6; struct TSCEWarningReportingContext { bool x_7_1_1; bool x_7_1_2; id x_7_1_3; } x7; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_8_1_1; } x8; struct TSUCellCoord { unsigned int x_9_1_1; unsigned short x_9_1_2; bool x_9_1_3; bool x_9_1_4; } x9; }*)arg1;
- (void)setMatcher:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;

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