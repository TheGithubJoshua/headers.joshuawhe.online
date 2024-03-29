<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIDynamicAnimator.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIDynamicAnimator.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIDynamicAnimator : NSObject {
    double  _accuracy;
    id /* block */  _action;
    NSMutableIndexSet * _availableFieldCategories;
    NSMutableArray * _beginContacts;
    NSMutableSet * _behaviorsToAdd;
    NSMutableSet * _behaviorsToRemove;
    NSMutableDictionary * _bodies;
    bool  _debugEnabled;
    int  _debugInterval;
    <UIDynamicAnimatorDelegate> * _delegate;
    bool  _disableDisplayLink;
    CADisplayLink * _displaylink;
    UIDynamicsDebug * _dynamicsDebug;
    double  _elapsedTime;
    NSMutableArray * _endContacts;
    unsigned long long  _integralization;
    bool  _isInWorldStepMethod;
    double  _lastInterval;
    double  _lastUpdateTime;
    bool  _needsLocalBehaviorReevaluation;
    NSMutableArray * _postSolverActions;
    double  _realElapsedTime;
    <_UIDynamicReferenceSystem> * _referenceSystem;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _referenceSystemBounds;
    unsigned long long  _referenceSystemType;
    NSMutableSet * _registeredBehaviors;
    int  _registeredCollisionGroups;
    int  _registeredImplicitBounds;
    double  _speed;
    struct { 
        unsigned int delegateImplementsDynamicAnimatorDidPause : 1; 
        unsigned int delegateImplementsDynamicAnimatorWillResume : 1; 
    }  _stateFlags;
    bool  _stopping;
    UIDynamicAnimatorTicker * _ticker;
    long long  _ticks;
    NSMutableArray * _topLevelBehaviors;
    PKExtendedPhysicsWorld * _world;
}

@property (nonatomic, readonly, copy) NSArray *behaviors;
@property (nonatomic) <UIDynamicAnimatorDelegate> *delegate;
@property (nonatomic, readonly) double elapsedTime;
@property (nonatomic, readonly) UIView *referenceView;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (nonatomic, retain) UIDynamicAnimatorTicker *ticker;

+ (id)_allDynamicAnimators;
+ (void)_clearReferenceViewFromAnimators:(id)arg1;
+ (void)_referenceViewSizeChanged:(id)arg1;
+ (void)_registerAnimator:(id)arg1;
+ (void)_unregisterAnimator:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (bool)_alwaysDisableDisplayLink;
- (unsigned long long)_animatorIntegralization;
- (double)_animatorInterval;
- (bool)_animatorStep:(double)arg1;
- (id)_bodyForItem:(id)arg1;
- (void)_checkBehavior:(id)arg1;
- (void)_clearReferenceView;
- (bool)_containsBehavior:(id)arg1;
- (bool)_debugEnabled;
- (int)_debugInterval;
- (void)_defaultMapper:(id)arg1 position:(struct CGPoint { double x1; double x2; })arg2 angle:(double)arg3 itemType:(unsigned long long)arg4;
- (id)_delegate;
- (void)_displayLinkTick:(id)arg1;
- (void)_evaluateLocalBehaviors;
- (bool)_isWorldActive;
- (id)_keyForItem:(id)arg1;
- (id)_newBodyForItem:(id)arg1 inItemGroup:(id)arg2;
- (void)_postSolverStep;
- (void)_preSolverStep;
- (double)_ptmRatio;
- (double)_realElapsedTime;
- (void)_reevaluateImplicitBounds;
- (id)_referenceSystem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_referenceSystemBounds;
- (unsigned long long)_referenceSystemType;
- (void)_registerBehavior:(id)arg1;
- (id)_registerBodyForItem:(id)arg1;
- (int)_registerCollisionGroup;
- (void)_registerFieldCategoryForFieldBehavior:(id)arg1;
- (void)_registerImplicitBounds;
- (void)_reportBeginContacts;
- (void)_reportEndContacts;
- (void)_runBlockPostSolverIfNeeded:(id /* block */)arg1;
- (void)_setAction:(id /* block */)arg1;
- (void)_setAlwaysDisableDisplayLink:(bool)arg1;
- (void)_setAnimatorIntegralization:(unsigned long long)arg1;
- (void)_setDebugEnabled:(bool)arg1;
- (void)_setDebugInterval:(int)arg1;
- (void)_setDelegate:(id)arg1;
- (void)_setReferenceSystem:(id)arg1;
- (void)_setRunning:(bool)arg1;
- (void)_setSpeed:(double)arg1;
- (void)_setupWorld;
- (void)_shouldReevaluateLocalBehaviors;
- (double)_speed;
- (void)_start;
- (void)_stop;
- (void)_tickle;
- (long long)_ticks;
- (void)_traverseBehaviorHierarchy:(id /* block */)arg1;
- (void)_unregisterBehavior:(id)arg1;
- (void)_unregisterBodyForItem:(id)arg1 action:(id /* block */)arg2;
- (void)_unregisterCollisionGroup;
- (void)_unregisterFieldCategoryForFieldBehavior:(id)arg1;
- (void)_unregisterImplicitBounds;
- (id)_world;
- (void)addBehavior:(id)arg1;
- (id)behaviors;
- (void)dealloc;
- (double)debugAnimationSpeed;
- (unsigned long long)debugFrameInterval;
- (id)delegate;
- (id)description;
- (void)didBeginContact:(id)arg1;
- (void)didEndContact:(id)arg1;
- (double)elapsedTime;
- (id)init;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithReferenceSystem:(id)arg1;
- (id)initWithReferenceView:(id)arg1;
- (bool)isDebugEnabled;
- (bool)isRunning;
- (id)itemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForCellAtIndexPath:(id)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)recursiveDescription;
- (id)referenceView;
- (void)removeAllBehaviors;
- (void)removeBehavior:(id)arg1;
- (void)setDebugAnimationSpeed:(double)arg1;
- (void)setDebugEnabled:(bool)arg1;
- (void)setDebugFrameInterval:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setReferenceView:(id)arg1;
- (void)setTicker:(id)arg1;
- (id)ticker;
- (void)updateItemFromCurrentState:(id)arg1;
- (void)updateItemUsingCurrentState:(id)arg1;

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
