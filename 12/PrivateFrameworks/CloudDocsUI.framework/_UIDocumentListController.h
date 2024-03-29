<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIDocumentListController.h</title>
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

/PrivateFrameworks/CloudDocsUI.framework/_UIDocumentListController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI (113.100.4)
 */

@interface _UIDocumentListController : UIViewController <UIViewControllerRestoration, _UIDocumentPickerServiceViewController> {
    long long  _availableActionsIfNotDeferred;
    _UIDocumentPickerContainerViewController * _containerViewController;
    <_UIDocumentListControllerDelegate> * _delegateIfNotDeferred;
    long long  _displayModeIfNotDeferred;
    bool  _editing;
    bool  _hideSearchField;
    _UIDocumentListController * _rootListController;
    _UIDocumentSearchListController * _searchController;
    int  _sortOrderIfNotDeferred;
    struct CGPoint { 
        double x; 
        double y; 
    }  _stateRestoredContentOffset;
}

@property (nonatomic) long long availableActions;
@property (nonatomic, readonly) NSArray *containedItems;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIDocumentListControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool editing;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideSearchField;
@property (nonatomic, readonly) NSURL *presentedURL;
@property (nonatomic) _UIDocumentListController *rootListController;
@property (nonatomic, retain) NSArray *selectedItems;
@property (readonly) Class superclass;

+ (id)_listControllerHierarchyForURL:(id)arg1 withConstructorBlock:(id /* block */)arg2;
+ (id)listControllerHierarchyForURL:(id)arg1;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void).cxx_destruct;
- (Class)_classForChildren;
- (void)_commonInitWithModel:(id)arg1;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 listMode:(long long)arg4;
- (void)_setContainerViewController:(id)arg1;
- (void)_updateScrollPositionForStateRestoration;
- (long long)availableActions;
- (id)containedItems;
- (void)createSearchControllerWithModel:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)delegate;
- (id)description;
- (void)didHighlightItem:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (void)didUnhighlightItem:(id)arg1;
- (long long)displayMode;
- (bool)editing;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (bool)hideSearchField;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)itemsOrSelectionDidChange:(bool)arg1;
- (id)model;
- (void)performAction:(long long)arg1 item:(id)arg2 view:(id)arg3 completion:(id /* block */)arg4;
- (id)presentedURL;
- (id)previewViewControllerForItem:(id)arg1;
- (id)rootListController;
- (id)selectedItems;
- (void)setAvailableActions:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)setEditing:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setHideSearchField:(bool)arg1;
- (void)setRootListController:(id)arg1;
- (void)setSelectedItems:(id)arg1;
- (void)setSortOrder:(int)arg1;
- (bool)shouldHighlightItem:(id)arg1;
- (bool)shouldSelectItem:(id)arg1;
- (bool)shouldShowAction:(long long)arg1;
- (int)sortOrder;
- (void)startSearchWithQueryString:(id)arg1 becomeFirstResponder:(bool)arg2;
- (void)updateTitle;

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
