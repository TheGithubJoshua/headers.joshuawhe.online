<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKPaperList.h</title>
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

/PrivateFrameworks/PrintKit.framework/PKPaperList.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit (239.4)
 */

@interface PKPaperList : NSObject {
    NSArray * _duplexPapers;
    bool  _hasMediaReady;
    NSArray * _papers;
    NSArray * _photoPapers;
    NSArray * _rolls;
    NSArray * _simplexPapers;
}

@property (retain) NSArray *duplexPapers;
@property bool hasMediaReady;
@property (retain) NSArray *papers;
@property (retain) NSArray *photoPapers;
@property (nonatomic, retain) NSArray *rolls;
@property (retain) NSArray *simplexPapers;

+ (id)mediaDictFromAttrs:(struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)arg1;
+ (id)paperListWithAttrs:(struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)arg1;
+ (id)paperListWithTXTRecord:(id)arg1;

- (void)addPaperSet:(id*)arg1 withCount:(int)arg2 toArrays:(id*)arg3;
- (id)adjustMargins:(id)arg1 forDuplex:(id)arg2;
- (id)availableRollPapersPreferBorderless:(bool)arg1;
- (void)categorizePapers:(id)arg1;
- (id)conjureMediaFromTXT:(id)arg1;
- (void)dealloc;
- (id)duplexPapers;
- (id)filterPapers:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)filterUsingBlock:(id /* block */)arg1;
- (bool)hasMatchingLoadedRoll:(id)arg1;
- (bool)hasMediaReady;
- (id)initWithAttrs:(struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)arg1;
- (id)initWithTXTRecord:(id)arg1;
- (bool)isPaperReady:(id)arg1;
- (long long)jobTypesSupported:(id)arg1;
- (id)matchPaper:(id)arg1;
- (id)matchPaper:(id)arg1 inList:(id)arg2;
- (id)matchedPaper:(id)arg1 preferBorderless:(bool)arg2 withDuplexMode:(id)arg3 didMatch:(bool*)arg4;
- (id)paperListForDuplexMode:(id)arg1;
- (id)papers;
- (id)papersForDocumentWithSize:(struct CGSize { double x1; double x2; })arg1 scaleUpOnRoll:(bool)arg2 andDuplex:(bool)arg3;
- (id)papersForPhotoWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)photoPapers;
- (id)rollReadyPaperListForDocumentWithContentSize:(struct CGSize { double x1; double x2; })arg1 scaleUp:(bool)arg2;
- (id)rollReadyPaperListForPhotoWithContentSize:(struct CGSize { double x1; double x2; })arg1;
- (id)rollReadyPaperListWithContentSize:(struct CGSize { double x1; double x2; })arg1 forPhoto:(bool)arg2;
- (id)rolls;
- (void)setDuplexPapers:(id)arg1;
- (void)setHasMediaReady:(bool)arg1;
- (void)setPapers:(id)arg1;
- (void)setPhotoPapers:(id)arg1;
- (void)setRolls:(id)arg1;
- (void)setSimplexPapers:(id)arg1;
- (id)simplexPapers;
- (id)tersePaperFrom:(id)arg1 withMediaInfo:(id)arg2;
- (id)tersePaperFrom:(id)arg1 withRequest:(id)arg2;

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
