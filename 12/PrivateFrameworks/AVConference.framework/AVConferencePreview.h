<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AVConferencePreview.h</title>
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

/PrivateFrameworks/AVConference.framework/AVConferencePreview.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference (1475.1.8)
 */

@interface AVConferencePreview : NSObject {
    bool  _isPreviewRunning;
    NSString * _localCameraUID;
    NSObject<OS_dispatch_queue> * avConferencePreviewNotificationQueue;
    NSObject<OS_dispatch_queue> * avConferencePreviewQueue;
    CALayer * caLayerBack;
    CALayer * caLayerFront;
    bool  clientWantsPreview;
    AVConferenceXPCClient * connection;
    unsigned int  connectionAttempts;
    NSObject<AVConferencePreviewClientDelegate> * delegate;
    struct CGSize { 
        double width; 
        double height; 
    }  localScreenLandscapeAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  localScreenPortraitAspectRatio;
    VideoAttributes * localVideoAttributes;
}

@property (nonatomic, retain) NSObject<AVConferencePreviewClientDelegate> *delegate;

+ (id)AVConferencePreviewSingleton;

- (void)addStickerWithURL:(id)arg1 isFaceSticker:(bool)arg2 atPosition:(struct CGPoint { double x1; double x2; })arg3 identifier:(id)arg4;
- (id)allocWithZone:(struct _NSZone { }*)arg1;
- (id)autorelease;
- (void)beginPIPToPreviewAnimation;
- (void)beginPreviewToPIPAnimation;
- (void)cameraDidBecomeAvailableForUniqueID:(id)arg1;
- (void)cameraDidBecomeInterruptedForForUniqueID:(id)arg1 reason:(long long)arg2;
- (void)clearAllStickers:(bool)arg1;
- (void)connectLayer:(id)arg1 withSlot:(unsigned int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didChangeLocalScreenAttributes:(id)arg1;
- (void)didChangeLocalVideoAttributes:(id)arg1;
- (void)didGetSnapshot:(id)arg1;
- (void)didPausePreview;
- (void)didReceiveCommError;
- (void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2;
- (void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1;
- (void)didStartPreview;
- (void)didStopPreview;
- (void)endPIPToPreviewAnimation;
- (void)endPreviewToPIPAnimation;
- (void)getSnapshot;
- (id)init;
- (bool)isPreviewRunning;
- (unsigned int)localCamera;
- (id)localCameraUID;
- (id)localScreenAttributesForVideoAttributes:(id)arg1;
- (id)localVideoAttributes;
- (id)localVideoLayer:(bool)arg1;
- (void)pausePreview;
- (void)registerBlocksForDelegateNotifications;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setAnimoji:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocalCamera:(unsigned int)arg1;
- (void)setLocalCameraWithUID:(id)arg1;
- (void)setLocalScreenAttributes:(id)arg1;
- (void)setLocalVideoAttributes:(id)arg1;
- (void)setLocalVideoLayer:(id)arg1 front:(bool)arg2;
- (void)setMemoji:(id)arg1;
- (void)startPreview;
- (void)startPreviewUnpausing:(bool)arg1;
- (void)stopPreview;

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