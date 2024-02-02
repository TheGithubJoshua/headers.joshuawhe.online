<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_EARFormatter.h</title>
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

/PrivateFrameworks/EmbeddedAcousticRecognition.framework/_EARFormatter.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARFormatter : NSObject {
    struct unique_ptr<SpeechITN, std::__1::default_delete<SpeechITN> > { 
        struct __compressed_pair<SpeechITN *, std::__1::default_delete<SpeechITN> > { 
            struct SpeechITN {} *__value_; 
        } __ptr_; 
    }  _itn;
}

+ (struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { struct Token {} *x_3_1_1; } x3; })convertStringsToQuasarTokens:(id)arg1;
+ (void)initialize;
+ (bool)supportedByQuasarConfig:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { struct Token {} *x_3_1_1; } x3; })formatWords:(const struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { struct Token {} *x_3_1_1; } x3; }*)arg1;
- (struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { struct Token {} *x_3_1_1; } x3; })formatWords:(const struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { struct Token {} *x_3_1_1; } x3; }*)arg1 task:(id)arg2;
- (id)formattedRecognitionWithNBestList:(id)arg1;
- (id)formattedStringWithStrings:(id)arg1;
- (id)formattedStringWithStrings:(id)arg1 preToPostItnArray:(id)arg2;
- (id)formattedStringWithStrings:(id)arg1 preToPostItnArray:(id)arg2 task:(id)arg3;
- (id)formattedStringWithStrings:(id)arg1 task:(id)arg2;
- (struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })getOrthography:(const struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { struct Token {} *x_3_1_1; } x3; }*)arg1;
- (id)initWithGeneralVoc:(id)arg1 withLexiconEnh:(id)arg2 withItnEnh:(id)arg3;
- (id)initWithLanguage:(id)arg1 withSdapiConfig:(id)arg2 quasarConfig:(id)arg3;
- (id)initWithQuasarConfig:(id)arg1;

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