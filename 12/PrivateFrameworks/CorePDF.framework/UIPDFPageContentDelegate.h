<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIPDFPageContentDelegate.h</title>
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

/PrivateFrameworks/CorePDF.framework/UIPDFPageContentDelegate.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF (414)
 */

@interface UIPDFPageContentDelegate : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _box;
    UIPDFDocument * _document;
    struct CGColor { } * _highlightColor;
    bool  _isCancelled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    CALayer * _owner;
    unsigned long long  _pageIndex;
    unsigned long long  _pageRotation;
    unsigned long long  _threadCount;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    UIPDFPageView * _view;
    struct CGColor { } * _white;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } box;
@property (retain) UIPDFDocument *document;
@property struct CGColor { }*highlightColor;
@property bool isCancelled;
@property CALayer *owner;
@property unsigned long long pageIndex;
@property unsigned long long pageRotation;
@property (readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property UIPDFPageView *view;

- (void)addRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toPath:(struct CGPath { }*)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg3 view:(id)arg4 owner:(id)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })box;
- (void)computeTransform;
- (void)dealloc;
- (id)document;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawSelectionLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawSelectionLayerBlockMode:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (struct CGColor { }*)highlightColor;
- (id)init;
- (bool)isCancelled;
- (id)owner;
- (bool)pageHasSelection;
- (unsigned long long)pageIndex;
- (unsigned long long)pageRotation;
- (void)setBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDocument:(id)arg1;
- (void)setHighlightColor:(struct CGColor { }*)arg1;
- (void)setIsCancelled:(bool)arg1;
- (void)setOwner:(id)arg1;
- (void)setPageIndex:(unsigned long long)arg1;
- (void)setPageRotation:(unsigned long long)arg1;
- (void)setView:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (id)view;

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