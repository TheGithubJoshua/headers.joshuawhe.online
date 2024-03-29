<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HLPHelpTableOfContentCell.h</title>
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

/PrivateFrameworks/HelpKit.framework/HLPHelpTableOfContentCell.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit (118)
 */

@interface HLPHelpTableOfContentCell : UITableViewCell {
    bool  _RTL;
    UIImageView * _arrowImageView;
    NSLayoutConstraint * _arrowImageViewLeadingConstraint;
    NSLayoutConstraint * _arrowImageViewWidthConstraint;
    bool  _closed;
    HLPHelpItem * _helpItem;
    bool  _ignoreLevels;
    NSLayoutConstraint * _labelToArrowViewLeadingConstraint;
    UILabel * _nameLabel;
    NSLayoutConstraint * _sectionImageLeadingConstraint;
    TPSURLSessionItem * _sectionImageURLSessionItem;
    UIImageView * _sectionImageView;
    NSLayoutConstraint * _sectionImageWidthConstraint;
    bool  _showFirstLevelIcon;
}

@property (nonatomic) bool RTL;
@property (nonatomic, retain) UIImageView *arrowImageView;
@property (nonatomic) bool closed;
@property (nonatomic, retain) HLPHelpItem *helpItem;
@property (nonatomic) bool ignoreLevels;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) TPSURLSessionItem *sectionImageURLSessionItem;
@property (nonatomic, retain) UIImageView *sectionImageView;
@property (nonatomic) bool showFirstLevelIcon;

- (void).cxx_destruct;
- (bool)RTL;
- (id)accessibilityLabel;
- (id)arrowImageView;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arrowTransform;
- (void)cancelIconRequest;
- (bool)closed;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)helpItem;
- (bool)ignoreLevels;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (long long)itemLevel;
- (void)layoutSubviews;
- (id)nameLabel;
- (void)prepareForReuse;
- (id)sectionImageURLSessionItem;
- (id)sectionImageView;
- (void)setArrowImageView:(id)arg1;
- (void)setClosed:(bool)arg1;
- (void)setHelpItem:(id)arg1;
- (void)setIgnoreLevels:(bool)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setRTL:(bool)arg1;
- (void)setSectionImageURLSessionItem:(id)arg1;
- (void)setSectionImageView:(id)arg1;
- (void)setShowFirstLevelIcon:(bool)arg1;
- (bool)showFirstLevelIcon;
- (void)toggle;
- (void)updateConstraints;
- (void)updateToggleImageAnimated:(bool)arg1;

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
