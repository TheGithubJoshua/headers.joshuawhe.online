<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKFullScreenEffect.h</title>
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

/PrivateFrameworks/ChatKit.framework/CKFullScreenEffect.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit (1.0)
 */

@interface CKFullScreenEffect : NSObject <CKAudioControllerDelegate> {
    CKAudioController * _audioController;
    float  _currentVolume;
    <CKFullScreenEffectDelegate> * _delegate;
    NSString * _identifier;
    bool  _triggeredByResponseKit;
    CKMessagePartChatItem * _triggeringChatItem;
    BOOL  messageOrientation;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKFullScreenEffectDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) BOOL messageOrientation;
@property (readonly) Class superclass;
@property (nonatomic) bool triggeredByResponseKit;
@property (nonatomic, retain) CKMessagePartChatItem *triggeringChatItem;

+ (id)_monochromeDimmingFilterWithType:(int)arg1;
+ (id)bigEmojiFilter;
+ (id)stickerFilter;
+ (id)tapBackFilter;

- (void).cxx_destruct;
- (void)_audioSessionOptionsWillChange:(id)arg1;
- (void)_didPrepareSoundEffect;
- (void)_ensureAudioPlayer;
- (int)_filterTypeForCell:(id)arg1 caresAboutOrientation:(bool*)arg2 orientation:(BOOL*)arg3;
- (bool)_supportsSoundEffects;
- (void)animateFiltersForCell:(id)arg1;
- (void)applyMessageFiltersToCells:(id)arg1;
- (void)applyMessageFiltersToTriggeringCell:(id)arg1;
- (void)audioController:(id)arg1 didPrepareMediaObjectToPlay:(id)arg2 successfully:(bool)arg3;
- (void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (id)backgroundColor;
- (void)clearMessageFiltersFromCells:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (bool)effectIsDark;
- (Class)effectViewClass;
- (id)identifier;
- (bool)isForegroundEffect;
- (unsigned long long)layerCount;
- (id)messageFilters;
- (BOOL)messageOrientation;
- (void)playSoundEffect;
- (void)prepareSoundEffect;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMessageOrientation:(BOOL)arg1;
- (void)setTriggeredByResponseKit:(bool)arg1;
- (void)setTriggeringChatItem:(id)arg1;
- (bool)shouldDrawOverNavigationBar;
- (id)soundEffectFileURL;
- (bool)soundEffectHasHapticTrack;
- (void)stopSoundEffect;
- (bool)triggeredByResponseKit;
- (id)triggeringChatItem;

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
