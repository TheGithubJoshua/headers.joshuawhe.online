<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>DOCShareHeaderView.h</title>
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

/PrivateFrameworks/DocumentManagerUICore.framework/DOCShareHeaderView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore (68.100.44)
 */

@interface DOCShareHeaderView : UIView {
    UIButton * _addTagButton;
    NSArray * _addTagButtonIsHiddenConstraints;
    NSArray * _addTagButtonIsNextToProviderNameConstraints;
    NSArray * _addTagButtonIsNextToTagsConstraints;
    UILabel * _displayNameLabel;
    NSArray * _hasTagsConstraints;
    NSArray * _noTagsConstraints;
    UILabel * _providerNameLabel;
    NSArray * _tags;
    DOCTagsLineView * _tagsView;
    NSLayoutConstraint * _thumbnailHeightConstraint;
    DOCStackedThumbnailView * _thumbnailView;
    NSLayoutConstraint * _thumbnailWidthConstraint;
}

@property (nonatomic, readonly) UIButton *addTagButton;
@property (nonatomic, readonly) NSArray *addTagButtonIsHiddenConstraints;
@property (nonatomic, readonly) NSArray *addTagButtonIsNextToProviderNameConstraints;
@property (nonatomic, readonly) NSArray *addTagButtonIsNextToTagsConstraints;
@property (nonatomic) <DOCTagViewDelegate> *delegate;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) UILabel *displayNameLabel;
@property (nonatomic, readonly) NSArray *hasTagsConstraints;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic, readonly) NSArray *noTagsConstraints;
@property (nonatomic, retain) NSString *providerName;
@property (nonatomic, readonly) UILabel *providerNameLabel;
@property (nonatomic) bool showAddTagButton;
@property (nonatomic, retain) NSArray *tags;
@property (nonatomic, readonly) DOCTagsLineView *tagsView;
@property (nonatomic, readonly) NSLayoutConstraint *thumbnailHeightConstraint;
@property (nonatomic, readonly) DOCStackedThumbnailView *thumbnailView;
@property (nonatomic, readonly) NSLayoutConstraint *thumbnailWidthConstraint;

- (void).cxx_destruct;
- (id)addTagButton;
- (id)addTagButtonIsHiddenConstraints;
- (id)addTagButtonIsNextToProviderNameConstraints;
- (id)addTagButtonIsNextToTagsConstraints;
- (id)delegate;
- (id)displayName;
- (id)displayNameLabel;
- (id)hasTagsConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)items;
- (id)noTagsConstraints;
- (id)providerName;
- (id)providerNameLabel;
- (void)setDelegate:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setProviderName:(id)arg1;
- (void)setShowAddTagButton:(bool)arg1;
- (void)setTags:(id)arg1;
- (bool)showAddTagButton;
- (id)tags;
- (id)tagsView;
- (id)thumbnailHeightConstraint;
- (id)thumbnailView;
- (id)thumbnailWidthConstraint;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateThumbnailSize;

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
