<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VideosExtrasContext.h</title>
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

/PrivateFrameworks/VideosUI.framework/VideosExtrasContext.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI (282.60.36)
 */

@interface VideosExtrasContext : NSObject <VideosExtrasPlaybackDelegate, VideosExtrasRootViewControllerDelegate> {
    NSString * _buyParameters;
    <VideosExtrasContextDelegate> * _delegate;
    VideosExtrasRootViewController * _extrasRootViewController;
    MPPlaybackContext * _featurePlaybackContext;
    UIViewController * _featurePlaybackViewController;
    bool  _isStarted;
    NSURL * _javascriptURL;
    MPMediaItem * _mediaItem;
    unsigned long long  _selectedMainMenuIndex;
    long long  _storeID;
}

@property (nonatomic, readonly, copy) NSString *buyParameters;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VideosExtrasContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) VideosExtrasRootViewController *extrasRootViewController;
@property (nonatomic, retain) MPPlaybackContext *featurePlaybackContext;
@property (nonatomic, retain) UIViewController *featurePlaybackViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isStarted;
@property (nonatomic, readonly, copy) NSURL *javascriptURL;
@property (nonatomic, readonly) NSArray *mainMenuItemElements;
@property (nonatomic, readonly) MPMediaItem *mediaItem;
@property (nonatomic) unsigned long long selectedMainMenuIndex;
@property (nonatomic) bool showsBuiltInNavigationControls;
@property (nonatomic) bool showsMenuBar;
@property (nonatomic, readonly) long long storeID;
@property (readonly) Class superclass;

+ (Class)extrasRootViewControllerClass;
+ (id)overriddenJavascriptURL;
+ (void)overrideJavascriptURL:(id)arg1;

- (void).cxx_destruct;
- (void)_configureForMediaItem:(id)arg1;
- (id)buyParameters;
- (void)clearNavStack;
- (id)delegate;
- (void)extrasBackButtonPressed;
- (void)extrasDoneButtonPressed;
- (void)extrasMenuItemSelected:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)extrasRequestReloadWithContext:(id)arg1;
- (void)extrasRequestsMediaPlayback:(id)arg1 isBackground:(bool)arg2;
- (void)extrasRequestsPlaybackStop;
- (id)extrasRootViewController;
- (void)extrasRootViewController:(id)arg1 extrasVisibilityNeedsUpdate:(bool)arg2;
- (void)extrasRootViewControllerDidLoadMainMenuItems:(id)arg1;
- (void)failWithError:(id)arg1;
- (id)featurePlaybackContext;
- (id)featurePlaybackViewController;
- (id)init;
- (id)initWithApplicationJavascriptURL:(id)arg1 storeID:(long long)arg2 buyParameters:(id)arg3;
- (id)initWithMediaItem:(id)arg1;
- (bool)isMenuItemElementMainFeature:(id)arg1;
- (bool)isStarted;
- (id)javascriptURL;
- (id)mainMenuItemElements;
- (id)mediaItem;
- (unsigned long long)selectedMainMenuIndex;
- (void)setClearsStackOnNextPush;
- (void)setDelegate:(id)arg1;
- (void)setFeaturePlaybackContext:(id)arg1;
- (void)setFeaturePlaybackViewController:(id)arg1;
- (void)setIsStarted:(bool)arg1;
- (void)setSelectedMainMenuIndex:(unsigned long long)arg1;
- (void)setShowsBuiltInNavigationControls:(bool)arg1;
- (void)setShowsMenuBar:(bool)arg1;
- (bool)shouldExtrasBeVisibleForSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)showsBuiltInNavigationControls;
- (bool)showsMenuBar;
- (void)startIfNecessary;
- (long long)storeID;

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