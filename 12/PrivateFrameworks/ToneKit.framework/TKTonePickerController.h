<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TKTonePickerController.h</title>
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

/PrivateFrameworks/ToneKit.framework/TKTonePickerController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit (1)
 */

@interface TKTonePickerController : NSObject <TLToneStoreDownloadObserver> {
    bool  __behavesAsRingtonePicker;
    NSArray * __classicAlertToneIdentifiers;
    NSArray * __classicRingtoneIdentifiers;
    unsigned long long  __selectedClassicAlertToneIndex;
    unsigned long long  __selectedClassicRingtoneIndex;
    NSIndexPath * __selectedToneIndexPath;
    NSMutableDictionary * _activeToneStoreDownloadsByIdentifier;
    long long  _alertType;
    NSMutableArray * _cachedClassicAlertTonePickerItems;
    NSMutableArray * _cachedClassicRingtonePickerItems;
    NSMutableArray * _cachedPickerRowItems;
    NSMutableArray * _cachedPickerSectionItems;
    NSString * _defaultToneIdentifier;
    bool  _defaultToneIdentifierWasExplicitlySet;
    <TKTonePickerControllerDelegate> * _delegate;
    NSMutableDictionary * _finishedToneStoreDownloadsByIdentifier;
    bool  _hasLoadedTonesOnce;
    bool  _ignoreMute;
    NSArray * _installedTones;
    bool  _isToneStoreDownloadButtonAllowed;
    bool  _mediaAtTop;
    bool  _noneAtTop;
    NSString * _noneString;
    TLAlert * _playingAlert;
    bool  _selectedToneWasExplicitlySetToDefaultTone;
    NSString * _selectedVibrationIdentifier;
    bool  _selectedVibrationIdentifierWasExplicitlySet;
    bool  _shouldFreezeContentsOriginatingFromToneManager;
    bool  _showsDefault;
    bool  _showsIgnoreMute;
    bool  _showsNone;
    bool  _showsNoneWasExplicitlySet;
    bool  _showsNothingSelected;
    bool  _showsToneStore;
    bool  _showsVibrations;
    NSMutableArray * _toneGroupBucketIdentifiers;
    NSMutableArray * _toneGroupLists;
    NSMutableArray * _toneGroupNames;
    TLToneManager * _toneManager;
    long long  _toneStoreDownloadButtonState;
    <TLToneStoreDownloadController> * _toneStoreDownloadController;
    unsigned long long  _toneTypes;
    NSString * _topic;
}

@property (nonatomic, readonly) NSString *_alertTonesPlistName;
@property (setter=_setBehavesAsRingtonePicker:, nonatomic) bool _behavesAsRingtonePicker;
@property (setter=_setClassicAlertToneIdentifiers:, nonatomic, retain) NSArray *_classicAlertToneIdentifiers;
@property (setter=_setClassicRingtoneIdentifiers:, nonatomic, retain) NSArray *_classicRingtoneIdentifiers;
@property (nonatomic, readonly) NSIndexPath *_indexPathForDefaultGroup;
@property (nonatomic, readonly) NSIndexPath *_indexPathForFirstToneGroup;
@property (nonatomic, readonly) NSIndexPath *_indexPathForMediaGroup;
@property (nonatomic, readonly) NSIndexPath *_indexPathForNone;
@property (nonatomic, readonly) NSIndexPath *_indexPathForToneStoreGroup;
@property (nonatomic, readonly) NSIndexPath *_indexPathForVibrationGroup;
@property (nonatomic, readonly) NSString *_ringtonesPlistName;
@property (setter=_setSelectedClassicAlertToneIndex:, nonatomic) unsigned long long _selectedClassicAlertToneIndex;
@property (setter=_setSelectedClassicRingtoneIndex:, nonatomic) unsigned long long _selectedClassicRingtoneIndex;
@property (setter=_setSelectedToneIndexPath:, nonatomic, retain) NSIndexPath *_selectedToneIndexPath;
@property (setter=_setToneManager:, nonatomic, retain) TLToneManager *_toneManager;
@property (nonatomic, readonly) TKTonePickerItem *_topLevelSelectedTonePickerItem;
@property (nonatomic, readonly) long long alertType;
@property (nonatomic, readonly) bool canShowStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *defaultToneIdentifier;
@property (nonatomic) <TKTonePickerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreMute;
@property (nonatomic, readonly) NSIndexPath *indexPathForSelectedTone;
@property (getter=isMediaAtTop, nonatomic) bool mediaAtTop;
@property (getter=isNoneAtTop, nonatomic) bool noneAtTop;
@property (nonatomic, copy) NSString *noneString;
@property (nonatomic, copy) NSString *selectedToneIdentifier;
@property (nonatomic, readonly) TKTonePickerItem *selectedTonePickerItem;
@property (nonatomic, copy) NSString *selectedVibrationIdentifier;
@property (nonatomic) bool showsDefault;
@property (nonatomic) bool showsIgnoreMute;
@property (nonatomic) bool showsNone;
@property (nonatomic) bool showsNothingSelected;
@property (nonatomic) bool showsToneStore;
@property (nonatomic) bool showsVibrations;
@property (readonly) Class superclass;
@property (nonatomic, retain) <TLToneStoreDownloadController> *toneStoreDownloadController;
@property (nonatomic, copy) NSString *topic;

