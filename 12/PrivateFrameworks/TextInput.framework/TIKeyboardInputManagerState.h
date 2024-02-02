<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TIKeyboardInputManagerState.h</title>
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

/PrivateFrameworks/TextInput.framework/TIKeyboardInputManagerState.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput (1.0)
 */

@interface TIKeyboardInputManagerState : NSObject <NSCopying, NSSecureCoding> {
    TIKeyboardCandidate * _autocorrectionRecordForInputString;
    unsigned long long  _initialCandidateBatchCount;
    unsigned long long  _inputCount;
    unsigned long long  _inputIndex;
    NSString * _inputString;
    TICharacterSetDescription * _inputsPreventingAcceptSelectedCandidate;
    TICharacterSetDescription * _inputsToReject;
    TIKeyEventMap * _keyEventMap;
    TIKeyboardBehaviors * _keyboardBehaviors;
    union { 
        long long integerValue; 
        struct { 
            unsigned int canHandleKeyHitTest : 1; 
            unsigned int ignoresDeadKeys : 1; 
            unsigned int shouldExtendPriorWord : 1; 
            unsigned int suppliesCompletions : 1; 
            unsigned int supportsNumberKeySelection : 1; 
            unsigned int supportsSetPhraseBoundary : 1; 
            unsigned int suppressCompletionsForFieldEditor : 1; 
            unsigned int usesAutoDeleteWord : 1; 
            unsigned int usesCandidateSelection : 1; 
            unsigned int commitsAcceptedCandidate : 1; 
            unsigned int nextInputWouldStartSentence : 1; 
            unsigned int inputStringIsExemptFromChecker : 1; 
            unsigned int suppressPlaceholderCandidate : 1; 
            unsigned int usesAutocorrectionLists : 1; 
            unsigned int autoquoteType : 2; 
        } fields; 
    }  _mask;
    NSString * _replacementForDoubleSpace;
    NSString * _searchStringForMarkedText;
    NSString * _shadowTyping;
    TICharacterSetDescription * _shortcutCompletions;
    bool  _shouldAddModifierSymbolsToWordCharacters;
    TICharacterSetDescription * _terminatorsDeletingAutospace;
    TICharacterSetDescription * _terminatorsPreventingAutocorrection;
    TICharacterSetDescription * _wordCharacters;
    NSString * _wordSeparator;
}

