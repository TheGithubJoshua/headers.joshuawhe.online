<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MiroProgressViewController.h</title>
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

/PrivateFrameworks/Memories.framework/MiroProgressViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories (4267.0.31)
 */

@interface MiroProgressViewController : UIViewController <UIGestureRecognizerDelegate> {
    UIButton * _cancelButton;
    NSLayoutConstraint * _horizontalCenteredLabel;
    NSLayoutConstraint * _horizontalOffsetLabel;
    UILabel * _label;
    RoundProgressView * _landscapeProgressView;
    UIView * _placeholderView;
    UIView * _posterBackgroundView;
    RoundProgressView * _progressView;
    bool  _showCancelButton;
    NSLayoutConstraint * _verticalCenteredLabel;
    NSLayoutConstraint * _verticalProgressLabelSpace;
}

@property (nonatomic, retain) UIButton *cancelButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *horizontalCenteredLabel;
@property (nonatomic, retain) NSLayoutConstraint *horizontalOffsetLabel;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) NSString *labelText;
@property (nonatomic, retain) RoundProgressView *landscapeProgressView;
@property (nonatomic, retain) UIView *placeholderView;
@property (nonatomic, retain) UIView *posterBackgroundView;
@property (nonatomic) float progress;
@property (nonatomic, retain) RoundProgressView *progressView;
@property (nonatomic) bool showCancelButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSLayoutConstraint *verticalCenteredLabel;
@property (nonatomic, retain) NSLayoutConstraint *verticalProgressLabelSpace;

- (void).cxx_destruct;
- (id)cancelButton;
- (void)didReceiveMemoryWarning;
- (id)horizontalCenteredLabel;
- (id)horizontalOffsetLabel;
- (id)label;
- (id)labelText;
- (id)landscapeProgressView;
- (void)loadView;
- (id)placeholderView;
- (id)posterBackgroundView;
- (bool)prefersStatusBarHidden;
- (float)progress;
- (id)progressView;
- (void)setCancelButton:(id)arg1;
- (void)setCancelTarget:(id)arg1 action:(SEL)arg2;
- (void)setHorizontalCenteredLabel:(id)arg1;
- (void)setHorizontalOffsetLabel:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)setLandscapeProgressView:(id)arg1;
- (void)setPlaceholderView:(id)arg1;
- (void)setPosterBackgroundView:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgressView:(id)arg1;
- (void)setShowCancelButton:(bool)arg1;
- (void)setVerticalCenteredLabel:(id)arg1;
- (void)setVerticalProgressLabelSpace:(id)arg1;
- (bool)showCancelButton;
- (void)updateLayoutWithTraitCollection:(id)arg1;
- (id)verticalCenteredLabel;
- (id)verticalProgressLabelSpace;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

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
