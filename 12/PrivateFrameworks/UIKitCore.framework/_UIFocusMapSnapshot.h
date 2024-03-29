<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIFocusMapSnapshot.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIFocusMapSnapshot.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIFocusMapSnapshot : NSObject <_UIFocusRegionSearchContext> {
    NSMutableArray * _containersBeingAdded;
    NSMutableArray * _containersBeingAddedFocusSystems;
    bool  _didCaptureSnapshot;
    NSHashTable * _eligibleEnvironments;
    NSHashTable * _filteredOriginalRegions;
    UIFocusSystem * _focusSystem;
    _UIFocusRegion * _focusedRegion;
    NSHashTable * _ineligibleEnvironments;
    bool  _isSearchingRegionsOfInterestContainer;
    <_UIFocusMapArea> * _mapArea;
    NSMutableArray * _mutableUnoccludedRegions;
    NSArray * _regions;
    <_UIFocusRegionContainer> * _regionsContainer;
    <_UIFocusRegionContainer> * _rootContainer;
    <_UIFocusMapArea> * _searchArea;
}

@property (nonatomic, readonly) <UICoordinateSpace> *coordinateSpace;
@property (readonly, copy) NSString *debugDescription;
@property (getter=_debugInfo, nonatomic, readonly) _UIFocusMapSnapshotDebugInfo *debugInfo;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIFocusSystem *focusSystem;
@property (nonatomic, readonly, copy) _UIFocusRegion *focusedRegion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <_UIFocusMapArea> *mapArea;
@property (nonatomic, readonly, copy) NSArray *originalRegions;
@property (nonatomic, readonly, copy) NSArray *regions;
@property (nonatomic, readonly) <_UIFocusRegionContainer> *regionsContainer;
@property (nonatomic, readonly) <_UIFocusRegionContainer> *rootContainer;
@property (nonatomic, readonly) UIScreen *screen;
@property (getter=_searchArea, nonatomic, readonly) <_UIFocusMapArea> *searchArea;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_capture;
- (id)_debugInfo;
- (id)_debugInfoWithFocusMapSearchInfo:(id)arg1;
- (id)_initWithSnapshotter:(id)arg1 mapArea:(id)arg2;
- (id)_initWithSnapshotter:(id)arg1 mapArea:(id)arg2 searchArea:(id)arg3;
- (id)_searchArea;
- (void)addRegion:(id)arg1;
- (void)addRegions:(id)arg1;
- (void)addRegionsInContainer:(id)arg1;
- (void)addRegionsInContainers:(id)arg1;
- (id)coordinateSpace;
- (id)debugQuickLookObject;
- (id)focusSystem;
- (id)focusedRegion;
- (id)init;
- (id)mapArea;
- (id)originalRegions;
- (id)regions;
- (id)regionsContainer;
- (id)regionsForOriginalRegion:(id)arg1;
- (id)rootContainer;
- (id)screen;
- (id)searchArea;

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
