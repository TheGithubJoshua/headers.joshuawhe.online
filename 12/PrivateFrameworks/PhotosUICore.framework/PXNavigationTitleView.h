<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXNavigationTitleView.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXNavigationTitleView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXNavigationTitleView : UIView <PXPhotosDetailsBarsContentView> {
    NSArray * __constraints;
    UILabel * __subtitleLabel;
    bool  __subtitleVisible;
    UILabel * __titleLabel;
    bool  _isPerformingChanges;
    bool  _isPerformingUpdates;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _margins;
    struct { 
        bool texts; 
        bool fonts; 
        bool constraints; 
        bool size; 
    }  _needsUpdateFlags;
    NSString * _subtitle;
    UIFont * _subtitleFont;
    UIColor * _subtitleTextColor;
    double  _subviewsAlpha;
    long long  _textAlignment;
    NSString * _title;
    UIFont * _titleFont;
    UIColor * _titleTextColor;
    long long  _verticalSizeClass;
}

@property (setter=_setConstraints:, nonatomic, retain) NSArray *_constraints;
@property (nonatomic, readonly) UILabel *_subtitleLabel;
@property (getter=_isSubtitleVisible, setter=_setSubtitleVisible:, nonatomic) bool _subtitleVisible;
@property (nonatomic, readonly) UILabel *_titleLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=setMargins:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } margins;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) UIFont *subtitleFont;
@property (nonatomic, retain) UIColor *subtitleTextColor;
@property (nonatomic) double subviewsAlpha;
@property (readonly) Class superclass;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, retain) UIColor *titleTextColor;
@property (nonatomic) long long verticalSizeClass;

- (void).cxx_destruct;
- (id)_constraints;
- (void)_invalidateConstraints;
- (void)_invalidateFonts;
- (void)_invalidateSize;
- (void)_invalidateTexts;
- (bool)_isSubtitleVisible;
- (bool)_needsUpdate;
- (void)_setConstraints:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setSubtitleVisible:(bool)arg1;
- (id)_subtitleLabel;
- (id)_titleLabel;
- (void)_updateConstraintsIfNeeded;
- (void)_updateFontsIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateSizeIfNeeded;
- (void)_updateTextsIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margins;
- (void)performChanges:(id /* block */)arg1;
- (void)setMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleFont:(id)arg1;
- (void)setSubtitleTextColor:(id)arg1;
- (void)setSubviewsAlpha:(double)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setVerticalSizeClass:(long long)arg1;
- (id)subtitle;
- (id)subtitleFont;
- (id)subtitleTextColor;
- (double)subviewsAlpha;
- (long long)textAlignment;
- (id)title;
- (id)titleFont;
- (id)titleTextColor;
- (void)updateConstraints;
- (long long)verticalSizeClass;

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
