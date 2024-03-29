<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKInvisibleInkEmojiEffectView.h</title>
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

/PrivateFrameworks/ChatKit.framework/CKInvisibleInkEmojiEffectView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit (1.0)
 */

@interface CKInvisibleInkEmojiEffectView : CKInvisibleInkEffectView <CAAnimationDelegate> {
    bool  _blendingEnabled;
    CALayer * _blurredEmojiLayer;
    CAEmitterLayer * _drawEmitterLayer;
    CALayer * _dustContainerLayer;
    CAEmitterLayer * _dustEmitterLayer;
    CALayer * _emojiContainerLayer;
    CALayer * _emojiLayer;
    CALayer * _maskLayer;
    UITextView * _textView;
}

@property (nonatomic) bool blendingEnabled;
@property (nonatomic, retain) CALayer *blurredEmojiLayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CAEmitterLayer *drawEmitterLayer;
@property (nonatomic, retain) CALayer *dustContainerLayer;
@property (nonatomic, retain) CAEmitterLayer *dustEmitterLayer;
@property (nonatomic, retain) CALayer *emojiContainerLayer;
@property (nonatomic, retain) CALayer *emojiLayer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CALayer *maskLayer;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextView *textView;

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)attachToBalloonView:(id)arg1;
- (bool)blendingEnabled;
- (id)blurredEmojiLayer;
- (void)createDrawEmitter;
- (void)createDustEmitter;
- (void)detachFromBalloonView;
- (void)disableBlending;
- (void)displayLayer:(id)arg1;
- (id)drawEmitterLayer;
- (id)dustContainerLayer;
- (id)dustEmitterLayer;
- (id)emojiContainerLayer;
- (id)emojiLayer;
- (void)enableBlending;
- (void)endDrawEmitterEffects;
- (void)endDustEmitterLayerFingerEffects;
- (void)endTouches;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)maskLayer;
- (void)moveEmittersWithTouches:(id)arg1;
- (void)reset;
- (void)setBlendingEnabled:(bool)arg1;
- (void)setBlurredEmojiLayer:(id)arg1;
- (void)setDrawEmitterLayer:(id)arg1;
- (void)setDustContainerLayer:(id)arg1;
- (void)setDustEmitterLayer:(id)arg1;
- (void)setEmojiContainerLayer:(id)arg1;
- (void)setEmojiLayer:(id)arg1;
- (void)setMaskLayer:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setSuspended:(bool)arg1;
- (void)setTextView:(id)arg1;
- (id)textView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

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
