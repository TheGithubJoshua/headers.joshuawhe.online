<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HUAboutResidentDeviceViewController.h</title>
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

/PrivateFrameworks/HomeUI.framework/HUAboutResidentDeviceViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI (1)
 */

@interface HUAboutResidentDeviceViewController : UIViewController {
    UIImageView * _atvImageView;
    NSArray * _constraints;
    <HUAboutResidentDeviceViewControllerDelegate> * _delegate;
    UILabel * _homeHubTextLabel;
    UIImageView * _homePodImageView;
    UIImageView * _iPadImageView;
    UILabel * _iPadTextLabel;
    HUGridLayoutOptions * _layoutOptions;
    UIScrollView * _scrollView;
    UIView * _statusBarBackgroundView;
    unsigned long long  _style;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImageView *atvImageView;
@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic) <HUAboutResidentDeviceViewControllerDelegate> *delegate;
@property (nonatomic, retain) UILabel *homeHubTextLabel;
@property (nonatomic, retain) UIImageView *homePodImageView;
@property (nonatomic, retain) UIImageView *iPadImageView;
@property (nonatomic, retain) UILabel *iPadTextLabel;
@property (nonatomic, retain) HUGridLayoutOptions *layoutOptions;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) UIView *statusBarBackgroundView;
@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;

+ (double)atvImageToTextBaselineConstantForViewSizeSubclass:(long long)arg1;
+ (double)atvTextBaselineToiPadImageConstant;
+ (double)iPadImageToTextBaselineConstantForViewSizeSubclass:(long long)arg1;
+ (double)scrollViewTopToATVImageConstant;
+ (double)subtitleBaselineToATVImageConstant;

- (void).cxx_destruct;
- (id)_backgroundColor;
- (void)_createSubviews;
- (id)_defaultLayoutOptionsForViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_done:(id)arg1;
- (void)_setNavigationBarVisibility;
- (id)atvImageView;
- (id)constraints;
- (id)delegate;
- (id)homeHubTextLabel;
- (id)homePodImageView;
- (id)iPadImageView;
- (id)iPadTextLabel;
- (id)init;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)layoutOptions;
- (id)scrollView;
- (void)setAtvImageView:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHomeHubTextLabel:(id)arg1;
- (void)setHomePodImageView:(id)arg1;
- (void)setIPadImageView:(id)arg1;
- (void)setIPadTextLabel:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setStatusBarBackgroundView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)statusBarBackgroundView;
- (unsigned long long)style;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)updateViewsAndConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

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