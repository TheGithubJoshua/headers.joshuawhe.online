<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_NSPredicateUtilities.h</title>
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

/Frameworks/Foundation.framework/_NSPredicateUtilities.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Foundation.framework/Foundation (1575.23)
 */

@interface _NSPredicateUtilities : NSObject

+ (id)_collapseAndTokenize:(id)arg1 flags:(unsigned long long)arg2 locale:(id)arg3;
+ (id)_compoundPredicateClassesForSecureCoding;
+ (id)_constantValueClassesForSecureCoding;
+ (id)_convertStringToNumber:(id)arg1;
+ (id)_doTokenization:(id)arg1 locale:(id)arg2;
+ (id)_expressionClassesForSecureCoding;
+ (id)_extendedExpressionClassesForSecureCoding;
+ (unsigned long long)_getCommonTypeFor:(id)arg1;
+ (unsigned long long)_getITypeFor:(const char *)arg1;
+ (bool)_isReservedWordInParser:(id)arg1;
+ (id)_operatorClassesForSecureCoding;
+ (id)_parserableCollectionDescription:(id)arg1;
+ (id)_parserableDateDescription:(id)arg1;
+ (id)_parserableStringDescription:(id)arg1;
+ (id)_predicateClassesForSecureCoding;
+ (id)_processAndTokenize:(id)arg1 flags:(unsigned long long)arg2 locale:(id)arg3;
+ (id)abs:(id)arg1;
+ (id)add:(id)arg1 to:(id)arg2;
+ (id)average:(id)arg1;
+ (id)bitwiseAnd:(id)arg1 with:(id)arg2;
+ (id)bitwiseOr:(id)arg1 with:(id)arg2;
+ (id)bitwiseXor:(id)arg1 with:(id)arg2;
+ (id)castObject:(id)arg1 toType:(id)arg2;
+ (id)ceiling:(id)arg1;
+ (id)count:(id)arg1;
+ (id)distanceToLocation:(id)arg1 fromLocation:(id)arg2;
+ (id)distinct:(id)arg1;
+ (id)divide:(id)arg1 by:(id)arg2;
+ (id)exp:(id)arg1;
+ (id)floor:(id)arg1;
+ (id)from:(id)arg1 subtract:(id)arg2;
+ (id)indexed:(id)arg1 by:(id)arg2;
+ (id)inverseOrderKey:(id)arg1;
+ (id)leftshift:(id)arg1 by:(id)arg2;
+ (id)length:(id)arg1;
+ (id)ln:(id)arg1;
+ (id)log:(id)arg1;
+ (id)lowercase:(id)arg1;
+ (id)max:(id)arg1;
+ (id)median:(id)arg1;
+ (id)min:(id)arg1;
+ (id)mode:(id)arg1;
+ (id)modulus:(id)arg1 by:(id)arg2;
+ (id)multiply:(id)arg1 by:(id)arg2;
+ (id)noindex:(id)arg1;
+ (id)now;
+ (id)objectFrom:(id)arg1 withIndex:(id)arg2;
+ (id)onesComplement:(id)arg1;
+ (id)raise:(id)arg1 toPower:(id)arg2;
+ (id)random;
+ (id)randomn:(id)arg1;
+ (id)rightshift:(id)arg1 by:(id)arg2;
+ (id)sqrt:(id)arg1;
+ (id)stddev:(id)arg1;
+ (id)sum:(id)arg1;
+ (id)tokenize:(id)arg1 using:(id)arg2;
+ (id)trunc:(id)arg1;
+ (id)uppercase:(id)arg1;

- (double)distanceFromLocation:(id)arg1;

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