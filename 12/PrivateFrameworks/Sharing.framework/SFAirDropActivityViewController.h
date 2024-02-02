<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SFAirDropActivityViewController.h</title>
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

/PrivateFrameworks/Sharing.framework/SFAirDropActivityViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing (1288.66)
 */

@interface SFAirDropActivityViewController : UIViewController <SFAirDropBrowserBatchDelegate, SFCollectionViewDelegateLayout, SFPersonCollectionViewCellDelegate, SFWirelessSettingsControllerDelegate, UICollectionViewDataSource> {
    NSLayoutConstraint * _airDropActiveIconLeftConstraint;
    SFAirDropActiveIconView * _airDropActiveIconView;
    NSLayoutConstraint * _airDropIconLeftConstraint;
    SFAirDropIconView * _airDropIconView;
    NSLayoutConstraint * _airDropInactiveIconLeftConstraint;
    SFAirDropActiveIconView * _airDropInactiveIconView;
    NSArray * _airdropViewYConstraints;
    long long  _attachmentCount;
    SFAirDropBrowser * _browser;
    bool  _browserPaused;
    NSMutableOrderedSet * _cachedSharedItems;
    UICollectionView * _collectionView;
    SFCollectionViewLayout * _collectionViewLayout;
    bool  _darkStyleOnLegacyApp;
    NSObject<SFAirDropActivityViewControllerDelegate> * _delegate;
    UICollectionView * _detailCollectionView;
    SFCollectionViewLayout * _detailCollectionViewLayout;
    bool  _didSelectNode;
    UIButton * _doneButton;
    UIFocusContainerGuide * _fcg;
    long long  _generatedPreviews;
    UIVisualEffectView * _iconsVibrancyView;
    NSLayoutConstraint * _instructionsRightConstraint;
    UITextView * _instructionsTextView;
    UIVisualEffectView * _instructionsVibrancyView;
    bool  _itemsReady;
    bool  _itemsRequested;
    NSLayoutConstraint * _largeTextAirdropViewYConstraint;
    NSArray * _largeTextAirdropViewYConstraints;
    NSArray * _largeTextTextViewConstraints;
    struct __SFOperation { } * _logger;
    bool  _manuallyManageBrowsing;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumPreferredContentSize;
    NSLayoutConstraint * _noAWDLRightConstraint;
    UITextView * _noAWDLTextView;
    NSLayoutConstraint * _noWifiRightConstraint;
    UITextView * _noWifiTextView;
    NSOperationQueue * _operationQueue;
    bool  _otherActivityViewPresented;
    NSString * _overriddenInstructionsText;
    NSString * _overriddenNoAWDLText;
    NSString * _overriddenNoWiFIBTText;
    NSString * _overriddenTitleText;
    NSArray * _people;
    unsigned long long  _peopleStartTimestamp;
    NSMutableDictionary * _personToProgress;
    NSMutableDictionary * _personToSharedItemsRequestID;
    NSMutableDictionary * _personToStoredTransferFinalState;
    id  _progressToken;
    NSMapTable * _realNameToFirstSeenTimestamp;
    UIButton * _reportBugButton;
    NSString * _sendingAppBundleID;
    struct { 
        unsigned int val[8]; 
    }  _sendingApplicationAuditToken;
    NSString * _sessionID;
    bool  _sharedItemsAvailable;
    int  _sharedItemsCount;
    NSMutableDictionary * _sharedItemsMap;
    long long  _sharedItemsRequestID;
    NSMutableDictionary * _sharedItemsRequestIDToPreviewPhoto;
    bool  _shouldExpandTextIfNeeded;
    UIButton * _showMoreButton;
    NSArray * _textViewConstraints;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleLabelTopConstraint;
    double  _titleLabelTopConstraintDefaultConstant;
    UIVisualEffectView * _titleVibrancyView;
    SFWirelessSettingsController * _wirelessSettings;
}

@property (nonatomic) bool darkStyleOnLegacyApp;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SFAirDropActivityViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool manuallyManageBrowsing;
@property (nonatomic) bool otherActivityViewPresented;
@property (nonatomic, copy) NSString *overriddenInstructionsText;
@property (nonatomic, copy) NSString *overriddenNoAWDLText;
@property (nonatomic, copy) NSString *overriddenNoWiFIBTText;
@property (nonatomic, copy) NSString *overriddenTitleText;
@property (nonatomic) struct { unsigned int x1[8]; } sendingApplicationAuditToken;
@property (nonatomic) bool sharedItemsAvailable;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } suggestedThumbnailSize;
@property (readonly) Class superclass;

