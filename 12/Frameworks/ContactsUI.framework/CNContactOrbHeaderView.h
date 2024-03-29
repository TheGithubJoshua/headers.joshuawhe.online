<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CNContactOrbHeaderView.h</title>
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

/Frameworks/ContactsUI.framework/CNContactOrbHeaderView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI (492)
 */

@interface CNContactOrbHeaderView : UIView {
    NSString * _alternateName;
    bool  _alwaysShowsMonogram;
    bool  _centersPhotoAndLabels;
    CNContactFormatter * _contactFormatter;
    NSArray * _contacts;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentMargins;
    UILabel * _fakeTaglineAlignmentLabel;
    NSMutableArray * _headerConstraints;
    UIView * _markerView;
    NSString * _message;
    UILabel * _nameLabel;
    NSDictionary * _nameTextAttributes;
    CNContactPhotoView * _photoView;
    UILabel * _taglineLabel;
    NSDictionary * _taglineTextAttributes;
}

@property (nonatomic, retain) NSString *alternateName;
@property (nonatomic) bool alwaysShowsMonogram;
@property (nonatomic) bool centersPhotoAndLabels;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, retain) NSArray *contacts;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentMargins;
@property (nonatomic, retain) UILabel *fakeTaglineAlignmentLabel;
@property (nonatomic, retain) NSMutableArray *headerConstraints;
@property (nonatomic, retain) UIView *markerView;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, copy) NSDictionary *nameTextAttributes;
@property (nonatomic, readonly) double photoLabelSpacing;
@property (nonatomic, readonly) CNContactPhotoView *photoView;
@property (nonatomic, retain) UILabel *taglineLabel;
@property (nonatomic, copy) NSDictionary *taglineTextAttributes;

+ (id)descriptorForRequiredKeysForContactFormatter:(id)arg1 includingAvatarViewDescriptors:(bool)arg2;
+ (id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(bool)arg1;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)_headerStringForContacts:(id)arg1;
- (id)_taglineStringForContacts:(id)arg1;
- (id)alternateName;
- (bool)alwaysShowsMonogram;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)centersPhotoAndLabels;
- (id)contactFormatter;
- (id)contacts;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentMargins;
- (void)copy:(id)arg1;
- (void)dealloc;
- (id)fakeTaglineAlignmentLabel;
- (void)handleNameLabelLongPress:(id)arg1;
- (id)headerConstraints;
- (id)initWithContact:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 monogrammerStyle:(long long)arg3;
- (id)markerView;
- (void)menuWillHide:(id)arg1;
- (id)message;
- (id)nameLabel;
- (id)nameTextAttributes;
- (double)photoLabelSpacing;
- (id)photoView;
- (void)reloadData;
- (void)setAlternateName:(id)arg1;
- (void)setAlwaysShowsMonogram:(bool)arg1;
- (void)setCentersPhotoAndLabels:(bool)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setContentMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFakeTaglineAlignmentLabel:(id)arg1;
- (void)setHeaderConstraints:(id)arg1;
- (void)setMarkerView:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNameTextAttributes:(id)arg1;
- (void)setTaglineLabel:(id)arg1;
- (void)setTaglineTextAttributes:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)taglineLabel;
- (id)taglineTextAttributes;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (void)updateFontSizes;
- (void)updateWithContacts:(id)arg1;

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
