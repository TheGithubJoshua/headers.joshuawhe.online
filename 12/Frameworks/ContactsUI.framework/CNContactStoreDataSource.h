<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CNContactStoreDataSource.h</title>
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

/Frameworks/ContactsUI.framework/CNContactStoreDataSource.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI (492)
 */

@interface CNContactStoreDataSource : NSObject <CNContactDataSource> {
    CNContactStoreSnapshot * _currentSnapshot;
    bool  _fetchUnified;
    CNContactStoreFilter * _filter;
    NSArray * _keysToFetch;
    bool  _loadingSnapshot;
    CNManagedConfiguration * _managedConfiguration;
    CNContact * _meContact;
    bool  _meContactNeedsUpdate;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _sectionHeadersDictionary;
    CNContactStore * _store;
    CNContactFormatter * contactFormatter;
    <CNContactDataSourceDelegate> * delegate;
}

@property (nonatomic, readonly) unsigned int abSortOrder;
@property (nonatomic, readonly) CNiOSAddressBook *addressBook;
@property (nonatomic, readonly) bool canReload;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, readonly) NSDictionary *contactMatchInfos;
@property (nonatomic, readonly) NSArray *contacts;
@property (nonatomic, retain) CNContactStoreSnapshot *currentSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) CNContactFilter *effectiveFilter;
@property (nonatomic) bool fetchUnified;
@property (nonatomic, copy) CNContactStoreFilter *filter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *indexSections;
@property (nonatomic, readonly) NSArray *indexSectionsArray;
@property (nonatomic, retain) NSArray *keysToFetch;
@property (nonatomic, readonly) NSDictionary *localizedSectionHeaders;
@property (nonatomic, readonly) NSDictionary *localizedSectionIndices;
@property (nonatomic, retain) CNManagedConfiguration *managedConfiguration;
@property (nonatomic, copy) CNContact *meContact;
@property (nonatomic) bool meContactNeedsUpdate;
@property (nonatomic, readonly) NSDictionary *sectionHeadersDictionary;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) bool shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
@property (nonatomic, readonly) long long sortOrder;
@property (nonatomic, retain) CNContactStore *store;
@property (readonly) Class superclass;

+ (bool)isErrorPossiblyRelatedToExtraStores:(id)arg1;
+ (id)keyPathsForValuesAffectingEffectiveFilter;

- (void).cxx_destruct;
- (void)_reloadSynchronously:(bool)arg1;
- (unsigned int)abSortOrder;
- (id)addressBook;
- (bool)canReload;
- (id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(bool)arg2 keysToFetch:(id)arg3;
- (id)contactFormatter;
- (id)contactMatchInfos;
- (void)contactStoreDidChange:(id)arg1;
- (void)contactStoreMeContactDidChange:(id)arg1;
- (id)contacts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentSnapshot;
- (void)dealloc;
- (id)delegate;
- (id)displayName;
- (id)effectiveFilter;
- (bool)fetchUnified;
- (id)filter;
- (id)indexPathForContact:(id)arg1;
- (id)indexSections;
- (id)indexSectionsArray;
- (id)initWithStore:(id)arg1;
- (void)invalidate;
- (bool)isLoading;
- (id)keysToFetch;
- (id)localizedSectionHeaders;
- (id)localizedSectionIndices;
- (id)managedConfiguration;
- (id)meContact;
- (bool)meContactNeedsUpdate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)preferredForNameMeContactIdentifier;
- (id)preferredForNameMeContactWithKeysToFetch:(id)arg1;
- (void)reload;
- (void)reloadAsynchronously;
- (void)reset;
- (id)sectionHeadersDictionary;
- (id)sections;
- (void)setContactFormatter:(id)arg1;
- (void)setCurrentSnapshot:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFetchUnified:(bool)arg1;
- (void)setFilter:(id)arg1;
- (void)setKeysToFetch:(id)arg1;
- (void)setManagedConfiguration:(id)arg1;
- (void)setMeContact:(id)arg1;
- (bool)setMeContact:(id)arg1 error:(id*)arg2;
- (void)setMeContactNeedsUpdate:(bool)arg1;
- (void)setStore:(id)arg1;
- (long long)sortOrder;
- (id)store;

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
