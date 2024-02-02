<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSDGroupInfo.h</title>
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

/PrivateFrameworks/TSReading.framework/TSDGroupInfo.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSDGroupInfo : TSDDrawableInfo <TSDAttachmentAwareContainerInfo, TSDMixing, TSDModelContainer, TSDMutableContainerInfo, TSDSelectionStatisticsContributor, TSKDocumentObject> {
    NSMutableArray * mChildInfos;
    bool  mIsInDocument;
}

@property (nonatomic, readonly) NSArray *allNestedChildrenInfos;
@property (nonatomic, readonly) NSArray *allNestedChildrenInfosForWrap;
@property (nonatomic, readonly) NSArray *allNestedChildrenInfosIncludingGroups;
@property (getter=isAnchoredToText, nonatomic, readonly) bool anchoredToText;
@property (getter=isAttachedToBodyText, nonatomic, readonly) bool attachedToBodyText;
@property (nonatomic, readonly) bool canAspectRatioLockBeChangedByUser;
@property (nonatomic, readonly) NSArray *childInfos;
@property (nonatomic, readonly) NSArray *containedModels;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFloatingAboveText, nonatomic, readonly) bool floatingAboveText;
@property (nonatomic, copy) TSDInfoGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *infosToObserveForAttachedInfo;
@property (getter=isInlineWithText, nonatomic, readonly) bool inlineWithText;
@property (nonatomic, readonly) bool isFreehandDrawing;
@property (nonatomic) bool matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (nonatomic, readonly) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsCollaborativeEditing;

+ (bool)canEditGroupsInCollaborativeDocuments;
+ (Class)classForUnarchiver:(id)arg1;
+ (id)drawablesToInsertForGroup:(id)arg1 filteredWithBlock:(id /* block */)arg2;
+ (id)groupGeometryFromChildrenInfos:(id)arg1;
+ (id)groupGeometryFromChildrenInfos:(id)arg1 currentlyLaidOutWithLayoutController:(id)arg2;
+ (id)p_drawablesToInsertForGroup:(id)arg1 outDidUngroup:(bool*)arg2 filteredWithBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (void)addChildInfo:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)allNestedChildrenInfos;
- (id)allNestedChildrenInfosForWrap;
- (id)allNestedChildrenInfosIncludingGroups;
- (bool)allowsParentGroupToBeResizedWithoutAspectRatioLock;
- (bool)canAnchor;
- (bool)canAspectRatioLockBeChangedByUser;
- (id)childEnumerator;
- (id)childInfos;
- (id)containedModels;
- (bool)containsDisallowedElementKind:(unsigned int)arg1;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (void)didCopy;
- (void)ensureGeometryFitsChildren;
- (id)geometry;
- (id)groupedGeometryForChildInfo:(id)arg1;
- (id)infoForSelectionPath:(id)arg1;
- (id)infosToObserveForAttachedInfo;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (void)insertChildInfo:(id)arg1 above:(id)arg2;
- (void)insertChildInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertChildInfo:(id)arg1 below:(id)arg2;
- (void)insertContainedModel:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (bool)isFreehandDrawing;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct GroupArchive { int (**x1)(); struct ExtensionSet { struct Arena {} *x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; union AllocatedData { struct KeyValue {} *x_4_2_1; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > {} *x_4_2_2; } x_2_1_4; } x2; struct InternalMetadataWithArena { void *x_3_1_1; } x3; struct HasBits<1> { unsigned int x_4_1_1[1]; } x4; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_5_1_1; } x5; struct RepeatedPtrField<TSP::Reference> { struct Arena {} *x_6_1_1; int x_6_1_2; int x_6_1_3; struct Rep {} *x_6_1_4; } x6; struct DrawableArchive {} *x7; }*)arg1 unarchiver:(id)arg2 upgradeDOLC:(bool)arg3;
- (void)loadFromUnarchiver:(id)arg1;
- (void)makeChildGeometriesRelativeAndComputeOwnAbsoluteGeometry;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)moveChildren:(id)arg1 toIndexes:(id)arg2;
- (void)moveModel:(id)arg1 toIndex:(unsigned long long)arg2;
- (bool)needsDownload;
- (void)processSelectedStoragesWithStatisticsController:(id)arg1;
- (void)removeAllChildrenInDocument:(bool)arg1;
- (void)removeChildInfo:(id)arg1;
- (void)removeContainedModel:(id)arg1;
- (Class)repClass;
- (void)replaceChildInfo:(id)arg1 with:(id)arg2;
- (void)saveToArchive:(struct GroupArchive { int (**x1)(); struct ExtensionSet { struct Arena {} *x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; union AllocatedData { struct KeyValue {} *x_4_2_1; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > {} *x_4_2_2; } x_2_1_4; } x2; struct InternalMetadataWithArena { void *x_3_1_1; } x3; struct HasBits<1> { unsigned int x_4_1_1[1]; } x4; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_5_1_1; } x5; struct RepeatedPtrField<TSP::Reference> { struct Arena {} *x_6_1_1; int x_6_1_2; int x_6_1_3; struct Rep {} *x_6_1_4; } x6; struct DrawableArchive {} *x7; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setChildInfos:(id)arg1;
- (void)setGeometry:(id)arg1;
- (bool)supportsCollaborativeEditing;
- (bool)supportsParentRotation;
- (id)ungroupedGeometryForChildInfo:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)willCopyWithOtherDrawables:(id)arg1;

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