<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSKDocumentRoot.h</title>
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

/PrivateFrameworks/TSReading.framework/TSKDocumentRoot.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSKDocumentRoot : TSPObject <TSKAccessControllerDelegate, TSKModel> {
    TSKAccessController * _accessController;
    TSKAnnotationAuthorStorage * _annotationAuthorStorage;
    TSKAnnotationAuthor * _authorForFiltering;
    TSKChangeNotifier * _changeNotifier;
    <TSKDocumentRootDelegate> * _delegate;
    TSULocale * _documentCreationLocale;
    TSULocale * _documentLocale;
    TSKDocumentSupport * _documentSupport;
    TSKDocumentSupport * _documentSupportIfAvailable;
    bool  _hasUserDefinedLocale;
    NSMutableArray * _iCloudTeardownStack;
    bool  _isBeingLocalized;
    bool  _isFindActive;
    <TSULogContext> * _logContext;
    TSKPasteboardController * _pasteboardController;
    bool  _preventImageConversionOnOpen;
    TSKSelectionDispatcher * _selectionDispatcher;
}

@property (nonatomic, readonly) TSKAccessController *accessController;
@property (nonatomic, readonly) NSDictionary *additionalDocumentPropertiesForWrite;
@property (nonatomic, readonly) NSDictionary *additionalDocumentSupportPropertiesForWrite;
@property (nonatomic, readonly) TSKAnnotationAuthorStorage *annotationAuthorStorage;
@property (nonatomic, readonly) unsigned long long applicationType;
@property (nonatomic, retain) TSKAnnotationAuthor *authorForFiltering;
@property (nonatomic, readonly) bool canUseHEVC;
@property (nonatomic, readonly) TSKChangeNotifier *changeNotifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TSKDocumentRootDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSULocale *documentCreationLocale;
@property (nonatomic, readonly) NSString *documentLanguage;
@property (nonatomic, readonly) TSULocale *documentLocale;
@property (nonatomic, readonly) TSKDocumentSupport *documentSupport;
@property (nonatomic, readonly) TSKDocumentSupport *documentSupportIfAvailable;
@property (getter=isFindActive, nonatomic) bool findActive;
@property (nonatomic, readonly) bool freehandDrawingsRequireSpacerShape;
@property (nonatomic, readonly) bool hasFloatingLocale;
@property (nonatomic, readonly) bool hasICloudConflict;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBeingLocalized;
@property (nonatomic, readonly) bool isCollaborativeClient;
@property (nonatomic, readonly) bool isCollaborativeClientOrServer;
@property (nonatomic, readonly) <TSULogContext> *logContext;
@property (nonatomic, readonly) unsigned long long maxMediaItemFileSize;
@property (nonatomic, retain) TSKPasteboardController *pasteboardController;
@property (nonatomic, readonly) TSKSelectionDispatcher *selectionDispatcher;
@property (nonatomic) bool shouldPreventImageConversionOnOpen;
@property (nonatomic, readonly) TSSStylesheet *stylesheet;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TSSTheme *theme;
@property (readonly) TSCHTextCache *tsch_textCache;
@property (nonatomic, readonly) unsigned long long writingDirection;
@property (nonatomic, readonly) unsigned long long writingDirectionForStorage;

+ (bool)needsObjectUUID;

