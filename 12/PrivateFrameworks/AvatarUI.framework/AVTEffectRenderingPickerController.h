<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AVTEffectRenderingPickerController.h</title>
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

/PrivateFrameworks/AvatarUI.framework/AVTEffectRenderingPickerController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTEffectRenderingPickerController : NSObject <AVTARFrameConsumer, AVTDisplayingCarouselControllerDelegate> {
    NSArray * _avatarRecords;
    AVTAvatarStore * _avatarStore;
    <AVTEffectRenderingPickerControllerDelegate> * _delegate;
    <AVTDisplayingCarouselController> * _listController;
    UIViewController * _pickerViewController;
    AVTAvatarEffectRenderer * _renderer;
    bool  _shouldRender;
}

@property (nonatomic, retain) NSArray *avatarRecords;
@property (nonatomic, readonly) AVTAvatarStore *avatarStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTEffectRenderingPickerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <AVTDisplayingCarouselController> *listController;
@property (nonatomic, retain) UIViewController *pickerViewController;
@property (nonatomic, readonly) AVTAvatarEffectRenderer *renderer;
@property (nonatomic) bool shouldRender;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)avatarForRecord:(id)arg1;
- (id)avatarRecords;
- (id)avatarStore;
- (void)carouselController:(id)arg1 didFocusOnView:(id)arg2 forRecord:(id)arg3;
- (void)carouselController:(id)arg1 willEndFocusOnView:(id)arg2 forRecord:(id)arg3;
- (void)createListControllerIfNeeded;
- (id)delegate;
- (id)fetchAvatarRecords;
- (id)initWithAvatarStore:(id)arg1 renderer:(id)arg2;
- (id)initWithDomainIdentifier:(id)arg1;
- (id)listController;
- (id)pickerViewController;
- (void)renderForARFrame:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)renderer;
- (void)setAvatarRecords:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setListController:(id)arg1;
- (void)setPickerViewController:(id)arg1;
- (void)setShouldRender:(bool)arg1;
- (bool)shouldRender;
- (void)updateAvatarRecordsIfNeeded;

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
