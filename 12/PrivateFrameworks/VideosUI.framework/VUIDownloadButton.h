<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VUIDownloadButton.h</title>
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

/PrivateFrameworks/VideosUI.framework/VUIDownloadButton.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI (282.60.36)
 */

@interface VUIDownloadButton : VUIButton {
    UIImage * _connectingImage;
    UIAlertController * _deleteConfirmationAlertController;
    id /* block */  _downloadStateChangeHandler;
    UIImage * _downloadedImage;
    UIImage * _downloadingImage;
    bool  _isForLibrary;
    UIImage * _notDownloadedImage;
    bool  _observingDownloadProgress;
    UIViewController * _presentingViewController;
    VUICircleProgressIndicator * _progressIndicator;
    bool  _showsTextInDownloadedState;
    VUIDownloadButtonViewModel * _viewModel;
    bool  _wasCanceled;
    bool  _wasDeleted;
}

@property (nonatomic, retain) UIImage *connectingImage;
@property (nonatomic, retain) UIAlertController *deleteConfirmationAlertController;
@property (nonatomic, copy) id /* block */ downloadStateChangeHandler;
@property (nonatomic, retain) UIImage *downloadedImage;
@property (nonatomic, retain) UIImage *downloadingImage;
@property (nonatomic) bool isForLibrary;
@property (nonatomic, retain) UIImage *notDownloadedImage;
@property (nonatomic) bool observingDownloadProgress;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic, retain) VUICircleProgressIndicator *progressIndicator;
@property (nonatomic) bool showsTextInDownloadedState;
@property (nonatomic, retain) VUIDownloadButtonViewModel *viewModel;
@property (nonatomic) bool wasCanceled;
@property (nonatomic) bool wasDeleted;

+ (id)defaultLayout;

- (void).cxx_destruct;
- (void)_askUserAndDeleteIfNeeded;
- (id)_buttonPropertiesForState:(unsigned long long)arg1;
- (void)_configureProgressIndicatorWithProperties:(id)arg1;
- (id)_connectingImage;
- (void)_dismissConfirmationAlertController;
- (void)_downloadButtonTapped:(id)arg1;
- (id)_downloadedImage;
- (id)_downloadingImage;
- (void)_handleAppDidEnterBackgroundNotification:(id)arg1;
- (id)_imageForDownloadState:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })_imageSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)_insertProgressIndicatorWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_layoutProgressIndicator;
- (id)_notDownloadedImage;
- (id)_pausedImage;
- (void)_setImage:(id)arg1;
- (void)_setTitleWithProperties:(id)arg1;
- (void)_startDownloadIfPossible;
- (void)_startObservingDownloadProgress:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_stopObservingDownloadProgress:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_updateButtonToConnectingWithProperties:(id)arg1;
- (void)_updateButtonToDownloadedWithProperties:(id)arg1;
- (void)_updateButtonToDownloadingWithProperties:(id)arg1;
- (void)_updateButtonToNotDownloadedWithProperties:(id)arg1;
- (void)_updateButtonToState:(unsigned long long)arg1;
- (void)_updateButtonToState:(unsigned long long)arg1 oldState:(unsigned long long)arg2;
- (void)_updateDownloadProgress:(double)arg1 animated:(bool)arg2;
- (id)connectingImage;
- (void)dealloc;
- (id)deleteConfirmationAlertController;
- (id /* block */)downloadStateChangeHandler;
- (id)downloadedImage;
- (id)downloadingImage;
- (id)initWithAssetController:(id)arg1 layout:(id)arg2;
- (id)initWithPlayable:(id)arg1 layout:(id)arg2;
- (bool)isForLibrary;
- (void)layoutSubviews;
- (id)notDownloadedImage;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)observingDownloadProgress;
- (id)presentingViewController;
- (id)progressIndicator;
- (void)setConnectingImage:(id)arg1;
- (void)setDeleteConfirmationAlertController:(id)arg1;
- (void)setDownloadStateChangeHandler:(id /* block */)arg1;
- (void)setDownloadedImage:(id)arg1;
- (void)setDownloadingImage:(id)arg1;
- (void)setIsForLibrary:(bool)arg1;
- (void)setNotDownloadedImage:(id)arg1;
- (void)setObservingDownloadProgress:(bool)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setProgressIndicator:(id)arg1;
- (void)setShowsTextInDownloadedState:(bool)arg1;
- (void)setViewModel:(id)arg1;
- (void)setWasCanceled:(bool)arg1;
- (void)setWasDeleted:(bool)arg1;
- (bool)showsTextInDownloadedState;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateWithAssetController:(id)arg1;
- (void)updateWithElement:(id)arg1;
- (id)viewModel;
- (bool)wasCanceled;
- (bool)wasDeleted;

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
