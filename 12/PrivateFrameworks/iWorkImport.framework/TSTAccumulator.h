<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSTAccumulator.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSTAccumulator.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSTAccumulator : NSObject <NSCopying> {
    unsigned int  _boolCount;
    unsigned int  _boolTrueCount;
    unsigned int  _dateCount;
    unsigned int  _durationCount;
    unsigned int  _errorCount;
    struct TSCEDateValue { 
        int (**_vptr$TSCEAbstractValue)(); 
        NSDate *mDate; 
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
        } mFormat; 
    }  _firstDateSeen;
    bool  _isCircularReference;
    TSULocale * _locale;
    struct TSCEValue { 
        unsigned long long mBuff[18]; 
        int mType; 
    }  _maxValue;
    struct TSCEValue { 
        unsigned long long mBuff[18]; 
        int mType; 
    }  _minValue;
    unsigned int  _numberCount;
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
    }  _numberTotalValue;
    double  _secondsToAdd;
    unsigned int  _stringCount;
    double  _totalSecsSinceReferenceDate;
}

@property (nonatomic, readonly) struct TSCEValue { unsigned long long x1[18]; int x2; } avgValue;
@property (nonatomic, readonly) unsigned int boolCount;
@property (nonatomic, readonly) unsigned int boolTrueCount;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) struct TSCEValue { unsigned long long x1[18]; int x2; } countValue;
@property (nonatomic, readonly) unsigned int dateCount;
@property (nonatomic, readonly) unsigned int durationCount;
@property (nonatomic, readonly) unsigned int errorCount;
@property (nonatomic) bool isCircularReference;
@property (nonatomic, retain) TSULocale *locale;
@property (nonatomic, readonly) struct TSCEValue { unsigned long long x1[18]; int x2; } maxValue;
@property (nonatomic, readonly) struct TSCEValue { unsigned long long x1[18]; int x2; } minValue;
@property (nonatomic, readonly) unsigned int numberCount;
@property (nonatomic, readonly) unsigned int stringCount;
@property (nonatomic, readonly) struct TSCEValue { unsigned long long x1[18]; int x2; } totalValue;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)accumulate:(id)arg1;
- (void)accumulateValue:(const struct TSCEValue { unsigned long long x1[18]; int x2; }*)arg1;
- (struct TSCEValue { unsigned long long x1[18]; int x2; })avgValue;
- (unsigned int)boolCount;
- (unsigned int)boolTrueCount;
- (void)clear;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (struct TSCEValue { unsigned long long x1[18]; int x2; })countValue;
- (unsigned int)dateCount;
- (unsigned int)durationCount;
- (unsigned int)errorCount;
- (id)initWithArchive:(const struct AccumulatorArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct CellValueArchive {} *x5; struct CellValueArchive {} *x6; struct CellValueArchive {} *x7; struct CellValueArchive {} *x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; double x15; double x16; unsigned int x17; bool x18; }*)arg1;
- (id)initWithLocale:(id)arg1;
- (bool)isCircularReference;
- (id)locale;
- (struct TSCEValue { unsigned long long x1[18]; int x2; })maxValue;
- (struct TSCEValue { unsigned long long x1[18]; int x2; })minValue;
- (unsigned int)numberCount;
- (void)saveToArchive:(struct AccumulatorArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct CellValueArchive {} *x5; struct CellValueArchive {} *x6; struct CellValueArchive {} *x7; struct CellValueArchive {} *x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; double x15; double x16; unsigned int x17; bool x18; }*)arg1;
- (void)setIsCircularReference:(bool)arg1;
- (void)setLocale:(id)arg1;
- (unsigned int)stringCount;
- (struct TSCEValue { unsigned long long x1[18]; int x2; })totalValue;
- (struct TSCEValue { unsigned long long x1[18]; int x2; })valueForType:(unsigned char)arg1;

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
