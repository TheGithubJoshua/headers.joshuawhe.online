<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HULinkedApplicationView.h</title>
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

/PrivateFrameworks/HomeUI.framework/HULinkedApplicationView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI (1)
 */

@interface HULinkedApplicationView : UIView <HUCellProtocol> {
    NSString * _bundleID;
    NSArray * _currentConstraints;
    UIImageView * _iconView;
    UILabel * _installedLabel;
    bool  _isInstalled;
    HFItem * _item;
    UILabel * _nameLabel;
    UILabel * _priceLabel;
    UILabel * _publisherLabel;
    HULinkedApplicationRatingView * _ratingView;
    NSURL * _storeURL;
    UIButton * _viewButton;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSArray *currentConstraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, retain) UILabel *installedLabel;
@property (nonatomic) bool isInstalled;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) UILabel *priceLabel;
@property (nonatomic, retain) UILabel *publisherLabel;
@property (nonatomic, retain) HULinkedApplicationRatingView *ratingView;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic, retain) NSURL *storeURL;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIButton *viewButton;

- (void).cxx_destruct;
- (void)_viewButtonTapped:(id)arg1;
- (id)bundleID;
- (id)currentConstraints;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)installedLabel;
- (bool)isInstalled;
- (id)item;
- (id)nameLabel;
- (id)priceLabel;
- (id)publisherLabel;
- (id)ratingView;
- (void)setBundleID:(id)arg1;
- (void)setCurrentConstraints:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setInstalledLabel:(id)arg1;
- (void)setIsInstalled:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setPriceLabel:(id)arg1;
- (void)setPublisherLabel:(id)arg1;
- (void)setRatingView:(id)arg1;
- (void)setStoreURL:(id)arg1;
- (void)setViewButton:(id)arg1;
- (id)storeURL;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;
- (id)viewButton;

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
