<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUPhotoEditSaveRequest.h</title>
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

/PrivateFrameworks/PhotosEditUI.framework/PUPhotoEditSaveRequest.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI (1)
 */

@interface PUPhotoEditSaveRequest : NSObject <PXRunNodeDelegate> {
    NSArray * __runGraph;
    double  _beginTimestamp;
    id /* block */  _completionHandler;
    PHContentEditingOutput * _contentEditingOutput;
    long long  _currentState;
    PLPhotoEditModel * _editModel;
    int  _identifier;
    PUPhotoEditIrisModel * _irisModel;
    PUPhotoKitAdjustmentSaveNode * _outputNode;
    PHAsset * _photo;
    bool  _useRawIfAvailable;
    PUVideoExportNode * _videoExportNode;
    long long  _workImageVersion;
}

@property (setter=_setRunGraph:, nonatomic, copy) NSArray *_runGraph;
@property (nonatomic, readonly) PHContentEditingOutput *contentEditingOutput;
@property (nonatomic, readonly) long long currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) PLPhotoEditModel *editModel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int identifier;
@property (nonatomic, readonly, copy) PUPhotoEditIrisModel *irisModel;
@property (nonatomic, readonly) PHAsset *photo;
@property (nonatomic, readonly) double progress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsProgress;
@property (nonatomic, readonly) long long workImageVersion;

- (void).cxx_destruct;
- (void)_finishWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_handleOutputNodeFinishedWithError:(id)arg1;
- (long long)_imageRequestVersion;
- (void)_performRevertToOriginalOperation;
- (void)_performSaveContentEditingOutput;
- (void)_performSaveEditsOperation;
- (bool)_requiresVideoRender;
- (id)_runGraph;
- (void)_setRunGraph:(id)arg1;
- (void)_transitionToState:(long long)arg1;
- (long long)_videoRequestVersion;
- (void)beginSaveOperationWithCompletionHandler:(id /* block */)arg1;
- (void)cancelSaveOperation;
- (id)contentEditingOutput;
- (long long)currentState;
- (id)editModel;
- (int)identifier;
- (id)init;
- (id)initWithPhoto:(id)arg1 contentEditingOutput:(id)arg2 workImageVersion:(long long)arg3 irisEditModel:(id)arg4 useRawIfAvailable:(bool)arg5;
- (id)initWithPhoto:(id)arg1 editModel:(id)arg2 contentEditingOutput:(id)arg3 workImageVersion:(long long)arg4 irisEditModel:(id)arg5 useRawIfAvailable:(bool)arg6;
- (id)initWithPhoto:(id)arg1 editModel:(id)arg2 workImageVersion:(long long)arg3 irisEditModel:(id)arg4 useRawIfAvailable:(bool)arg5;
- (id)initWithPhotoToRevertToOriginal:(id)arg1;
- (id)irisModel;
- (id)photo;
- (double)progress;
- (void)runNode:(id)arg1 didCancelWithError:(id)arg2;
- (void)runNode:(id)arg1 didCompleteWithError:(id)arg2;
- (bool)supportsProgress;
- (long long)workImageVersion;

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