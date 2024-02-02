<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIInternalDraggingSessionSource.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIInternalDraggingSessionSource.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIInternalDraggingSessionSource : _UIDraggingImageSlotOwner {
    NSXPCListenerEndpoint * _accessibilityEndpoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _centroid;
    UIWindow * _centroidWindow;
    long long  _dataOwner;
    bool  _didHandOffDragImage;
    UIDragEvent * _dragEvent;
    <_UIDruidSourceConnection> * _druidConnection;
    bool  _hostIsActive;
    NSArray * _internalItems;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastNotifiedCentroid;
    bool  _originatedInHostedWindow;
    unsigned long long  _outsideAppSourceOperationMask;
    PBItemCollection * _pbItemCollection;
    _UIDraggingSession * _publicSession;
    unsigned long long  _resultOperation;
    bool  _sentWillEnd;
    unsigned int  _sessionIdentifier;
    _UIDragSetDownAnimation * _setDownAnimation;
    UIView * _sourceView;
    long long  _state;
    long long  _stateAfterSetDown;
    _DUITouchRoutingPolicy * _touchRoutingPolicy;
    NSSet * _touches;
    unsigned long long  _withinAppSourceOperationMask;
}

@property (nonatomic, retain) NSXPCListenerEndpoint *accessibilityEndpoint;
@property (nonatomic, readonly) bool canAddItems;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } centroid;
@property (nonatomic, readonly) UIWindow *centroidWindow;
@property (nonatomic) long long dataOwner;
@property (nonatomic, readonly) bool didHandOffDragImage;
@property (nonatomic) UIDragEvent *dragEvent;
@property (nonatomic, retain) <_UIDruidSourceConnection> *druidConnection;
@property (nonatomic, copy) NSArray *internalItems;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) unsigned long long outsideAppSourceOperationMask;
@property (nonatomic, readonly) bool prefersFullSizePreview;
@property (nonatomic, readonly) _UIDraggingSession *publicSession;
@property (nonatomic) unsigned long long resultOperation;
@property (nonatomic, readonly) unsigned int sessionIdentifier;
@property (nonatomic, readonly) bool shouldCancelOnAppDeactivation;
@property (nonatomic) UIView *sourceView;
@property (nonatomic) long long state;
@property (nonatomic, copy) _DUITouchRoutingPolicy *touchRoutingPolicy;
@property (nonatomic, copy) NSSet *touches;
@property (nonatomic, readonly) unsigned long long withinAppSourceOperationMask;

- (void).cxx_destruct;
- (void)_didBeginDrag;
- (void)_getOperationMaskFromDelegate;
- (void)_handOffCancelledItems:(id)arg1;
- (void)_hostDidDeactivate;
- (void)_hostWillBecomeActive;
- (void)_registerContextIDsForAdditionalDragEvents;
- (void)_sendWillEndWithOperation:(unsigned long long)arg1;
- (void)_unregisterContextIDsForAdditionalDragEvents;
- (id)accessibilityEndpoint;
- (void)addPublicItems:(id)arg1;
- (void)beginDrag:(id /* block */)arg1;
- (bool)canAddItems;
- (void)cancelDrag;
- (struct CGPoint { double x1; double x2; })centroid;
- (id)centroidWindow;
- (long long)dataOwner;
- (bool)didHandOffDragImage;
- (void)dragDidExitApp;
- (id)dragEvent;
- (id)druidConnection;
- (bool)dynamicallyUpdatesPrefersFullSizePreviews;
- (id)initWithDragManager:(id)arg1 items:(id)arg2 dataOwner:(long long)arg3 sourceView:(id)arg4;
- (id)internalItems;
- (bool)isActive;
- (void)itemsBecameDirty:(id)arg1;
- (unsigned long long)outsideAppSourceOperationMask;
- (bool)prefersFullSizePreview;
- (bool)preventsSimultaneousDragFromView:(id)arg1;
- (id)publicSession;
- (unsigned long long)resultOperation;
- (unsigned int)sessionIdentifier;
- (void)setAccessibilityEndpoint:(id)arg1;
- (void)setCentroid:(struct CGPoint { double x1; double x2; })arg1 inWindow:(id)arg2;
- (void)setDataOwner:(long long)arg1;
- (void)setDragEvent:(id)arg1;
- (void)setDruidConnection:(id)arg1;
- (void)setInternalItems:(id)arg1;
- (void)setResultOperation:(unsigned long long)arg1;
- (void)setSourceView:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTouchRoutingPolicy:(id)arg1;
- (void)setTouches:(id)arg1;
- (bool)shouldCancelOnAppDeactivation;
- (id)sourceView;
- (long long)state;
- (id)touchRoutingPolicy;
- (bool)touchRoutingPolicyContainsContextIDToAlwaysSend:(unsigned int)arg1;
- (id)touches;
- (void)updateCentroidFromDragEvent;
- (unsigned long long)withinAppSourceOperationMask;

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