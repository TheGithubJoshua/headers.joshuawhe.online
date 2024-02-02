<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EKUILabeledAvatarView.h</title>
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

/Frameworks/EventKitUI.framework/EKUILabeledAvatarView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI (1.0)
 */

@interface EKUILabeledAvatarView : UIView {
    CNAvatarView * _avatar;
    UILabel * _label;
    unsigned long long  _labelPlacement;
    bool  _loadContactsAsynchronously;
    unsigned long long  _options;
    UIViewController * _viewController;
}

@property (retain) CNAvatarView *avatar;
@property (retain) CNContact *contact;
@property (retain) UILabel *label;
@property unsigned long long labelPlacement;
@property (nonatomic) bool loadContactsAsynchronously;
@property unsigned long long options;
@property UIViewController *viewController;

+ (id)_createAvatarView;
+ (id)contactForAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
+ (id)contactForEmailAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
+ (id)contactForPhoneNumber:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
+ (id)sortedAvatarListFromParticipants:(id)arg1;

- (void).cxx_destruct;
- (id)avatar;
- (id)contact;
- (void)didTap;
- (id)init;
- (id)initWithContact:(id)arg1 placement:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)initWithEmail:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 placement:(unsigned long long)arg5 options:(unsigned long long)arg6;
- (id)initWithIdentity:(id)arg1 placement:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)initWithPlacement:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)label;
- (unsigned long long)labelPlacement;
- (bool)loadContactsAsynchronously;
- (unsigned long long)options;
- (void)setAvatar:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelPlacement:(unsigned long long)arg1;
- (void)setLoadContactsAsynchronously:(bool)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setUpTap;
- (void)setViewController:(id)arg1;
- (void)setup;
- (void)updateAvatarViewWithAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
- (void)updateLabel;
- (void)updateWithAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
- (void)updateWithContacts:(id)arg1;
- (void)updateWithParticpant:(id)arg1;
- (id)viewController;

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