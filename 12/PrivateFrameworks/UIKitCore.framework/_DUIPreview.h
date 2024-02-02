<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_DUIPreview.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_DUIPreview.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _DUIPreview : NSObject <NSCopying, NSSecureCoding> {
    UIColor * _backgroundColor;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    bool  _fadesHorizontally;
    bool  _fadesVertically;
    bool  _hidesSourceView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _liftAnchorPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalCenter;
    double  _originalRotation;
    UIBezierPath * _outline;
    NSDictionary * _springboardParameters;
    bool  _springboardPlatterStyle;
    bool  _textMode;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewScaleFactor;
}

@property (nonatomic, copy) NSDictionary *_springboardParameters;
@property (nonatomic) bool _springboardPlatterStyle;
@property (nonatomic, readonly) double backAlpha;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } boundingSize;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } contentOffset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } croppedScaledAnchorPoint;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } croppedScaledSize;
@property (nonatomic) bool fadesHorizontally;
@property (nonatomic) bool fadesVertically;
@property (nonatomic) bool hidesSourceView;
@property (nonatomic, readonly) double liftAlpha;
@property (nonatomic) struct CGPoint { double x1; double x2; } liftAnchorPoint;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } liftTransform;
@property (nonatomic) struct CGPoint { double x1; double x2; } originalCenter;
@property (nonatomic) double originalRotation;
@property (nonatomic, copy) UIBezierPath *outline;
@property (getter=isOversized, nonatomic, readonly) bool oversized;
@property (nonatomic, readonly) UIDragPreviewParameters *parameters;
@property (nonatomic, readonly) double scaleFactor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } scaledSize;
@property (nonatomic, readonly) double stackAlpha;
@property (nonatomic) bool textMode;
@property (nonatomic, readonly) double topAlpha;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } unscaledAnchorPoint;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } unscaledSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } viewScaleFactor;

+ (id)defaultPreviewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (double)defaultStackAlpha;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_springboardParameters;
- (bool)_springboardPlatterStyle;
- (double)_topOffset;
- (double)backAlpha;
- (id)backgroundColor;
- (struct CGSize { double x1; double x2; })boundingSize;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPoint { double x1; double x2; })croppedScaledAnchorPoint;
- (struct CGSize { double x1; double x2; })croppedScaledSize;
- (void)encodeWithCoder:(id)arg1;
- (bool)fadesHorizontally;
- (bool)fadesVertically;
- (bool)hidesSourceView;
- (id)init;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 outline:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithView:(id)arg1 container:(id)arg2 parameters:(id)arg3;
- (id)initWithView:(id)arg1 container:(id)arg2 parameters:(id)arg3 center:(struct CGPoint { double x1; double x2; })arg4;
- (bool)isEqual:(id)arg1;
- (bool)isOversized;
- (double)liftAlpha;
- (struct CGPoint { double x1; double x2; })liftAnchorPoint;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })liftTransform;
- (struct CGPoint { double x1; double x2; })originalCenter;
- (double)originalRotation;
- (id)outline;
- (id)parameters;
- (double)scaleFactor;
- (struct CGSize { double x1; double x2; })scaledSize;
- (void)setBackgroundColor:(id)arg1;
- (void)setFadesHorizontally:(bool)arg1;
- (void)setFadesVertically:(bool)arg1;
- (void)setHidesSourceView:(bool)arg1;
- (void)setLiftAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOriginalCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOriginalRotation:(double)arg1;
- (void)setOutline:(id)arg1;
- (void)setTextMode:(bool)arg1;
- (void)set_springboardParameters:(id)arg1;
- (void)set_springboardPlatterStyle:(bool)arg1;
- (double)stackAlpha;
- (bool)textMode;
- (double)topAlpha;
- (struct CGPoint { double x1; double x2; })unscaledAnchorPoint;
- (struct CGSize { double x1; double x2; })unscaledSize;
- (struct CGSize { double x1; double x2; })viewScaleFactor;

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