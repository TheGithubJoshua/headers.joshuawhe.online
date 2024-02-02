<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIMotionEffectEngine.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIMotionEffectEngine.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIMotionEffectEngine : NSObject <_UIMotionEffectEventConsumer> {
    bool  _allAnalyzersAreCentered;
    _UILazyMapTable * _analyzerSettingsToAnalyzers;
    NSMapTable * _analyzersToEffects;
    CADisplayLink * _displayLink;
    _UIAssociationTable * _effectViewAssociationTable;
    _UIMotionEffectEventProvider * _eventProvider;
    long long  _eventProviderStatus;
    bool  _generatingUpdates;
    bool  _hasAppliedAtLeastOneUpdateSinceStarting;
    bool  _hasReceivedAtLeastOneEventSinceStarting;
    bool  _isPendingReset;
    _UIMotionEffectEvent * _lastEvent;
    _UIMotionEffectEvent * _pendingEvent;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pendingEventLock;
    bool  _pendingSlowDown;
    int  _screenDimmingNotificationToken;
    bool  _slowUpdatesEnabled;
    NSMutableSet * _suspendReasons;
    NSMapTable * _suspendedViewsToEffectSets;
    long long  _targetInterfaceOrientation;
    int  _thermalNotificationToken;
}

@property (setter=_setTargetInterfaceOrientation:, nonatomic) long long _targetInterfaceOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *suspensionReasons;

+ (Class)_analyzerClass;
+ (Class)_eventProviderClass;
+ (bool)_motionEffectsEnabled;
+ (bool)_motionEffectsSupported;

- (void).cxx_destruct;
- (void)_applyEffectsFromAnalyzer:(id)arg1;
- (void)_handleLatestDeviceMotion;
- (bool)_hasMotionEffectsForView:(id)arg1;
- (bool)_isSuspended;
- (bool)_motionEffect:(id)arg1 belongsToView:(id)arg2;
- (bool)_motionEffectsAreSuspendedForView:(id)arg1;
- (id)_motionEffectsForView:(id)arg1;
- (void)_setTargetInterfaceOrientation:(long long)arg1;
- (bool)_shouldGenerateUpdates;
- (void)_startGeneratingUpdates;
- (void)_startOrStopGeneratingUpdates;
- (void)_stopGeneratingUpdates;
- (long long)_targetInterfaceOrientation;
- (void)_toggleSlowUpdates;
- (void)_unapplyAllEffects;
- (void)_unregisterAllMotionEffectsForView:(id)arg1;
- (void)_unregisterMotionEffect:(id)arg1 fromView:(id)arg2;
- (void)_updateDisplayLinkInterval;
- (void)beginApplyingMotionEffect:(id)arg1 toView:(id)arg2;
- (void)beginSuspendingForReason:(id)arg1;
- (void)beginSuspendingMotionEffectsForView:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)endApplyingMotionEffect:(id)arg1 toView:(id)arg2;
- (void)endSuspendingForReason:(id)arg1;
- (void)endSuspendingMotionEffectsForView:(id)arg1;
- (id)init;
- (void)resetMotionAnalysis;
- (id)suspensionReasons;
- (void)updateEventProviderStatus:(long long)arg1;
- (void)updateWithEvent:(id)arg1;

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