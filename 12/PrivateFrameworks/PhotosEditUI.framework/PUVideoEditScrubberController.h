<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUVideoEditScrubberController.h</title>
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

/PrivateFrameworks/PhotosEditUI.framework/PUVideoEditScrubberController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI (1)
 */

@interface PUVideoEditScrubberController : NSObject <PLSlalomRegionEditorDelegate, UIMovieScrubberDataSource, UIMovieScrubberDelegate> {
    PLSlalomRegionEditor * __slomoRegionEditor;
    <PUVideoEditScrubberControllerDelegate> * _delegate;
    struct { 
        bool respondsToDidBeginScrubbing; 
        bool respondsToDidEndScrubbing; 
        bool respondsToValueDidChange; 
        bool respondsToStartDidChange; 
        bool respondsToEndDidChange; 
        bool respondsToDidBeginEditingSlomoRegions; 
        bool respondsToDidEndEditingSlomoRegions; 
        bool respondsToSlomoRegionsDidChangewithHandle; 
    }  _delegateFlags;
    double  _edgeInset;
    UIMovieScrubber * _movieScrubber;
    UIView * _scrubberView;
    bool  _showsSlomoRegionEditor;
    PUVideoEditScrubberImageSource * _thumbnailSource;
    double  _videoAspectRatio;
    double  _videoDuration;
}

@property (setter=_setSlomoRegionEditor:, nonatomic, retain) PLSlalomRegionEditor *_slomoRegionEditor;
@property (nonatomic) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUVideoEditScrubberControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double edgeInset;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEditing;
@property (nonatomic, retain) UIMovieScrubber *movieScrubber;
@property (setter=_setScrubberView:, nonatomic, retain) UIView *scrubberView;
@property (nonatomic) bool showsSlomoRegionEditor;
@property (nonatomic) double slomoEndTime;
@property (nonatomic) double slomoMaxTime;
@property (nonatomic) double slomoMinTime;
@property (nonatomic) double slomoStartTime;
@property (readonly) Class superclass;
@property (nonatomic) bool thumbIsVisible;
@property (nonatomic, retain) PUVideoEditScrubberImageSource *thumbnailSource;
@property (nonatomic) double trimEndTime;
@property (nonatomic) double trimStartTime;
@property (nonatomic, readonly) double videoAspectRatio;
@property (nonatomic, readonly) double videoDuration;

- (void).cxx_destruct;
- (void)_createView;
- (void)_setScrubberView:(id)arg1;
- (void)_setSlomoRegionEditor:(id)arg1;
- (id)_slomoRegionEditor;
- (void)_updateSlomoRegionEditor;
- (double)currentTime;
- (void)dealloc;
- (id)delegate;
- (double)edgeInset;
- (id)initWithVideoDuration:(double)arg1 videoAspectRatio:(double)arg2;
- (bool)isEditing;
- (id)movieScrubber;
- (void)movieScrubber:(id)arg1 editingEndValueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 editingStartValueDidChange:(double)arg2;
- (id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2;
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 isSummaryThumbnail:(bool)arg3;
- (void)movieScrubber:(id)arg1 valueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 willZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3;
- (void)movieScrubberDidBeginAnimatingZoom:(id)arg1;
- (void)movieScrubberDidBeginEditing:(id)arg1;
- (void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidEndAnimatingZoom:(id)arg1;
- (void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidFinishRequestingThumbnails:(id)arg1;
- (double)movieScrubberDuration:(id)arg1;
- (double)movieScrubberThumbnailAspectRatio:(id)arg1;
- (void)reloadData;
- (id)scrubberView;
- (void)setCurrentTime:(double)arg1;
- (void)setCurrentTime:(double)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEdgeInset:(double)arg1;
- (void)setMovieScrubber:(id)arg1;
- (void)setShowsSlomoRegionEditor:(bool)arg1;
- (void)setSlomoEndTime:(double)arg1;
- (void)setSlomoMaxTime:(double)arg1;
- (void)setSlomoMinTime:(double)arg1;
- (void)setSlomoStartTime:(double)arg1;
- (void)setThumbIsVisible:(bool)arg1;
- (void)setThumbnailSource:(id)arg1;
- (void)setTrimEndTime:(double)arg1;
- (void)setTrimStartTime:(double)arg1;
- (bool)showsSlomoRegionEditor;
- (void)slalomRegionEditorDidBeginEditing:(id)arg1 withStartHandle:(bool)arg2;
- (void)slalomRegionEditorDidEndEditing:(id)arg1;
- (void)slalomRegionEditorEndValueChanged:(id)arg1;
- (void)slalomRegionEditorRequestForceUnzoom:(id)arg1;
- (bool)slalomRegionEditorRequestForceZoom:(id)arg1;
- (void)slalomRegionEditorStartValueChanged:(id)arg1;
- (double)slomoEndTime;
- (double)slomoMaxTime;
- (double)slomoMinTime;
- (double)slomoStartTime;
- (bool)thumbIsVisible;
- (id)thumbnailSource;
- (double)trimEndTime;
- (double)trimStartTime;
- (double)videoAspectRatio;
- (double)videoDuration;

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
