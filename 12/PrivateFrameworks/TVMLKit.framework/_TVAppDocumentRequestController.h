<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_TVAppDocumentRequestController.h</title>
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

/PrivateFrameworks/TVMLKit.framework/_TVAppDocumentRequestController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit (1)
 */

@interface _TVAppDocumentRequestController : _TVAppDocumentController <IKDocumentServiceRequestDelegate, IKServiceRequestDelegate, TVMediaControllerDelegate, TVMediaControllerHosting, TVMediaPlaybackManagerDelegate, TVMediaPlaying, TVObserving, TVTemplateFeaturesManagerDelegate> {
    struct { 
        bool hasSelectedMediaInfoDidChange; 
        bool hasDidHideUI; 
        bool hasShowcaseFactorDidChange; 
        bool hasDidCompleteDocumentCreation; 
    }  _adrcDelegateFlags;
    IKDocumentServiceRequest * _documentServiceRequest;
    TVTemplateFeaturesManager * _featuresManager;
    struct { 
        bool initialRequestSent; 
        bool shouldHideUI; 
    }  _flags;
    UIViewController<TVMediaController> * _mediaController;
    TVMediaPlaybackManager * _mediaPlaybackManager;
    <TVMediaProviding> * _mediaProvider;
    TVObservableEventController * _observableEventController;
    double  _showcaseFactor;
    double  _showcaseInset;
    <TVShowcasing> * _showcasingController;
    _TVSwipeUpMessageView * _swipeUpMessageView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) IKDocumentServiceRequest *documentServiceRequest;
@property (nonatomic, readonly) TVTemplateFeaturesManager *featuresManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPlaying;
@property (nonatomic, readonly) bool isUIHidden;
@property (nonatomic, retain) UIViewController<TVMediaController> *mediaController;
@property (nonatomic, retain) TVMediaPlaybackManager *mediaPlaybackManager;
@property (nonatomic) <TVMediaProviding> *mediaProvider;
@property (nonatomic, retain) TVObservableEventController *observableEventController;
@property (nonatomic, readonly) TVMediaInfo *selectedMediaInfo;
@property (nonatomic, readonly) double showcaseFactor;
@property (nonatomic) double showcaseInset;
@property (nonatomic) <TVShowcasing> *showcasingController;
@property (readonly) Class superclass;
@property (nonatomic, retain) _TVSwipeUpMessageView *swipeUpMessageView;

- (void).cxx_destruct;
- (void)_hostMediaControllerIfPossible;
- (id)_hostingFocusEnvironment;
- (void)_mediaInfoDidChange;
- (void)_showcaseFactorDidChange;
- (void)addObserver:(id)arg1 forEvent:(id)arg2;
- (void)adoptMediaController:(id)arg1;
- (void)dealloc;
- (void)didCompleteDocumentCreationWithStatus:(long long)arg1 errorDictionary:(id)arg2;
- (void)documentDidChangeForDocumentServiceRequest:(id)arg1;
- (id)documentServiceRequest;
- (void)evaluateSwipeUpMessageForMediaPlaybackManager:(id)arg1;
- (id)featuresManager;
- (void)featuresManager:(id)arg1 currentContextDidChangeForFeature:(id)arg2;
- (void)handleEvent:(id)arg1 sender:(id)arg2 withUserInfo:(id)arg3;
- (bool)handleEvent:(id)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 extraInfo:(id*)arg4;
- (id)initWithDocumentServiceRequest:(id)arg1;
- (id)initWithDocumentServiceRequest:(id)arg1 loadImmediately:(bool)arg2;
- (id)interactionPreviewControllerForViewController:(id)arg1 presentingView:(id)arg2 presentingElement:(id)arg3;
- (bool)isPlaying;
- (bool)isUIHidden;
- (id)mediaController;
- (void)mediaInfoDidChange;
- (id)mediaPlaybackManager;
- (void)mediaPlaybackManager:(id)arg1 shouldHideUI:(bool)arg2 animated:(bool)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;
- (id)mediaProvider;
- (id)observableEventController;
- (id)preferredFocusEnvironments;
- (id)relinquishOwnership;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forEvent:(id)arg2;
- (id)selectedMediaInfo;
- (void)sendInitialRequestIfNeeded;
- (void)serviceRequest:(id)arg1 didCompleteWithStatus:(long long)arg2 errorDictionary:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setMediaController:(id)arg1;
- (void)setMediaPlaybackManager:(id)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setObservableEventController:(id)arg1;
- (void)setShowcaseInset:(double)arg1;
- (void)setShowcasingController:(id)arg1;
- (void)setSwipeUpMessageView:(id)arg1;
- (void)shouldHideSupplementaryUI:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (double)showcaseFactor;
- (void)showcaseFactorDidChange;
- (double)showcaseInset;
- (id)showcasingController;
- (void)stateDidChangeForMediaController:(id)arg1;
- (id)swipeUpMessageView;
- (id)tv_featuresManagerForDocument:(id)arg1;
- (bool)tv_handleEventForDocument:(id)arg1 eventName:(id)arg2 targetResponder:(id)arg3 viewElement:(id)arg4 extraInfo:(id*)arg5;
- (id)tv_interactionPreviewControllerForViewController:(id)arg1 presentingView:(id)arg2 presentingElement:(id)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willHostTemplateViewController:(id)arg1 usesTransitions:(bool*)arg2;

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
