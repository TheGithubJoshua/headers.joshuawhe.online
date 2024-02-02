<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PBParagraphProperties.h</title>
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

/PrivateFrameworks/OfficeImport.framework/PBParagraphProperties.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport (257.9)
 */

@interface PBParagraphProperties : NSObject

+ (int)pptAlignmentTypeWithOADTextAlignType:(unsigned char)arg1;
+ (int)pptFontAlignWithOADTextFontAlign:(unsigned char)arg1;
+ (short)pptTextSpacingWithOADParaSpacing:(id)arg1 defaultPptParaSpacing:(short)arg2;
+ (void)readAlign:(id)arg1 pptAlignmentType:(int)arg2;
+ (void)readParagraphProperties:(id)arg1 paragraphProperty:(struct PptParaProperty { struct { unsigned int x_1_1_1 : 1; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 1; unsigned int x_1_1_8 : 1; unsigned int x_1_1_9 : 1; unsigned int x_1_1_10 : 1; unsigned int x_1_1_11 : 1; unsigned int x_1_1_12 : 1; unsigned int x_1_1_13 : 1; unsigned int x_1_1_14 : 1; unsigned int x_1_1_15 : 1; unsigned int x_1_1_16 : 1; unsigned int x_1_1_17 : 1; unsigned int x_1_1_18 : 1; unsigned int x_1_1_19 : 1; unsigned int x_1_1_20 : 1; unsigned int x_1_1_21 : 1; } x1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 4; unsigned int x11 : 2; unsigned short x12; unsigned short x13; short x14; struct PptColor { struct CsColour { unsigned short x_1_2_1; unsigned short x_1_2_2; unsigned short x_1_2_3; unsigned short x_1_2_4; } x_15_1_1; int x_15_1_2; } x15; short x16; short x17; short x18; }*)arg2 bulletStyle:(struct PptParaProperty9 { struct { unsigned int x_1_1_1 : 1; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 1; } x1; short x2; bool x3; struct PptTextAutoNumberScheme { unsigned int x_4_1_1 : 6; short x_4_1_2; } x4; }*)arg3 isMaster:(bool)arg4 state:(id)arg5;
+ (void)readParagraphProperties:(id)arg1 paragraphPropertyRun:(struct PptParaRun { int x1; short x2; struct PptParaProperty { struct { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 1; unsigned int x_1_2_7 : 1; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; unsigned int x_1_2_10 : 1; unsigned int x_1_2_11 : 1; unsigned int x_1_2_12 : 1; unsigned int x_1_2_13 : 1; unsigned int x_1_2_14 : 1; unsigned int x_1_2_15 : 1; unsigned int x_1_2_16 : 1; unsigned int x_1_2_17 : 1; unsigned int x_1_2_18 : 1; unsigned int x_1_2_19 : 1; unsigned int x_1_2_20 : 1; unsigned int x_1_2_21 : 1; } x_3_1_1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; unsigned int x_3_1_4 : 1; unsigned int x_3_1_5 : 1; unsigned int x_3_1_6 : 1; unsigned int x_3_1_7 : 1; unsigned int x_3_1_8 : 1; unsigned int x_3_1_9 : 1; unsigned int x_3_1_10 : 4; unsigned int x_3_1_11 : 2; unsigned short x_3_1_12; unsigned short x_3_1_13; short x_3_1_14; struct PptColor { struct CsColour { unsigned short x_1_3_1; unsigned short x_1_3_2; unsigned short x_1_3_3; unsigned short x_1_3_4; } x_15_2_1; int x_15_2_2; } x_3_1_15; } x3; }*)arg2 bulletStyle:(struct PptParaProperty9 { struct { unsigned int x_1_1_1 : 1; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 1; } x1; short x2; bool x3; struct PptTextAutoNumberScheme { unsigned int x_4_1_1 : 6; short x_4_1_2; } x4; }*)arg3 state:(id)arg4;

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