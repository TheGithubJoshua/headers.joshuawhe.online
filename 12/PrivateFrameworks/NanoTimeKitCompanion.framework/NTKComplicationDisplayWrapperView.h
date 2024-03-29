<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NTKComplicationDisplayWrapperView.h</title>
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

/PrivateFrameworks/NanoTimeKitCompanion.framework/NTKComplicationDisplayWrapperView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion (1)
 */

@interface NTKComplicationDisplayWrapperView : UIControl <NTKComplicationDisplayObserver, NTKControl, NTKTimeTravel> {
    double  _alphaForDimmedState;
    <NTKComplicationDisplayWrapperViewAnimationDelegate> * _animationDelegate;
    UIView * _clipView;
    NSString * _complicationSlotIdentifier;
    CLKComplicationTemplate * _complicationTemplate;
    UIView<NTKComplicationDisplay> * _currentComplicationView;
    UIView<NTKComplicationDisplay> * _deferredComplicationView;
    bool  _didChangeLayoutOverride;
    bool  _dimmed;
    UIView<NTKComplicationDisplay> * _display;
    id /* block */  _displayConfigurationHandler;
    UIView * _earlierContainerView;
    bool  _editing;
    long long  _family;
    bool  _hasLegacyDisplay;
    bool  _isAnimating;
    bool  _isDetachedDisplay;
    UIView * _laterContainerView;
    long long  _layoutOverride;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
    id /* block */  _needsResizeHandler;
    UIView<NTKComplicationDisplay> * _nextComplicationView;
    bool  _paused;
    bool  _supportsCurvedText;
    bool  _tapEnabled;
    CLKComplicationTemplate * _template;
    NSDate * _timeTravelDate;
    id /* block */  _touchDownHandler;
    id /* block */  _touchUpInsideHandler;
}

@property (nonatomic) double alphaForDimmedState;
@property (nonatomic) <NTKComplicationDisplayWrapperViewAnimationDelegate> *animationDelegate;
@property (nonatomic, retain) NSString *complicationSlotIdentifier;
@property (nonatomic, readonly) CLKComplicationTemplate *complicationTemplate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDimmed, nonatomic) bool dimmed;
@property (nonatomic, readonly) UIView<NTKComplicationDisplay> *display;
@property (nonatomic, copy) id /* block */ displayConfigurationHandler;
@property (nonatomic) bool editing;
@property (nonatomic, readonly) long long family;
@property (nonatomic, readonly) bool hasLegacyDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long layoutOverride;
@property (nonatomic) struct CGSize { double x1; double x2; } maxSize;
@property (nonatomic, copy) id /* block */ needsResizeHandler;
@property (nonatomic) bool paused;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredSize;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsCurvedText;
@property (nonatomic) bool tapEnabled;
@property (nonatomic, copy) id /* block */ touchDownHandler;
@property (nonatomic, copy) id /* block */ touchUpInsideHandler;

- (void).cxx_destruct;
- (void)_didSetDisplayFromDisplay:(id)arg1 withComplicationAnimation:(unsigned long long)arg2;
- (bool)_displayIsTappable;
- (void)_invokeNeedsResizeHandler;
- (void)_invokeTouchDownHandler;
- (void)_invokeTouchUpInsideHandler;
- (void)_prepareToSetDisplay:(id)arg1 withComplicationAnimation:(inout unsigned long long*)arg2;
- (void)_removeDisplay:(id)arg1;
- (void)_replaceDisplayWithDisplayClass:(Class)arg1 template:(id)arg2 reason:(long long)arg3 animation:(unsigned long long)arg4;
- (void)_resetComplicationViews;
- (void)_setDimmed:(bool)arg1 animated:(bool)arg2;
- (void)_setDisplay:(id)arg1 withComplicationAnimation:(unsigned long long)arg2;
- (void)_setDisplayEditing:(bool)arg1;
- (void)_setDisplayMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_startDefaultNewDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 forward:(bool)arg3 completionBlock:(id /* block */)arg4;
- (void)_tryToSetDisplayHighlighted:(bool)arg1;
- (double)alphaForDimmedState;
- (id)animationDelegate;
- (void)complicationDisplayNeedsResize:(id)arg1;
- (id)complicationSlotIdentifier;
- (id)complicationTemplate;
- (void)dealloc;
- (id)display;
- (id /* block */)displayConfigurationHandler;
- (bool)editing;
- (long long)family;
- (bool)hasLegacyDisplay;
- (id)init;
- (id)initWithCustomTemplateDisplay:(id)arg1 isDetachedDisplay:(bool)arg2 family:(long long)arg3;
- (id)initWithFamily:(long long)arg1;
- (id)initWithLegacyDisplay:(id)arg1;
- (id)initWithLegacyDisplay:(id)arg1 layoutOverride:(long long)arg2;
- (bool)isDimmed;
- (long long)layoutOverride;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })maxSize;
- (void)needsResize;
- (id /* block */)needsResizeHandler;
- (bool)paused;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredSize;
- (void)setAlphaForDimmedState:(double)arg1;
- (void)setAnimationDelegate:(id)arg1;
- (void)setComplicationSlotIdentifier:(id)arg1;
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2 animation:(unsigned long long)arg3;
- (void)setComplicationView:(id)arg1 withComplicationAnimation:(unsigned long long)arg2;
- (void)setDimmed:(bool)arg1;
- (void)setDimmed:(bool)arg1 animated:(bool)arg2;
- (void)setDisplayConfigurationHandler:(id /* block */)arg1;
- (void)setEditing:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNeedsResizeHandler:(id /* block */)arg1;
- (void)setPaused:(bool)arg1;
- (void)setSupportsCurvedText:(bool)arg1;
- (void)setTapEnabled:(bool)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;
- (void)setTouchDownHandler:(id /* block */)arg1;
- (void)setTouchUpInsideHandler:(id /* block */)arg1;
- (bool)shouldCancelTouchesInScrollview;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)supportsCurvedText;
- (bool)tapEnabled;
- (id /* block */)touchDownHandler;
- (id /* block */)touchUpInsideHandler;

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
