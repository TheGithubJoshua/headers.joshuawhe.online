<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXPhotosDetailsAssetsSpec.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXPhotosDetailsAssetsSpec.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXPhotosDetailsAssetsSpec : PXFeatureSpec {
    PXWidgetSpec * __widgetSpec;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentGuideInsets;
    unsigned long long  _detailsOptions;
    double  _editorialInterTileSpacing;
    long long  _editorialNumberOfColumns;
    bool  _enableBadges;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _gridContentInsets;
    long long  _gridContentMode;
    struct CGSize { 
        double width; 
        double height; 
    }  _gridInterItemSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _gridItemSize;
    bool  _shouldShowTitle;
}

@property (nonatomic, readonly) PXWidgetSpec *_widgetSpec;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentGuideInsets;
@property (nonatomic, readonly) unsigned long long detailsOptions;
@property (nonatomic, readonly) double editorialInterTileSpacing;
@property (nonatomic, readonly) long long editorialNumberOfColumns;
@property (nonatomic, readonly) bool enableBadges;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } gridContentInsets;
@property (nonatomic, readonly) long long gridContentMode;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } gridInterItemSpacing;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } gridItemSize;
@property (nonatomic, readonly) bool shouldShowTitle;

+ (bool)shouldUsePhoneLayoutWithTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_computeEditorialWithExtendedTraitCollection:(id)arg1;
- (void)_computeGridWithExtendedTraitCollection:(id)arg1;
- (void)_computeSpecWithExtendedTraitCollection:(id)arg1;
- (id)_widgetSpec;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentGuideInsets;
- (double)defaultCornerRadius;
- (unsigned long long)detailsOptions;
- (double)editorialInterTileSpacing;
- (long long)editorialNumberOfColumns;
- (bool)enableBadges;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })gridContentInsets;
- (long long)gridContentMode;
- (struct CGSize { double x1; double x2; })gridInterItemSpacing;
- (struct CGSize { double x1; double x2; })gridItemSize;
- (id)initWithExtendedTraitCollection:(id)arg1 detailsOptions:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 detailsOptions:(unsigned long long)arg3;
- (bool)shouldShowTitle;

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
