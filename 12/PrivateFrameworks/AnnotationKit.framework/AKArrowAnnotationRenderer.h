<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AKArrowAnnotationRenderer.h</title>
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

/PrivateFrameworks/AnnotationKit.framework/AKArrowAnnotationRenderer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit (232.3.30)
 */

@interface AKArrowAnnotationRenderer : AKAnnotationRenderer

+ (void)_arrowHeadLineIntersection:(id)arg1 outStartIntersection:(struct CGPoint { double x1; double x2; }*)arg2 outBezierStartParameter:(double*)arg3 outEndIntersection:(struct CGPoint { double x1; double x2; }*)arg4 outBezierEndParameter:(double*)arg5;
+ (void)_arrowHeadPathsForArrow:(id)arg1 inOutStartArrowHead:(struct CGPath { }*)arg2 outBezierStartParameter:(double*)arg3 inOutEndArrowHead:(struct CGPath { }*)arg4 outBezierEndParameter:(double*)arg5;
+ (struct CGSize { double x1; double x2; })_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_concreteDrawingBoundsOfAnnotation:(id)arg1;
+ (bool)_concretePointIsOnBorder:(struct CGPoint { double x1; double x2; })arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;
+ (bool)_concretePointIsOnInside:(struct CGPoint { double x1; double x2; })arg1 ofAnnotation:(id)arg2;
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext { }*)arg2 forDisplay:(bool)arg3 pageControllerOrNil:(id)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_concreteTextBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 optionalText:(id)arg3;
+ (void)_controlPointsForArrow:(id)arg1 outControlPoint1:(struct CGPoint { double x1; double x2; }*)arg2 outControlPoint2:(struct CGPoint { double x1; double x2; }*)arg3;
+ (struct CGPoint { double x1; double x2; })_cubicBezierPointForParameter:(double)arg1 start:(struct CGPoint { double x1; double x2; })arg2 controlPt1:(struct CGPoint { double x1; double x2; })arg3 controlPt2:(struct CGPoint { double x1; double x2; })arg4 end:(struct CGPoint { double x1; double x2; })arg5;
+ (void)_drawPathForArrow:(id)arg1 inContext:(struct CGContext { }*)arg2 inPath:(struct CGPath { }*)arg3 pageControllerForPixelAlignmentOrNil:(id)arg4 minimumGrabbableBorderThickness:(double)arg5;
+ (unsigned long long)_drawableArrowHeads:(id)arg1;
+ (struct CGPath { }*)_newConcreteTextExclusionPathForAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (struct CGPath { }*)_newLinePathForArrow:(id)arg1 withHeads:(bool)arg2 fromBezierParameter:(double)arg3 toBezierParameter:(double)arg4 optionalPageController:(id)arg5 optionalContext:(struct CGContext { }*)arg6;
+ (double)_oneDimensionalCubicBezierValueForParameter:(double)arg1 start:(double)arg2 controlPt1:(double)arg3 controlPt2:(double)arg4 end:(double)arg5;

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
