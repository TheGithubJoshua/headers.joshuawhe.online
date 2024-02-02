<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIInterfaceActionSelectionTrackingController.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIInterfaceActionSelectionTrackingController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIInterfaceActionSelectionTrackingController : NSObject <UIFocusedInterfaceActionPressDelegate, UIGestureRecognizerDelegate> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _actionSelectionInitialLocationInContainerView;
    UIScrollView * _actionsScrollView;
    NSArray * _representationViews;
    id  _scrollViewDidEndDeceleratingNotificationToken;
    id  _scrollViewDidEndDraggingNotificationToken;
    id  _scrollViewWillBeginDraggingNotificationToken;
    bool  _selectByPressGestureEnabled;
    _UIInterfaceActionSelectByPressGestureRecognizer * _selectByPressGestureRecognizer;
    bool  _selectionFeedbackEnabled;
    UILongPressGestureRecognizer * _selectionGestureRecognizer;
    UISelectionFeedbackGenerator * _selectionRetargetFeedbackGenerator;
    UIGestureRecognizer * _systemProvidedGestureRecognizer;
    UIView * _trackableContainerView;
    NSMutableSet * _viewsRequiringSelectionGestureDisabling;
    NSPointerArray * _weakCooperatingSelectionTrackingControllers;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } actionSelectionInitialLocationInContainerView;
@property (nonatomic) UIScrollView *actionsScrollView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *representationViews;
@property (nonatomic, retain) id scrollViewDidEndDeceleratingNotificationToken;
@property (nonatomic, retain) id scrollViewDidEndDraggingNotificationToken;
@property (nonatomic, retain) id scrollViewWillBeginDraggingNotificationToken;
@property (nonatomic) bool selectByPressGestureEnabled;
@property (nonatomic, retain) _UIInterfaceActionSelectByPressGestureRecognizer *selectByPressGestureRecognizer;
@property (nonatomic) bool selectionFeedbackEnabled;
@property (nonatomic, readonly) UILongPressGestureRecognizer *selectionGestureRecognizer;
@property (nonatomic, retain) UISelectionFeedbackGenerator *selectionRetargetFeedbackGenerator;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIGestureRecognizer *systemProvidedGestureRecognizer;
@property (nonatomic) UIView *trackableContainerView;
@property (nonatomic, readonly) NSMutableSet *viewsRequiringSelectionGestureDisabling;
@property (nonatomic, retain) NSPointerArray *weakCooperatingSelectionTrackingControllers;

- (void).cxx_destruct;
- (id)_actionViewAtCurrentLocationForGestureRecognizer:(id)arg1;
- (id)_actionViewIncludingCooperatingActionViewsAtCurrentLocationForGestureRecognizer:(id)arg1;
- (id)_allActionViewsIncludingCooperatingActionViews;
- (id)_allGestureRecognizers;
- (bool)_allowSelectionForCurrentGestureLocationWithGestureRecognizer:(id)arg1;
- (void)_clearSystemProvidedGestureRecognizer;
- (bool)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_handleActionSelectionGestureRecognizer:(id)arg1;
- (void)_handleSystemProvidedGestureRecognizer:(id)arg1;
- (void)_initializeSelectionGestureRecognizer;
- (id)_interfaceActionOfFocusedRepresentationView;
- (void)_invokeHandlerForInterfaceAction:(id)arg1;
- (bool)_isPresentedAndVisible;
- (void)_noteScrollView:(id)arg1 isUserScrolling:(bool)arg2;
- (void)_performRecursivelyWithVisitedCooperatingControllers:(id)arg1 block:(id /* block */)arg2;
- (void)_registerForScrollViewNotifications;
- (void)_setSystemProvidedGestureRecognizer:(id)arg1;
- (bool)_shouldDisableSelectionTrackingIfScrollingScrollView:(id)arg1;
- (void)_unregisterForScrollViewNotifications;
- (struct CGPoint { double x1; double x2; })actionSelectionInitialLocationInContainerView;
- (id)actionsScrollView;
- (void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1;
- (void)dealloc;
- (id)focusedInterfaceAction;
- (void)handlePressedFocusedInterfaceAction:(id)arg1;
- (id)initWithTrackableContainerView:(id)arg1 actionsScrollView:(id)arg2;
- (id)representationViews;
- (id)scrollViewDidEndDeceleratingNotificationToken;
- (id)scrollViewDidEndDraggingNotificationToken;
- (id)scrollViewWillBeginDraggingNotificationToken;
- (bool)selectByPressGestureEnabled;
- (id)selectByPressGestureRecognizer;
- (bool)selectionFeedbackEnabled;
- (id)selectionGestureRecognizer;
- (id)selectionRetargetFeedbackGenerator;
- (void)setActionsScrollView:(id)arg1;
- (void)setCooperatingSelectionTrackingControllers:(id)arg1;
- (void)setRepresentationViews:(id)arg1;
- (void)setScrollViewDidEndDeceleratingNotificationToken:(id)arg1;
- (void)setScrollViewDidEndDraggingNotificationToken:(id)arg1;
- (void)setScrollViewWillBeginDraggingNotificationToken:(id)arg1;
- (void)setSelectByPressGestureEnabled:(bool)arg1;
- (void)setSelectByPressGestureRecognizer:(id)arg1;
- (void)setSelectionFeedbackEnabled:(bool)arg1;
- (void)setSelectionRetargetFeedbackGenerator:(id)arg1;
- (void)setTrackableContainerView:(id)arg1;
- (void)setWeakCooperatingSelectionTrackingControllers:(id)arg1;
- (id)systemProvidedGestureRecognizer;
- (id)trackableContainerView;
- (id)viewsRequiringSelectionGestureDisabling;
- (id)weakCooperatingSelectionTrackingControllers;

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