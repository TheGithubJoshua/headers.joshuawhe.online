<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EBAlignmentInfo.h</title>
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

/PrivateFrameworks/OfficeImport.framework/EBAlignmentInfo.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport (257.9)
 */

@interface EBAlignmentInfo : NSObject

+ (int)convertEDHorizontalAlignmentEnumToXl:(int)arg1;
+ (int)convertEDVerticalAlignmentEnumToXl:(int)arg1;
+ (int)convertXlHorizAlignEnumToED:(int)arg1;
+ (int)convertXlVertAlignEnumToED:(int)arg1;
+ (id)edAlignmentInfoFromXlDXfAlign:(struct XlDXfAlign { int x1; int x2; short x3; short x4; bool x5; bool x6; int x7; }*)arg1;
+ (id)edAlignmentInfoFromXlGraphicsInfo:(struct XlGraphicsInfo { int (**x1)(); int x2; short x3; bool x4; bool x5; bool x6; bool x7; struct ChVector<XlGraphicsInfo::XlObjData *> { struct XlObjData {} **x_8_1_1; struct XlObjData {} **x_8_1_2; unsigned int x_8_1_3; unsigned int x_8_1_4; unsigned int x_8_1_5; } x8; bool x9; int x10; struct XlString {} *x11; int x12; int x13; int x14; bool x15; unsigned short x16; unsigned short x17; unsigned short x18; char *x19; unsigned int x20; unsigned int x21; bool x22; unsigned int x23; unsigned int x24; int x25; int x26; bool x27; struct XlString {} *x28; }*)arg1;
+ (id)edAlignmentInfoFromXlXf:(struct XlXf { int (**x1)(); struct XlHeader { unsigned int x_2_1_1; short x_2_1_2; unsigned char x_2_1_3; } x2; short x3; short x4; short x5; int x6; int x7; unsigned char x8; unsigned char x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; unsigned char x18; unsigned char x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; bool x25; bool x26; bool x27; bool x28; bool x29; bool x30; bool x31; bool x32; bool x33; bool x34; bool x35; bool x36; bool x37; bool x38; bool x39; }*)arg1;
+ (void)writeAlignmentInfo:(id)arg1 toXlGraphicsInfo:(struct XlGraphicsInfo { int (**x1)(); int x2; short x3; bool x4; bool x5; bool x6; bool x7; struct ChVector<XlGraphicsInfo::XlObjData *> { struct XlObjData {} **x_8_1_1; struct XlObjData {} **x_8_1_2; unsigned int x_8_1_3; unsigned int x_8_1_4; unsigned int x_8_1_5; } x8; bool x9; int x10; struct XlString {} *x11; int x12; int x13; int x14; bool x15; unsigned short x16; unsigned short x17; unsigned short x18; char *x19; unsigned int x20; unsigned int x21; bool x22; unsigned int x23; unsigned int x24; int x25; int x26; bool x27; struct XlString {} *x28; }*)arg2;
+ (void)writeAlignmentInfo:(id)arg1 toXlXf:(struct XlXf { int (**x1)(); struct XlHeader { unsigned int x_2_1_1; short x_2_1_2; unsigned char x_2_1_3; } x2; short x3; short x4; short x5; int x6; int x7; unsigned char x8; unsigned char x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; unsigned char x18; unsigned char x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; bool x25; bool x26; bool x27; bool x28; bool x29; bool x30; bool x31; bool x32; bool x33; bool x34; bool x35; bool x36; bool x37; bool x38; bool x39; }*)arg2;
+ (struct XlDXfAlign { int x1; int x2; short x3; short x4; bool x5; bool x6; int x7; }*)xlDXfAlignFromEDAlignmentInfo:(id)arg1;

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