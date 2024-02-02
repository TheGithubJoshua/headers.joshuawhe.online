<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NTKFace.h</title>
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

/PrivateFrameworks/NanoTimeKitCompanion.framework/NTKFace.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion (1)
 */

@interface NTKFace : NSObject <NSCopying, NSSecureCoding, NTKEditModeMapping, NTKInstalledSystemApplicationsChangeObserver> {
    bool  _beingEdited;
    NSString * _cachedDefaultName;
    bool  _complicationExistenceInvalidatesSnapshot;
    NSDictionary * _complicationSlotDescriptors;
    NTKFaceConfiguration * _configuration;
    bool  _configurationChangedWhileSuppressingNotifications;
    CLKDevice * _device;
    bool  _editOptionsPrepared;
    long long  _faceStyle;
    NSHashTable * _fvcObservers;
    bool  _isLibraryFace;
    long long  _mostRecentEditMode;
    NSHashTable * _observers;
    NSString * _resourceDirectory;
    bool  _resourceDirectoryIsHardLink;
    NSMutableDictionary * _selectedSlotsByEditMode;
    bool  _suppressingConfigurationChangeNotifications;
}

@property (nonatomic) bool beingEdited;
@property (nonatomic, readonly) bool complicationExistenceInvalidatesSnapshot;
@property (nonatomic, readonly) NTKFaceConfiguration *configuration;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, readonly) NSString *dailySnapshotKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CLKDevice *device;
@property (nonatomic, readonly) long long editModeForCustomEditViewController;
@property (nonatomic, readonly) NSArray *editModes;
@property (getter=isEditable, nonatomic, readonly) bool editable;
@property (nonatomic) long long editedState;
@property (nonatomic, readonly) long long faceStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLibraryFace;
@property (nonatomic, retain) NSDate *lastEditedDate;
@property (nonatomic) long long mostRecentEditMode;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSNumber *numberOfCompanionEdits;
@property (nonatomic, readonly) NSNumber *numberOfGizmoEdits;
@property (nonatomic) long long origin;
@property (nonatomic, readonly) NSString *resourceDirectory;
@property (getter=isSingular, nonatomic, readonly) bool singular;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *unadornedSnapshotKey;
@property (nonatomic, readonly) bool wantsUnadornedSnapshot;

