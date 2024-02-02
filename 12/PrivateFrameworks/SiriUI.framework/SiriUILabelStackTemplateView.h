<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SiriUILabelStackTemplateView.h</title>
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

/PrivateFrameworks/SiriUI.framework/SiriUILabelStackTemplateView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI (1)
 */

@interface SiriUILabelStackTemplateView : SiriUIBaseTemplateView {
    UIView * _bottomView;
    NSLayoutConstraint * _bottomViewConstraint;
    NSMutableDictionary * _componentsForViews;
    bool  _constraintsUpdated;
    UILayoutGuide * _contentBoundsGuide;
    NSDictionary * _contentBoundsGuideConstraints;
    long long  _defaultTextAlignment;
    <SiriUILabelStackTemplateViewDelegate> * _delegate;
    UIStackView * _leadingViews;
    UILayoutGuide * _stackedComponentsBoundsGuide;
    NSMutableDictionary * _stackedComponentsGuideConstraints;
    UIView * _topView;
    NSLayoutConstraint * _topViewConstraint;
    UIStackView * _trailingViews;
}

@property (nonatomic, retain) UIView *bottomView;
@property (nonatomic) NSLayoutConstraint *bottomViewConstraint;
@property (nonatomic, retain) NSMutableDictionary *componentsForViews;
@property (nonatomic) bool constraintsUpdated;
@property (nonatomic, retain) UILayoutGuide *contentBoundsGuide;
@property (nonatomic, retain) NSDictionary *contentBoundsGuideConstraints;
@property (nonatomic) <SiriUILabelStackTemplateModel> *dataSource;
@property (nonatomic) long long defaultTextAlignment;
@property (nonatomic) <SiriUILabelStackTemplateViewDelegate> *delegate;
@property (nonatomic, retain) UIStackView *leadingViews;
@property (nonatomic, retain) UILayoutGuide *stackedComponentsBoundsGuide;
@property (nonatomic, retain) NSMutableDictionary *stackedComponentsGuideConstraints;
@property (nonatomic, retain) UIView *topView;
@property (nonatomic) NSLayoutConstraint *topViewConstraint;
@property (nonatomic, retain) UIStackView *trailingViews;

- (void).cxx_destruct;
- (void)_createContentLayoutGuides;
- (void)_updateTopAndBottomViewConstraints;
- (id)bottomView;
- (id)bottomViewConstraint;
- (id)componentsForViews;
- (bool)constraintsUpdated;
- (id)contentBoundsGuide;
- (id)contentBoundsGuideConstraints;
- (long long)defaultTextAlignment;
- (id)delegate;
- (double)desiredHeight;
- (id)initWithDataSource:(id)arg1;
- (void)insertLeadingView:(id)arg1 withMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)insertTopView:(id)arg1;
- (void)insertTrailingView:(id)arg1 withMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (long long)layoutStyle;
- (id)leadingViews;
- (void)populateStack;
- (void)reloadData;
- (void)removeFromTemplatedSuperview;
- (void)setBottomView:(id)arg1;
- (void)setBottomViewConstraint:(id)arg1;
- (void)setComponentsForViews:(id)arg1;
- (void)setConstraintsUpdated:(bool)arg1;
- (void)setContentBoundsGuide:(id)arg1;
- (void)setContentBoundsGuideConstraints:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDefaultTextAlignment:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLeadingViews:(id)arg1;
- (void)setStackedComponentsBoundsGuide:(id)arg1;
- (void)setStackedComponentsGuideConstraints:(id)arg1;
- (void)setTemplatedSuperview:(id)arg1;
- (void)setTopView:(id)arg1;
- (void)setTopViewConstraint:(id)arg1;
- (void)setTrailingViews:(id)arg1;
- (id)stackedComponentsBoundsGuide;
- (id)stackedComponentsGuideConstraints;
- (id)topView;
- (id)topViewConstraint;
- (id)trailingViews;
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