+ (bool)airDropActivityCanPerformActivityWithItemClasses:(id)arg1;
+ (bool)isAirDropAvailable;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_cachedPreferredItemSize;
- (void)_collectTelemetryForPeople:(id)arg1;
- (void)_createiOSLayoutConstraints;
- (void)_createtvOSLayoutConstraints;
- (void)_emitTelemetryForPerson:(id)arg1;
- (id)_fontWithStyle:(id)arg1 maxSizeCategory:(id)arg2 traits:(unsigned int)arg3;
- (void)_setIsLoadingActivityItemProviders:(bool)arg1;
- (void)_startTelemetry;
- (void)_stopTelemetry;
- (void)_updateExclusionPathsForTextViews;
- (void)_updateFontSizes;
- (bool)addAttributedString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;
- (bool)addData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 itemIndex:(int)arg6;
- (bool)addImage:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;
- (bool)addItemProvider:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (bool)addItemProvider:(id)arg1 withDataType:(id)arg2 attachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5;
- (bool)addString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;
- (bool)addURL:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;
- (id)attributedStringWithTitle:(id)arg1 content:(id)arg2;
- (void)browserDidUpdatePeople:(id)arg1;
- (struct CGSize { double x1; double x2; })calculatePreferredContentSize;
- (id)cellForPerson:(id)arg1;
- (void)cleanupWithSelectedActivityType:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 preferredSizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (bool)createURLPayloadForData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 itemIndex:(int)arg6 completion:(id /* block */)arg7;
- (bool)darkStyleOnLegacyApp;
- (void)dealloc;
- (id)delegate;
- (void)didEnterBackground:(id)arg1;
- (void)doneButtonAction:(id)arg1;
- (void)enableAirDropRequiredFeatures;
- (bool)enableModernShareSheeet;
- (void)generateSpecialPreviewPhotoForRequestID:(long long)arg1;
- (void)handleImageItemProvider:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;
- (void)handleLivePhotoItemProvider:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;
- (void)handleOperationCallback:(struct __SFOperation { }*)arg1 event:(long long)arg2 withResults:(id)arg3;
- (void)handleOtherItemProvider:(id)arg1 withDataType:(id)arg2 attachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (id)indexSetToIndexPaths:(id)arg1 inSection:(long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)instructionsText;
- (void)invalidate;
- (bool)isBluetoothEnabled;
- (bool)isDebugMode;
- (bool)isTetheredModeEnabled;
- (bool)isValidPayload:(id)arg1 toPerson:(id)arg2 invalidMessage:(id*)arg3;
- (bool)isWifiEnabled;
- (bool)manuallyManageBrowsing;
- (id)noAWDLText;
- (id)noWiFiBTText;
- (bool)otherActivityViewPresented;
- (id)overriddenInstructionsText;
- (id)overriddenNoAWDLText;
- (id)overriddenNoWiFIBTText;
- (id)overriddenTitleText;
- (void)personCollectionViewCellDidFinishTransfer:(id)arg1;
- (void)personCollectionViewCellDidStartTransfer:(id)arg1;
- (void)personCollectionViewCellDidTerminateTransfer:(id)arg1;
- (id)preferredFocusEnvironments;
- (struct { unsigned int x1[8]; })sendingApplicationAuditToken;
- (void)setDarkStyleOnLegacyApp:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setManuallyManageBrowsing:(bool)arg1;
- (void)setNeedsRequestingSharedItems;
- (void)setOtherActivityViewPresented:(bool)arg1;
- (void)setOverriddenInstructionsText:(id)arg1;
- (void)setOverriddenNoAWDLText:(id)arg1;
- (void)setOverriddenNoWiFIBTText:(id)arg1;
- (void)setOverriddenTitleText:(id)arg1;
- (void)setSendingApplicationAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)setSharedItemsAvailable:(bool)arg1;
- (bool)sharedItemsAvailable;
- (void)showMore:(id)arg1;
- (void)startBrowsing;
- (void)startTransferForPeople:(id)arg1;
- (void)stopBrowsing;
- (void)subscribeToProgresses;
- (void)subscribedProgress:(id)arg1 forPersonWithRealName:(id)arg2;
- (struct CGSize { double x1; double x2; })suggestedThumbnailSize;
- (id)titleText;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)unpublishedProgressForPersonWithRealName:(id)arg1;
- (void)unsubscribeToProgresses;
- (void)updateContentAreaAnimated:(bool)arg1;
- (void)updatePreferredContentSize;
- (void)updateShowMoreButtonForShowPeople:(bool)arg1 inactive:(bool)arg2 active:(bool)arg3 static:(bool)arg4;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)wifiBtHelpTextLocalizedStringKey;
- (void)willEnterForeground:(id)arg1;
- (void)wirelessSettingsDidChange:(id)arg1;

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