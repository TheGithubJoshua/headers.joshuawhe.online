<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FBSceneMonitor.h</title>
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

/PrivateFrameworks/FrontBoard.framework/FBSceneMonitor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard (486.52)
 */

@interface FBSceneMonitor : NSObject <FBSceneLayerManagerObserver, FBSceneManagerInternalObserver, FBSceneMonitorDelegate> {
    <FBSceneMonitorDelegate> * _delegate;
    FBSceneMonitorBehaviors * _delegateMonitorBehaviors;
    FBSSceneClientSettingsDiffInspector * _diffInspector;
    FBSceneMonitorBehaviors * _effectiveMonitorBehaviors;
    FBSMutableSceneSettings * _effectiveSettings;
    NSMutableSet * _externalSceneIDs;
    FBSceneMonitorBehaviors * _givenMonitorBehaviors;
    bool  _invalidated;
    bool  _isSynchronizing;
    NSMutableDictionary * _monitorsBySceneID;
    NSMutableSet * _pairedExternalSceneIDs;
    FBScene * _scene;
    NSString * _sceneID;
    FBSMutableSceneSettings * _sceneSettings;
    bool  _updateExternalScenesAfterSync;
    bool  _updateSettingsAfterSync;
}

@property (nonatomic, copy) FBSceneMonitorBehaviors *behaviors;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBSceneMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FBSSceneSettings *effectiveSceneSettings;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBScene *scene;
@property (nonatomic, readonly, copy) NSString *sceneID;
@property (nonatomic, readonly) FBSSceneSettings *sceneSettings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_effectiveBehaviors;
- (void)_evaluateEffectiveMonitorBehaviors;
- (id)_initWithSceneManager:(id)arg1 sceneID:(id)arg2;
- (void)_setEffectiveMonitorBehaviors:(id)arg1;
- (void)_updateAllSceneStateIgnoringDelegate;
- (void)_updateEffectiveSceneSettings:(bool)arg1;
- (void)_updateExternalScenes:(bool)arg1;
- (void)_updateScenePairingState:(bool)arg1;
- (void)_updateSceneSettings:(bool)arg1;
- (id)behaviors;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)effectiveSceneSettings;
- (id)initWithScene:(id)arg1;
- (id)initWithSceneID:(id)arg1;
- (void)invalidate;
- (bool)isPairedWithExternalSceneID:(id)arg1;
- (id)scene;
- (id)sceneID;
- (void)sceneLayerManager:(id)arg1 didRepositionLayer:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;
- (void)sceneManager:(id)arg1 updateForScene:(id)arg2 appliedWithContext:(id)arg3;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManagerDidEndSceneUpdateSynchronization:(id)arg1;
- (void)sceneManagerWillBeginSceneUpdateSynchronization:(id)arg1;
- (void)sceneMonitor:(id)arg1 effectiveSceneSettingsDidChangeWithDiff:(id)arg2 previousSettings:(id)arg3;
- (id)sceneSettings;
- (void)setBehaviors:(id)arg1;
- (void)setDelegate:(id)arg1;

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