<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_TVAppNavigationController.h</title>
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

/PrivateFrameworks/TVMLKit.framework/_TVAppNavigationController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit (1)
 */

@interface _TVAppNavigationController : UINavigationController <IKAppNavigationController, TVAppRootViewController, UIGestureRecognizerDelegate, UINavigationControllerDelegate> {
    struct { 
        unsigned int shouldOverrideModalBehaviorForPlaybackDocument : 1; 
        unsigned int shouldIgnoreDismissal : 1; 
        unsigned int shouldDismissShroud : 1; 
        unsigned int willLoadAppDocumentWithController : 1; 
        unsigned int willDisappear : 1; 
    }  _ancDelegateFlags;
    TVApplicationController * _appController;
    <_TVAppNavigationControllerDelegate> * _appNavigationControllerDelegate;
    unsigned long long  _maxNavControllerStackDepth;
    UITapGestureRecognizer * _menuRecognizer;
    <NSObject> * _modalPresenterObserverToken;
    UIViewController * _presentedModalViewController;
}

@property (nonatomic, readonly) TVApplicationController *appController;
@property (nonatomic, readonly) <IKAppNavigationController> *appNavigationController;
@property (nonatomic) <_TVAppNavigationControllerDelegate> *appNavigationControllerDelegate;
@property (nonatomic, readonly) IKAppTabBar *appTabBar;
@property (nonatomic, readonly) UINavigationController *currentNavigationController;
@property (nonatomic, readonly) UIViewController *currentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maxNavControllerStackDepth;
@property (nonatomic, retain) UITapGestureRecognizer *menuRecognizer;
@property (nonatomic, retain) <NSObject> *modalPresenterObserverToken;
@property (nonatomic, retain) UIViewController *presentedModalViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doWillLoadAppDocumentWithController:(id)arg1;
- (void)_handleMenuAction:(id)arg1;
- (void)_presentModalDocumentController:(id)arg1 options:(id)arg2;
- (bool)_shouldIgnoreModalDismissal:(id)arg1;
- (bool)_shouldOverrideModalBehaviorForPlaybackDocument:(id)arg1 andExistingPlaybackDocument:(id)arg2;
- (id)activeDocument;
- (id)appController;
- (id)appNavigationController;
- (id)appNavigationControllerDelegate;
- (id)appTabBar;
- (void)clear;
- (id)currentNavigationController;
- (id)currentViewController;
- (void)dealloc;
- (void)dismissAllModals:(id /* block */)arg1;
- (void)dismissModal;
- (void)dismissModal:(bool)arg1;
- (void)dismissed;
- (id)documents;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithApplicationController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
- (void)loadView;
- (unsigned long long)maxNavControllerStackDepth;
- (id)menuRecognizer;
- (id)modalPresenterObserverToken;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)popDocument;
- (void)popToDocument:(id)arg1;
- (void)popToRootDocument;
- (id)popToRootDocument:(bool)arg1;
- (id)popToRootViewControllerAnimated:(bool)arg1;
- (void)presentConfirmation:(id)arg1 options:(id)arg2;
- (void)presentConfirmationViewController:(id)arg1 preferredContentSize:(struct CGSize { double x1; double x2; })arg2;
- (void)presentModal:(id)arg1 options:(id)arg2;
- (id)presentedModalViewController;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)removeDocument:(id)arg1;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)setAppNavigationControllerDelegate:(id)arg1;
- (void)setAppNavigationControllersDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocuments:(id)arg1 options:(id)arg2;
- (void)setMaxNavControllerStackDepth:(unsigned long long)arg1;
- (void)setMenuRecognizer:(id)arg1;
- (void)setModalPresenterObserverToken:(id)arg1;
- (void)setPresentedModalViewController:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

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
