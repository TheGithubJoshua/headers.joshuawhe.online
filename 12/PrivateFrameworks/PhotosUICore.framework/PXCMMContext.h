<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXCMMContext.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXCMMContext.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXCMMContext : NSObject {
    unsigned long long  _activityType;
    long long  _count;
    PXAssetsDataSourceManager * _dataSourceManager;
    NSDate * _endDate;
    bool  _hideActionMenu;
    PXUIMediaProvider * _mediaProvider;
    unsigned long long  _numberOfReceivedAssets;
    NSString * _originalTitle;
    PXRecipient * _originatorRecipient;
    PXCMMPeopleSuggestionsDataSourceManager * _peopleSuggestionsDataSourceManager;
    PXCMMPeopleSuggestionsMediaProvider * _peopleSuggestionsMediaProvider;
    PXCMMPeopleSuggestionsDataSourceManager * _peopleSuggestionsPreviewDataSourceManager;
    long long  _photosCount;
    <PXDisplayAsset> * _posterAsset;
    <PXUIImageProvider> * _posterMediaProvider;
    double  _ppt_delay;
    bool  _ppt_presentComposeRecipientView;
    bool  _ppt_scrollComposeRecipientsView;
    NSArray * _recipients;
    PXCMMSendBackSuggestionSource * _sendBackSuggestionSource;
    unsigned long long  _sourceType;
    NSDate * _startDate;
    NSString * _subtitle;
    NSString * _title;
    long long  _videosCount;
}

@property (nonatomic, readonly) unsigned long long activityType;
@property (nonatomic) long long count;
@property (nonatomic, readonly) PXAssetsDataSourceManager *dataSourceManager;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic) bool hideActionMenu;
@property (nonatomic, readonly) PXUIMediaProvider *mediaProvider;
@property (nonatomic) unsigned long long numberOfReceivedAssets;
@property (nonatomic, copy) NSString *originalTitle;
@property (nonatomic, copy) PXRecipient *originatorRecipient;
@property (nonatomic, retain) PXCMMPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager;
@property (nonatomic, retain) PXCMMPeopleSuggestionsMediaProvider *peopleSuggestionsMediaProvider;
@property (nonatomic, retain) PXCMMPeopleSuggestionsDataSourceManager *peopleSuggestionsPreviewDataSourceManager;
@property (nonatomic) long long photosCount;
@property (nonatomic, retain) <PXDisplayAsset> *posterAsset;
@property (nonatomic, retain) <PXUIImageProvider> *posterMediaProvider;
@property (nonatomic) double ppt_delay;
@property (nonatomic) bool ppt_presentComposeRecipientView;
@property (nonatomic) bool ppt_scrollComposeRecipientsView;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, retain) PXCMMSendBackSuggestionSource *sendBackSuggestionSource;
@property (nonatomic) unsigned long long sourceType;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long videosCount;

+ (id)new;

- (void).cxx_destruct;
- (id)actionManager;
- (unsigned long long)activityType;
- (long long)count;
- (id)createSession;
- (id)dataSourceManager;
- (id)endDate;
- (bool)hideActionMenu;
- (id)init;
- (id)initWithAssetsDataSourceManager:(id)arg1 mediaProvider:(id)arg2 activityType:(unsigned long long)arg3;
- (id)mediaProvider;
- (unsigned long long)numberOfReceivedAssets;
- (id)originalTitle;
- (id)originatorRecipient;
- (id)peopleSuggestionsDataSourceManager;
- (id)peopleSuggestionsMediaProvider;
- (id)peopleSuggestionsPreviewDataSourceManager;
- (long long)photosCount;
- (id)posterAsset;
- (id)posterMediaProvider;
- (double)ppt_delay;
- (bool)ppt_presentComposeRecipientView;
- (bool)ppt_scrollComposeRecipientsView;
- (id)recipients;
- (id)sendBackSuggestionSource;
- (void)setCount:(long long)arg1;
- (void)setEndDate:(id)arg1;
- (void)setHideActionMenu:(bool)arg1;
- (void)setNumberOfReceivedAssets:(unsigned long long)arg1;
- (void)setOriginalTitle:(id)arg1;
- (void)setOriginatorRecipient:(id)arg1;
- (void)setPeopleSuggestionsDataSourceManager:(id)arg1;
- (void)setPeopleSuggestionsMediaProvider:(id)arg1;
- (void)setPeopleSuggestionsPreviewDataSourceManager:(id)arg1;
- (void)setPhotosCount:(long long)arg1;
- (void)setPosterAsset:(id)arg1;
- (void)setPosterMediaProvider:(id)arg1;
- (void)setPpt_delay:(double)arg1;
- (void)setPpt_presentComposeRecipientView:(bool)arg1;
- (void)setPpt_scrollComposeRecipientsView:(bool)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSendBackSuggestionSource:(id)arg1;
- (void)setSourceType:(unsigned long long)arg1;
- (void)setStartDate:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVideosCount:(long long)arg1;
- (unsigned long long)sourceType;
- (id)startDate;
- (id)subtitle;
- (id)title;
- (long long)videosCount;

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