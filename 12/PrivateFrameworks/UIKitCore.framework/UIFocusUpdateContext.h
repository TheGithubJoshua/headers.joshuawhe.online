<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIFocusUpdateContext.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIFocusUpdateContext.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIFocusUpdateContext : NSObject {
    <UIFocusEnvironment> * _commonAncestorEnvironment;
    <UIFocusItemScrollableContainer> * _commonScrollableContainer;
    _UIFocusItemInfo * _destinationItemInfo;
    double  _destinationViewDistanceOffscreen;
    struct { 
        unsigned int isValid : 1; 
        unsigned int hasValidated : 1; 
        unsigned int shouldUpdateDestinationItem : 1; 
        unsigned int sourceItemMayRemainFocused : 1; 
        unsigned int didResolveCommonAncestorEnvironment : 1; 
    }  _flags;
    _UIFocusMapSearchInfo * _focusMapSearchInfo;
    _UIFocusMovementInfo * _focusMovement;
    UIFocusGuide * _focusedGuide;
    <UIFocusEnvironment> * _initialDestinationEnvironment;
    _UIDebugLogReport * _preferredFocusReport;
    NSArray * _regionMapSnapshots;
    UIImage * _regionMapSnapshotsVisualRepresentation;
    <_UIFocusUpdateRequesting> * _request;
    _UIFocusItemInfo * _sourceItemInfo;
    _UIDebugIssueReport * _validationReport;
}

@property (getter=_commonAncestorEnvironment, nonatomic, readonly) <UIFocusEnvironment> *commonAncestorEnvironment;
@property (getter=_commonScrollableContainer, setter=_setCommonScrollableContainer:, nonatomic, retain) <UIFocusItemScrollableContainer> *commonScrollableContainer;
@property (getter=_destinationItemInfo, nonatomic, readonly, copy) _UIFocusItemInfo *destinationItemInfo;
@property (getter=_destinationViewDistanceOffscreen, setter=_setDestinationViewDistanceOffscreen:, nonatomic) double destinationViewDistanceOffscreen;
@property (nonatomic, readonly) unsigned long long focusHeading;
@property (getter=_focusMapSearchInfo, setter=_setFocusMapSearchInfo:, nonatomic, retain) _UIFocusMapSearchInfo *focusMapSearchInfo;
@property (getter=_focusMovement, nonatomic, readonly) _UIFocusMovementInfo *focusMovement;
@property (getter=_focusVelocity, nonatomic, readonly) struct CGVector { double x1; double x2; } focusVelocity;
@property (getter=_focusedGuide, nonatomic, readonly) UIFocusGuide *focusedGuide;
@property (getter=_initialDestinationEnvironment, nonatomic, readonly) <UIFocusEnvironment> *initialDestinationEnvironment;
@property (nonatomic, readonly) <UIFocusItem> *nextFocusedItem;
@property (nonatomic, readonly) UIView *nextFocusedView;
@property (getter=_preferredFocusReport, setter=_setPreferredFocusReport:, nonatomic, retain) _UIDebugLogReport *preferredFocusReport;
@property (nonatomic, readonly) <UIFocusItem> *previouslyFocusedItem;
@property (nonatomic, readonly) UIView *previouslyFocusedView;
@property (getter=_regionMapSnapshots, setter=_setRegionMapSnapshots:, nonatomic, retain) NSArray *regionMapSnapshots;
@property (getter=_regionMapSnapshotsVisualRepresentation, nonatomic, readonly) UIImage *regionMapSnapshotsVisualRepresentation;
@property (getter=_request, nonatomic, readonly) <_UIFocusUpdateRequesting> *request;
@property (getter=_sourceItemInfo, nonatomic, readonly, copy) _UIFocusItemInfo *sourceItemInfo;
@property (getter=_validationReport, setter=_setValidationReport:, nonatomic, retain) _UIDebugIssueReport *validationReport;

+ (id)_defaultValidationReportFormatter;

- (void).cxx_destruct;
- (id)_commonAncestorEnvironment;
- (id)_commonScrollableContainer;
- (id)_destinationItemInfo;
- (double)_destinationViewDistanceOffscreen;
- (void)_didUpdateFocus;
- (id)_focusMapSearchInfo;
- (id)_focusMapSnapshotDebugInfoArray;
- (id)_focusMovement;
- (struct CGVector { double x1; double x2; })_focusVelocity;
- (id)_focusedGuide;
- (id)_initWithContext:(id)arg1;
- (id)_initWithFocusMovementRequest:(id)arg1 nextFocusedItem:(id)arg2;
- (id)_initWithFocusUpdateRequest:(id)arg1;
- (id)_initialDestinationEnvironment;
- (bool)_isValidInFocusSystem:(id)arg1;
- (id)_preferredFocusReport;
- (id)_publicRegionMapSnapshots;
- (id)_regionMapSnapshots;
- (id)_regionMapSnapshotsVisualRepresentation;
- (id)_request;
- (void)_setCommonScrollableContainer:(id)arg1;
- (void)_setDestinationViewDistanceOffscreen:(double)arg1;
- (void)_setFocusMapSearchInfo:(id)arg1;
- (void)_setFocusedGuide:(id)arg1;
- (void)_setInitialDestinationEnvironment:(id)arg1;
- (void)_setPreferredFocusReport:(id)arg1;
- (void)_setRegionMapSnapshots:(id)arg1;
- (void)_setSourceItemInfo:(id)arg1;
- (void)_setValidationReport:(id)arg1;
- (id)_sourceItemInfo;
- (void)_updateDestinationItemIfNeeded;
- (bool)_validate;
- (id)_validationReport;
- (void)_willUpdateFocusFromFocusedItem:(id)arg1;
- (id)debugQuickLookObject;
- (id)description;
- (unsigned long long)focusHeading;
- (id)init;
- (id)nextFocusedItem;
- (id)nextFocusedView;
- (id)previouslyFocusedItem;
- (id)previouslyFocusedView;

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
