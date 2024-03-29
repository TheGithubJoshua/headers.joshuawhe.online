<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIRemoteKeyboards.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIRemoteKeyboards.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIRemoteKeyboards : NSObject <_UIKeyboardArbitrationClient, _UIRemoteKeyboardControllerDelegate, _UIRemoteKeyboardDistributedViewSource> {
    NSMutableArray * _activePIDs;
    NSXPCConnection * _connection;
    bool  _currentKeyboard;
    _UIKeyboardChangedInformation * _currentState;
    bool  _disablingKeyboard;
    bool  _enableMultiscreenHack;
    bool  _expectedSuppression;
    bool  _expectingInitialState;
    int  _externalSuppression;
    bool  _hadFocusBeforeOverlay;
    bool  _handlingRemoteEvent;
    bool  _hasFocus;
    int  _hostedCount;
    int  _ignoreLayoutSubviews;
    UIView * _keyboardSnapshot;
    UIScreen * _lastScreen;
    NSMutableSet * _pendingKeyboardGrabs;
    int  _recursionCheck;
    double  _requiredLevel;
    FBSScene * _requiredScene;
    bool  _shouldFence;
    bool  _takingSnapshot;
    bool  _updatingHeight;
    NSHashTable * _windowControllers;
    bool  _windowEnabled;
}

@property (retain) NSXPCConnection *connection;
@property (readonly, retain) NSArray *currentHostedPIDs;
@property bool currentKeyboard;
@property (retain) _UIKeyboardChangedInformation *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool disableBecomeFirstResponder;
@property (nonatomic) bool enableMultiscreenHack;
@property (readonly) bool handlingRemoteEvent;
@property (readonly) unsigned long long hash;
@property (readonly) double iavHeight;
@property (readonly) double intersectionHeight;
@property (nonatomic) bool isSnapshotting;
@property (readonly) bool keyboardActive;
@property (readonly) bool keyboardVisible;
@property (readonly) UIWindow *keyboardWindow;
@property (readonly) bool oldPathForSnapshot;
@property (readonly) <_UIKeyboardArbitration> *proxy;
@property (readonly) bool remoteKeyboardUndocked;
@property (readonly, retain) FBSScene *requiredScene;
@property (nonatomic) bool shouldFence;
@property (readonly) Class superclass;
@property (readonly) bool updatingHeight;

+ (id)createArbiterConnection;
+ (bool)enabled;
+ (id)serviceName;
+ (id)sharedRemoteKeyboards;
+ (bool)useSystemService;

- (id)_activeScreen;
- (void)_lostWindow:(id)arg1;
- (void)_performOnDistributedControllersExceptSelf:(id /* block */)arg1;
- (void)addHostedWindowView:(id)arg1 fromPID:(int)arg2;
- (bool)allowedToShowKeyboard;
- (void)applicationResume:(id)arg1;
- (void)checkConnection;
- (void)checkState;
- (void)cleanSuppression;
- (void)completeMoveKeyboardForWindow:(id)arg1;
- (void)completeTransition:(id)arg1 withInfo:(id)arg2;
- (id)connection;
- (void)controllerDidLayoutSubviews:(id)arg1;
- (id)currentHostedPIDs;
- (bool)currentKeyboard;
- (id)currentState;
- (void)dealloc;
- (void)didRemoveDeactivationReason:(id)arg1;
- (void)didSuspend:(id)arg1;
- (bool)disableBecomeFirstResponder;
- (bool)enableMultiscreenHack;
- (void)finishWithHostedWindow;
- (void)forceKeyboardAway;
- (bool)handlingRemoteEvent;
- (bool)hasAnyHostedViews;
- (double)iavHeight;
- (void)ignoreLayoutNotifications:(id /* block */)arg1;
- (id)init;
- (double)intersectionHeight;
- (bool)isOnScreenRotating;
- (bool)isSnapshotting;
- (bool)keyboardActive;
- (void)keyboardChanged:(id)arg1 shouldConsiderSnapshottingKeyboard:(bool)arg2 isLocalEvent:(bool)arg3;
- (void)keyboardChangedCompleted;
- (bool)keyboardVisible;
- (id)keyboardWindow;
- (Class)keyboardWindowClass;
- (bool)needsToShowKeyboardForWindow:(id)arg1;
- (bool)oldPathForSnapshot;
- (void)peekApplicationEvent:(id)arg1;
- (void)performOnControllers:(id /* block */)arg1;
- (void)performOnDistributedControllers:(id /* block */)arg1;
- (id)prepareForHostedWindow;
- (void)prepareToMoveKeyboard:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withIAV:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 showing:(bool)arg3 forScreen:(id)arg4;
- (id)proxy;
- (void)queue_applicationLostFocusWithCompletion:(id /* block */)arg1;
- (void)queue_failedConnection:(id)arg1;
- (void)queue_getDebugInfoWithCompletion:(id /* block */)arg1;
- (void)queue_keyboardChanged:(id)arg1 onComplete:(id /* block */)arg2;
- (void)queue_keyboardChangedWithCompletion:(id /* block */)arg1;
- (void)queue_keyboardSuppressed:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)queue_keyboardTransition:(id)arg1 event:(unsigned long long)arg2 withInfo:(id)arg3 onComplete:(id /* block */)arg4;
- (void)queue_setKeyboardDisabled:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)registerController:(id)arg1;
- (void)reloadForSnapshotting;
- (bool)remoteKeyboardUndocked;
- (id)requiredScene;
- (void)resetSnapshotWithWindowCheck:(bool)arg1;
- (void)restorePreservedInputViewsIfNecessary;
- (void)sceneUpdated;
- (void)setConnection:(id)arg1;
- (void)setCurrentKeyboard:(bool)arg1;
- (void)setCurrentState:(id)arg1;
- (void)setDisableBecomeFirstResponder:(bool)arg1;
- (void)setEnableMultiscreenHack:(bool)arg1;
- (void)setIsSnapshotting:(bool)arg1;
- (void)setPlacement:(id)arg1 quietly:(bool)arg2 animated:(bool)arg3 generateSplitNotification:(bool)arg4;
- (void)setShouldFence:(bool)arg1;
- (void)setSuppressingKeyboard:(bool)arg1;
- (void)setWindowEnabled:(bool)arg1;
- (void)setWindowLevel:(double)arg1 sceneLevel:(double)arg2 forResponder:(id)arg3;
- (bool)shouldAllowInputViewsRestoredForId:(id)arg1;
- (bool)shouldFence;
- (void)startConnection;
- (void)startTransition:(id)arg1 withInfo:(id)arg2;
- (void)stopConnection;
- (void)unregisterController:(id)arg1;
- (void)updateTransition:(id)arg1 withInfo:(id)arg2;
- (bool)updatingHeight;
- (void)userSelectedApp:(id)arg1 onCompletion:(id /* block */)arg2;
- (id)viewHostForWindow:(id)arg1;
- (bool)wantsToShowKeyboardForWindow:(id)arg1;
- (void)willAddDeactivationReason:(id)arg1;
- (void)willResume:(id)arg1;

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
