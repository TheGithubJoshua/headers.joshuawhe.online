<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUBarButtonItemCollection.h</title>
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

/Frameworks/PhotosUI.framework/PUBarButtonItemCollection.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PUBarButtonItemCollection : NSObject {
    NSMutableDictionary * __barButtonItems;
    NSCache * __configurationsCache;
    UIBarButtonItem * __flexibleSpaceBarButtonItem;
    unsigned long long  __options;
    UIBarButtonItem * __placeholderBarButtonItem;
    NSIndexSet * __previousRequestedSet;
    NSArray * __previousResult;
    NSIndexSet * _centeredItemIdentifiers;
    <PUBarButtonItemCollectionDataSource> * _dataSource;
    NSArray * _identifiersOrder;
}

@property (nonatomic, readonly) NSMutableDictionary *_barButtonItems;
@property (nonatomic, readonly) NSCache *_configurationsCache;
@property (nonatomic, readonly) UIBarButtonItem *_flexibleSpaceBarButtonItem;
@property (nonatomic, readonly) unsigned long long _options;
@property (nonatomic, readonly) UIBarButtonItem *_placeholderBarButtonItem;
@property (setter=_setPreviousRequestedSet:, nonatomic, copy) NSIndexSet *_previousRequestedSet;
@property (setter=_setPreviousResult:, nonatomic, retain) NSArray *_previousResult;
@property (nonatomic, readonly) NSDictionary *barButtonItems;
@property (nonatomic, retain) NSIndexSet *centeredItemIdentifiers;
@property (nonatomic) <PUBarButtonItemCollectionDataSource> *dataSource;
@property (nonatomic, retain) NSArray *identifiersOrder;

- (void).cxx_destruct;
- (id)_arrangedBarButtonItems:(id)arg1 identifiers:(id)arg2;
- (id)_barButtonItems;
- (void)_centersButtonsIfNeeded:(id)arg1 identifiers:(id)arg2;
- (id)_configurationsCache;
- (id)_flexibleSpaceBarButtonItem;
- (id)_newEntryForIdentifiers:(id)arg1;
- (unsigned long long)_options;
- (id)_placeholderBarButtonItem;
- (id)_previousRequestedSet;
- (id)_previousResult;
- (void)_resetSet;
- (void)_setPreviousRequestedSet:(id)arg1;
- (void)_setPreviousResult:(id)arg1;
- (id)barButtonItemForIdentifier:(long long)arg1;
- (id)barButtonItems;
- (id)centeredItemIdentifiers;
- (id)dataSource;
- (long long)identifierForBarButtonItem:(id)arg1;
- (long long)identifierForCustomButton:(id)arg1;
- (id)identifiersOrder;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)orderedBarButtonsItemsForIdentifiers:(id)arg1;
- (void)setCenteredItemIdentifiers:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setIdentifiersOrder:(id)arg1;

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