+ (id)PPTBlankFace;
+ (bool)_complication:(id)arg1 isValidForSlot:(id)arg2 forDevice:(id)arg3;
+ (bool)_customEditMode:(long long)arg1 hasActionForOption:(id)arg2 forDevice:(id)arg3;
+ (bool)_customEditModeIsColor:(long long)arg1 forDevice:(id)arg2;
+ (bool)_customEditModeIsRows:(long long)arg1 forDevice:(id)arg2;
+ (bool)_customEditModeIsShowSeconds:(long long)arg1 forDevice:(id)arg2;
+ (id)_dateComplicationSlotForDevice:(id)arg1;
+ (unsigned long long)_dateComplicationSlotSupportedStylesForDevice:(id)arg1;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)arg1;
+ (id)_defaultSelectedSlotForCustomEditMode:(long long)arg1 forDevice:(id)arg2;
+ (Class)_faceClassForStyle:(long long)arg1;
+ (id)_initialDefaultComplicationForSlot:(id)arg1 forDevice:(id)arg2;
+ (bool)_isInternalOnlyForDevice:(id)arg1;
+ (id)_linkedResourceRootDirectory;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1 forDevice:(id)arg2;
+ (id)_monogramComplicationSlotForDevice:(id)arg1;
+ (id)_richComplicationSlotsForDevice:(id)arg1;
+ (id)_sampleFaceDifferentFromFaces:(id)arg1 forDevice:(id)arg2;
+ (id)_slotsForCustomEditMode:(long long)arg1 forDevice:(id)arg2;
+ (id)availableInternalFaceStylesForDevice:(id)arg1;
+ (bool)customEditMode:(long long)arg1 hasActionForOption:(id)arg2 forDevice:(id)arg3;
+ (bool)customEditModeIsColor:(long long)arg1 forDevice:(id)arg2;
+ (bool)customEditModeIsRows:(long long)arg1 forDevice:(id)arg2;
+ (bool)customEditModeIsShowSeconds:(long long)arg1 forDevice:(id)arg2;
+ (id)dateSlotForDevice:(id)arg1;
+ (id)defaultFaceOfStyle:(long long)arg1 forDevice:(id)arg2;
+ (id)defaultFaceOfStyle:(long long)arg1 forDevice:(id)arg2 initCustomization:(id /* block */)arg3;
+ (id)faceWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2;
+ (id)faceWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2 forMigration:(bool)arg3;
+ (id)fixedComplicationSlotsForDevice:(id)arg1;
+ (bool)isFaceStyleAvailableInternal:(long long)arg1 forDevice:(id)arg2;
+ (bool)isFaceStyleRestricted:(long long)arg1 forDevice:(id)arg2;
+ (bool)isRestrictedForDevice:(id)arg1;
+ (id)localizedNameForCustomEditMode:(long long)arg1 forDevice:(id)arg2;
+ (unsigned long long)maximumRemoteComplicationsOnAnyFace;
+ (unsigned long long)maximumRemoteComplicationsOnAnyFaceForDevice:(id)arg1;
+ (id)monogramSlotForDevice:(id)arg1;
+ (id)richComplicationSlotsForDevice:(id)arg1;
+ (id)sampleFaceOfStyle:(long long)arg1 forDevice:(id)arg2 differentFromFaces:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_allowedComplicationsOfType:(unsigned long long)arg1 forSlot:(id)arg2;
- (bool)_allowsEditing;
- (bool)_applyConfiguration:(id)arg1 allowFailure:(bool)arg2;
- (void)_cleanupEditOptions;
- (void)_commonInit;
- (bool)_complication:(id)arg1 appearsInDailySnapshotForSlot:(id)arg2;
- (id)_complicationMigrationPaths;
- (id)_complicationSlotDescriptors;
- (id)_configurationFromOldEncodingWithCoder:(id)arg1;
- (long long)_customEditModeForUniqueConfiguration;
- (id)_customEditModes;
- (void)_customizeWithJSONDescription:(id)arg1;
- (id)_defaultComplicationOfType:(unsigned long long)arg1 forSlot:(id)arg2;
- (id)_defaultName;
- (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_defaultOptionForMissingCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_deleteResourceDirectoryHardLinkIfNecessary;
- (long long)_editModeForOldEncodingIndex:(long long)arg1;
- (id)_faceDescription;
- (id)_faceDescriptionForExternal;
- (id)_faceDescriptionForLibrary;
- (id)_faceDescriptionKey;
- (id)_faceDescriptionKeyForExternal;
- (id)_faceDescriptionKeyForLibrary;
- (bool)_hasCustomSwitcherSelectionAction;
- (bool)_hasOptionsForCustomEditMode:(long long)arg1;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_initWithFaceStyle:(long long)arg1 forDevice:(id)arg2;
- (id)_localizedNameForComplicationSlot:(id)arg1;
- (void)_noteOptionChangedFrom:(id)arg1 to:(id)arg2 forCustomEditMode:(long long)arg3 slot:(id)arg4;
- (void)_notifyObserversFaceConfigurationDidChange;
- (void)_notifyObserversFaceResourceDirectoryDidChange;
- (void)_notifyObserversFaceUpgradeOccurred;
- (void)_notifyObserversOptionsDidChangeForEditMode:(long long)arg1;
- (void)_notifyObserversThatRespondToSelector:(SEL)arg1 callSelector:(id /* block */)arg2;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (bool)_option:(id)arg1 isValidForCustomEditMode:(long long)arg2 slot:(id)arg3;
- (bool)_option:(id)arg1 migratesToValidOption:(id*)arg2 forCustomEditMode:(long long)arg3;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (Class)_optionClassForCustomEditMode:(long long)arg1 resourceDirectoryExists:(bool)arg2;
- (id)_orderedComplicationSlots;
- (void)_performCustomSwitcherSelectionAction;
- (void)_prepareEditOptions;
- (void)_prepareForDeletion;
- (void)_registerComplicationsDidChangeNotification;
- (id)_resourceDirectorySnapshotKey;
- (void)_selectDefaultSlots;
- (void)_setResourceDirectory:(id)arg1;
- (bool)_snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (id)_sortedComplicationSlots;
- (void)_updateComplicationTombstones;
- (void)_updateForResourceDirectoryChange:(id)arg1;
- (bool)_verifyCompatibilityOfConfiguration:(id)arg1;
- (bool)_wantsUnadornedSnapshot;
- (void)addObserver:(id)arg1;
- (id)allowedComplicationTypesForSlot:(id)arg1;
- (id)allowedComplicationsForSlot:(id)arg1;
- (id)allowedComplicationsForSlot:(id)arg1 includingComplication:(id)arg2;
- (bool)applyConfiguration:(id)arg1;
- (void)applyDefaultComplicationConfiguration;
- (void)applyDefaultConfiguration;
- (void)applyUniqueConfigurationWithExistingFaces:(id)arg1;
- (bool)beingEdited;
- (void)cleanupEditOptions;
- (void)clearComplicationTombstones;
- (bool)complicationExistenceInvalidatesSnapshot;
- (long long)complicationFamilyForSlot:(id)arg1;
- (id)complicationForSlot:(id)arg1;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)customEditModes;
- (id)dailySnapshotKey;
- (void)dealloc;
- (id)description;
- (id)device;
- (void)didMoveToLibrary;
- (id)displayNameForComplicationSlot:(id)arg1;
- (long long)editModeForCustomEditViewController;
- (id)editModes;
- (Class)editOptionClassFromEditMode:(long long)arg1 resourceDirectoryExists:(bool)arg2;
- (id)editOptionsForCustomEditModes;
- (long long)editedState;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateComplicationSlotsWithBlock:(id /* block */)arg1;
- (void)enumerateCustomEditModesWithBlock:(id /* block */)arg1;
- (void)enumerateSlotsForCustomEditMode:(long long)arg1 withBlock:(id /* block */)arg2;
- (id)faceDescription;
- (id)faceDescriptionForExternal;
- (id)faceDescriptionForLibrary;
- (long long)faceStyle;
- (bool)hasComplicationsOfType:(unsigned long long)arg1 forSlot:(id)arg2;
- (bool)hasCustomSwitcherSelectionAction;
- (bool)hasValidConfigurationForDeviceVersion:(unsigned int)arg1;
- (void)incrementNumberOfCompanionEdits;
- (void)incrementNumberOfGizmoEdits;
- (unsigned long long)indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)installedSystemApplicationsDidChange;
- (bool)isEditable;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToFace:(id)arg1;
- (bool)isLibraryFace;
- (bool)isSingular;
- (id)lastEditedDate;
- (long long)mostRecentEditMode;
- (id)name;
- (id)nameOfSelectedOptionForCustomEditMode:(long long)arg1;
- (id)namesOfSelectedOptionsForCustomEditModes;
- (id)numberOfCompanionEdits;
- (id)numberOfGizmoEdits;
- (unsigned long long)numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)orderedComplicationSlots;
- (long long)origin;
- (void)performCustomSwitcherSelectionAction;
- (id)possibleComplicationTypesForSlot:(id)arg1;
- (void)prepareEditOptions;
- (void)prepareForDeletion;
- (void)removeObserver:(id)arg1;
- (id)resourceDirectory;
- (void)selectOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)selectedOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)selectedOptionsForCustomEditModes;
- (id)selectedSlotForEditMode:(long long)arg1;
- (void)setBeingEdited:(bool)arg1;
- (void)setComplication:(id)arg1 forSlot:(id)arg2;
- (void)setComplicationSlotDescriptors:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setEditedState:(long long)arg1;
- (void)setIsLibraryFace:(bool)arg1;
- (void)setLastEditedDate:(id)arg1;
- (void)setMostRecentEditMode:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setOrigin:(long long)arg1;
- (void)setResourceDirectory:(id)arg1;
- (void)setResourceDirectoryByHardLinkingDirectory:(id)arg1;
- (void)setSelectedSlot:(id)arg1 forEditMode:(long long)arg2;
- (id)slotsForCustomEditMode:(long long)arg1;
- (bool)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (id)unadornedSnapshotKey;
- (bool)wantsUnadornedSnapshot;

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