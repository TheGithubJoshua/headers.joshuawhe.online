<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SGSignatureDissector.h</title>
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

/PrivateFrameworks/CoreSuggestionsInternals.framework/SGSignatureDissector.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals (680.125)
 */

@interface SGSignatureDissector : SGPipelineDissector

+ (id)singleLineSignatureLeadingCharacterSet;

- (bool)_paragraphWithContent:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 exceedsLineLimit:(unsigned long long)arg3 orCharacterLimit:(unsigned long long)arg4;
- (id)authorFirstname:(id)arg1;
- (id)authorName:(id)arg1;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)findRejectSig:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })findSignaturePrefix:(id)arg1;
- (id)findSignaturePrefixesInEntity:(id)arg1 withSignaturePrefixes:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })findValediction:(id)arg1;
- (id)findValedictionCommencedSignatureRanges:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })hmmPlausibleSignatureRange:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })hmmSignatureRange:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })hmmSignatureRangeWithContent:(id)arg1 detectedData:(id)arg2 quotedRegions:(id)arg3 authorName:(id)arg4;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })miniSignatureRange:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfSenderName:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 restrictLength:(bool)arg3 forEntity:(id)arg4;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfSenderNameComponents:(id)arg1 withFullname:(id)arg2 inSubstring:(id)arg3;
- (bool)shouldIgnoreSignature:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })sigHtmlBlockRange:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })signatureRange:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })trailingSenderNameLineRange:(id)arg1;

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
