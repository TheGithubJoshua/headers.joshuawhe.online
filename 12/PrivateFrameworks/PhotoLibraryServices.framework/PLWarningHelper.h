<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PLWarningHelper.h</title>
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

/PrivateFrameworks/PhotoLibraryServices.framework/PLWarningHelper.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices (1.0)
 */

@interface PLWarningHelper : NSObject {
    NSArray * __additionalPhotoStreamAssets;
    NSArray * __assets;
    NSString * __clientName;
    long long  __style;
}

@property (setter=_setAdditionalPhotoStreamAssets:, nonatomic, retain) NSArray *_additionalPhotoStreamAssets;
@property (setter=_setAssets:, nonatomic, retain) NSArray *_assets;
@property (setter=_setClientName:, nonatomic, retain) NSString *_clientName;
@property (setter=_setStyle:, nonatomic) long long _style;

+ (void)_getWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 forItemSuffix:(id)arg4 count:(unsigned long long)arg5 operation:(long long)arg6 clientName:(id)arg7;
+ (id)_usedElsewhereWarningTextForAssetCount:(long long)arg1 inPhotoStreamCount:(long long)arg2 iniPhotoCount:(long long)arg3 inSomeAlbumCount:(long long)arg4 affectedLocalAlbumsCount:(long long)arg5 itemKindSuffix:(id)arg6 actualDeletionCount:(long long)arg7;
+ (id)allWarningMessageCombinations;
+ (void)getAvalancheDeleteWarning:(id*)arg1 actualDeletionCount:(long long*)arg2 forAssets:(id)arg3;
+ (void)getDeletionWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 forAlbums:(id)arg4 folders:(id)arg5 clientName:(id)arg6 style:(long long)arg7;
+ (void)getDeletionWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 forAssets:(id)arg4 additionalPhotoStreamAssets:(id)arg5 clientName:(id)arg6 style:(long long)arg7;
+ (void)getExpungeWarningMessage:(id*)arg1 buttonTitle:(id*)arg2 forAssets:(id)arg3;
+ (void)getWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 forAssets:(id)arg4 operation:(long long)arg5 clientName:(id)arg6;

- (id)_additionalPhotoStreamAssets;
- (id)_assets;
- (id)_clientName;
- (id)_cloudSharedWarningTextForAssets:(id)arg1;
- (void)_getDeletionWarningTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3;
- (void)_setAdditionalPhotoStreamAssets:(id)arg1;
- (void)_setAssets:(id)arg1;
- (void)_setClientName:(id)arg1;
- (void)_setStyle:(long long)arg1;
- (long long)_style;
- (id)_usedElsewhereWarningTextForAssets:(id)arg1 additionalPhotoStreamAssets:(id)arg2 actualDeletionCount:(long long)arg3;
- (void)dealloc;

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