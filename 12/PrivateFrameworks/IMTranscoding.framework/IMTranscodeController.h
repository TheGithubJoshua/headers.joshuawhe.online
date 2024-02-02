<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>IMTranscodeController.h</title>
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

/PrivateFrameworks/IMTranscoding.framework/IMTranscodeController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/IMTranscoding.framework/IMTranscoding (1000)
 */

@interface IMTranscodeController : NSObject {
    NSObject<OS_xpc_object> * _connection;
}

+ (id)sharedInstance;

- (bool)_connect;
- (void)_disconnected;
- (void)_transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 maxDimension:(unsigned long long)arg6 transcoderUserInfo:(id)arg7 representations:(long long)arg8 fallBack:(bool)arg9 retries:(int)arg10 completionBlock:(id /* block */)arg11;
- (void)_transcodeFileTransferPayloadData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 retries:(unsigned long long)arg4 fallBack:(bool)arg5 completionBlock:(id /* block */)arg6;
- (void)_validateFileTransfer:(id)arg1 utiType:(id)arg2 retries:(int)arg3 completionBlock:(id /* block */)arg4;
- (void)_validateTextRenderingForMessage:(id)arg1 retries:(int)arg2 completionBlock:(id /* block */)arg3;
- (void)dealloc;
- (void)generatePreview:(id)arg1 previewURL:(id)arg2 constraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; })arg3 completionBlock:(id /* block */)arg4;
- (void)generateSnapshotForMessageGUID:(id)arg1 payloadURL:(id)arg2 balloonBundleID:(id)arg3 isFromMe:(bool)arg4 completionBlock:(id /* block */)arg5;
- (id)init;
- (void)transcodeFallbackFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 maxDimension:(unsigned long long)arg6 transcoderUserInfo:(id)arg7 representations:(long long)arg8 completionBlock:(id /* block */)arg9;
- (void)transcodeFallbackFileTransferPayloadData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 maxDimension:(unsigned long long)arg6 transcoderUserInfo:(id)arg7 representations:(long long)arg8 completionBlock:(id /* block */)arg9;
- (void)transcodeLocalTransferPayloadData:(id)arg1 balloonBundleID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)validateFileTransfer:(id)arg1 utiType:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)validateTextRenderingForMessage:(id)arg1 completionBlock:(id /* block */)arg2;

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