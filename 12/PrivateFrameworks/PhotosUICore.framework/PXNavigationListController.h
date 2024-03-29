<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXNavigationListController.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXNavigationListController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXNavigationListController : UIViewController <PXNavigationListDataSourceManagerObserver, UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate> {
    bool  __needsUpdateRowHeight;
    <PXNavigationListContainer> * _container;
    PXNavigationListDataSource * _dataSource;
    PXNavigationListDataSourceManager * _dataSourceManager;
    bool  _isTableViewUpdating;
    double  _rowHeight;
    NSUserActivity * _siriActionActivity;
    UITableView * _tableView;
}

@property (setter=_setNeedsUpdateRowHeight:, nonatomic) bool _needsUpdateRowHeight;
@property (nonatomic) bool allowsNavigation;
@property (nonatomic) <PXNavigationListContainer> *container;
@property (nonatomic, readonly) double contentHeight;
@property (nonatomic, retain) PXNavigationListDataSource *dataSource;
@property (nonatomic, readonly) PXNavigationListDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isTableViewUpdating;
@property (nonatomic) double rowHeight;
@property (nonatomic, retain) NSUserActivity *siriActionActivity;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;

+ (id)navigateToListItem:(id)arg1 sourceViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)_createTransparentFullWidthViewOfHeight:(double)arg1;
- (id)_navigateTolistItem:(id)arg1 animated:(bool)arg2;
- (bool)_needsUpdateRowHeight;
- (void)_preferredContentSizeChanged:(id)arg1;
- (double)_rowHeightForCurrentFont;
- (void)_setDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)_setNeedsUpdateRowHeight:(bool)arg1;
- (void)_updateCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateCellSeparatorStyle:(id)arg1 forRowAtIndexPath:(id)arg2;
- (bool)allowsNavigation;
- (id)container;
- (double)contentHeight;
- (id)dataSource;
- (id)dataSourceManager;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataSourceManager:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isTableViewUpdating;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (double)rowHeight;
- (void)setAllowsNavigation:(bool)arg1;
- (void)setContainer:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setIsTableViewUpdating:(bool)arg1;
- (void)setRowHeight:(double)arg1;
- (void)setSiriActionActivity:(id)arg1;
- (id)siriActionActivity;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableViewContentSizeDidChange;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

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
