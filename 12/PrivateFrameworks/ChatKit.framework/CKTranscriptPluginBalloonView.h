<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKTranscriptPluginBalloonView.h</title>
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

/PrivateFrameworks/ChatKit.framework/CKTranscriptPluginBalloonView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit (1.0)
 */

@interface CKTranscriptPluginBalloonView : CKBalloonView {
    IMBalloonPluginDataSource * _dataSource;
    bool  _isInteractive;
    bool  _mayReparentPluginViews;
    CKBalloonImageView * _outlineMask;
    UIView<CKTranscriptPluginView> * _pluginView;
    bool  _suppressMask;
    CKInteractiveBalloonImageView * _tailMask;
}

@property (nonatomic, retain) IMBalloonPluginDataSource *dataSource;
@property (nonatomic) bool isInteractive;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } maskFrame;
@property (nonatomic) bool mayReparentPluginViews;
@property (nonatomic, retain) CKBalloonImageView *outlineMask;
@property (nonatomic, retain) UIView<CKTranscriptPluginView> *pluginView;
@property (nonatomic, readonly) bool shouldMaskWhenOpaque;
@property (nonatomic) bool suppressMask;
@property (nonatomic, retain) CKInteractiveBalloonImageView *tailMask;

- (void).cxx_destruct;
- (void)_pluginViewReadyForSnapshot:(id)arg1;
- (void)addFilter:(id)arg1;
- (void)attachInvisibleInkEffectView;
- (void)clearFilters;
- (void)configureForComposition:(id)arg1;
- (void)configureForTranscriptPlugin:(id)arg1;
- (id)dataSource;
- (void)detachInvisibleInkEffectView;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)imageForInvisibleInkEffectView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasUncovered;
- (bool)isInteractive;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maskFrame;
- (bool)mayReparentPluginViews;
- (id)outlineMask;
- (id)pluginView;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setCanUseOpaqueMask:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)setIsInteractive:(bool)arg1;
- (void)setMayReparentPluginViews:(bool)arg1;
- (void)setOutlineMask:(id)arg1;
- (void)setPluginView:(id)arg1;
- (void)setSuppressMask:(bool)arg1;
- (void)setTailMask:(id)arg1;
- (bool)shouldMaskWhenOpaque;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (bool)suppressMask;
- (id)tailMask;

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