<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIFocusFastScrollingIndexBarView.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIFocusFastScrollingIndexBarView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIFocusFastScrollingIndexBarView : UIView {
    UIFont * _backgroundFont;
    NSMutableArray * _backgroundLabels;
    long long  _deflectedIndex;
    double  _deflectionAmount;
    NSArray * _entries;
    long long  _focusProminence;
    UIFont * _foregroundFont;
    NSMutableArray * _foregroundLabels;
    UIView * _foregroundMaskView;
    UIView * _foregroundWrapperView;
    UIView * _indicatorView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _maximumContentOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _minimumContentOffset;
    double  _preferredIndicatorWidth;
    double  _preferredLabelFontSize;
    long long  _style;
}

@property (nonatomic, copy) NSArray *entries;
@property (nonatomic) long long focusProminence;
@property (nonatomic) struct CGPoint { double x1; double x2; } maximumContentOffset;
@property (nonatomic) struct CGPoint { double x1; double x2; } minimumContentOffset;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (id)_backgroundFont;
- (id)_backgroundLabelTextColor;
- (void)_createLabels;
- (void)_determinePreferredSizes;
- (id)_foregroundFont;
- (id)_indicatorShadowPath;
- (double)_indicatorVerticalPositionForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)_lowerEntryForOffset:(double)arg1;
- (bool)_shouldUseDarkAppearance;
- (void)_showNormalFocusProminence;
- (void)_showReducedFocusProminence;
- (void)_updateColors;
- (id)_upperEntryForOffset:(double)arg1;
- (bool)canBecomeFocused;
- (id)entries;
- (long long)focusProminence;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)layoutSubviews;
- (struct CGPoint { double x1; double x2; })maximumContentOffset;
- (struct CGPoint { double x1; double x2; })minimumContentOffset;
- (void)resetDeflection:(bool)arg1;
- (void)setEntries:(id)arg1;
- (void)setFocusProminence:(long long)arg1;
- (void)setIndexOfDeflectedEntry:(long long)arg1 amount:(double)arg2;
- (void)setMaximumContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMinimumContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateForContentOffset:(struct CGPoint { double x1; double x2; })arg1;

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