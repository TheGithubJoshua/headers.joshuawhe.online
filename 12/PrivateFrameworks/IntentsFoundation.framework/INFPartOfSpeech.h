<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>INFPartOfSpeech.h</title>
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

/PrivateFrameworks/IntentsFoundation.framework/INFPartOfSpeech.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation (1)
 */

@interface INFPartOfSpeech : INFSentenceToken {
    unsigned long long  _gender;
    NSString * _identifier;
    NSString * _language;
    unsigned long long  _partOfSpeechType;
    NSMutableDictionary * _variants;
}

@property unsigned long long gender;
@property (nonatomic, copy) NSString *language;
@property unsigned long long partOfSpeechType;
@property (nonatomic, retain) NSMutableDictionary *variants;

+ (id)adjectiveWithIdentifier:(id)arg1 language:(id)arg2;
+ (id)nounWithGender:(unsigned long long)arg1 identifier:(id)arg2 language:(id)arg3;
+ (id)nounWithIdentifier:(id)arg1 language:(id)arg2;

- (void).cxx_destruct;
- (id)contributingSentenceContext;
- (id)dictionaryRepresentation;
- (unsigned long long)gender;
- (id)identifier;
- (id)init;
- (id)initWithDictionary:(id)arg1 identifier:(id)arg2;
- (id)initWithPartOfSpeechType:(unsigned long long)arg1 identifier:(id)arg2 language:(id)arg3;
- (id)language;
- (unsigned long long)partOfSpeechType;
- (void)setGender:(unsigned long long)arg1;
- (void)setLanguage:(id)arg1;
- (void)setPartOfSpeechType:(unsigned long long)arg1;
- (void)setString:(id)arg1 forVariants:(unsigned long long)arg2;
- (void)setString:(id)arg1 forVariantsDescriptor:(id)arg2;
- (void)setVariants:(id)arg1;
- (id)stringForContext:(id)arg1;
- (id)stringForVariants:(unsigned long long)arg1;
- (id)stringForVariantsDescriptor:(id)arg1;
- (void)validateSelf;
- (id)variants;

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
