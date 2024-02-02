<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIApplicationExtensionActivity.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIApplicationExtensionActivity.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIApplicationExtensionActivity : UIActivity <UIActivityExtensionItemDataSource, UIActivityExtensionItemDataTarget> {
    NSExtensionItem * __injectedExtensionItem;
    _UIActivityBundleHelper * _activityBundleHelper;
    NSExtension * _applicationExtension;
    id  _extensionContextIdentifier;
    id /* block */  _extensionRequestCleanupCompletion;
    UIViewController * _extensionViewController;
    NSDate * _installationDate;
    id /* block */  _presenterCompletion;
    UIViewController * _presenterViewController;
}

@property (nonatomic, retain) NSExtensionItem *_injectedExtensionItem;
@property (nonatomic, retain) _UIActivityBundleHelper *activityBundleHelper;
@property (nonatomic, retain) NSExtension *applicationExtension;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id extensionContextIdentifier;
@property (nonatomic, copy) id /* block */ extensionRequestCleanupCompletion;
@property (nonatomic, retain) UIViewController *extensionViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *installationDate;
@property (nonatomic, copy) id /* block */ presenterCompletion;
@property (nonatomic) UIViewController *presenterViewController;
@property (readonly) Class superclass;

+ (id)_activityExtensionItemsForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2;
+ (id)_applicationExtensionActivitiesForItems:(id)arg1;
+ (long long)activityCategory;
+ (id)preparedActivityExtensionItemDataForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2;

- (void).cxx_destruct;
- (id)_activityImage;
- (id)_activitySettingsImage;
- (bool)_canBeExcludeWhenMatchingWithContext:(id)arg1;
- (void)_cleanup;
- (long long)_defaultSortGroup;
- (bool)_dismissActivityFromViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)_injectedExtensionItem;
- (void)_injectedJavaScriptResult:(id)arg1;
- (void)_instantiateExtensionViewControllerWithInputItems:(id)arg1;
- (bool)_isServiceExtension;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_presentExtensionViewControllerIfPossible;
- (id)activityBundleHelper;
- (id)activityTitle;
- (id)activityType;
- (id)applicationExtension;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)extensionContextIdentifier;
- (id /* block */)extensionRequestCleanupCompletion;
- (id)extensionViewController;
- (id)initWithApplicationExtension:(id)arg1;
- (id)installationDate;
- (void)prepareWithActivityExtensionItemData:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (id /* block */)presenterCompletion;
- (id)presenterViewController;
- (void)setActivityBundleHelper:(id)arg1;
- (void)setApplicationExtension:(id)arg1;
- (void)setExtensionContextIdentifier:(id)arg1;
- (void)setExtensionRequestCleanupCompletion:(id /* block */)arg1;
- (void)setExtensionViewController:(id)arg1;
- (void)setPresenterCompletion:(id /* block */)arg1;
- (void)setPresenterViewController:(id)arg1;
- (void)set_injectedExtensionItem:(id)arg1;

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