<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EKEventGestureControllerDelegate.h</title>
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

/protocols/EKEventGestureControllerDelegate.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol EKEventGestureControllerDelegate <NSObject>

@required

- (EKEvent *)createEventForEventGestureController:(EKEventGestureController *)arg1;
- (EKDayOccurrenceView *)createOccurrenceViewForEventGestureController:(EKEventGestureController *)arg1;
- (UIViewController *)currentPresentationController;
- (bool)didScrollWhenEventGestureController:(EKEventGestureController *)arg1 scrollTimerFiredToMoveLeft:(bool)arg2 right:(bool)arg3 vertically:(bool)arg4 towardPoint:(struct CGPoint { double x1; double x2; })arg5;
- (void)eventGestureController:(EKEventGestureController *)arg1 addViewToScroller:(UIView *)arg2 isAllDay:(bool)arg3;
- (void)eventGestureController:(EKEventGestureController *)arg1 adjustDraggingViewForAllDay:(bool)arg2;
- (double)eventGestureController:(EKEventGestureController *)arg1 dateAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)eventGestureController:(EKEventGestureController *)arg1 didCancelEditingOccurrence:(EKEvent *)arg2 fadedOut:(bool)arg3;
- (bool)eventGestureController:(EKEventGestureController *)arg1 didCommitOccurrence:(EKEvent *)arg2 toDate:(double)arg3 isAllDay:(bool)arg4 span:(long long)arg5;
- (void)eventGestureController:(EKEventGestureController *)arg1 didMoveToDate:(double)arg2 isAllDay:(bool)arg3;
- (void)eventGestureController:(EKEventGestureController *)arg1 didSetUpAtDate:(double)arg2 isAllDay:(bool)arg3;
- (void)eventGestureController:(EKEventGestureController *)arg1 didSingleTapOccurrence:(EKEvent *)arg2;
- (double)eventGestureController:(EKEventGestureController *)arg1 heightForOccurrenceViewOfDuration:(double)arg2 allDay:(bool)arg3;
- (bool)eventGestureController:(EKEventGestureController *)arg1 isAllDayAtPoint:(struct CGPoint { double x1; double x2; })arg2 requireInsistence:(bool)arg3;
- (EKDayOccurrenceView *)eventGestureController:(EKEventGestureController *)arg1 occurrenceViewAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (EKDayOccurrenceView *)eventGestureController:(EKEventGestureController *)arg1 occurrenceViewForOccurrence:(EKEvent *)arg2;
- (struct CGPoint { double x1; double x2; })eventGestureController:(EKEventGestureController *)arg1 pointAtDate:(double)arg2 isAllDay:(bool)arg3;
- (void)eventGestureController:(EKEventGestureController *)arg1 requestsPresentationOfViewController:(UIViewController *)arg2;
- (double)eventGestureController:(EKEventGestureController *)arg1 widthForOccurrenceViewOfDays:(unsigned long long)arg2;
- (double)eventGestureController:(EKEventGestureController *)arg1 yPositionPerhapsMatchingAllDayOccurrence:(EKEvent *)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;
- (UIView *)occurrenceViewSuperviewForEventGestureController:(EKEventGestureController *)arg1;
- (double)timedRegionOriginForEventGestureController:(EKEventGestureController *)arg1;
- (UIView *)touchTrackingViewForEventGestureController:(EKEventGestureController *)arg1;

@optional

- (void)cleanUpAfterGestureFailureForEventGestureController:(EKEventGestureController *)arg1;
- (double)computeXDragOffsetForEventGestureController:(EKEventGestureController *)arg1 currentX:(double)arg2 startX:(double)arg3;
- (bool)eventEditorPopoverActiveWhileDraggingForEventGestureController:(EKEventGestureController *)arg1;
- (double)eventGestureController:(EKEventGestureController *)arg1 convertXForMargin:(double)arg2;
- (void)eventGestureController:(EKEventGestureController *)arg1 requestsShowEvent:(EKEvent *)arg2;
- (bool)eventGestureController:(EKEventGestureController *)arg1 shouldFadeOccurrenceAfterFling:(EKEvent *)arg2;
- (void)eventGestureControllerDidEndDragSession:(EKEventGestureController *)arg1;
- (bool)eventGestureControllerShouldAllowLongPress:(EKEventGestureController *)arg1;
- (bool)hasCorrectParentForDraggingView:(UIView *)arg1 isAllDay:(bool)arg2;
- (double)horizontalOffsetForPagingForEventGestureController:(EKEventGestureController *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })marginFrameForEventGestureController:(EKEventGestureController *)arg1;
- (bool)moreThanOneDayVisibleForEventGestureController:(EKEventGestureController *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })pageChangeMarginsForEventGestureController:(EKEventGestureController *)arg1;

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