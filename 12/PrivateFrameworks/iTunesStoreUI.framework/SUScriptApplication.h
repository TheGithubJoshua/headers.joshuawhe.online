<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SUScriptApplication.h</title>
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

/PrivateFrameworks/iTunesStoreUI.framework/SUScriptApplication.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI (1)
 */

@interface SUScriptApplication : SUScriptObject

@property (getter=isDelayingTerminate, readonly) id delayingTerminate;
@property (readonly) NSNumber *exitStoreReasonButton;
@property (readonly) NSNumber *exitStoreReasonDownloadComplete;
@property (readonly) NSNumber *exitStoreReasonFatalError;
@property (readonly) NSNumber *exitStoreReasonGotoMainStore;
@property (readonly) NSNumber *exitStoreReasonOther;
@property (readonly) NSNumber *exitStoreReasonPurchase;
@property (retain) id iconBadgeNumber;
@property (readonly) NSString *identifier;
@property (getter=wasLaunchedFromLibrary, readonly) id launchedFromLibrary;
@property (getter=isRunningInStoreDemoMode, readonly) id runningInStoreDemoMode;
@property (readonly) id screenHeight;
@property (readonly) id screenWidth;
@property (readonly) long long statusBarAnimationFade;
@property (readonly) long long statusBarAnimationNone;
@property (readonly) long long statusBarAnimationSlide;
@property id statusBarHidden;
@property long long statusBarStyle;
@property (readonly) long long statusBarStyleBlackOpaque;
@property (readonly) long long statusBarStyleBlackTranslucent;
@property (readonly) long long statusBarStyleDefault;
@property (readonly) NSString *version;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)attributeKeys;
- (void)beginDelayingTerminate;
- (void)endDelayingTerminate;
- (id)exitStoreReasonButton;
- (id)exitStoreReasonDownloadComplete;
- (id)exitStoreReasonFatalError;
- (id)exitStoreReasonGotoMainStore;
- (id)exitStoreReasonOther;
- (id)exitStoreReasonPurchase;
- (void)exitStoreWithReason:(id)arg1;
- (id)iconBadgeNumber;
- (id)identifier;
- (id)isDelayingTerminate;
- (id)isRunningInStoreDemoMode;
- (void)returnToLibrary;
- (id)screenHeight;
- (id)screenWidth;
- (id)scriptAttributeKeys;
- (void)scrollIconToVisible:(id)arg1 shouldSuspend:(bool)arg2;
- (void)setIconBadgeNumber:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setStatusBarHidden:(id)arg1;
- (void)setStatusBarHidden:(bool)arg1 withAnimation:(long long)arg2;
- (void)setStatusBarStyle:(long long)arg1;
- (void)setStatusBarStyle:(long long)arg1 animated:(bool)arg2;
- (void)setVersion:(id)arg1;
- (void)showNewsstand;
- (long long)statusBarAnimationFade;
- (long long)statusBarAnimationNone;
- (long long)statusBarAnimationSlide;
- (id)statusBarHidden;
- (long long)statusBarStyle;
- (long long)statusBarStyleBlackOpaque;
- (long long)statusBarStyleBlackTranslucent;
- (long long)statusBarStyleDefault;
- (id)version;
- (id)wasLaunchedFromLibrary;

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