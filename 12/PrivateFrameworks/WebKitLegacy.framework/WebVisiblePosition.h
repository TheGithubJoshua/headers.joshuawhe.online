<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WebVisiblePosition.h</title>
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

/PrivateFrameworks/WebKitLegacy.framework/WebVisiblePosition.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy (8607.3.18)
 */

@interface WebVisiblePosition : NSObject {
    struct WebObjectInternal { } * _internal;
}

@property (nonatomic) int affinity;

+ (id)_wrapVisiblePosition:(struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; } x1; int x2; })arg1;
+ (id)_wrapVisiblePositionIfValid:(struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; } x1; int x2; })arg1;

- (struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; } x1; int x2; })_visiblePosition;
- (int)affinity;
- (bool)atAlphaNumericBoundaryInDirection:(int)arg1;
- (bool)atBoundaryOfGranularity:(int)arg1 inDirection:(int)arg2;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (bool)directionIsDownstream:(int)arg1;
- (int)distanceFromPosition:(id)arg1;
- (id)enclosingRangeWithCorrectionIndicator;
- (id)enclosingRangeWithDictationPhraseAlternatives:(id*)arg1;
- (id)enclosingTextUnitOfGranularity:(int)arg1 inDirectionIfAtBoundary:(int)arg2;
- (bool)isEditable;
- (bool)isEqual:(id)arg1;
- (id)positionAtStartOrEndOfWord;
- (id)positionByMovingInDirection:(int)arg1 amount:(unsigned int)arg2;
- (id)positionByMovingInDirection:(int)arg1 amount:(unsigned int)arg2 withAffinityDownstream:(bool)arg3;
- (id)positionOfNextBoundaryOfGranularity:(int)arg1 inDirection:(int)arg2;
- (bool)requiresContextForWordBoundary;
- (void)setAffinity:(int)arg1;
- (unsigned char)textDirection;
- (bool)withinTextUnitOfGranularity:(int)arg1 inDirectionIfAtBoundary:(int)arg2;

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
