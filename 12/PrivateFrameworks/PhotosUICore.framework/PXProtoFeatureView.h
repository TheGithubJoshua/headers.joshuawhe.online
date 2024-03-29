<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXProtoFeatureView.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXProtoFeatureView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXProtoFeatureView : UIView <PXProtoMutableFeatureView> {
    UIImageView * __removeIconView;
    UIView * _contentView;
    bool  _disabled;
    <PXProtoFeature> * _feature;
    bool  _isPerformingChanges;
    bool  _isPerformingUpdates;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _minimumMargins;
    struct { 
        bool content; 
    }  _needsUpdateFlags;
    bool  _selected;
    bool  _shouldUpdateContentOnResize;
}

@property (nonatomic, readonly) UIImageView *_removeIconView;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } compactContentSize;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic, readonly) bool disabled;
@property (nonatomic, readonly) <PXProtoFeature> *feature;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } minimumMargins;
@property (nonatomic, readonly) UIColor *preferredBackgroundColor;
@property (nonatomic, readonly) double recommendedCompactContentHeight;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } regularContentSize;
@property (getter=isSelected, nonatomic, readonly) bool selected;
@property (nonatomic, readonly) bool shouldUpdateContentOnResize;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsContentView;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentViewFrame;
- (void)_invalidateContent;
- (bool)_needsUpdate;
- (id)_removeIconView;
- (void)_setNeedsUpdate;
- (void)_updateContentIfNeeded;
- (void)_updateIfNeeded;
- (bool)canBecomeFocused;
- (struct CGSize { double x1; double x2; })compactContentSize;
- (id)contentView;
- (id)feature;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isDisabled;
- (bool)isSelected;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })minimumMargins;
- (void)performChanges:(id /* block */)arg1;
- (id)preferredBackgroundColor;
- (void)prepareForReuse;
- (double)recommendedCompactContentHeight;
- (struct CGSize { double x1; double x2; })regularContentSize;
- (void)setDisabled:(bool)arg1;
- (void)setFeature:(id)arg1;
- (void)setSelected:(bool)arg1;
- (bool)shouldUpdateContentOnResize;
- (void)updateContent;
- (bool)wantsContentView;

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
