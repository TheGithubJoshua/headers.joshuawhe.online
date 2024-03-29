<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NSSQLSimpleWhereIntermediate.h</title>
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

/Frameworks/CoreData.framework/NSSQLSimpleWhereIntermediate.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreData.framework/CoreData (866.6)
 */

@interface NSSQLSimpleWhereIntermediate : NSSQLWhereIntermediate {
    NSMutableArray * _comparisonPredicateScopedItem;
    NSExpression * _effectiveLeftExpression;
    NSExpression * _effectiveRightExpression;
}

- (long long)_cfStringOptionsFromPredicateOptions:(unsigned long long)arg1;
- (id)_entityDestinationIfKeyOfSomeSort:(id)arg1;
- (id)_generateSQLBeginsWithStringInContext:(id)arg1;
- (id)_generateSQLBetweenStringInContext:(id)arg1;
- (id)_generateSQLBoundByStringInContext:(id)arg1;
- (id)_generateSQLContainmentStringInContext:(id)arg1;
- (id)_generateSQLEndsWithStringInContext:(id)arg1;
- (id)_generateSQLForConst:(id)arg1 inAttribute:(id)arg2 expression:(id)arg3 inContext:(id)arg4;
- (id)_generateSQLForConst:(id)arg1 inManyToMany:(id)arg2 expression:(id)arg3 inContext:(id)arg4;
- (id)_generateSQLForConst:(id)arg1 inToMany:(id)arg2 inContext:(id)arg3;
- (id)_generateSQLForConstKeyArray:(id)arg1 targetEntity:(id)arg2 reboundFrom:(id)arg3 inContext:(id)arg4;
- (id)_generateSQLForMatchingOperator:(id)arg1 inContext:(id)arg2;
- (id)_generateSQLForString:(id)arg1 expressionPath:(id)arg2 wildStart:(bool)arg3 wildEnd:(bool)arg4 allowToMany:(bool)arg5 inContext:(id)arg6;
- (id)_generateSQLForWildSubStringForGlob:(id)arg1 wildStart:(bool)arg2 wildEnd:(bool)arg3;
- (id)_generateSQLSubstringWildStart:(bool)arg1 wildEnd:(bool)arg2 inContext:(id)arg3;
- (id)_generateSQLType1InContext:(id)arg1;
- (id)_generateSQLType2InContext:(id)arg1;
- (id)_generateSQLType3InContext:(id)arg1;
- (bool)_isNilExpression:(id)arg1;
- (id)_lastScopedItem;
- (id)_prefetchSourceOfUnidirectionalVirtualInverse:(id)arg1;
- (id)_sqlTokenForPredicateOperator:(unsigned long long)arg1 inContext:(id)arg2;
- (id)_upperBoundSearchStringForString:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2;
- (bool)isWhereScoped;

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
