<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TIMecabraCandidate.h</title>
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

/PrivateFrameworks/TextInput.framework/TIMecabraCandidate.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput (1.0)
 */

@interface TIMecabraCandidate : TIKeyboardCandidate {
    bool  _OTAWordListCandidate;
    NSString * _candidate;
    long long  _cursorMovement;
    unsigned long long  _deleteCount;
    bool  _emojiCandidate;
    bool  _extensionCandidate;
    NSString * _input;
    bool  _isAutocorrection;
    bool  _isForShortcutConversion;
    NSNumber * _mecabraCandidatePointerValue;
    bool  _regionalCandidate;
}

@property (nonatomic, retain) NSNumber *mecabraCandidatePointerValue;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

+ (bool)supportsSecureCoding;
+ (int)type;

- (void).cxx_destruct;
- (id)candidate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)cursorMovement;
- (unsigned long long)deleteCount;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 withFlags:(int)arg4;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 withFlags:(int)arg4 deleteCount:(unsigned long long)arg5 cursorMovement:(long long)arg6;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3;
- (id)input;
- (bool)isAutocorrection;
- (bool)isEmojiCandidate;
- (bool)isExtensionCandidate;
- (bool)isForShortcutConversion;
- (bool)isFullwidthCandidate;
- (bool)isOTAWordListCandidate;
- (bool)isRegionalCandidate;
- (id)label;
- (id)mecabraCandidatePointerValue;
- (void)setMecabraCandidatePointerValue:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore

+ (id)convertedInputFromMecabraCandidate:(void*)arg1;
+ (id)displayReadingFromMecabraCandidate:(void*)arg1;
+ (id)mecabraCandidateWithCandidateRef:(const void*)arg1 autoconvertedCandidates:(id)arg2;

- (id)initWithMecabraCandidate:(const void*)arg1;

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
