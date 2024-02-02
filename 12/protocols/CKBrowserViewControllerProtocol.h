<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKBrowserViewControllerProtocol.h</title>
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

/protocols/CKBrowserViewControllerProtocol.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol CKBrowserViewControllerProtocol <NSObject>

@required

- (IMBalloonPlugin *)balloonPlugin;
- (IMBalloonPluginDataSource *)balloonPluginDataSource;
- (long long)browserPresentationStyle;
- (NSString *)conversationID;
- (void)dismiss;
- (bool)inExpandedPresentation;
- (bool)inFullScreenModalPresentation;
- (id)initWithBalloonPlugin:(IMBalloonPlugin *)arg1;
- (id)initWithBalloonPlugin:(IMBalloonPlugin *)arg1 dataSource:(IMBalloonPluginDataSource *)arg2;
- (bool)isLoaded;
- (bool)isPrimaryViewController;
- (bool)isiMessage;
- (bool)mayBeKeptInViewHierarchy;
- (UIViewController *)presentationViewController;
- (NSObject<CKBrowserViewControllerSendDelegate> *)sendDelegate;
- (void)setBalloonPluginDataSource:(IMBalloonPluginDataSource *)arg1;
- (void)setConversationID:(NSString *)arg1;
- (void)setIsPrimaryViewController:(bool)arg1;
- (void)setIsiMessage:(bool)arg1;
- (void)setPresentationViewController:(UIViewController *)arg1;
- (void)setSendDelegate:(NSObject<CKBrowserViewControllerSendDelegate> *)arg1;
- (bool)shouldShowChatChrome;
- (bool)shouldSuppressEntryView;
- (bool)supportsQuickView;
- (bool)wantsDarkUI;
- (bool)wantsOpaqueUI;

@optional

- (void)_updateContentOverlayInsetsForSelfAndChildren;
- (NSNumber *)adamID;
- (unsigned long long)badgeValue;
- (void)beginDisablingUserInteraction;
- (void)beginSuppressingAppearanceMethods;
- (CKBrowserDragManager *)browserDragManager;
- (void)browserScrolledOffScreen;
- (void)browserScrolledOnScreen;
- (bool)canReplaceDataSource;
- (id)cancelTouchesInView;
- (NSData *)conversationEngramID;
- (long long)currentBrowserConsumer;
- (void)deferredForceTearDownRemoteView;
- (void)didTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (void)dropAssertion;
- (void)endDisablingUserInteraction;
- (void)endSuppressingAppearanceMethods;
- (void)forceTearDownRemoteView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })horizontalSwipeExclusionRect;
- (void)killExtensionProcess;
- (void)loadRemoteView;
- (void)messageAddedWithDataSource:(IMBalloonPluginDataSource *)arg1;
- (long long)parentModalPresentationStyle;
- (<UIViewControllerTransitioningDelegate> *)parentTransitioningDelegate;
- (void)prepareForDisplay;
- (NSArray *)recipients;
- (UIViewController *)remoteViewController;
- (NSData *)requestSnapshotDataForPersistance;
- (void)saveSnapshotForBrowserViewController;
- (NSString *)sender;
- (void)setAdamID:(NSNumber *)arg1;
- (void)setConversationEngramID:(NSData *)arg1;
- (void)setCurrentBrowserConsumer:(long long)arg1;
- (void)setRecipients:(NSArray *)arg1;
- (void)setSender:(NSString *)arg1;
- (void)setStoreLaunchURL:(NSURL *)arg1 sourceApplication:(NSString *)arg2;
- (void)unloadRemoteView;
- (void)viewDidTransitionToCompactPresentation;
- (void)viewDidTransitionToExpandedPresentation;
- (void)viewWillTransitionToCompactPresentation;
- (void)viewWillTransitionToExpandedPresentation;
- (void)volumeButtonPressed:(bool)arg1;
- (bool)wasExpandedPresentation;

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