- (void).cxx_destruct;
- (id)UIStateForChart:(id)arg1;
- (id)accessController;
- (long long)addObserverForICloudTeardownSuspendingCollaboration:(bool)arg1 block:(id /* block */)arg2;
- (long long)addObserverForICloudTeardownWithBlock:(id /* block */)arg1;
- (id)additionalDocumentPropertiesForWrite;
- (id)additionalDocumentSupportPropertiesForWrite;
- (id)annotationAuthorStorage;
- (unsigned long long)applicationType;
- (id)authorForFiltering;
- (void)backgroundDocumentDidLoad;
- (id)calculationEngine;
- (bool)canUseHEVC;
- (id)changeNotifier;
- (id)commandForRemovingCommentsFromDrawables:(id)arg1 context:(id)arg2;
- (id)commandForUpdatingAfterInsertingDrawables:(id)arg1 context:(id)arg2;
- (void)commonInit;
- (id)customFormatList;
- (id)dataFromDocumentCachePath:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didAcquireReadLock;
- (void)didConnectToServerWithCollaborationSessionContext:(id)arg1;
- (void)didSaveWithEncryptionChange;
- (bool)documentAllowsPencilAnnotationsOnModel:(id)arg1;
- (id)documentCreationLocale;
- (void)documentDidLoad;
- (bool)documentDisallowsHighlightsOnStorage:(id)arg1;
- (id)documentLanguage;
- (id)documentLocale;
- (id)documentSupport;
- (id)documentSupportIfAvailable;
- (void)dumpReaderWriterThreads;
- (bool)freehandDrawingsRequireSpacerShape;
- (void)gilligan_documentDidInsertObject:(id)arg1;
- (void)gilligan_documentDidRemoveObject:(id)arg1;
- (void)gilligan_documentWillInsertObject:(id)arg1;
- (void)gilligan_documentWillRemoveObject:(id)arg1;
- (bool)hasFloatingLocale;
- (bool)hasICloudConflict;
- (bool)hasICloudTeardownObserver;
- (id)initWithContext:(id)arg1;
- (bool)isBeingLocalized;
- (bool)isCollaborativeClient;
- (bool)isCollaborativeClientOrServer;
- (bool)isDirectionRightToLeft;
- (bool)isFindActive;
- (void)loadFromArchive:(const struct DocumentArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_7_1_1; } x7; struct Reference {} *x8; struct Reference {} *x9; bool x10; bool x11; bool x12; }*)arg1 unarchiver:(id)arg2;
- (id)logContext;
- (id)makeIsolatedStyleMapper;
- (id)makeStyleMapper;
- (unsigned long long)maxMediaItemFileSize;
- (void)migrateStylesInObjects:(id)arg1;
- (void)migrateStylesInObjects:(id)arg1 changePropagationMap:(id)arg2;
- (id)migratedPresetForPreset:(id)arg1;
- (id)migratedPropertyMapForPropertyMap:(id)arg1;
- (id)migratedStyleForStyle:(id)arg1;
- (id)modelEnumerator;
- (id)modelEnumeratorForObjectsConformingToProtocol:(id)arg1;
- (id)modelEnumeratorForObjectsOfClass:(Class)arg1;
- (id)modelEnumeratorForObjectsPassingTest:(id /* block */)arg1;
- (id)modelEnumeratorForObjectsRespondingToSelector:(SEL)arg1;
- (id)modelEnumeratorWithFlags:(unsigned long long)arg1;
- (id)modelEnumeratorWithFlags:(unsigned long long)arg1 forObjectsConformingToProtocol:(id)arg2;
- (id)modelEnumeratorWithFlags:(unsigned long long)arg1 forObjectsOfClass:(Class)arg2;
- (id)modelEnumeratorWithFlags:(unsigned long long)arg1 forObjectsPassingTest:(id /* block */)arg2;
- (id)modelEnumeratorWithFlags:(unsigned long long)arg1 forObjectsRespondingToSelector:(SEL)arg2;
- (struct CGImageSource { }*)newImageSourceForDocumentCachePath:(id)arg1;
- (void)notifyICloudTeardownObservers;
- (bool)objectsNeedToBeMigrated:(id)arg1;
- (void)p_setUpControllersForBackground:(bool)arg1;
- (id)pasteboardController;
- (void)pauseRecalculation;
- (void)pauseRecalculationForBlock:(id /* block */)arg1;
- (void)pauseRecalculationSometimeSoon;
- (void)removeAllAnnotationsFromDrawables:(id)arg1;
- (void)removeICloudTeardownObserver:(long long)arg1;
- (void)resumeRecalculation;
- (void)saveToArchive:(struct DocumentArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_7_1_1; } x7; struct Reference {} *x8; struct Reference {} *x9; bool x10; bool x11; bool x12; }*)arg1 archiver:(id)arg2;
- (id)selectionDispatcher;
- (void)setAuthorForFiltering:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFindActive:(bool)arg1;
- (void)setPasteboardController:(id)arg1;
- (void)setShouldPreventImageConversionOnOpen:(bool)arg1;
- (void)setStylesheet:(id)arg1 andThemeForImport:(id)arg2;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setThemeForTemplateImport:(id)arg1;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (void)setUpAccessControllerIfNeeded;
- (bool)shouldDropOperationHistoryWithDocumentRevision:(id)arg1;
- (bool)shouldPreventImageConversionOnOpen;
- (bool)shouldShowComments;
- (id)stylesToNotResizeInStylesheet:(id)arg1;
- (id)stylesheet;
- (id)tableIdRemappingCommandsForTablesInDrawables:(id)arg1;
- (id)tableIdRemappingCommandsForTablesInStorages:(id)arg1;
- (id)theme;
- (id)tsch_textCache;
- (id)uniqueDocumentCachePathForProposedPath:(id)arg1;
- (void)updateAnnotationAuthorList:(id)arg1;
- (bool)updateDocumentLocaleToCurrentIfNeeded;
- (bool)updateDocumentLocaleToUseLanguageIfNeeded:(id)arg1;
- (void)updateForNonCommandChangesWithWriteLock:(id)arg1;
- (void)willClose;
- (void)willRelinquishReadLock;
- (bool)writeData:(id)arg1 atDocumentCachePath:(id)arg2;
- (unsigned long long)writingDirection;
- (unsigned long long)writingDirectionForStorage;

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