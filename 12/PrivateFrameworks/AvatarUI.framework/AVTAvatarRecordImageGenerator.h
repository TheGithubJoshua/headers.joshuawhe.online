<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AVTAvatarRecordImageGenerator.h</title>
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

/PrivateFrameworks/AvatarUI.framework/AVTAvatarRecordImageGenerator.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTAvatarRecordImageGenerator : NSObject {
    AVTCoreModel * _coreModel;
    AVTUIEnvironment * _environment;
    AVTImageStore * _imageStore;
    <AVTUILogger> * _logger;
    AVTAvatarConfigurationImageRenderer * _renderer;
    NSArray * _scopes;
}

@property (nonatomic, readonly) AVTCoreModel *coreModel;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) AVTImageStore *imageStore;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, readonly) AVTAvatarConfigurationImageRenderer *renderer;
@property (nonatomic, readonly, copy) NSArray *scopes;

+ (id)supportedScopesForScale:(double)arg1;

- (void).cxx_destruct;
- (id)coreModel;
- (bool)deleteThumbnailsForAvatarRecordsWithIdentifiers:(id)arg1 error:(id*)arg2;
- (id)environment;
- (bool)generateThumbnailForAvatarRecordItem:(id)arg1 avatarConfiguration:(id)arg2 scope:(id)arg3 error:(id*)arg4;
- (bool)generateThumbnailsForAvatarRecords:(id)arg1 error:(id*)arg2;
- (bool)generateThumbnailsForDuplicateAvatarRecord:(id)arg1 originalRecord:(id)arg2 error:(id*)arg3;
- (id)imageStore;
- (id)initWithImageStore:(id)arg1 coreEnvironment:(id)arg2;
- (id)initWithImageStore:(id)arg1 renderer:(id)arg2 environment:(id)arg3;
- (id)logger;
- (id)renderer;
- (id)scopes;
- (void)updateThumbnailsForChangesWithTracker:(id)arg1 recordProvider:(id /* block */)arg2;

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
