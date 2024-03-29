<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUAlbumListCellContentViewHelperConfiguration.h</title>
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

/Frameworks/PhotosUI.framework/PUAlbumListCellContentViewHelperConfiguration.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PUAlbumListCellContentViewHelperConfiguration : NSObject {
    NSString * _albumSubtitleFormat;
    bool  _allowsEmailInSubtitle;
    long long  _cellContentViewLayout;
    double  _dynamicSubtitleleading;
    double  _dynamicTitleLeading;
    double  _dynamicTopLeading;
    unsigned long long  _folderStackViewStyle;
    double  _gridItemSpacing;
    double  _gridMargin;
    bool  _hasRoundedCorners;
    long long  _imageContentMode;
    NSString * _nameOfAddSharedAlbumPlaceholderImage;
    NSString * _nameOfEmptyAlbumPlaceholderImage;
    NSString * _nameOfEmptySharedAlbumPlaceholderImage;
    NSString * _nameOfHiddenAlbumPlaceholderImage;
    NSString * _nameOfRecentlyDeletedAlbumPlaceholderImage;
    PUPhotoDecoration * _photoDecoration;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelSize;
    double  _posterSquareCornerRadius;
    double  _posterSubitemCornerRadius;
    bool  _shouldUseTableView;
    bool  _showsDeleteButtonOnCellContentView;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _stackOffset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _stackPerspectiveInsets;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _stackPerspectiveOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _stackSize;
    unsigned long long  _stackViewStyle;
}

@property (nonatomic, copy) NSString *albumSubtitleFormat;
@property (nonatomic) bool allowsEmailInSubtitle;
@property (nonatomic) long long cellContentViewLayout;
@property (nonatomic) double dynamicSubtitleleading;
@property (nonatomic) double dynamicTitleLeading;
@property (nonatomic) double dynamicTopLeading;
@property (nonatomic) unsigned long long folderStackViewStyle;
@property (nonatomic) double gridItemSpacing;
@property (nonatomic) double gridMargin;
@property (nonatomic) bool hasRoundedCorners;
@property (nonatomic) long long imageContentMode;
@property (nonatomic, copy) NSString *nameOfAddSharedAlbumPlaceholderImage;
@property (nonatomic, copy) NSString *nameOfEmptyAlbumPlaceholderImage;
@property (nonatomic, copy) NSString *nameOfEmptySharedAlbumPlaceholderImage;
@property (nonatomic, copy) NSString *nameOfHiddenAlbumPlaceholderImage;
@property (nonatomic, copy) NSString *nameOfRecentlyDeletedAlbumPlaceholderImage;
@property (nonatomic, retain) PUPhotoDecoration *photoDecoration;
@property (nonatomic) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic) double posterSquareCornerRadius;
@property (nonatomic) double posterSubitemCornerRadius;
@property (nonatomic) bool shouldUseTableView;
@property (nonatomic) bool showsDeleteButtonOnCellContentView;
@property (nonatomic) struct UIOffset { double x1; double x2; } stackOffset;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } stackPerspectiveInsets;
@property (nonatomic) struct UIOffset { double x1; double x2; } stackPerspectiveOffset;
@property (nonatomic) struct CGSize { double x1; double x2; } stackSize;
@property (nonatomic) unsigned long long stackViewStyle;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)albumSubtitleFormat;
- (bool)allowsEmailInSubtitle;
- (long long)cellContentViewLayout;
- (void)configureWithSpec:(id)arg1;
- (double)dynamicSubtitleleading;
- (double)dynamicTitleLeading;
- (double)dynamicTopLeading;
- (unsigned long long)folderStackViewStyle;
- (double)gridItemSpacing;
- (double)gridMargin;
- (bool)hasRoundedCorners;
- (long long)imageContentMode;
- (id)nameOfAddSharedAlbumPlaceholderImage;
- (id)nameOfEmptyAlbumPlaceholderImage;
- (id)nameOfEmptySharedAlbumPlaceholderImage;
- (id)nameOfHiddenAlbumPlaceholderImage;
- (id)nameOfRecentlyDeletedAlbumPlaceholderImage;
- (id)photoDecoration;
- (struct CGSize { double x1; double x2; })pixelSize;
- (double)posterSquareCornerRadius;
- (double)posterSubitemCornerRadius;
- (void)setAlbumSubtitleFormat:(id)arg1;
- (void)setAllowsEmailInSubtitle:(bool)arg1;
- (void)setCellContentViewLayout:(long long)arg1;
- (void)setDynamicSubtitleleading:(double)arg1;
- (void)setDynamicTitleLeading:(double)arg1;
- (void)setDynamicTopLeading:(double)arg1;
- (void)setFolderStackViewStyle:(unsigned long long)arg1;
- (void)setGridItemSpacing:(double)arg1;
- (void)setGridMargin:(double)arg1;
- (void)setHasRoundedCorners:(bool)arg1;
- (void)setImageContentMode:(long long)arg1;
- (void)setNameOfAddSharedAlbumPlaceholderImage:(id)arg1;
- (void)setNameOfEmptyAlbumPlaceholderImage:(id)arg1;
- (void)setNameOfEmptySharedAlbumPlaceholderImage:(id)arg1;
- (void)setNameOfHiddenAlbumPlaceholderImage:(id)arg1;
- (void)setNameOfRecentlyDeletedAlbumPlaceholderImage:(id)arg1;
- (void)setPhotoDecoration:(id)arg1;
- (void)setPixelSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPosterSquareCornerRadius:(double)arg1;
- (void)setPosterSubitemCornerRadius:(double)arg1;
- (void)setShouldUseTableView:(bool)arg1;
- (void)setShowsDeleteButtonOnCellContentView:(bool)arg1;
- (void)setStackOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setStackPerspectiveInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setStackPerspectiveOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setStackSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setStackViewStyle:(unsigned long long)arg1;
- (bool)shouldUseTableView;
- (bool)showsDeleteButtonOnCellContentView;
- (struct UIOffset { double x1; double x2; })stackOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })stackPerspectiveInsets;
- (struct UIOffset { double x1; double x2; })stackPerspectiveOffset;
- (struct CGSize { double x1; double x2; })stackSize;
- (unsigned long long)stackViewStyle;

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
