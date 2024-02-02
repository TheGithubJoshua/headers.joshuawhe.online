<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>RCControlsView.h</title>
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

/PrivateFrameworks/VoiceMemos.framework/RCControlsView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos (1.0)
 */

@interface RCControlsView : UIView {
    RCAVState * _AVState;
    UIColor * _bottomSeparatorLineColor;
    bool  _canEnableCaptureButton;
    bool  _canEnableDoneButton;
    bool  _canEnablePreviewButton;
    bool  _canRecord;
    long long  _controlsConfiguration;
    <RCControlsViewDelegate> * _delegate;
    UIButton * _doneButton;
    RCLayoutMetrics * _layoutMetrics;
    UIButton * _leftPlayStateButton;
    UIAlertController * _noMicAlertViewController;
    RCRecorderStateButton * _recordingStateButton;
    bool  _showsBottomSeparatorLine;
    double  _topPadding;
    NSLayoutConstraint * _topPaddingCn;
}

@property (nonatomic, copy) RCAVState *AVState;
@property (nonatomic, readonly) UIColor *bottomSeparatorLineColor;
@property (nonatomic) bool canEnableCaptureButton;
@property (nonatomic) bool canEnableDoneButton;
@property (nonatomic) bool canEnablePreviewButton;
@property (nonatomic) bool canRecord;
@property (nonatomic) long long controlsConfiguration;
@property (nonatomic) <RCControlsViewDelegate> *delegate;
@property (nonatomic, readonly) UIButton *doneButton;
@property (nonatomic, retain) RCLayoutMetrics *layoutMetrics;
@property (nonatomic, readonly) UIButton *leftPlayStateButton;
@property (nonatomic, readonly) UIAlertController *noMicAlertViewController;
@property (nonatomic, readonly) RCRecorderStateButton *recordingStateButton;
@property (nonatomic) bool showsBottomSeparatorLine;
@property (nonatomic) double topPadding;
@property (nonatomic, readonly) NSLayoutConstraint *topPaddingCn;

- (void).cxx_destruct;
- (id)AVState;
- (long long)_AVCaptureState;
- (long long)_AVPreviewState;
- (void)_contentSizeDidChangeNotification:(id)arg1;
- (void)_doneButtonPressed:(id)arg1;
- (void)_inputAvailabilityDidChangeNotification:(id)arg1;
- (bool)_isCaptureButtonEnabled;
- (bool)_isPreviewButtonEnabled;
- (bool)_isRecordingOrPausedRecording;
- (id)_leftPlayStateImageForAVPreviewState:(long long)arg1;
- (void)_playStateButtonPressed:(id)arg1;
- (id)_recordButton;
- (void)_recordingStateButtonPressed:(id)arg1;
- (void)_updateButtonsAnimated:(bool)arg1;
- (id)bottomSeparatorLineColor;
- (bool)canEnableCaptureButton;
- (bool)canEnableDoneButton;
- (bool)canEnablePreviewButton;
- (bool)canRecord;
- (long long)controlsConfiguration;
- (id)delegate;
- (id)doneButton;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)layoutMetrics;
- (id)leftPlayStateButton;
- (id)noMicAlertViewController;
- (void)performFailedToStartRecordingActions;
- (void)performRecordButtonPress;
- (id)recordingStateButton;
- (void)setAVState:(id)arg1;
- (void)setButtonFontForUISize:(id)arg1;
- (void)setCanEnableCaptureButton:(bool)arg1;
- (void)setCanEnableDoneButton:(bool)arg1;
- (void)setCanEnablePreviewButton:(bool)arg1;
- (void)setCanRecord:(bool)arg1;
- (void)setControlsConfiguration:(long long)arg1;
- (void)setControlsConfiguration:(long long)arg1 animate:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setLayoutMetrics:(id)arg1;
- (void)setShowsBottomSeparatorLine:(bool)arg1;
- (void)setTopPadding:(double)arg1;
- (bool)showsBottomSeparatorLine;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)topPadding;
- (id)topPaddingCn;
- (void)updateConstraints;

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