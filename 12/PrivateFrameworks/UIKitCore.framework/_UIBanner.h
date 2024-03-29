<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIBanner.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIBanner.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIBanner : NSObject <_UIBanner> {
    _UIBannerContent * _content;
    _UIBannerController * _controller;
    NSMutableArray * _dismissalAnimations;
    NSMutableArray * _dismissalCompletionHandlers;
    NSLayoutConstraint * _hiddenConstraint;
    long long  _state;
    NSMutableArray * _tapHandlers;
    _UIBannerView * _view;
    NSLayoutConstraint * _visibleConstraint;
}

@property (nonatomic, retain) _UIBannerContent *content;
@property (nonatomic) _UIBannerController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *dismissalAnimations;
@property (nonatomic, retain) NSMutableArray *dismissalCompletionHandlers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *hiddenConstraint;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *tapHandlers;
@property (nonatomic, retain) _UIBannerView *view;
@property (nonatomic, retain) NSLayoutConstraint *visibleConstraint;

- (void).cxx_destruct;
- (void)addDismissalAnimations:(id /* block */)arg1;
- (void)addDismissalCompletionHandler:(id /* block */)arg1;
- (void)addTapHandler:(id /* block */)arg1;
- (id)content;
- (id)controller;
- (void)dismiss;
- (id)dismissalAnimations;
- (id)dismissalCompletionHandlers;
- (void)handleLongPressGesture:(id)arg1;
- (id)hiddenConstraint;
- (void)present;
- (void)setContent:(id)arg1;
- (void)setController:(id)arg1;
- (void)setDismissalAnimations:(id)arg1;
- (void)setDismissalCompletionHandlers:(id)arg1;
- (void)setHiddenConstraint:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTapHandlers:(id)arg1;
- (void)setView:(id)arg1;
- (void)setVisibleConstraint:(id)arg1;
- (long long)state;
- (id)tapHandlers;
- (id)view;
- (id)visibleConstraint;

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
