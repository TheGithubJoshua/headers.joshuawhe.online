<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PptTextBlock.h</title>
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

/PrivateFrameworks/OfficeImport.framework/PptTextBlock.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport (257.9)
 */

@interface PptTextBlock : NSObject {
    NSMutableArray * mBookmarks;
    NSMutableArray * mHyperlinks;
    NSMutableArray * mMetaCharacterFields;
    struct PptTextBlockSpecialInfoAtom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; bool x6; struct ChVector<PptSpecialInfoRun *> { struct PptSpecialInfoRun {} **x_7_1_1; struct PptSpecialInfoRun {} **x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; } x7; } * mSpecialInfo;
    struct PptTextBlockStylingAtom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; bool x6; struct ChVector<PptParaRun *> { struct PptParaRun {} **x_7_1_1; struct PptParaRun {} **x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; } x7; struct ChVector<PptCharRun *> { struct PptCharRun {} **x_8_1_1; struct PptCharRun {} **x_8_1_2; unsigned int x_8_1_3; unsigned int x_8_1_4; unsigned int x_8_1_5; } x8; unsigned int x9; } * mStyleText;
    NSMutableString * mText;
    struct PptTextHeaderAtom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; bool x6; int x7; } * mTextHeader;
    struct PptTextRulerAtom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; bool x6; struct ChVector<PptTab> {} *x7; unsigned short x8[5]; unsigned short x9[5]; unsigned short x10; } * mTextRuler;
}

- (id)bookmarks;
- (struct PptCharRun { int x1; struct PptCharProperty { struct { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 1; unsigned int x_1_2_7 : 1; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; unsigned int x_1_2_10 : 1; unsigned int x_1_2_11 : 1; unsigned int x_1_2_12 : 1; unsigned int x_1_2_13 : 1; unsigned int x_1_2_14 : 1; unsigned int x_1_2_15 : 1; unsigned int x_1_2_16 : 1; unsigned int x_1_2_17 : 1; unsigned int x_1_2_18 : 4; } x_2_1_1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; unsigned int x_2_1_4 : 1; unsigned int x_2_1_5 : 1; unsigned int x_2_1_6 : 1; unsigned int x_2_1_7 : 1; unsigned int x_2_1_8 : 1; unsigned int x_2_1_9 : 1; unsigned int x_2_1_10 : 1; unsigned int x_2_1_11 : 1; unsigned int x_2_1_12 : 4; unsigned int x_2_1_13 : 1; unsigned short x_2_1_14; unsigned short x_2_1_15; unsigned short x_2_1_16; unsigned short x_2_1_17; unsigned short x_2_1_18; struct PptColor { struct CsColour { unsigned short x_1_3_1; unsigned short x_1_3_2; unsigned short x_1_3_3; unsigned short x_1_3_4; } x_19_2_1; int x_19_2_2; } x_2_1_19; } x2; }*)characterRunAtIndex:(int)arg1;
- (int)characterRunCount;
- (void)dealloc;
- (id)hyperlinks;
- (id)init;
- (id)metaCharacterFields;
- (struct PptParaRun { int x1; short x2; struct PptParaProperty { struct { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 1; unsigned int x_1_2_7 : 1; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; unsigned int x_1_2_10 : 1; unsigned int x_1_2_11 : 1; unsigned int x_1_2_12 : 1; unsigned int x_1_2_13 : 1; unsigned int x_1_2_14 : 1; unsigned int x_1_2_15 : 1; unsigned int x_1_2_16 : 1; unsigned int x_1_2_17 : 1; unsigned int x_1_2_18 : 1; unsigned int x_1_2_19 : 1; unsigned int x_1_2_20 : 1; unsigned int x_1_2_21 : 1; } x_3_1_1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; unsigned int x_3_1_4 : 1; unsigned int x_3_1_5 : 1; unsigned int x_3_1_6 : 1; unsigned int x_3_1_7 : 1; unsigned int x_3_1_8 : 1; unsigned int x_3_1_9 : 1; unsigned int x_3_1_10 : 4; unsigned int x_3_1_11 : 2; unsigned short x_3_1_12; unsigned short x_3_1_13; short x_3_1_14; struct PptColor { struct CsColour { unsigned short x_1_3_1; unsigned short x_1_3_2; unsigned short x_1_3_3; unsigned short x_1_3_4; } x_15_2_1; int x_15_2_2; } x_3_1_15; } x3; }*)paragraphRunAtIndex:(int)arg1;
- (int)paragraphRunCount;
- (void)readMetaCharacterFieldsBookmarksAndHyperlinks:(id)arg1;
- (void)readSpecialInfo:(id)arg1;
- (void)readString:(id)arg1;
- (void)readStyles:(id)arg1;
- (void)readTextBlock:(id)arg1;
- (struct PptSpecialInfoRun { int x1; struct PptFullSpecialInfo { struct PptSpecialInfo { struct { unsigned int x_1_3_1 : 1; unsigned int x_1_3_2 : 1; unsigned int x_1_3_3 : 1; } x_1_2_1; struct SpellingInfo { unsigned int x_2_3_1 : 1; unsigned int x_2_3_2 : 1; unsigned int x_2_3_3 : 1; } x_1_2_2; int x_1_2_3; int x_1_2_4; } x_2_1_1; struct PptSpecialInfo9 { struct { unsigned int x_1_3_1 : 1; unsigned int x_1_3_2 : 1; } x_2_2_1; unsigned int x_2_2_2 : 1; struct Ext10Info { unsigned int x_3_3_1 : 4; unsigned int x_3_3_2 : 1; } x_2_2_3; } x_2_1_2; struct PptSpecialInfo11 { bool x_3_2_1; struct ChVector<unsigned int> {} *x_3_2_2; } x_2_1_3; } x2; }*)specialInfoRunAtIndex:(int)arg1;
- (int)specialInfoRunCount;
- (id)text;
- (unsigned int)textIndex;
- (struct PptTextRulerAtom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; bool x6; struct ChVector<PptTab> {} *x7; unsigned short x8[5]; unsigned short x9[5]; unsigned short x10; }*)textRuler;
- (int)textType;
- (void)writeTextBlock:(id)arg1;

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