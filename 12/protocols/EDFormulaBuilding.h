<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EDFormulaBuilding.h</title>
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

/protocols/EDFormulaBuilding.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol EDFormulaBuilding <NSObject>

@required

- (bool)addArrayWithCol:(int)arg1 andRow:(int)arg2;
- (bool)addInfixOperator:(int)arg1 atIndex:(unsigned int)arg2 factor:(double)arg3;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 numArgs:(int)arg3;
- (bool)convertLastRefsToArea;
- (bool)convertToIntersect:(unsigned int)arg1;
- (bool)convertToList:(unsigned int)arg1;
- (bool)convertToList:(unsigned int)arg1 withFinalParen:(bool)arg2;
- (bool)fixTableOfConstantsRefs;
- (bool)insertExternalName:(unsigned long long)arg1 withLink:(unsigned long long)arg2 atIndex:(unsigned int)arg3;
- (bool)insertName:(unsigned long long)arg1 atIndex:(unsigned int)arg2;
- (bool)isSupportedFormula;
- (EDLinkReference *)lastTokenRefOrArea3dLinkRefIsValid:(bool*)arg1 withEDLinks:(EDLinksCollection *)arg2;
- (void)markLastTokenAsDuration;
- (void)markLastTokenAsSpanningRefVertically:(bool)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3;
- (void)removeTokenAtIndex:(unsigned long long)arg1;
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)setWarning:(int)arg1;
- (bool)shrinkSpanningRefAtArgIndex:(unsigned int)arg1;
- (int)tokenTypeAtIndex:(unsigned long long)arg1;
- (bool)uppercaseArgAtIndex:(unsigned int)arg1;
- (int)warningType;
- (bool)wrapArgumentsWithOperator:(int)arg1 argumentCount:(unsigned int)arg2 atIndex:(unsigned int)arg3;

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