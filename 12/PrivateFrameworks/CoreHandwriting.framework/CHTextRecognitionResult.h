<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CHTextRecognitionResult.h</title>
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

/PrivateFrameworks/CoreHandwriting.framework/CHTextRecognitionResult.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting (1.2)
 */

@interface CHTextRecognitionResult : CHRecognitionResult {
    bool  _rare;
    NSString * _string;
    NSArray * _wordIDs;
    NSArray * _wordLexicalEntries;
    NSIndexSet * _wordOVSIDs;
    NSArray * _wordPatternEntries;
    NSArray * _wordRanges;
    NSArray * _wordScores;
    NSArray * _wordStrokeSets;
}

@property (readonly) bool rare;
@property (readonly) NSString *string;
@property (readonly) NSArray *wordIDs;
@property (readonly) NSArray *wordLexicalEntries;
@property (readonly) NSIndexSet *wordOVSIDs;
@property (readonly) NSArray *wordPatternEntries;
@property (readonly) NSArray *wordRanges;
@property (readonly) NSArray *wordScores;
@property (readonly) NSArray *wordStrokeSets;

+ (void)_filterCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 fromString:(id)arg2 withLastFilteredRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

- (bool)_isGibberishWordAtIndex:(long long)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1 score:(double)arg2 rare:(bool)arg3 wordRanges:(id)arg4 wordIDs:(id)arg5;
- (id)initWithString:(id)arg1 score:(double)arg2 rare:(bool)arg3 wordRanges:(id)arg4 wordIDs:(id)arg5 lexicalEntry:(bool)arg6 patternEntry:(bool)arg7;
- (id)initWithString:(id)arg1 score:(double)arg2 rare:(bool)arg3 wordRanges:(id)arg4 wordIDs:(id)arg5 wordScores:(id)arg6 wordStrokeSets:(id)arg7 wordLexicalEntries:(id)arg8 wordPatternEntries:(id)arg9 wordOVSIDs:(id)arg10;
- (float)languageFitnessForLocale:(id)arg1 competingLocales:(id)arg2;
- (id)mecabraCandidate;
- (bool)rare;
- (id)string;
- (id)stringByFilteringLowConfidenceRanges:(bool)arg1 excludeGibberish:(bool)arg2 rejectionRate:(double*)arg3;
- (id)wordIDs;
- (id)wordLexicalEntries;
- (id)wordOVSIDs;
- (id)wordPatternEntries;
- (id)wordRanges;
- (id)wordScores;
- (id)wordStrokeSets;

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
