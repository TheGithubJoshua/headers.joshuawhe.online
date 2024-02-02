<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WKFullScreenViewController.h</title>
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

/Frameworks/WebKit.framework/WKFullScreenViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/WebKit.framework/WebKit (8607.3.18)
 */

@interface WKFullScreenViewController : UIViewController <UIGestureRecognizerDelegate, UIToolbarDelegate> {
    WKWebView * __webView;
    SEL  _action;
    bool  _animating;
    struct RetainPtr<UIView> { 
        void *m_ptr; 
    }  _animatingView;
    struct RetainPtr<_WKExtrinsicButton> { 
        void *m_ptr; 
    }  _cancelButton;
    NSString * _location;
    struct RetainPtr<UIButton> { 
        void *m_ptr; 
    }  _locationButton;
    double  _nonZeroStatusBarHeight;
    bool  _pictureInPictureActive;
    struct RetainPtr<_WKExtrinsicButton> { 
        void *m_ptr; 
    }  _pipButton;
    struct WKFullScreenViewControllerPlaybackSessionModelClient { 
        int (**_vptr$PlaybackSessionModelClient)(); 
        WKFullScreenViewController *m_parent; 
        struct RefPtr<WebCore::PlaybackSessionInterfaceAVKit, WTF::DumbPtrTraits<WebCore::PlaybackSessionInterfaceAVKit> > { 
            struct PlaybackSessionInterfaceAVKit {} *m_ptr; 
        } m_interface; 
    }  _playbackClient;
    bool  _playing;
    bool  _prefersHomeIndicatorAutoHidden;
    bool  _prefersStatusBarHidden;
    struct FullscreenTouchSecheuristic { 
        double m_weight; 
        struct Seconds { 
            double m_value; 
        } m_rampUpSpeed; 
        struct Seconds { 
            double m_value; 
        } m_rampDownSpeed; 
        double m_xWeight; 
        double m_yWeight; 
        double m_gamma; 
        double m_cutoff; 
        struct CGSize { 
            double width; 
            double height; 
        } m_size; 
        struct Seconds { 
            double m_value; 
        } m_lastTouchTime; 
        struct CGPoint { 
            double x; 
            double y; 
        } m_lastTouchLocation; 
        double m_lastScore; 
    }  _secheuristic;
    struct RetainPtr<WKFullscreenStackView> { 
        void *m_ptr; 
    }  _stackView;
    id  _target;
    struct RetainPtr<NSLayoutConstraint> { 
        void *m_ptr; 
    }  _topConstraint;
    struct RetainPtr<UILayoutGuide> { 
        void *m_ptr; 
    }  _topGuide;
    struct RetainPtr<UILongPressGestureRecognizer> { 
        void *m_ptr; 
    }  _touchGestureRecognizer;
    struct WKFullScreenViewControllerVideoFullscreenModelClient { 
        int (**_vptr$VideoFullscreenModelClient)(); 
        WKFullScreenViewController *m_parent; 
        struct RefPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::DumbPtrTraits<WebCore::VideoFullscreenInterfaceAVKit> > { 
            struct VideoFullscreenInterfaceAVKit {} *m_ptr; 
        } m_interface; 
    }  _videoFullscreenClient;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{RectEdges<float>={array<float' */ struct  _effectiveFullscreenInsets; /* unknown property attribute:  4>=[4f]}} */
@property (nonatomic, readonly) struct WebFullScreenManagerProxy { int (**x1)(); struct WebPageProxy {} *x2; struct WebFullScreenManagerProxyClient {} *x3; }*_manager;
@property (nonatomic) WKWebView *_webView;
@property (nonatomic) SEL action;
@property (getter=isAnimating, nonatomic) bool animating;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *location;
@property (getter=isPictureInPictureActive, nonatomic) bool pictureInPictureActive;
@property (getter=isPlaying, nonatomic) bool playing;
@property (nonatomic) bool prefersHomeIndicatorAutoHidden;
@property (nonatomic) bool prefersStatusBarHidden;
@property (readonly) Class superclass;
@property (nonatomic, retain) id target;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_cancelAction:(id)arg1;
- (struct RectEdges<float> { struct array<float, 4> { float x_1_1_1[4]; } x1; })_effectiveFullscreenInsets;
- (struct WebFullScreenManagerProxy { int (**x1)(); struct WebPageProxy {} *x2; struct WebFullScreenManagerProxyClient {} *x3; }*)_manager;
- (void)_showPhishingAlert;
- (void)_statusBarFrameDidChange:(id)arg1;
- (void)_togglePiPAction:(id)arg1;
- (void)_touchDetected:(id)arg1;
- (void)_updateWebViewFullscreenInsets;
- (id)_webView;
- (SEL)action;
- (void)dealloc;
- (void)didEnterPictureInPicture;
- (void)failedToEnterPictureInPicture;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)hideUI;
- (id)initWithWebView:(id)arg1;
- (bool)isAnimating;
- (bool)isPictureInPictureActive;
- (bool)isPlaying;
- (void)loadView;
- (id)location;
- (long long)preferredStatusBarStyle;
- (bool)prefersHomeIndicatorAutoHidden;
- (bool)prefersStatusBarHidden;
- (void)setAction:(SEL)arg1;
- (void)setAnimating:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setPictureInPictureActive:(bool)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setPrefersHomeIndicatorAutoHidden:(bool)arg1;
- (void)setPrefersStatusBarHidden:(bool)arg1;
- (void)setTarget:(id)arg1;
- (void)set_webView:(id)arg1;
- (void)showUI;
- (id)target;
- (void)videoControlsManagerDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willEnterPictureInPicture;

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