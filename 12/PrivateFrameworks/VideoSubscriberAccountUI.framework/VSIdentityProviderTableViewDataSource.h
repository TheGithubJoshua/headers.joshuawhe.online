<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VSIdentityProviderTableViewDataSource.h</title>
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

/PrivateFrameworks/VideoSubscriberAccountUI.framework/VSIdentityProviderTableViewDataSource.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI (291.60.3)
 */

@interface VSIdentityProviderTableViewDataSource : NSObject <UITableViewDataSource> {
    unsigned long long  _additionalProvidersMode;
    NSDictionary * _destinationsBySectionIndexTitle;
    NSArray * _identityProviders;
    NSArray * _sections;
    UITableView * _tableView;
    NSString * _titleForTableHeader;
}

@property (nonatomic) unsigned long long additionalProvidersMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *destinationsBySectionIndexTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *identityProviders;
@property (nonatomic, copy) NSArray *sections;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, copy) NSString *titleForTableHeader;

- (void).cxx_destruct;
- (id)_additionalProvidersRowTitle;
- (id)_cellReuseIdentifierForRowAtIndexPath:(id)arg1;
- (long long)_cellStyleForRowAtIndexPath:(id)arg1;
- (unsigned long long)_minimumProviderCountForIndexes;
- (void)_scrollToTableHeaderView;
- (long long)_textAlignmentForRowAtIndexPath:(id)arg1;
- (id)_textColorForRowAtIndexPath:(id)arg1;
- (id)_titleForRowAtIndexPath:(id)arg1;
- (unsigned long long)additionalProvidersMode;
- (id)destinationsBySectionIndexTitle;
- (id)identityProviderForRowAtIndexPath:(id)arg1;
- (id)identityProviders;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)sections;
- (void)setAdditionalProvidersMode:(unsigned long long)arg1;
- (void)setDestinationsBySectionIndexTitle:(id)arg1;
- (void)setIdentityProviders:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setTitleForTableHeader:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)titleForTableHeader;

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