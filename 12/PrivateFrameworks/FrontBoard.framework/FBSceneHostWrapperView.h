<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FBSceneHostWrapperView.h</title>
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

/PrivateFrameworks/FrontBoard.framework/FBSceneHostWrapperView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard (486.52)
 */

@interface FBSceneHostWrapperView : UIView <BSDescriptionProviding, FBSceneHostView, FBSceneLayerHostContainerViewDataSource, FBSceneLayerManagerObserver, _FBSceneGeometryObserver> {
    unsigned long long  _appearanceStyle;
    UIColor * _backgroundColorWhileHosting;
    UIColor * _backgroundColorWhileNotHosting;
    bool  _clippingDisabled;
    <FBSceneHostViewDelegate> * _delegate;
    NSMutableSet * _hiddenLayers;
    FBSceneLayerHostContainerView * _hostContainerView;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _hostViewTransform;
    unsigned long long  _hostedLayerTypes;
    NSMapTable * _layerAlphaMapTable;
    FBSceneLayerManager * _layerManager;
    FBSceneHostManager * _manager;
    NSString * _minificationFilterName;
    unsigned long long  _renderingMode;
    NSString * _requester;
    FBScene * _scene;
    bool  _usingDefaultClippingDisabled;
    bool  _usingDefaultHostViewTransform;
    bool  _usingDefaultLayerTypes;
    bool  _usingDefaultMinificationFilterName;
    bool  _usingDefaultRenderingMode;
}

@property (nonatomic) unsigned long long appearanceStyle;
@property (nonatomic, retain) UIColor *backgroundColorWhileHosting;
@property (nonatomic, retain) UIColor *backgroundColorWhileNotHosting;
@property (getter=isClippingDisabled, nonatomic) bool clippingDisabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBSceneHostViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *hiddenLayers;
@property (nonatomic, retain) FBSceneLayerHostContainerView *hostContainerView;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } hostViewTransform;
@property (nonatomic) unsigned long long hostedLayerTypes;
@property (getter=isHosting, nonatomic, readonly) bool hosting;
@property (nonatomic, readonly) NSSet *hostingDisabledLayers;
@property (nonatomic, readonly) double level;
@property (nonatomic, copy) NSString *minificationFilterName;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } referenceFrame;
@property (nonatomic) unsigned long long renderingMode;
@property (nonatomic, readonly, copy) NSString *requester;
@property (nonatomic, readonly) FBScene *scene;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backgroundColorWhileHosting;
- (id)_backgroundColorWhileNotHosting;
- (id)_hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (void)_hostingStatusChanged;
- (bool)_isReallyHosting;
- (void)_scene:(id)arg1 didChangeLayoutWithAnimationSettings:(id)arg2;
- (void)_setAppearanceStyle:(unsigned long long)arg1 force:(bool)arg2;
- (id)_stringForAppearanceStyle;
- (void)_toggleBackgroundColorIfNecessary;
- (void)_updateFrameAndTransform;
- (unsigned long long)appearanceStyle;
- (id)backgroundColorWhileHosting;
- (id)backgroundColorWhileNotHosting;
- (unsigned long long)contextHostRenderingModeForHostContainerView:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)hiddenLayers;
- (id)hostContainerView;
- (double)hostContainerView:(id)arg1 alphaForLayer:(id)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })hostViewTransform;
- (unsigned long long)hostedLayerTypes;
- (id)hostingDisabledLayers;
- (id)initWithScene:(id)arg1 requester:(id)arg2;
- (void)invalidate;
- (bool)isClippingDisabled;
- (bool)isHosting;
- (id)layerMinificationFilterNameForHostContainerView:(id)arg1;
- (id)layersForHostContainerView:(id)arg1;
- (double)level;
- (id)minificationFilterName;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })referenceFrame;
- (unsigned long long)renderingMode;
- (id)requester;
- (id)scene;
- (void)sceneLayerManager:(id)arg1 didRepositionLayer:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)setAppearanceStyle:(unsigned long long)arg1;
- (void)setBackgroundColorWhileHosting:(id)arg1;
- (void)setBackgroundColorWhileNotHosting:(id)arg1;
- (void)setClippingDisabled:(bool)arg1;
- (void)setDefaultClippingDisabled:(bool)arg1;
- (void)setDefaultHostViewTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setDefaultHostedLayerTypes:(unsigned long long)arg1;
- (void)setDefaultMinificationFilterName:(id)arg1;
- (void)setDefaultRenderingMode:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostContainerView:(id)arg1;
- (void)setHostViewTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setHostedLayerTypes:(unsigned long long)arg1;
- (void)setLayer:(id)arg1 alpha:(double)arg2;
- (void)setLayer:(id)arg1 hidden:(bool)arg2;
- (void)setMinificationFilterName:(id)arg1;
- (void)setRenderingMode:(unsigned long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateBackgroundColor;
- (id)window;

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
