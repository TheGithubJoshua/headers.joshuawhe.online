<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSUFormatReferenceObject.h</title>
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

/PrivateFrameworks/TSUtility.framework/TSUFormatReferenceObject.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility (261)
 */

@interface TSUFormatReferenceObject : NSObject {
    struct { 
        int mFormatType; 
        union { 
            struct { 
                NSString *mCurrencyCode; 
                unsigned int mDecimalPlaces : 8; 
                unsigned int mNegativeStyle : 3; 
                unsigned int mShowThousandsSeparator : 1; 
                unsigned int mUseAccountingStyle : 1; 
            } mNumberFormatStruct; 
            struct { 
                unsigned int mFractionAccuracy : 8; 
            } mFractionFormatStruct; 
            struct { 
                unsigned int mBase : 8; 
                unsigned int mBasePlaces : 8; 
                unsigned int mBaseUseMinusSign : 1; 
            } mBaseFormatStruct; 
            struct { 
                unsigned int mSuppressDateFormat : 1; 
                unsigned int mSuppressTimeFormat : 1; 
                NSString *mDateTimeFormat; 
            } mDateFormatStruct; 
            struct { 
                unsigned int mUseAutomaticUnits : 1; 
                int mDurationUnitSmallest; 
                int mDurationUnitLargest; 
                int mDurationStyle; 
            } mDurationFormatStruct; 
            struct { 
                unsigned int mCustomFormatID; 
                struct { /* ? */ } *mData; 
            } mCustomFormatStruct; 
            struct { 
                double mMinimum; 
                double mMaximum; 
                double mIncrement; 
                int mDisplayFormatType; 
                unsigned int mOrientation : 2; 
                unsigned int mPosition : 2; 
            } mControlFormatStruct; 
            struct { 
                int mInitialValue; 
                unsigned int mMultipleChoiceListFormatID; 
                <TSUMultipleChoiceListChoiceProviding> *mData; 
            } mMultipleChoiceListFormatStruct; 
        } ; 
    }  mFormatStruct;
}

- (void)dealloc;
- (struct { int x1; union { struct { id x_1_2_1; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; } x_2_1_4; struct { unsigned int x_5_2_1 : 1; int x_5_2_2; int x_5_2_3; int x_5_2_4; } x_2_1_5; struct { unsigned int x_6_2_1; struct { /* ? */ } *x_6_2_2; } x_2_1_6; struct { double x_7_2_1; double x_7_2_2; double x_7_2_3; int x_7_2_4; unsigned int x_7_2_5 : 2; unsigned int x_7_2_6 : 2; } x_2_1_7; struct { int x_8_2_1; unsigned int x_8_2_2; id x_8_2_3; } x_2_1_8; } x2; })getFormatStruct;
- (id)init;
- (id)initWithTSUFormatFormatStruct:(struct { int x1; union { struct { id x_1_2_1; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; } x_2_1_4; struct { unsigned int x_5_2_1 : 1; int x_5_2_2; int x_5_2_3; int x_5_2_4; } x_2_1_5; struct { unsigned int x_6_2_1; struct { /* ? */ } *x_6_2_2; } x_2_1_6; struct { double x_7_2_1; double x_7_2_2; double x_7_2_3; int x_7_2_4; unsigned int x_7_2_5 : 2; unsigned int x_7_2_6 : 2; } x_2_1_7; struct { int x_8_2_1; unsigned int x_8_2_2; id x_8_2_3; } x_2_1_8; } x2; })arg1;
- (bool)isEqual:(id)arg1;

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
