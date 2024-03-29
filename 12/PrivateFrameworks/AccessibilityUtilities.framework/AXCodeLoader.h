<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AXCodeLoader.h</title>
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

/PrivateFrameworks/AccessibilityUtilities.framework/AXCodeLoader.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities (1.0)
 */

@interface AXCodeLoader : NSObject <AXImageMonitorObserver> {
    NSMutableSet * _accessibilityCodeItems;
    id /* block */  _beginTrackingCompletion;
    NSObject<OS_dispatch_queue> * _beginTrackingCompletionQueue;
    unsigned int  _currentPlatform;
    id /* block */  _didLoadAccessibilityCodeItemBlock;
    NSObject<OS_dispatch_source> * _dyldImageActivityCoalesceTimer;
    <AXImageMonitor> * _imageMonitor;
    bool  _initialLoadHasOccurred;
    NSObject<OS_dispatch_source> * _loadAccessibilityCodeItemsSource;
    id /* block */  _loadEventDidOccurBlock;
    id /* block */  _loadEventWillOccurBlock;
    long long  _monitoredLoadTriggeringImageCountSinceLastLoad;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldAutoloadAccessibilityCodeItems;
    id /* block */  _shouldLoadAccessibilityCodeItemBlock;
    NSMutableSet * _trackedCodeItems;
    long long  _trackingMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didLoadAccessibilityCodeItemBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isTrackingLoadedCodeItems;
@property (nonatomic, copy) id /* block */ loadEventDidOccurBlock;
@property (nonatomic, copy) id /* block */ loadEventWillOccurBlock;
@property (nonatomic) bool shouldAutoloadAccessibilityCodeItems;
@property (nonatomic, copy) id /* block */ shouldLoadAccessibilityCodeItemBlock;
@property (readonly) Class superclass;
@property (nonatomic) long long trackingMode;

+ (id)defaultLoader;

- (void).cxx_destruct;
- (id)_accessibilityBundleMapURLs;
- (id)_accessibilityCodeItemMatchingName:(id)arg1 type:(long long)arg2;
- (void)_addTrackedCodeItem:(id)arg1;
- (void)_associateAccessibilityCodeItemWithLoadedCodeItem:(id)arg1;
- (void)_associateAccessibilityCodeItemsWithAllTrackedCodeItems;
- (void)_cancelDyldImageActivityTimer;
- (void)_consumeBeginTrackingCompletionHandlerIfNeeded;
- (id)_createAccessibilityCodeItemsFromBundleMapURLs:(id)arg1;
- (void)_loadAccessibilityCodeItems;
- (id)_platformKeyForPlatform:(unsigned int)arg1;
- (id)_queue_loadedCodeItemsUsingTrackedItemsIfAvailable:(bool)arg1;
- (void)_reconcileTrackedCodeItemsWithAccessibilityCodeItemDefinitions;
- (void)_scheduleDyldImageActivityTimerWithDelay:(double)arg1;
- (id)_stateDescForItem:(id)arg1;
- (void)_updateAccessibilityCodeItemDefinitionsIfNeeded;
- (id /* block */)_validDidLoadAccessibilityCodeItemBlock;
- (id /* block */)_validLoadEventDidOccurBlock;
- (id /* block */)_validLoadEventWillOccurBlock;
- (id /* block */)_validShouldLoadAccessibilityCodeItemBlock;
- (id)accessibilityCodeItemDefinitions;
- (void)beginTrackingLoadedCodeItemsWithMode:(long long)arg1 completion:(id /* block */)arg2 targetQueue:(id)arg3;
- (id /* block */)didLoadAccessibilityCodeItemBlock;
- (void)endTrackingLoadedCodeItemsWithCompletion:(id /* block */)arg1 targetQueue:(id)arg2;
- (void)imageMonitor:(id)arg1 didAddImage:(id)arg2;
- (id)init;
- (id)initWithImageMonitor:(id)arg1;
- (bool)isTrackingLoadedCodeItems;
- (void)iterateInitialImageListForImageMonitor:(id)arg1;
- (id /* block */)loadEventDidOccurBlock;
- (id /* block */)loadEventWillOccurBlock;
- (id)loadedCodeItemPathsUsingTrackedItemsIfAvailable:(bool)arg1;
- (id)loadedCodeItemsUsingTrackedItemsIfAvailable:(bool)arg1;
- (void)logLoaderState;
- (void)prewarmAccessibilityCodeItemDefinitionsWithCompletion:(id /* block */)arg1 targetQueue:(id)arg2;
- (void)queryAccessibilityBundleIsLoadedWithName:(id)arg1 completion:(id /* block */)arg2;
- (id)recomputedCodeItemsForAllFrameworks;
- (id)recomputedCodeItemsForLoadedAccessibilityBundles;
- (id)rogueAccessibilityCodeItems;
- (void)setAccessibilityCodeItemsNeedLoaded;
- (void)setDidLoadAccessibilityCodeItemBlock:(id /* block */)arg1;
- (void)setLoadEventDidOccurBlock:(id /* block */)arg1;
- (void)setLoadEventWillOccurBlock:(id /* block */)arg1;
- (void)setShouldAutoloadAccessibilityCodeItems:(bool)arg1;
- (void)setShouldLoadAccessibilityCodeItemBlock:(id /* block */)arg1;
- (void)setTrackingMode:(long long)arg1;
- (bool)shouldAutoloadAccessibilityCodeItems;
- (id /* block */)shouldLoadAccessibilityCodeItemBlock;
- (id)trackedCodeItems;
- (long long)trackingMode;

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
