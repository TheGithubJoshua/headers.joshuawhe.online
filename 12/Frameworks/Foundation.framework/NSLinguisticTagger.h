<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NSLinguisticTagger.h</title>
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

/Frameworks/Foundation.framework/NSLinguisticTagger.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Foundation.framework/Foundation (1575.23)
 */

@interface NSLinguisticTagger : NSObject {
    unsigned long long  _options;
    id  _orthographyArray;
    void * _reserved;
    NSArray * _schemes;
    NSString * _string;
    id  _tokenArray;
}

@property (readonly, copy) NSString *dominantLanguage;
@property (retain) NSString *string;
@property (readonly, copy) NSArray *tagSchemes;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)availableTagSchemesForLanguage:(id)arg1;
+ (id)availableTagSchemesForUnit:(long long)arg1 language:(id)arg2;
+ (id)dominantLanguageForString:(id)arg1;
+ (void)enumerateTagsForString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 unit:(long long)arg3 scheme:(id)arg4 options:(unsigned long long)arg5 orthography:(id)arg6 usingBlock:(id /* block */)arg7;
+ (bool)supportsLanguage:(id)arg1;
+ (id)tagForString:(id)arg1 atIndex:(unsigned long long)arg2 unit:(long long)arg3 scheme:(id)arg4 orthography:(id)arg5 tokenRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg6;
+ (id)tagsForString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 unit:(long long)arg3 scheme:(id)arg4 options:(unsigned long long)arg5 orthography:(id)arg6 tokenRanges:(id*)arg7;

- (bool)_acceptSentenceTerminatorRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 paragraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 tokens:(struct _NSLTToken { unsigned short x1; unsigned char x2; unsigned char x3; unsigned int x4; union { void *x_5_1_1; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; } x_5_1_2; } x5; }*)arg3 count:(unsigned long long)arg4 tokenIndex:(unsigned long long)arg5;
- (void)_acceptSentencesForParagraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_analyzePunctuationTokensInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 paragraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_analyzeTokensInInterwordRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 paragraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_analyzeTokensInWordRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 paragraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_calculateSentenceRangesForParagraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_detectOrthographyIfNeededAtIndex:(unsigned long long)arg1;
- (void)_enumerateTagsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 scheme:(id)arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (void)_nativeSetOrthography:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_sentenceRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_setOrthography:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)_tagAtIndex:(unsigned long long)arg1 scheme:(id)arg2 tokenRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 sentenceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (id)_tagSchemeForScheme:(id)arg1;
- (id)_tokenDataForParagraphAtIndex:(unsigned long long)arg1 paragraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 requireLemmas:(bool)arg3 requirePartsOfSpeech:(bool)arg4 requireNamedEntities:(bool)arg5;
- (id)_tokenDataForParagraphAtIndex:(unsigned long long)arg1 paragraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 tagScheme:(id)arg3;
- (id)_tokenDataForParagraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 requireLemmas:(bool)arg2 requirePartsOfSpeech:(bool)arg3 requireNamedEntities:(bool)arg4;
- (void)_tokenizeParagraphAtIndex:(unsigned long long)arg1 requireLemmas:(bool)arg2 requirePartsOfSpeech:(bool)arg3 requireNamedEntities:(bool)arg4;
- (void)dealloc;
- (id)description;
- (id)dominantLanguage;
- (void)enumerateTagsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 scheme:(id)arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateTagsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 unit:(long long)arg2 scheme:(id)arg3 options:(unsigned long long)arg4 usingBlock:(id /* block */)arg5;
- (id)initWithTagSchemes:(id)arg1 options:(unsigned long long)arg2;
- (id)orthographyAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)possibleTagsAtIndex:(unsigned long long)arg1 scheme:(id)arg2 tokenRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 sentenceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 scores:(id*)arg5;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })sentenceRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setOrthography:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setString:(id)arg1;
- (id)string;
- (void)stringEditedInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 changeInLength:(long long)arg2;
- (id)tagAtIndex:(unsigned long long)arg1 scheme:(id)arg2 tokenRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 sentenceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (id)tagAtIndex:(unsigned long long)arg1 unit:(long long)arg2 scheme:(id)arg3 tokenRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (id)tagSchemes;
- (id)tagsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 scheme:(id)arg2 options:(unsigned long long)arg3 tokenRanges:(id*)arg4;
- (id)tagsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 unit:(long long)arg2 scheme:(id)arg3 options:(unsigned long long)arg4 tokenRanges:(id*)arg5;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tokenRangeAtIndex:(unsigned long long)arg1 unit:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit

- (id)languageOfRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withAdditionalContext:(id)arg2 withPreferredLanguages:(id)arg3;

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
