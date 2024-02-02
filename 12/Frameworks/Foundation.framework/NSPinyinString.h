<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NSPinyinString.h</title>
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

/Frameworks/Foundation.framework/NSPinyinString.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Foundation.framework/Foundation (1575.23)
 */

@interface NSPinyinString : NSString {
    unsigned long long  _deletionCount;
    unsigned long long  _firstModificationIndex;
    unsigned long long  _insertionCount;
    bool  _lastSyllableIsPartial;
    unsigned long long  _rangeCount;
    struct _NSRange { unsigned long long x1; unsigned long long x2; } * _ranges;
    unsigned long long  _replacementCount;
    unsigned long long  _score;
    NSString * _string;
    unsigned long long  _syllableCount;
    unsigned long long  _transpositionCount;
}

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)alternativesForInputString:(id)arg1;
+ (id)prefixesForInputString:(id)arg1;

- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (Class)classForCoder;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)indexOfFirstModification;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(bool)arg3 score:(unsigned long long)arg4 replacementCount:(unsigned long long)arg5 transpositionCount:(unsigned long long)arg6 insertionCount:(unsigned long long)arg7 deletionCount:(unsigned long long)arg8 indexOfFirstModification:(unsigned long long)arg9 rangeCount:(unsigned long long)arg10 ranges:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg11;
- (id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(bool)arg3 score:(unsigned long long)arg4 replacementCount:(unsigned long long)arg5 transpositionCount:(unsigned long long)arg6 insertionCount:(unsigned long long)arg7 deletionCount:(unsigned long long)arg8 rangeCount:(unsigned long long)arg9 ranges:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg10;
- (bool)isEqual:(id)arg1;
- (bool)lastSyllableIsPartial;
- (unsigned long long)length;
- (id)nonPinyinIndexSet;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })nonPinyinRangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfDeletions;
- (unsigned long long)numberOfInsertions;
- (unsigned long long)numberOfNonPinyinRanges;
- (unsigned long long)numberOfReplacements;
- (unsigned long long)numberOfTranspositions;
- (unsigned long long)score;
- (id)string;
- (unsigned long long)syllableCount;

// Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader

+ (id)_alternativesForInputString:(id)arg1;
+ (id)_correctionsForInputString:(id)arg1;
+ (id)_prefixesForInputString:(id)arg1;

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