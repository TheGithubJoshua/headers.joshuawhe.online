<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXUIWidgetFooterView.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXUIWidgetFooterView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXUIWidgetFooterView : UIView {
    NSArray * __constraints;
    UIButton * __disclosureButton;
    UIFocusGuide * __focusGuide;
    bool  __hasContent;
    UIView * __leadingSeparator;
    UIView * __trailingSeparator;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    <PXUIWidgetFooterViewDelegate> * _delegate;
    struct { 
        bool didSelectDisclosure; 
    }  _delegateRespondsTo;
    NSString * _disclosureTitle;
    UIFont * _font;
    bool  _isPerformingChanges;
    bool  _isPerformingUpdates;
    long long  _layoutStyle;
    struct { 
        bool hasContent; 
        bool disclosure; 
        bool separators; 
        bool focusGuide; 
    }  _needsUpdateFlags;
}

@property (setter=_setConstraints:, nonatomic, copy) NSArray *_constraints;
@property (nonatomic, readonly) UIButton *_disclosureButton;
@property (nonatomic, readonly) UIFocusGuide *_focusGuide;
@property (setter=_setHasContent:, nonatomic) bool _hasContent;
@property (nonatomic, readonly) UIView *_leadingSeparator;
@property (nonatomic, readonly) UIView *_trailingSeparator;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) <PXUIWidgetFooterViewDelegate> *delegate;
@property (nonatomic, copy) NSString *disclosureTitle;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) long long layoutStyle;

- (void).cxx_destruct;
- (id)_constraints;
- (id)_disclosureButton;
- (id)_disclosureButtonCreateIfNeeded:(bool)arg1;
- (id)_focusGuide;
- (id)_focusGuideCreateIfNeeded:(bool)arg1;
- (void)_handleDisclosureButton:(id)arg1;
- (bool)_hasContent;
- (void)_invalidateDisclosure;
- (void)_invalidateFocusGuide;
- (void)_invalidateHasContent;
- (void)_invalidateSeparators;
- (id)_leadingSeparator;
- (id)_leadingSeparatorCreateIfNeeded:(bool)arg1;
- (bool)_needsUpdate;
- (void)_setConstraints:(id)arg1;
- (void)_setHasContent:(bool)arg1;
- (void)_setNeedsUpdate;
- (id)_trailingSeparator;
- (id)_trailingSeparatorCreateIfNeeded:(bool)arg1;
- (void)_updateDisclosureIfNeeded;
- (void)_updateFocusGuideIfNeeded;
- (void)_updateHasContentIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateSeparatorsIfNeeded;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)delegate;
- (id)disclosureTitle;
- (id)font;
- (long long)layoutStyle;
- (void)performChanges:(id /* block */)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisclosureTitle:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)tintColorDidChange;
- (void)updateConstraints;

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