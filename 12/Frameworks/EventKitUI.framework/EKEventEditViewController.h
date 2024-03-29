<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EKEventEditViewController.h</title>
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

/Frameworks/EventKitUI.framework/EKEventEditViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI (1.0)
 */

@interface EKEventEditViewController : UINavigationController {
    bool  _completedWithAction;
    <EKEventEditViewDelegate> * _editViewDelegate;
    EKEventEditor * _editor;
    EKEvent * _event;
    NSString * _eventId;
    EKEventStore * _store;
    EKEventEditViewController * _strongSelf;
    NSString * _suggestionKey;
    int  _transitionForModalViewPresentation;
}

@property (nonatomic) bool canHideDoneAndCancelButtons;
@property (nonatomic) <EKEventEditViewDelegate> *editViewDelegate;
@property (nonatomic, retain) EKEventEditor *editor;
@property (nonatomic, retain) UIColor *editorBackgroundColor;
@property (nonatomic) double editorNavBarLeftContentInset;
@property (nonatomic) double editorNavBarRightContentInset;
@property (nonatomic, retain) EKEvent *event;
@property (nonatomic, retain) EKEventStore *eventStore;
@property (nonatomic) bool scrollToNotes;
@property (nonatomic) bool showAttachments;
@property (nonatomic, retain) EKEventEditViewController *strongSelf;
@property (nonatomic, retain) NSString *suggestionKey;
@property (nonatomic) bool timeImplicitlySet;
@property (nonatomic) int transitionForModalViewPresentation;

+ (id)eventEditViewControllerWithEvent:(id)arg1 eventStore:(id)arg2 editViewDelegate:(id)arg3;
+ (void)setDefaultDatesForEvent:(id)arg1;

- (void).cxx_destruct;
- (id)_eventEditorForTestingOnly;
- (void)_storeChanged:(id)arg1;
- (bool)canHideDoneAndCancelButtons;
- (void)cancelEditing;
- (void)completeAndSave;
- (void)dealloc;
- (id)editViewDelegate;
- (id)editor;
- (void)editor:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)editor:(id)arg1 prepareCalendarItemForEdit:(id)arg2;
- (id)editorBackgroundColor;
- (double)editorNavBarLeftContentInset;
- (double)editorNavBarRightContentInset;
- (id)event;
- (id)eventStore;
- (void)focusAndSelectStartDate;
- (void)focusAndSelectTitle;
- (void)focusTitle;
- (void)handleTapOutside;
- (bool)hasUnsavedChanges;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)refreshStartAndEndDates;
- (bool)saveWithSpan:(long long)arg1 animated:(bool)arg2;
- (bool)scrollToNotes;
- (void)setCanHideDoneAndCancelButtons:(bool)arg1;
- (void)setEditViewDelegate:(id)arg1;
- (void)setEditor:(id)arg1;
- (void)setEditorBackgroundColor:(id)arg1;
- (void)setEditorNavBarLeftContentInset:(double)arg1;
- (void)setEditorNavBarRightContentInset:(double)arg1;
- (void)setEvent:(id)arg1;
- (void)setEventStore:(id)arg1;
- (void)setScrollToNotes:(bool)arg1;
- (void)setShowAttachments:(bool)arg1;
- (void)setStrongSelf:(id)arg1;
- (void)setSuggestionKey:(id)arg1;
- (void)setTimeImplicitlySet:(bool)arg1;
- (void)setTransitionForModalViewPresentation:(int)arg1;
- (bool)shouldAutorotate;
- (bool)showAttachments;
- (id)strongSelf;
- (id)suggestionKey;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)timeImplicitlySet;
- (int)transitionForModalViewPresentation;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)willPresentDialogOnSave;

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
