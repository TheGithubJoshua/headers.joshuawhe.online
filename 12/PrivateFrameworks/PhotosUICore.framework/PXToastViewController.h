<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXToastViewController.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXToastViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXToastViewController : UIViewController {
    <PXToastViewControllerDelegate> * _delegate;
    UINotificationFeedbackGenerator * _feedbackGenerator;
    UIImage * _image;
    UIImageView * _imageView;
    NSString * _message;
    PXToastPresentationWindow * _presentationWindow;
    UILabel * _primaryLabel;
    UILabel * _secondaryLabel;
    bool  _shouldUseAnimatedCheckmark;
    UIVisualEffectView * _toastView;
}

@property (nonatomic) <PXToastViewControllerDelegate> *delegate;
@property (nonatomic, retain) UINotificationFeedbackGenerator *feedbackGenerator;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) PXToastPresentationWindow *presentationWindow;
@property (nonatomic, retain) UILabel *primaryLabel;
@property (nonatomic, retain) UILabel *secondaryLabel;
@property (nonatomic) bool shouldUseAnimatedCheckmark;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIVisualEffectView *toastView;

+ (id)_fontWithSize:(double)arg1 textStyleAttribute:(struct __CFString { }*)arg2;
+ (id)_primaryLabelFont;
+ (id)_secondaryLabelFont;
+ (id)checkmarkToastWithTitle:(id)arg1 message:(id)arg2;
+ (id)toastWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3;

- (void).cxx_destruct;
- (void)_animateCheckMark;
- (void)_dismissAfterDelay:(double)arg1;
- (id)delegate;
- (id)feedbackGenerator;
- (id)image;
- (id)imageView;
- (id)initCheckmarkToastWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3;
- (id)message;
- (void)present;
- (id)presentationWindow;
- (id)primaryLabel;
- (id)secondaryLabel;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setPresentationWindow:(id)arg1;
- (void)setPrimaryLabel:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setShouldUseAnimatedCheckmark:(bool)arg1;
- (void)setToastView:(id)arg1;
- (bool)shouldUseAnimatedCheckmark;
- (id)toastView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

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
