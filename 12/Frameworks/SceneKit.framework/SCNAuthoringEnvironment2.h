<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SCNAuthoringEnvironment2.h</title>
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

/Frameworks/SceneKit.framework/SCNAuthoringEnvironment2.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit (470.10)
 */

@interface SCNAuthoringEnvironment2 : NSObject {
    UIColor * _blue;
    SCNGeometry * _cameraFrustumGeometry;
    SCNGeometry * _cameraGeometry;
    SCNGeometry * _cameraNearPlaneGeometry;
    SCNGeometry * _cameraOrthographicFrustumGeometry;
    SCNNode * _cameraRoot;
    SCNNode * _cameraTarget;
    struct __CFDictionary { } * _camerasDictionary;
    UIColor * _cyan;
    long long  _displayMask;
    SCNGeometry * _fieldGeometry;
    UIColor * _grayDark;
    UIColor * _grayLight;
    UIColor * _grayMedium;
    UIColor * _green;
    SCNNode * _layerRoot;
    SCNGeometry * _lightGeometry;
    SCNNode * _lightRoot;
    struct __CFDictionary { } * _lightsDictionary;
    SCNManipulator * _manipulator;
    UIColor * _orange;
    SCNNode * _overlayLayerRoot;
    UIColor * _paleBlue;
    UIColor * _paleGreen;
    struct __CFDictionary { } * _particlesDictionary;
    SCNGeometry * _particlesGeometry;
    SCNNode * _particlesRoot;
    struct __CFDictionary { } * _physicsFieldsDictionary;
    SCNNode * _physicsFieldsRoot;
    UIColor * _pink;
    SCNNode * _pointsOfViewRoot;
    UIColor * _red;
    SCNRenderer * _renderer;
    struct __C3DScene { } * _scene;
    NSMutableSet * _selection;
    UIColor * _white;
    UIColor * _yellow;
}

@property (nonatomic, readonly) SCNNode *authoringLayer;
@property (nonatomic, readonly) SCNNode *authoringOverlayLayer;
@property long long displayMask;
@property (nonatomic, readonly) SCNManipulator *manipulator;

+ (id)authoringEnvironmentForScene:(id)arg1;
+ (id)authoringEnvironmentForScene:(id)arg1 createIfNeeded:(bool)arg2;

- (void)_resetLightAuthoringWithContainerNode:(id)arg1 source:(id)arg2 light:(id)arg3;
- (void)_updateRootsVisibility;
- (void)addCameraNode:(id)arg1;
- (void)addLightNode:(id)arg1;
- (void)addNodeToSelection:(id)arg1;
- (void)addParticlesNode:(id)arg1;
- (void)addPhysicsFieldNode:(id)arg1;
- (void)addedNode:(id)arg1;
- (id)authoringCamera:(long long)arg1;
- (id)authoringCameraNodes;
- (id)authoringLayer;
- (id)authoringOverlayLayer;
- (id)cameraFrustumGeometry;
- (id)cameraGeometry;
- (id)cameraNearPlaneGeometry;
- (id)cameraOrthographicFrustumGeometry;
- (void)cancelSelection;
- (void)dealloc;
- (bool)didTapAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (long long)displayMask;
- (id)fieldGeometry;
- (id)geometryForLightType:(id)arg1;
- (id)initWithScene:(id)arg1;
- (id)manipulator;
- (id)particlesGeometry;
- (void)prepareScene:(id)arg1;
- (void)removeCameraNode:(id)arg1;
- (void)removeLightNode:(id)arg1;
- (void)removeParticlesNode:(id)arg1;
- (void)removePhysicsFieldNode:(id)arg1;
- (void)removedNode:(id)arg1;
- (void)selectNode:(id)arg1;
- (void)selectNodes:(id)arg1;
- (void)setAuthoringCamera:(long long)arg1 forView:(id)arg2;
- (void)setDisplayMask:(long long)arg1;
- (void)setupParticleMeshEmitter:(id)arg1 authoringNode:(id)arg2;
- (void)updateCameraNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateFieldNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateLightNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateLightTypeForNode:(id)arg1 source:(id)arg2 light:(id)arg3 screenspaceScalingFactor:(float)arg4;
- (void)updateParticlesNode:(id)arg1 withSourceNode:(id)arg2;
- (void)updateWithRenderer:(id)arg1;

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