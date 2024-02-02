<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXPeopleSectionedDataSource.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXPeopleSectionedDataSource.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXPeopleSectionedDataSource : NSObject <PXPhotoLibraryUIChangeObserver> {
    NSHashTable * _changeObservers;
    NSArray * _dataSources;
    NSString * _localizedTitle;
    id  _pauseToken;
    NSObject<OS_dispatch_queue> * _reloadQueue;
}

@property (nonatomic, retain) NSHashTable *changeObservers;
@property (nonatomic, readonly, copy) NSArray *dataSources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, retain) id pauseToken;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *reloadQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dataSourceForFetchType:(unsigned long long)arg1;
- (id)_dataSourceForIndexPath:(id)arg1;
- (id)_dataSourceForSection:(long long)arg1;
- (unsigned long long)_fetchTypeForPersonType:(long long)arg1;
- (id)_generateChangeDetailsForChangeInstance:(id)arg1;
- (long long)_sectionForFetchType:(unsigned long long)arg1;
- (void)addChangeObserver:(id)arg1;
- (void)addVisiblePerson:(id)arg1;
- (id)allMembers;
- (bool)canReorderMembersInSection:(long long)arg1;
- (void)cancelImageLoadingForItem:(id)arg1;
- (void)changeMembersAtIndexPaths:(id)arg1 toPersonType:(long long)arg2 changeDetailsBlock:(id /* block */)arg3;
- (id)changeObservers;
- (id)dataSources;
- (void)dealloc;
- (unsigned long long)fetchTypeForSection:(long long)arg1;
- (void)imageAtIndexPath:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 withCompletionBlock:(id /* block */)arg3 fastDisplayBlock:(id /* block */)arg4;
- (id)indexPathForInsertingMember:(id)arg1 intoSection:(long long)arg2;
- (id)indexPathOfMember:(id)arg1;
- (id)initWithSections:(id)arg1;
- (bool)isSectionDisclosed:(long long)arg1;
- (void)loadAndStartListeningToLibraryNotifications;
- (id)localizedDisclosedTitleForSection:(long long)arg1;
- (id)localizedTitle;
- (id)localizedTitleForSection:(long long)arg1;
- (id)memberAtIndexPath:(id)arg1;
- (id)membersAtIndexPaths:(id)arg1;
- (void)moveMemberAtIndexPath:(id)arg1 toIndexPath:(id)arg2 shouldUpdateImmediately:(bool)arg3;
- (unsigned long long)numberOfDisclosedSections;
- (unsigned long long)numberOfMembersInSection:(long long)arg1;
- (unsigned long long)numberOfMembersWithContactName;
- (unsigned long long)numberOfMembersWithStringName;
- (unsigned long long)numberOfSections;
- (void)pauseListeningForChangesWithTimeout:(double)arg1;
- (id)pauseToken;
- (id)peopleAtIndexPaths:(id)arg1;
- (id)personAtIndexPath:(id)arg1;
- (long long)personTypeForMemberAtIndexPath:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (unsigned long long)photoQuantityAtIndexPath:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)reloadFromDatabase;
- (id)reloadQueue;
- (void)removeChangeObserver:(id)arg1;
- (void)removeVisiblePerson:(id)arg1;
- (void)resumeListeningForChanges;
- (void)setChangeObservers:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setPauseToken:(id)arg1;
- (void)setSection:(long long)arg1 disclosed:(bool)arg2;
- (void)startListeningToLibraryNotifications;
- (void)stopListeningToLibraryNotifications;
- (id)titleAtIndexPath:(id)arg1;
- (unsigned long long)totalMemberCount;

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