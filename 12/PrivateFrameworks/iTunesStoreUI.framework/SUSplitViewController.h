<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SUSplitViewController.h</title>
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

/PrivateFrameworks/iTunesStoreUI.framework/SUSplitViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI (1)
 */

@interface SUSplitViewController : SUViewController {
    NSURL * _displayedURL;
    UIViewController * _firstViewController;
    NSString * _mainTitle;
    SUGradient * _placeholderGradient;
    SUPlaceholderViewController * _placeholderViewController;
    UIViewController * _secondViewController;
    SUShadow * _splitShadow;
    SUSplitView * _splitView;
    SUStructuredPage * _structuredPage;
    bool  _usesSharedPlaceholder;
    bool  _viewIsReady;
}

@property (nonatomic, retain) NSURL *displayedURL;
@property (nonatomic, retain) UIViewController *firstViewController;
@property (nonatomic) long long layoutType;
@property (nonatomic, retain) NSString *mainTitle;
@property (nonatomic) double minimumPaneSize;
@property (nonatomic, retain) UIViewController *secondViewController;
@property (nonatomic) double splitPosition;
@property (nonatomic, copy) SUShadow *splitShadow;
@property (nonatomic) bool usesSharedPlaceholder;
@property (getter=isVertical, nonatomic) bool vertical;
@property (nonatomic) bool viewIsReady;

+ (bool)isValidSplitPositionValue:(id)arg1;
+ (bool)isValidSplitTypeString:(id)arg1;

- (void)_loadingDidChangeNotification:(id)arg1;
- (void)_navigationItemDidChangeNotification:(id)arg1;
- (id)_newGradientWithValue:(id)arg1;
- (id)_newViewControllerFromDictionary:(id)arg1;
- (void)_reloadLoadingState;
- (void)_reloadTitle;
- (void)_reloadView;
- (void)_reloadViewController:(id)arg1 fromDictionary:(id)arg2;
- (void)_reloadWithStorePageDictionary:(id)arg1;
- (void)_setPlaceholderVisible:(bool)arg1;
- (void)_setStructuredPage:(id)arg1;
- (void)_setViewController:(id*)arg1 toValue:(id)arg2;
- (id)_splitView;
- (void)addChildViewController:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)copyArchivableContext;
- (id)copyChildViewControllersForReason:(long long)arg1;
- (id)copyScriptViewController;
- (void)dealloc;
- (id)displayedURL;
- (id)firstViewController;
- (id)init;
- (bool)isSkLoaded;
- (bool)isVertical;
- (long long)layoutType;
- (void)loadView;
- (id)mainTitle;
- (double)minimumPaneSize;
- (id)newRotationController;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (void)removeChildViewController:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (id)secondViewController;
- (void)setDisplayedURL:(id)arg1;
- (void)setFirstViewController:(id)arg1;
- (void)setLayoutType:(long long)arg1;
- (void)setMainTitle:(id)arg1;
- (void)setMinimumPaneSize:(double)arg1;
- (void)setSecondViewController:(id)arg1;
- (void)setSkLoading:(bool)arg1;
- (void)setSplitPosition:(double)arg1;
- (void)setSplitPositionAndLayoutTypeFromValue:(id)arg1;
- (void)setSplitShadow:(id)arg1;
- (void)setSplitTypeString:(id)arg1;
- (void)setUsesSharedPlaceholder:(bool)arg1;
- (void)setVertical:(bool)arg1;
- (void)setViewIsReady:(bool)arg1;
- (bool)shouldExcludeFromNavigationHistory;
- (double)splitPosition;
- (id)splitPositionString;
- (id)splitShadow;
- (id)splitTypeString;
- (void)storePage:(id)arg1 finishedWithSuccess:(bool)arg2;
- (id)storePageProtocol;
- (bool)usesSharedPlaceholder;
- (bool)viewIsReady;

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
