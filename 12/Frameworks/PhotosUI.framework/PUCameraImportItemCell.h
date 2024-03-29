<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUCameraImportItemCell.h</title>
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

/Frameworks/PhotosUI.framework/PUCameraImportItemCell.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PUCameraImportItemCell : UICollectionViewCell <PXChangeObserver> {
    UIImageView * _badgeImageView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _badgeTapZone;
    long long  _badgeType;
    UITextField * _debugTextField;
    <PUImportDisplayDelegate> * _displayDelegate;
    bool  _needsBadgeUpdate;
    bool  _needsThumbnailRefresh;
    PUPhotoView * _photoView;
    PUImportItemViewModel * _representedImportItem;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _scaledDisplayRect;
    bool  _selectable;
    UIActivityIndicatorView * _spinner;
    long long  _thumbnailRequestID;
}

@property (nonatomic, retain) UIImageView *badgeImageView;
@property (nonatomic) long long badgeType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UITextField *debugTextField;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PUImportDisplayDelegate> *displayDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsBadgeUpdate;
@property (nonatomic, readonly) bool needsThumbnailRefresh;
@property (nonatomic, retain) PUPhotoView *photoView;
@property (nonatomic, retain) PUImportItemViewModel *representedImportItem;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scaledDisplayRect;
@property (nonatomic) bool selectable;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (readonly) Class superclass;
@property (nonatomic) long long thumbnailRequestID;

+ (double)alphaForSelectedCells;

- (void).cxx_destruct;
- (void)_enterOneUpAction;
- (void)_fetchThumbnailReady;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_filledPhotosRectForImage:(id)arg1;
- (void)_selectAction;
- (id)accessibilityCustomActions;
- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)badgeImageView;
- (long long)badgeType;
- (id)badgeView;
- (void)cancelThumbnailLoadIfActive;
- (void)clearImage;
- (void)dealloc;
- (id)debugTextField;
- (id)displayDelegate;
- (long long)dragState;
- (void)handleTapGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (void)layoutSubviews;
- (bool)needsBadgeUpdate;
- (bool)needsThumbnailRefresh;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)photoView;
- (void)prepareForReuse;
- (void)refreshThumbnail;
- (id)representedImportItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scaledDisplayRect;
- (bool)selectable;
- (void)setBadgeImageView:(id)arg1;
- (void)setBadgeType:(long long)arg1;
- (void)setCachedImage:(id)arg1 isPlaceholder:(bool)arg2;
- (void)setDebugTextField:(id)arg1;
- (void)setDisplayDelegate:(id)arg1;
- (void)setNeedsBadgeUpdate:(bool)arg1;
- (void)setPhotoImage:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 fillMode:(long long)arg3 videoDuration:(double)arg4 isPlaceholder:(bool)arg5;
- (void)setPhotoView:(id)arg1;
- (void)setRepresentedImportItem:(id)arg1;
- (void)setScaledDisplayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSelectable:(bool)arg1;
- (void)setSpinner:(id)arg1;
- (void)setThumbnailRequestID:(long long)arg1;
- (bool)shouldBeginGestureForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)showActivityBadge:(bool)arg1;
- (id)spinner;
- (long long)thumbnailRequestID;
- (void)updateBadgeUIIfNeeded;
- (void)updateDebugLabel:(id)arg1;

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