@property (nonatomic, retain) TIKeyboardCandidate *autocorrectionRecordForInputString;
@property (nonatomic) unsigned long long autoquoteType;
@property (nonatomic) bool canHandleKeyHitTest;
@property (nonatomic) bool commitsAcceptedCandidate;
@property (nonatomic) bool ignoresDeadKeys;
@property (nonatomic) unsigned long long initialCandidateBatchCount;
@property (nonatomic) unsigned long long inputCount;
@property (nonatomic) unsigned long long inputIndex;
@property (nonatomic, copy) NSString *inputString;
@property (nonatomic) bool inputStringIsExemptFromChecker;
@property (nonatomic, copy) TICharacterSetDescription *inputsPreventingAcceptSelectedCandidate;
@property (nonatomic, copy) TICharacterSetDescription *inputsToReject;
@property (nonatomic, retain) TIKeyEventMap *keyEventMap;
@property (nonatomic, retain) TIKeyboardBehaviors *keyboardBehaviors;
@property (nonatomic) bool nextInputWouldStartSentence;
@property (nonatomic, copy) NSString *replacementForDoubleSpace;
@property (nonatomic, copy) NSString *searchStringForMarkedText;
@property (nonatomic, copy) NSString *shadowTyping;
@property (nonatomic, copy) TICharacterSetDescription *shortcutCompletions;
@property (nonatomic) bool shouldAddModifierSymbolsToWordCharacters;
@property (nonatomic) bool shouldExtendPriorWord;
@property (nonatomic) bool suppliesCompletions;
@property (nonatomic) bool supportsNumberKeySelection;
@property (nonatomic) bool supportsSetPhraseBoundary;
@property (nonatomic) bool suppressCompletionsForFieldEditor;
@property (nonatomic) bool suppressPlaceholderCandidate;
@property (nonatomic, copy) TICharacterSetDescription *terminatorsDeletingAutospace;
@property (nonatomic, copy) TICharacterSetDescription *terminatorsPreventingAutocorrection;
@property (nonatomic) bool usesAutoDeleteWord;
@property (nonatomic) bool usesAutocorrectionLists;
@property (nonatomic) bool usesCandidateSelection;
@property (nonatomic, copy) TICharacterSetDescription *wordCharacters;
@property (nonatomic, copy) NSString *wordSeparator;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)acceptInputString:(id)arg1;
- (id)autocorrectionRecordForInputString;
- (unsigned long long)autoquoteType;
- (bool)canHandleKeyHitTest;
- (bool)commitsAcceptedCandidate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)ignoresDeadKeys;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)initialCandidateBatchCount;
- (unsigned long long)inputCount;
- (unsigned long long)inputIndex;
- (id)inputString;
- (bool)inputStringAcceptsCurrentCandidateIfSelected:(id)arg1;
- (bool)inputStringIsExemptFromChecker;
- (id)inputsPreventingAcceptSelectedCandidate;
- (id)inputsToReject;
- (id)keyEventMap;
- (id)keyboardBehaviors;
- (bool)nextInputWouldStartSentence;
- (id)replacementForDoubleSpace;
- (id)searchStringForMarkedText;
- (void)setAutocorrectionRecordForInputString:(id)arg1;
- (void)setAutoquoteType:(unsigned long long)arg1;
- (void)setCanHandleKeyHitTest:(bool)arg1;
- (void)setCommitsAcceptedCandidate:(bool)arg1;
- (void)setIgnoresDeadKeys:(bool)arg1;
- (void)setInitialCandidateBatchCount:(unsigned long long)arg1;
- (void)setInputCount:(unsigned long long)arg1;
- (void)setInputIndex:(unsigned long long)arg1;
- (void)setInputString:(id)arg1;
- (void)setInputStringIsExemptFromChecker:(bool)arg1;
- (void)setInputsPreventingAcceptSelectedCandidate:(id)arg1;
- (void)setInputsToReject:(id)arg1;
- (void)setKeyEventMap:(id)arg1;
- (void)setKeyboardBehaviors:(id)arg1;
- (void)setNextInputWouldStartSentence:(bool)arg1;
- (void)setReplacementForDoubleSpace:(id)arg1;
- (void)setSearchStringForMarkedText:(id)arg1;
- (void)setShadowTyping:(id)arg1;
- (void)setShortcutCompletions:(id)arg1;
- (void)setShouldAddModifierSymbolsToWordCharacters:(bool)arg1;
- (void)setShouldExtendPriorWord:(bool)arg1;
- (void)setSuppliesCompletions:(bool)arg1;
- (void)setSupportsNumberKeySelection:(bool)arg1;
- (void)setSupportsSetPhraseBoundary:(bool)arg1;
- (void)setSuppressCompletionsForFieldEditor:(bool)arg1;
- (void)setSuppressPlaceholderCandidate:(bool)arg1;
- (void)setTerminatorsDeletingAutospace:(id)arg1;
- (void)setTerminatorsPreventingAutocorrection:(id)arg1;
- (void)setUsesAutoDeleteWord:(bool)arg1;
- (void)setUsesAutocorrectionLists:(bool)arg1;
- (void)setUsesCandidateSelection:(bool)arg1;
- (void)setWordCharacters:(id)arg1;
- (void)setWordSeparator:(id)arg1;
- (id)shadowTyping;
- (id)shortcutCompletions;
- (bool)shouldAddModifierSymbolsToWordCharacters;
- (bool)shouldDeleteAutospaceBeforeTerminator:(id)arg1;
- (bool)shouldExtendPriorWord;
- (bool)shouldSuppressAutocorrectionWithTerminator:(id)arg1;
- (bool)stringEndsWord:(id)arg1;
- (bool)suppliesCompletions;
- (bool)supportsNumberKeySelection;
- (bool)supportsSetPhraseBoundary;
- (bool)suppressCompletionsForFieldEditor;
- (bool)suppressPlaceholderCandidate;
- (id)terminatorsDeletingAutospace;
- (id)terminatorsPreventingAutocorrection;
- (bool)usesAutoDeleteWord;
- (bool)usesAutocorrectionLists;
- (bool)usesCandidateSelection;
- (id)wordCharacters;
- (id)wordSeparator;

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