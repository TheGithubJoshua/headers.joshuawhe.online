<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SCNPhysicsContact.h</title>
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

/Frameworks/SceneKit.framework/SCNPhysicsContact.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit (470.10)
 */

@interface SCNPhysicsContact : NSObject {
    double  _collisionImpulse;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _contactNormal;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _contactPoint;
    double  _distance;
    double  _fraction;
    SCNNode * _nodeA;
    SCNNode * _nodeB;
    long long  _updateCount;
}

@property (nonatomic, readonly) double collisionImpulse;
@property (nonatomic, readonly) struct SCNVector3 { float x1; float x2; float x3; } contactNormal;
@property (nonatomic, readonly) struct SCNVector3 { float x1; float x2; float x3; } contactPoint;
@property (nonatomic, readonly) SCNNode *nodeA;
@property (nonatomic, readonly) SCNNode *nodeB;
@property (nonatomic, readonly) double penetrationDistance;
@property (nonatomic, readonly) double sweepTestFraction;

+ (id)_contactWithManifold:(const struct btPersistentManifold { int x1; struct btManifoldPoint { struct btVector3 { union { float x_1_3_1[4]; } x_1_2_1; } x_2_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_2_1_2; struct btVector3 { union { float x_1_3_1[4]; } x_3_2_1; } x_2_1_3; struct btVector3 { union { float x_1_3_1[4]; } x_4_2_1; } x_2_1_4; struct btVector3 { union { float x_1_3_1[4]; } x_5_2_1; } x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; int x_2_1_10; int x_2_1_11; int x_2_1_12; int x_2_1_13; void *x_2_1_14; bool x_2_1_15; float x_2_1_16; float x_2_1_17; float x_2_1_18; float x_2_1_19; float x_2_1_20; float x_2_1_21; float x_2_1_22; int x_2_1_23; struct btVector3 { union { float x_1_3_1[4]; } x_24_2_1; } x_2_1_24; struct btVector3 { union { float x_1_3_1[4]; } x_25_2_1; } x_2_1_25; } x2[4]; struct btCollisionObject {} *x3; struct btCollisionObject {} *x4; int x5; float x6; float x7; int x8; int x9; int x10; struct c3dContactCallback {} *x11; }*)arg1 index:(long long)arg2;

- (void)_fillNodeA:(id)arg1 nodeB:(id)arg2;
- (void)_fillNodeA:(id)arg1 nodeB:(id)arg2 contactPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg3 collisionImpulse:(struct SCNVector3 { float x1; float x2; float x3; })arg4 distance:(double)arg5 hitFraction:(double)arg6;
- (void)_prepareUpdate;
- (void)_setupWithManifold:(const struct btPersistentManifold { int x1; struct btManifoldPoint { struct btVector3 { union { float x_1_3_1[4]; } x_1_2_1; } x_2_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_2_1_2; struct btVector3 { union { float x_1_3_1[4]; } x_3_2_1; } x_2_1_3; struct btVector3 { union { float x_1_3_1[4]; } x_4_2_1; } x_2_1_4; struct btVector3 { union { float x_1_3_1[4]; } x_5_2_1; } x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; int x_2_1_10; int x_2_1_11; int x_2_1_12; int x_2_1_13; void *x_2_1_14; bool x_2_1_15; float x_2_1_16; float x_2_1_17; float x_2_1_18; float x_2_1_19; float x_2_1_20; float x_2_1_21; float x_2_1_22; int x_2_1_23; struct btVector3 { union { float x_1_3_1[4]; } x_24_2_1; } x_2_1_24; struct btVector3 { union { float x_1_3_1[4]; } x_25_2_1; } x_2_1_25; } x2[4]; struct btCollisionObject {} *x3; struct btCollisionObject {} *x4; int x5; float x6; float x7; int x8; int x9; int x10; struct c3dContactCallback {} *x11; }*)arg1 index:(long long)arg2 point:(const struct btManifoldPoint { struct btVector3 { union { float x_1_2_1[4]; } x_1_1_1; } x1; struct btVector3 { union { float x_1_2_1[4]; } x_2_1_1; } x2; struct btVector3 { union { float x_1_2_1[4]; } x_3_1_1; } x3; struct btVector3 { union { float x_1_2_1[4]; } x_4_1_1; } x4; struct btVector3 { union { float x_1_2_1[4]; } x_5_1_1; } x5; float x6; float x7; float x8; float x9; int x10; int x11; int x12; int x13; void *x14; bool x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; int x23; struct btVector3 { union { float x_1_2_1[4]; } x_24_1_1; } x24; struct btVector3 { union { float x_1_2_1[4]; } x_25_1_1; } x25; }*)arg3;
- (bool)_shouldPostUpdate;
- (double)collisionImpulse;
- (struct SCNVector3 { float x1; float x2; float x3; })contactNormal;
- (struct SCNVector3 { float x1; float x2; float x3; })contactPoint;
- (void)dealloc;
- (id)description;
- (id)nodeA;
- (id)nodeB;
- (double)penetrationDistance;
- (double)sweepTestFraction;

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
