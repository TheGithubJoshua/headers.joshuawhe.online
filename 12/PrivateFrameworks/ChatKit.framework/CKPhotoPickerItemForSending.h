<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKPhotoPickerItemForSending.h</title>
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

/PrivateFrameworks/ChatKit.framework/CKPhotoPickerItemForSending.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit (1.0)
 */

@interface CKPhotoPickerItemForSending : NSObject {
    NSURL * _assetURL;
    <CKPhotoPickerItemForSendingDelegate> * _delegate;
    NSURL * _extraVideoURL;
    bool  _isVideo;
    NSURL * _localURL;
    NSObject<OS_dispatch_semaphore> * _outstandingWork;
    bool  _sendIris;
    UIImage * _thumbnail;
}

@property (nonatomic, readonly) NSURL *assetURL;
@property (nonatomic) <CKPhotoPickerItemForSendingDelegate> *delegate;
@property (nonatomic, retain) NSURL *extraVideoURL;
@property (nonatomic, readonly) bool isVideo;
@property (nonatomic, readonly) NSURL *localURL;
@property (nonatomic) bool sendIris;
@property (retain) UIImage *thumbnail;

- (void).cxx_destruct;
- (void)_fetchAndPersistImageDataForAsset:(id)arg1 withImageManager:(id)arg2;
- (id)assetURL;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)extraVideoURL;
- (id)initWithAssetURL:(id)arg1 isVideo:(bool)arg2;
- (id)initWithImageManager:(id)arg1 asset:(id)arg2 delegate:(id)arg3;
- (bool)isVideo;
- (id)localURL;
- (bool)sendIris;
- (void)setDelegate:(id)arg1;
- (void)setExtraVideoURL:(id)arg1;
- (void)setSendIris:(bool)arg1;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;
- (void)waitForOutstandingWork;

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
