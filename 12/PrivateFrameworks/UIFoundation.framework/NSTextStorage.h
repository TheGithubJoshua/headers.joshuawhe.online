<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NSTextStorage.h</title>
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

/PrivateFrameworks/UIFoundation.framework/NSTextStorage.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation (553)
 */

@interface NSTextStorage : NSMutableAttributedString {
    long long  _editedDelta;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _editedRange;
    struct { 
        unsigned int editedMask : 8; 
        unsigned int postWillProcess : 1; 
        unsigned int postDidProcess : 1; 
        unsigned int  : 6; 
        unsigned int disabled : 16; 
    }  _flags;
    NSMutableArray * _layoutManagers;
    id  _sideData;
}

@property (nonatomic, readonly) long long changeInLength;
@property (nonatomic) <NSTextStorageDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long editedMask;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } editedRange;
@property (nonatomic, readonly) bool fixesAttributesLazily;
@property (nonatomic, readonly, copy) NSArray *layoutManagers;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (bool)_attributeFixingInProgress;
- (bool)_forceFixAttributes;
- (bool)_isEditing;
- (bool)_lockForReading;
- (bool)_lockForWriting;
- (bool)_lockForWritingWithExceptionHandler:(bool)arg1;
- (void)_notifyEdited:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 changeInLength:(long long)arg3 invalidatedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeByEstimatingAttributeFixingForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_setAttributeFixingInProgress:(bool)arg1;
- (void)_setEditedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_setForceFixAttributes:(bool)arg1;
- (void)_setUsesSimpleTextEffects:(bool)arg1;
- (bool)_shouldSetOriginalFontAttribute;
- (void)_unlock;
- (bool)_usesSimpleTextEffects;
- (void)addLayoutManager:(id)arg1;
- (void)beginEditing;
- (long long)changeInLength;
- (Class)classForCoder;
- (void)coordinateAccess:(id /* block */)arg1;
- (void)coordinateEditing:(id /* block */)arg1;
- (void)coordinateReading:(id /* block */)arg1;
- (id)cuiCatalog;
- (id)cuiStyleEffects;
- (void)dealloc;
- (id)delegate;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 changeInLength:(long long)arg3;
- (unsigned long long)editedMask;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })editedRange;
- (void)encodeWithCoder:(id)arg1;
- (void)endEditing;
- (void)ensureAttributesAreFixedInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)finalize;
- (bool)fixesAttributesLazily;
- (void)fontSetChanged;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidateAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)layoutManagers;
- (void)processEditing;
- (void)removeLayoutManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditedMask:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)_undoRedoAttributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_undoRedoTextOperation:(id)arg1;

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
