<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MecabraCandidate.h</title>
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

/lib/libmecabra.dylib/MecabraCandidate.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /usr/lib/libmecabra.dylib
 */

@interface MecabraCandidate : NSObject <NSCopying> {
    void * _rawCandidate;
}

@property (nonatomic, readonly) NSString *analysisString;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSString *convertedAnalysisString;
@property (nonatomic, readonly) NSString *dictionaryReading;
@property (nonatomic, readonly) bool isAutocorrectedCandidate;
@property (nonatomic, readonly) bool isConversionCandidate;
@property (nonatomic, readonly) bool isEmojiCandidate;
@property (nonatomic, readonly) bool isExtensionCandidate;
@property (nonatomic, readonly) bool isFuzzyMatchCandidate;
@property (nonatomic, readonly) bool isLearningDictionaryCandidate;
@property (nonatomic, readonly) bool isOTAWordlistCandidate;
@property (nonatomic, readonly) bool isPersonName;
@property (nonatomic, readonly) bool isPredictionCandidate;
@property (nonatomic, readonly) bool isRegionalCandidate;
@property (nonatomic, readonly) bool isSyntheticCandidate;
@property (nonatomic, readonly) bool isUserWordCandidate;
@property (nonatomic, readonly) struct MecabraCandidateBase { int (**x1)(); long long x2; }*rawCandidate;
@property (nonatomic, readonly) struct ConversionCandidate { int (**x1)(); long long x2; }*rawConversionCandidate;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) NSString *surface;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) unsigned long long wordCount;

+ (id)syntheticCandidateFromWords:(id)arg1 withLexicon:(struct Lexicon { void *x1; void *x2; }*)arg2 language:(int)arg3;

- (id)analysisString;
- (id)attributes;
- (id)category;
- (id)convertedAnalysisString;
- (id)convertedAnalysisStringForFirstSyllable;
- (struct __CFArray { }*)copySyllableLengthArrayForWordAtIndex:(unsigned long long)arg1;
- (struct __CFArray { }*)copySyllableLengthArrayInAnalysisString;
- (struct __CFArray { }*)copySyllableLengthArrayInConvertedAnalysisString;
- (struct __CFArray { }*)copySyllableLengthArrayInDictionaryReading;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryReading;
- (id)initWithCandidate:(struct MecabraCandidateBase { int (**x1)(); long long x2; }*)arg1;
- (bool)isAutocorrectedCandidate;
- (bool)isConversionCandidate;
- (bool)isEmojiCandidate;
- (bool)isEqual:(id)arg1;
- (bool)isExtensionCandidate;
- (bool)isFuzzyMatchCandidate;
- (bool)isLearningDictionaryCandidate;
- (bool)isOTAWordlistCandidate;
- (bool)isPersonName;
- (bool)isPredictionCandidate;
- (bool)isRegionalCandidate;
- (bool)isSyntheticCandidate;
- (bool)isUserWordCandidate;
- (unsigned short)kind;
- (unsigned short)lastPrefixValue;
- (unsigned short)lcAttrAtIndex:(unsigned long long)arg1;
- (unsigned short)matchType;
- (unsigned short)matchedLengthType;
- (long long)phraseBoundaryAfterWordAtIndex:(long long)arg1;
- (struct MecabraCandidateBase { int (**x1)(); long long x2; }*)rawCandidate;
- (struct ConversionCandidate { int (**x1)(); long long x2; }*)rawConversionCandidate;
- (unsigned short)rcAttrAtIndex:(unsigned long long)arg1;
- (bool)setDisplayString:(struct __CFString { }*)arg1;
- (void)setWeight:(unsigned long long)arg1;
- (id)string;
- (id)surface;
- (id)syllabifiedAnalysisString;
- (id)syllabifiedConvertedAnalysisString;
- (id)syllabifiedDictionaryReading;
- (id)syllablesInAnalysisString;
- (id)syllablesInConvertedAnalysisString;
- (id)syllablesInDictionaryReading;
- (id)syllablesInString:(id)arg1 syllableLengths:(id)arg2;
- (unsigned long long)trieValueAtIndex:(unsigned long long)arg1;
- (int)type;
- (long long)weight;
- (unsigned long long)wordCount;
- (unsigned short)wordDictionaryReadingLengthAtIndex:(unsigned long long)arg1;
- (id)wordIDs;
- (bool)wordIsFromSystemDictionaryAtIndex:(unsigned long long)arg1;
- (unsigned short)wordLengthAtIndex:(unsigned long long)arg1;
- (struct { long long x1; long long x2; })wordRangeAtIndex:(long long)arg1;
- (unsigned short)wordReadingLengthAtIndex:(unsigned long long)arg1;
- (id)wordReadings;
- (id)words;

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
