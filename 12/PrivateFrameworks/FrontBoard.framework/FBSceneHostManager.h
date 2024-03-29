<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FBSceneHostManager.h</title>
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

/PrivateFrameworks/FrontBoard.framework/FBSceneHostManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard (486.52)
 */

@interface FBSceneHostManager : NSObject <BSDescriptionProviding> {
    FBSceneHostWrapperView * _activeWrapperView;
    long long  _contentState;
    bool  _contentStateIsChanging;
    UIColor * _defaultBackgroundColorWhileHosting;
    UIColor * _defaultBackgroundColorWhileNotHosting;
    bool  _defaultClippingDisabled;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _defaultHostViewTransform;
    unsigned long long  _defaultHostedLayerTypes;
    NSString * _defaultMinificationFilterName;
    unsigned long long  _defaultRenderingMode;
    <FBSceneHostManagerDelegate> * _delegate;
    NSMutableSet * _disableHostingAssertions;
    struct { 
        unsigned int delegateOverrideRequester : 1; 
        unsigned int delegateShouldEnableHostingForRequester : 1; 
    }  _flags;
    FBOrderedRequesters * _hostRequesters;
    FBSceneLayerHostContainerView * _hostView;
    NSMutableDictionary * _hostWrapperViewsByRequester;
    NSString * _identifier;
    bool  _invalidated;
    FBSceneLayerManager * _layerManager;
    NSHashTable * _observers;
    FBScene * _scene;
}

@property (nonatomic, readonly) long long contentState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) UIColor *defaultBackgroundColorWhileHosting;
@property (nonatomic, copy) UIColor *defaultBackgroundColorWhileNotHosting;
@property (nonatomic) bool defaultClippingDisabled;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } defaultHostViewTransform;
@property (nonatomic) unsigned long long defaultHostedLayerTypes;
@property (nonatomic, copy) NSString *defaultMinificationFilterName;
@property (nonatomic) unsigned long long defaultRenderingMode;
@property (nonatomic) <FBSceneHostManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic, readonly) FBScene *scene;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateRequester:(id)arg1;
- (id)_activeHostRequester;
- (void)_callOutToObservers:(id /* block */)arg1;
- (id)_hostViewForRequester:(id)arg1;
- (id)_hostViewForRequester:(id)arg1 enableAndOrderFront:(bool)arg2;
- (id)_overrideRequesterIfNecessary:(id)arg1;
- (void)_setContentState:(long long)arg1;
- (id)_snapshotContextForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 excludedContextIDs:(id)arg2 opaque:(bool)arg3 outTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg4;
- (id)_snapshotContextForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 excludedLayers:(id)arg2 opaque:(bool)arg3;
- (void)_updateActiveHostRequester;
- (id)_wrapperViewForRequester:(id)arg1;
- (void)addObserver:(id)arg1;
- (long long)contentState;
- (void)dealloc;
- (id)defaultBackgroundColorWhileHosting;
- (id)defaultBackgroundColorWhileNotHosting;
- (bool)defaultClippingDisabled;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })defaultHostViewTransform;
- (unsigned long long)defaultHostedLayerTypes;
- (id)defaultMinificationFilterName;
- (unsigned long long)defaultRenderingMode;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)disableHostingForReason:(id)arg1;
- (void)disableHostingForRequester:(id)arg1;
- (void)enableHostingForRequester:(id)arg1 orderFront:(bool)arg2;
- (void)enableHostingForRequester:(id)arg1 priority:(long long)arg2;
- (id)hostViewForRequester:(id)arg1;
- (id)hostViewForRequester:(id)arg1 appearanceStyle:(unsigned long long)arg2;
- (id)hostViewForRequester:(id)arg1 enableAndOrderFront:(bool)arg2;
- (id)hostViewForRequester:(id)arg1 enableAndOrderFront:(bool)arg2 appearanceStyle:(unsigned long long)arg3;
- (id)identifier;
- (id)initWithLayerManager:(id)arg1 scene:(id)arg2;
- (void)invalidate;
- (bool)isInvalidated;
- (void)orderRequesterFront:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)scene;
- (void)setContextId:(unsigned int)arg1 hidden:(bool)arg2 forRequester:(id)arg3;
- (void)setDefaultBackgroundColorWhileHosting:(id)arg1;
- (void)setDefaultBackgroundColorWhileNotHosting:(id)arg1;
- (void)setDefaultClippingDisabled:(bool)arg1;
- (void)setDefaultHostViewTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setDefaultHostedLayerTypes:(unsigned long long)arg1;
- (void)setDefaultMinificationFilterName:(id)arg1;
- (void)setDefaultRenderingMode:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLayer:(id)arg1 alpha:(double)arg2 forRequester:(id)arg3;
- (void)setLayer:(id)arg1 hidden:(bool)arg2 forRequester:(id)arg3;
- (struct CGImage { }*)snapshotCGImageRefForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 excludingContexts:(id)arg2 opaque:(bool)arg3 outTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg4;
- (id)snapshotContextForRequester:(id)arg1;
- (struct __IOSurface { }*)snapshotIOSurfaceForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 excludingContexts:(id)arg2 opaque:(bool)arg3 outTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg4;
- (id)snapshotUIImageForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 excludingContexts:(id)arg2 opaque:(bool)arg3 outTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg4;
- (id)snapshotViewForSnapshot:(id)arg1;
- (id)snapshotViewWithContext:(id)arg1;
- (id)snapshotViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 excludingContexts:(id)arg2 opaque:(bool)arg3;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

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
