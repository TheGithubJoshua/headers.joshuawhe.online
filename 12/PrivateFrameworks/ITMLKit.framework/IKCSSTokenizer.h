<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>IKCSSTokenizer.h</title>
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

/PrivateFrameworks/ITMLKit.framework/IKCSSTokenizer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit (1)
 */

@interface IKCSSTokenizer : NSObject {
    IKCSSToken * _currentToken;
    unsigned long long  currentOffset;
    IKCSSToken * reconsumeToken;
    unsigned short * textBytes;
    unsigned long long  textBytesCharCount;
}

@property (nonatomic, readonly) IKCSSToken *currentToken;

+ (bool)isDigit:(unsigned short)arg1;
+ (bool)isHexDigit:(unsigned short)arg1;
+ (bool)isLetter:(unsigned short)arg1;
+ (bool)isLowercaseLetter:(unsigned short)arg1;
+ (bool)isNameCodePoint:(unsigned short)arg1;
+ (bool)isNameStartCodePoint:(unsigned short)arg1;
+ (bool)isNewline:(unsigned short)arg1;
+ (bool)isNonASCIICodePoint:(unsigned short)arg1;
+ (bool)isNonPrintable:(unsigned short)arg1;
+ (bool)isUppercaseLetter:(unsigned short)arg1;
+ (bool)isWhitespace:(unsigned short)arg1;

- (void).cxx_destruct;
- (id)_consumeAsterisk:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeAt:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeBackslash:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (void)_consumeBadUrlRemnants:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeCaret:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeComment:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeDollar:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeDot:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (unsigned short)_consumeEscapedCodePoint:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeHash:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeIdentLike:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeLessThan:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeMinus:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeName:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeNameStart:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeNumber:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeNumeric:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumePipe:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumePlus:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeSlash:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeString:(unsigned long long)arg1 consumed:(unsigned long long*)arg2 toEndChar:(unsigned short)arg3;
- (id)_consumeTilde:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeToken:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeUnicodeRange:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeUrl:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (id)_consumeWhitespace:(unsigned long long)arg1 consumed:(unsigned long long*)arg2;
- (unsigned short)_getChar:(unsigned long long)arg1;
- (id)currentToken;
- (void)dealloc;
- (id)getNextToken;
- (id)initWithText:(id)arg1;
- (bool)isEOF:(unsigned long long)arg1;
- (bool)isValidEscape:(unsigned long long)arg1;
- (void)reconsumeToken:(id)arg1;
- (bool)wouldStartIdentifier:(unsigned long long)arg1;
- (bool)wouldStartNumber:(unsigned long long)arg1;

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