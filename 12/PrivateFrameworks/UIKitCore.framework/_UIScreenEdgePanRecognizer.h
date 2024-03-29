<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIScreenEdgePanRecognizer.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIScreenEdgePanRecognizer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIScreenEdgePanRecognizer : NSObject <_UISettingsKeyObserver> {
    <_UIScreenEdgePanRecognizerDelegate> * _delegate;
    double  _gestureRestrictionFactor;
    bool  _hasDoneInitialBackProjectionTest;
    bool  _hasRecordedData;
    long long  _initialInterfaceOrientation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialTouchLocation;
    double  _initialTouchTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTouchLocation;
    long long  _lastTouchModifier;
    double  _lastTouchTimestamp;
    UIDelayedAction * _recognitionTimer;
    bool  _recognizeAlongEdge;
    bool  _recognizeImmediatelyFromEdgeLocked;
    unsigned long long  _recognizedRegion;
    bool  _requiresFlatThumb;
    bool  _requiresLongPress;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _screenBounds;
    _UIScreenEdgePanRecognizerSettings * _settings;
    bool  _shouldUseGrapeFlags;
    long long  _state;
    unsigned long long  _targetEdges;
    unsigned long long  _touchedRegion;
    long long  _type;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } _lastTouchLocation;
@property (readonly, copy) NSString *debugDescription;
@property <_UIScreenEdgePanRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasRecordedData;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool recognizeAlongEdge;
@property (nonatomic) bool recognizeImmediatelyFromEdgeLocked;
@property (nonatomic, readonly) unsigned long long recognizedRegion;
@property (nonatomic) bool requiresFlatThumb;
@property (getter=isRequiringLongPress, nonatomic, readonly) bool requiringLongPress;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } screenBounds;
@property (nonatomic, retain) _UIScreenEdgePanRecognizerSettings *settings;
@property (nonatomic) bool shouldUseGrapeFlags;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long targetEdges;
@property (nonatomic, readonly) bool useGrapeFlags;

+ (bool)_edgeSwipeNavigationGestureEnabled;

- (void).cxx_destruct;
- (void)_createOrDestoryAnalysisWindowIfNeeded;
- (void)_idleTimerElapsed:(id)arg1;
- (void)_incorporateIncrementalSampleAtLocation:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6;
- (void)_incorporateInitialTouchAtLocation:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6;
- (struct CGPoint { double x1; double x2; })_lastTouchLocation;
- (void)_longPressTimerElapsed:(id)arg1;
- (void)_setState:(long long)arg1;
- (unsigned long long)_targetEdges;
- (long long)_type;
- (void)dealloc;
- (id)delegate;
- (bool)hasRecordedData;
- (void)incorporateTouchSampleAtLocation:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 modifier:(long long)arg3 interfaceOrientation:(long long)arg4 forceState:(long long)arg5;
- (void)incorporateTouchSampleAtLocation:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 settings:(id)arg2;
- (bool)isRequiringLongPress;
- (bool)recognizeAlongEdge;
- (bool)recognizeImmediatelyFromEdgeLocked;
- (unsigned long long)recognizedRegion;
- (bool)requiresFlatThumb;
- (void)reset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenBounds;
- (void)setDelegate:(id)arg1;
- (void)setRecognizeAlongEdge:(bool)arg1;
- (void)setRecognizeImmediatelyFromEdgeLocked:(bool)arg1;
- (void)setRequiresFlatThumb:(bool)arg1;
- (void)setScreenBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSettings:(id)arg1;
- (void)setShouldUseGrapeFlags:(bool)arg1;
- (void)setTargetEdges:(unsigned long long)arg1;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)shouldUseGrapeFlags;
- (long long)state;
- (unsigned long long)targetEdges;
- (unsigned long long)touchedEdgesForInterfaceOrientation:(long long)arg1;
- (bool)useGrapeFlags;

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