+ (id)_latestRedownloadAllTonesDate;
+ (void)_updateLatestRedownloadAllTonesDate;

- (void).cxx_destruct;
- (id)_alertTonesPlistName;
- (id)_annotatedNameForToneIdentifier:(id)arg1;
- (bool)_behavesAsRingtonePicker;
- (void)_cachePickerRowItem:(id)arg1 atIndex:(long long)arg2 inSectionForItem:(id)arg3;
- (void)_cachePickerSectionItem:(id)arg1 forSection:(long long)arg2;
- (void)_cacheToneClassicsPickerItem:(id)arg1 forIndex:(long long)arg2 headerKind:(unsigned long long)arg3;
- (id)_cachedPickerItemForSection:(long long)arg1;
- (id)_cachedPickerRowItemAtIndex:(long long)arg1 inSectionForItem:(id)arg2;
- (id)_cachedToneClassicsPickerItemForIndex:(long long)arg1 headerKind:(unsigned long long)arg2;
- (id)_classicAlertToneIdentifiers;
- (id)_classicRingtoneIdentifiers;
- (void)_didFinishPlayingAlert:(id)arg1;
- (void)_didReloadTones;
- (void)_didSelectMediaItemWithIdentifier:(id)arg1;
- (bool)_didSelectToneClassicsPickerItem:(id)arg1;
- (void)_didSelectToneWithIdentifier:(id)arg1;
- (void)_didUpdateCheckedStatus:(bool)arg1 ofPickerItemForRowAtIndexPath:(id)arg2;
- (void)_didUpdateCheckedStatus:(bool)arg1 ofToneClassicsPickerItem:(id)arg2;
- (void)_didUpdateDetailText:(id)arg1 ofPickerItemForRowAtIndexPath:(id)arg2;
- (void)_didUpdateFooterTextForToneStoreGroup;
- (void)_didUpdateToneStoreDownloadItem;
- (void)_disableToneStoreDownloadItem;
- (bool)_enableToneStoreDownloadItemIfAppropriate;
- (id)_footerTextForToneStoreGroup;
- (void)_goToStore;
- (void)_handleAlertOverridePolicyDidChangeNotification:(id)arg1;
- (id)_identifierAtIndexPath:(id)arg1 isMediaItem:(bool*)arg2;
- (id)_identifierOfMediaItemAtIndex:(unsigned long long)arg1;
- (id)_identifierOfSelectedClassicAlertTone;
- (id)_identifierOfSelectedClassicRingtone;
- (id)_identifierOfToneAtIndexPath:(id)arg1;
- (unsigned long long)_indexOfMediaItemWithIdentifier:(id)arg1;
- (id)_indexPathForDefaultGroup;
- (id)_indexPathForFirstToneGroup;
- (id)_indexPathForIgnoreMuteGroup;
- (id)_indexPathForMediaGroup;
- (id)_indexPathForNone;
- (id)_indexPathForToneStoreDownloadItem;
- (id)_indexPathForToneStoreGroup;
- (id)_indexPathForToneWithIdentifier:(id)arg1;
- (id)_indexPathForVibrationGroup;
- (void)_invalidatePickerItemCaches;
- (bool)_isDefaultGroupAtIndexPath:(id)arg1;
- (bool)_isDividerAtIndexPath:(id)arg1;
- (bool)_isIgnoreMuteGroupAtIndexPath:(id)arg1;
- (bool)_isMediaAtTop;
- (bool)_isMediaGroupAtIndexPath:(id)arg1;
- (bool)_isNoneGroupAtIndexPath:(id)arg1;
- (bool)_isToneStoreGroupAtIndexPath:(id)arg1;
- (bool)_isVibrationGroupAtIndexPath:(id)arg1;
- (id)_loadAlertTonesFromPlist;
- (id)_loadRingtonesFromPlist;
- (id)_loadTonesFromPlistNamed:(id)arg1;
- (unsigned long long)_mediaItemsCount;
- (id)_nameForToneIdentifier:(id)arg1;
- (id)_nameOfSelectedVibrationIdentifier;
- (id)_pickerRowItemAtIndex:(long long)arg1 inSectionForItem:(id)arg2;
- (void)_playToneWithIdentifier:(id)arg1;
- (void)_redownloadAllTones;
- (void)_registerForUserGeneratedVibrationsDidChangeNotification;
- (void)_reloadMediaItems;
- (void)_reloadStateForBasicBehavior;
- (void)_reloadTones;
- (void)_reloadTonesForExternalChange:(bool)arg1 shouldSkipDelegateFullReload:(bool)arg2;
- (void)_resetSelectedClassicAlertToneIndex;
- (void)_resetSelectedClassicRingtoneIndex;
- (void)_resetSelectedVibrationIdentifierForcingUpdatingVibrationName:(bool)arg1;
- (id)_ringtonesPlistName;
- (id)_sanitizedSelectedVibrationIdentifierAllowingNilForDefault:(bool)arg1;
- (unsigned long long)_selectedClassicAlertToneIndex;
- (unsigned long long)_selectedClassicRingtoneIndex;
- (id)_selectedIdentifier:(bool*)arg1;
- (id)_selectedToneIndexPath;
- (void)_setBehavesAsRingtonePicker:(bool)arg1;
- (void)_setClassicAlertToneIdentifiers:(id)arg1;
- (void)_setClassicRingtoneIdentifiers:(id)arg1;
- (void)_setSelectedClassicAlertToneIndex:(unsigned long long)arg1;
- (void)_setSelectedClassicRingtoneIndex:(unsigned long long)arg1;
- (void)_setSelectedToneIdentifier:(id)arg1 currentlyReloadingTones:(bool)arg2;
- (void)_setSelectedToneIndexPath:(id)arg1;
- (void)_setSelectedVibrationIdentifier:(id)arg1 explicitlySet:(bool)arg2;
- (void)_setSelectedVibrationIdentifier:(id)arg1 forceUpdatingVibrationName:(bool)arg2 explicitlySet:(bool)arg3;
- (void)_setToneManager:(id)arg1;
- (bool)_showsMedia;
- (void)_sortToneIdentifiersArray:(id)arg1;
- (void)_togglePlayForToneWithIdentifier:(id)arg1;
- (id)_toneClassicsPickerItemAtIndex:(long long)arg1 belowTonePickerItem:(id)arg2;
- (id)_toneManager;
- (void)_toneManagerContentsChanged:(id)arg1;
- (id)_topLevelSelectedTonePickerItem;
- (void)_uncachePickerRowItemAtIndex:(long long)arg1 inSectionForItem:(id)arg2;
- (void)_unregisterForUserGeneratedVibrationsDidChangeNotification;
- (void)_updateDetailTextOfVibrationItem;
- (long long)alertType;
- (bool)canShowStore;
- (void)dealloc;
- (id)defaultToneIdentifier;
- (id)delegate;
- (void)didFinishCheckingForAvailableToneStoreDownloads:(bool)arg1;
- (bool)didSelectTonePickerItem:(id)arg1;
- (void)finishedWithPicker;
- (bool)ignoreMute;
- (id)indexPathForSelectedTone;
- (id)initWithAlertType:(long long)arg1;
- (bool)isMediaAtTop;
- (bool)isNoneAtTop;
- (id)noneString;
- (long long)numberOfSections;
- (id)pickerItemForSection:(long long)arg1;
- (id)selectedToneIdentifier;
- (id)selectedTonePickerItem;
- (id)selectedVibrationIdentifier;
- (void)setDefaultToneIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIgnoreMute:(bool)arg1;
- (void)setMediaAtTop:(bool)arg1;
- (void)setNoneAtTop:(bool)arg1;
- (void)setNoneString:(id)arg1;
- (void)setSelectedToneIdentifier:(id)arg1;
- (void)setSelectedVibrationIdentifier:(id)arg1;
- (void)setShowsDefault:(bool)arg1;
- (void)setShowsIgnoreMute:(bool)arg1;
- (void)setShowsNone:(bool)arg1;
- (void)setShowsNothingSelected:(bool)arg1;
- (void)setShowsToneStore:(bool)arg1;
- (void)setShowsVibrations:(bool)arg1;
- (void)setToneStoreDownloadController:(id)arg1;
- (void)setTopic:(id)arg1;
- (bool)showsDefault;
- (bool)showsIgnoreMute;
- (bool)showsNone;
- (bool)showsNothingSelected;
- (bool)showsToneStore;
- (bool)showsVibrations;
- (void)stopPlayingWithFadeOut:(bool)arg1;
- (void)storeAccountNameDidChange:(id)arg1;
- (id)toneStoreDownloadController;
- (void)toneStoreDownloadsDidFinish:(id)arg1;
- (void)toneStoreDownloadsDidProgress:(id)arg1;
- (void)toneStoreDownloadsDidStart:(id)arg1;
- (id)topic;

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