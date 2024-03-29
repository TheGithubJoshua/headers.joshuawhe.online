<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXCMMPosterView.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXCMMPosterView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXCMMPosterView : UIView {
    id /* block */  _actionButtonAction;
    long long  _actionButtonType;
    bool  _actionInProgress;
    UIActivityIndicatorView * _activityIndicatorView;
    NSString * _bannerHeadline;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _bannerHeadlineBoldRange;
    NSString * _bannerSubheadline;
    PXCMMPosterBannerView * _bannerView;
    double  _cornerRadius;
    unsigned long long  _cornersToRound;
    PXCMMPosterHeaderView * _headerView;
    PXViewLayoutHelper * _layoutHelper;
    bool  _needsBannerView;
    UIColor * _opaqueAncestorBackgroundColor;
    PXRoundedCornerOverlayView * _roundedCornerOverlayView;
    long long  _selectedCount;
    long long  _totalCount;
    PXUpdater * _updater;
}

@property (getter=isActionInProgress, nonatomic) bool actionInProgress;
@property (nonatomic, copy) NSString *bannerHeadline;
@property (nonatomic, copy) NSString *bannerSubheadline;
@property (nonatomic, readonly) PXCMMPosterBannerView *bannerView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long cornersToRound;
@property (nonatomic, copy) NSString *dateString;
@property (nonatomic, readonly) PXCMMPosterHeaderView *headerView;
@property (nonatomic, copy) NSString *locationString;
@property (nonatomic) bool needsBannerView;
@property (nonatomic, copy) UIColor *opaqueAncestorBackgroundColor;
@property (nonatomic) long long selectedCount;
@property (nonatomic, copy) NSString *statusString;
@property (nonatomic) long long totalCount;

- (void).cxx_destruct;
- (id)_fontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;
- (struct CGSize { double x1; double x2; })_performLayoutInWidth:(double)arg1 updateSubviewFrames:(bool)arg2;
- (void)_updateBannerActionButton;
- (void)_updateBannerTitles;
- (void)_updateBannerView;
- (void)_updateCorners;
- (id)bannerHeadline;
- (id)bannerSubheadline;
- (id)bannerView;
- (double)cornerRadius;
- (unsigned long long)cornersToRound;
- (id)dateString;
- (id)headerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isActionInProgress;
- (void)layoutSubviews;
- (id)locationString;
- (bool)needsBannerView;
- (id)opaqueAncestorBackgroundColor;
- (long long)selectedCount;
- (void)setActionButtonWithType:(long long)arg1 actionBlock:(id /* block */)arg2;
- (void)setActionInProgress:(bool)arg1;
- (void)setBannerHeadline:(id)arg1;
- (void)setBannerHeadline:(id)arg1 boldRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setBannerSubheadline:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setCornersToRound:(unsigned long long)arg1;
- (void)setDateString:(id)arg1;
- (void)setLocationString:(id)arg1;
- (void)setNeedsBannerView:(bool)arg1;
- (void)setOpaqueAncestorBackgroundColor:(id)arg1;
- (void)setSelectedCount:(long long)arg1;
- (void)setStatusString:(id)arg1;
- (void)setTotalCount:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)statusString;
- (long long)totalCount;
- (void)willMoveToWindow:(id)arg1;

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
