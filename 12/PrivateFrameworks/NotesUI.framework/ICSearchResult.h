<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ICSearchResult.h</title>
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

/PrivateFrameworks/NotesUI.framework/ICSearchResult.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI (1349.30)
 */

@interface ICSearchResult : NSObject {
    unsigned long long  _cachedHash;
    NSString * _displayingSnippet;
    NSTextCheckingResult * _displayingSnippetCheckingResult;
    NSString * _displayingTitle;
    NSTextCheckingResult * _displayingTitleCheckingResult;
    NSString * _highlightString;
    <ICSearchIndexable> * _object;
    double  _rankingScore;
    unsigned long long  _relevanceBitField;
    NSString * _searchString;
    NSAttributedString * _snippetAttributedString;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _snippetAttributedStringInsideFrame;
    NSAttributedString * _titleAttributedString;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _titleAttributedStringInsideFrame;
}

@property (nonatomic, readonly) NSString *displayingSnippet;
@property (nonatomic, readonly) NSTextCheckingResult *displayingSnippetCheckingResult;
@property (nonatomic, readonly) NSString *displayingTitle;
@property (nonatomic, readonly) NSTextCheckingResult *displayingTitleCheckingResult;
@property (nonatomic, readonly) NSString *highlightString;
@property (nonatomic, readonly) <ICSearchIndexable> *object;
@property (nonatomic, readonly) double rankingScore;
@property (nonatomic, readonly) unsigned long long relevanceBitField;
@property (nonatomic, readonly, copy) NSString *searchString;
@property (nonatomic, retain) NSAttributedString *snippetAttributedString;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } snippetAttributedStringInsideFrame;
@property (nonatomic, retain) NSAttributedString *titleAttributedString;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } titleAttributedStringInsideFrame;

+ (id)attributedStringWithMatchHighlighted:(id)arg1 textCheckingResult:(id)arg2 usingAttributes:(id)arg3 highlightColor:(struct UIColor { Class x1; }*)arg4 insideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
+ (id)attributesByHighlightingAttributes:(id)arg1 withHighlightColor:(struct UIColor { Class x1; }*)arg2;
+ (id)authorNameToHighlightForNote:(id)arg1 fromSearchResult:(id)arg2 matchWordBoundaries:(bool)arg3;
+ (id)bestMatchOfString:(id)arg1 withinString:(id)arg2 matchWordBoundaries:(bool)arg3;
+ (id)bestMatchTokensForString:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectForAttributedString:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2;
+ (bool)canFitAttributedString:(id)arg1 ellipses:(id)arg2 shouldPrefixWithEllipses:(bool)arg3 insideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
+ (id)firstMatchOfString:(id)arg1 withinString:(id)arg2 matchWordBoundaries:(bool)arg3;
+ (id)regularExpressionForSearchingWithString:(id)arg1 matchWordBoundaries:(bool)arg2;
+ (id)stringMatchHighlightedForAttributedString:(id)arg1 highlightColor:(struct UIColor { Class x1; }*)arg2 fromSearchResult:(id)arg3;
+ (id)stringMatchHighlightedForString:(id)arg1 atributedString:(id)arg2 highlightString:(id)arg3 highlightColor:(struct UIColor { Class x1; }*)arg4;
+ (id)stringMatchHighlightedForString:(id)arg1 highlightColor:(struct UIColor { Class x1; }*)arg2 fromSearchResult:(id)arg3;

- (void).cxx_destruct;
- (id)attributedTitleWithBaseAttributes:(id)arg1 highlightColor:(struct UIColor { Class x1; }*)arg2 insideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)bestMatchWithinString:(id)arg1;
- (id)bestMatchWithinString:(id)arg1 matchWordBoundaries:(bool)arg2;
- (long long)compareByModificationDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayingSnippet;
- (id)displayingSnippetCheckingResult;
- (id)displayingTitle;
- (id)displayingTitleCheckingResult;
- (unsigned long long)hash;
- (id)highlightString;
- (id)initWithMainContextObject:(id)arg1 currentContextObject:(id)arg2 rankingScore:(double)arg3 relevanceBitField:(unsigned long long)arg4 searchString:(id)arg5 highlightString:(id)arg6;
- (id)initWithObject:(id)arg1 rankingScore:(double)arg2 relevanceBitField:(unsigned long long)arg3 searchString:(id)arg4 highlightString:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)object;
- (void)prepareDisplayingSnippetWithAccessingObject:(id)arg1;
- (void)prepareDisplayingTitleWithAccessingObject:(id)arg1;
- (double)rankingScore;
- (void)refetchObjectFromContext:(id)arg1;
- (unsigned long long)relevanceBitField;
- (id)searchString;
- (void)setSnippetAttributedString:(id)arg1;
- (void)setSnippetAttributedStringInsideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTitleAttributedString:(id)arg1;
- (void)setTitleAttributedStringInsideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)snippetAttributedString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })snippetAttributedStringInsideFrame;
- (id)snippetWithBaseAttributes:(id)arg1 highlightColor:(struct UIColor { Class x1; }*)arg2 insideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)titleAttributedString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleAttributedStringInsideFrame;

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
