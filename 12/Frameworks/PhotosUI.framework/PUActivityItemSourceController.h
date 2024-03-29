<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUActivityItemSourceController.h</title>
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

/Frameworks/PhotosUI.framework/PUActivityItemSourceController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PUActivityItemSourceController : NSObject <PXCMMActionPerformerDelegate> {
    NSArray * __activeItemSources;
    NSError * __error;
    NSString * _activeActivityType;
    PUActivityViewController * _activityViewController;
    NSMutableOrderedSet * _assetItemSources;
    NSMutableOrderedSet * _assetItems;
    id /* block */  _progressHandler;
    NSURL * _publishedURL;
    int  _taskId;
}

@property (setter=_setActiveItemSources:, retain) NSArray *_activeItemSources;
@property (setter=_setError:, retain) NSError *_error;
@property (retain) NSString *activeActivityType;
@property (nonatomic) PUActivityViewController *activityViewController;
@property (nonatomic, readonly, copy) NSOrderedSet *assetItemSources;
@property (nonatomic, copy) NSOrderedSet *assetItems;
@property (nonatomic, readonly, copy) NSOrderedSet *assets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (setter=_setPublishedURL:, nonatomic, retain) NSURL *publishedURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeItemSources;
- (void)_cleanupAfterPerform;
- (void)_didPublishMomentShareLinkToURL:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_error;
- (bool)_prepareForPerformWithActivityType:(id)arg1 error:(id*)arg2;
- (void)_setActiveItemSources:(id)arg1;
- (void)_setError:(id)arg1;
- (void)_setPublishedURL:(id)arg1;
- (bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject { Class x1; }*)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 presentViewController:(struct NSObject { Class x1; }*)arg2;
- (id)activeActivityType;
- (id)activityItemSourceForAsset:(id)arg1;
- (id)activityViewController;
- (void)addAssetItem:(id)arg1;
- (id)assetItemSources;
- (id)assetItems;
- (id)assets;
- (void)cancel;
- (long long)countOfImagesToShare;
- (long long)countOfLoopsToShare;
- (long long)countOfVideosToShare;
- (id /* block */)progressHandler;
- (void)publishLinkForActivityType:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)publishedURL;
- (void)removeAssetItem:(id)arg1;
- (void)runExplicitly:(bool)arg1 withActivityType:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setActiveActivityType:(id)arg1;
- (void)setActivityViewController:(id)arg1;
- (void)setAssetItems:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;

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
