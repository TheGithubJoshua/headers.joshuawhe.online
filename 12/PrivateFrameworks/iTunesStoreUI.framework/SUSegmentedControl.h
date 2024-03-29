<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SUSegmentedControl.h</title>
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

/PrivateFrameworks/iTunesStoreUI.framework/SUSegmentedControl.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI (1)
 */

@interface SUSegmentedControl : UIControl <SUMenuViewControllerDelegate, UIPopoverControllerDelegate> {
    bool  _autosizesText;
    NSString * _cancelButtonTitle;
    SUClientInterface * _clientInterface;
    bool  _hidingPopoverForRotation;
    NSMutableArray * _items;
    long long  _maximumNumberOfItems;
    double  _maximumWidth;
    SUSimpleMenuViewController * _menuViewController;
    NSString * _moreListTitle;
    UIPopoverController * _popoverController;
    UISegmentedControl * _segmentedControl;
    long long  _selectionIndex;
    bool  _showsMoreListAutomatically;
    long long  _tintStyle;
}

@property (nonatomic, copy) NSString *cancelButtonTitle;
@property (nonatomic, retain) SUClientInterface *clientInterface;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic) long long maximumNumberOfItems;
@property (nonatomic) double maximumWidth;
@property (nonatomic, copy) NSString *moreListTitle;
@property (nonatomic, readonly) long long numberOfVisibleSegments;
@property (nonatomic) long long segmentedControlStyle;
@property (nonatomic) long long selectedItemIndex;
@property (nonatomic, readonly) long long selectedSegmentIndex;
@property (nonatomic) bool showsMoreListAutomatically;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic) long long tintStyle;

- (void)_applyStyling;
- (void)_destroyMenuViewController;
- (void)_destroyPopoverController;
- (void)_presentPopoverAnimated:(bool)arg1;
- (void)_reloadData;
- (void)_setValue:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)_showMoreList:(bool)arg1;
- (id)_titlesForMoreList;
- (void)_valueChangedEvent:(id)arg1;
- (void)_windowDidRotateNotification:(id)arg1;
- (void)_windowWillRotateNotification:(id)arg1;
- (id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (id)cancelButtonTitle;
- (id)clientInterface;
- (void)dealloc;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)items;
- (void)layoutSubviews;
- (long long)maximumNumberOfItems;
- (double)maximumWidth;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)menuViewControllerDidCancel:(id)arg1;
- (id)moreListTitle;
- (long long)numberOfVisibleSegments;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (long long)segmentedControlStyle;
- (long long)selectedItemIndex;
- (long long)selectedSegmentIndex;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setClientInterface:(id)arg1;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4;
- (void)setImage:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setItems:(id)arg1;
- (void)setMaximumNumberOfItems:(long long)arg1;
- (void)setMaximumWidth:(double)arg1;
- (void)setMoreListTitle:(id)arg1;
- (void)setSegmentedControlStyle:(long long)arg1;
- (void)setSelectedItemIndex:(long long)arg1;
- (void)setShowsMoreListAutomatically:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTintStyle:(long long)arg1;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)showMoreList:(bool)arg1 animated:(bool)arg2;
- (void)showPopover:(id)arg1 fromSegmentIndex:(long long)arg2 animated:(bool)arg3;
- (bool)showsMoreListAutomatically;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFitUserInterfaceIdiom;
- (void)sizeToFitWithMinimumSegmentWidth:(double)arg1 maximumTotalWidth:(double)arg2;
- (id)tintColor;
- (long long)tintStyle;
- (id)titleTextAttributesForState:(unsigned long long)arg1;

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
