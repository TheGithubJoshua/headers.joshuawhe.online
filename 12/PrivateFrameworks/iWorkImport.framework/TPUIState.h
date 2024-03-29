<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TPUIState.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TPUIState.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TPUIState : NSObject <NSCopying> {
    TSKAnnotationAuthor * _authorForFiltering;
    NSString * _authorForFilteringName;
    bool  _changeTrackingPaused;
    NSDictionary * _chartUIState;
    TSDFreehandDrawingToolkitUIState * _freehandDrawingToolkitUIState;
    bool  _hasShowsCTDeletions;
    bool  _hasShowsCTMarkup;
    bool  _inspectorHidden;
    bool  _layoutBordersVisible;
    bool  _masterDrawablesSelectable;
    long long  _pageViewState;
    bool  _pencilAnnotationsHidden;
    double  _presentationAutoScrollSpeed;
    bool  _rulersVisible;
    NSString * _selectedInspectorSwitchSegmentIdentifier;
    TSKSelectionPath * _selectionPath;
    bool  _showUserDefinedGuides;
    bool  _showsActivitySidebar;
    bool  _showsCTDeletions;
    bool  _showsCTMarkup;
    bool  _showsComments;
    bool  _showsPageNavigator;
    double  _viewScale;
    long long  _viewScaleMode;
    long long  _viewScaleModeiOS;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _windowFrame;
    struct CGPoint { 
        double x; 
        double y; 
    }  _wordCountHUDPosition;
    int  _wordCountHUDType;
    bool  _wordCountHUDVisible;
}

@property (nonatomic, retain) TSKAnnotationAuthor *authorForFiltering;
@property (nonatomic, copy) NSString *authorForFilteringName;
@property (nonatomic) bool changeTrackingPaused;
@property (nonatomic, copy) NSDictionary *chartUIState;
@property (nonatomic, retain) TSDFreehandDrawingToolkitUIState *freehandDrawingToolkitUIState;
@property (nonatomic, readonly) bool hasShowsCTDeletions;
@property (nonatomic, readonly) bool hasShowsCTMarkup;
@property (nonatomic) bool inspectorHidden;
@property (nonatomic) bool layoutBordersVisible;
@property (nonatomic) bool masterDrawablesSelectable;
@property (nonatomic) long long pageViewState;
@property (nonatomic) bool pencilAnnotationsHidden;
@property (nonatomic) double presentationAutoScrollSpeed;
@property (nonatomic) bool rulersVisible;
@property (nonatomic, copy) NSString *selectedInspectorSwitchSegmentIdentifier;
@property (nonatomic, copy) TSKSelectionPath *selectionPath;
@property (nonatomic) bool showUserDefinedGuides;
@property (nonatomic) bool showsActivitySidebar;
@property (nonatomic) bool showsCTDeletions;
@property (nonatomic) bool showsCTMarkup;
@property (nonatomic) bool showsComments;
@property (nonatomic) bool showsPageNavigator;
@property (nonatomic) double viewScale;
@property (nonatomic) long long viewScaleMode;
@property (nonatomic) long long viewScaleModeiOS;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } windowFrame;
@property (nonatomic) struct CGPoint { double x1; double x2; } wordCountHUDPosition;
@property (nonatomic) int wordCountHUDType;
@property (nonatomic) bool wordCountHUDVisible;

- (void).cxx_destruct;
- (id)archivedUIStateInContext:(id)arg1;
- (id)authorForFiltering;
- (id)authorForFilteringName;
- (bool)changeTrackingPaused;
- (id)chartUIState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)freehandDrawingToolkitUIState;
- (bool)hasShowsCTDeletions;
- (bool)hasShowsCTMarkup;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct UIStateArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<2> { unsigned int x_3_1_1[2]; } x3; struct RepeatedPtrField<TSCH::ChartUIState> { struct Arena {} *x_4_1_1; int x_4_1_2; int x_4_1_3; struct Rep {} *x_4_1_4; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct Point {} *x7; struct Reference {} *x8; struct Reference {} *x9; struct Size {} *x10; struct Point {} *x11; struct Size {} *x12; struct SelectionPathArchive {} *x13; struct SelectionPathArchive {} *x14; struct Reference {} *x15; struct Reference {} *x16; struct Reference {} *x17; float x18; bool x19; bool x20; bool x21; bool x22; int x23; unsigned int x24; float x25; bool x26; bool x27; bool x28; bool x29; float x30; int x31; bool x32; float x33; float x34; bool x35; bool x36; bool x37; bool x38; bool x39; int x40; }*)arg1 unarchiver:(id)arg2;
- (bool)inspectorHidden;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToUIState:(id)arg1;
- (bool)layoutBordersVisible;
- (bool)masterDrawablesSelectable;
- (long long)pageViewState;
- (bool)pencilAnnotationsHidden;
- (double)presentationAutoScrollSpeed;
- (bool)rulersVisible;
- (void)saveToArchive:(struct UIStateArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<2> { unsigned int x_3_1_1[2]; } x3; struct RepeatedPtrField<TSCH::ChartUIState> { struct Arena {} *x_4_1_1; int x_4_1_2; int x_4_1_3; struct Rep {} *x_4_1_4; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct Point {} *x7; struct Reference {} *x8; struct Reference {} *x9; struct Size {} *x10; struct Point {} *x11; struct Size {} *x12; struct SelectionPathArchive {} *x13; struct SelectionPathArchive {} *x14; struct Reference {} *x15; struct Reference {} *x16; struct Reference {} *x17; float x18; bool x19; bool x20; bool x21; bool x22; int x23; unsigned int x24; float x25; bool x26; bool x27; bool x28; bool x29; float x30; int x31; bool x32; float x33; float x34; bool x35; bool x36; bool x37; bool x38; bool x39; int x40; }*)arg1 archiver:(id)arg2 context:(id)arg3;
- (id)selectedInspectorSwitchSegmentIdentifier;
- (id)selectionPath;
- (void)setAuthorForFiltering:(id)arg1;
- (void)setAuthorForFilteringName:(id)arg1;
- (void)setChangeTrackingPaused:(bool)arg1;
- (void)setChartUIState:(id)arg1;
- (void)setFreehandDrawingToolkitUIState:(id)arg1;
- (void)setInspectorHidden:(bool)arg1;
- (void)setLayoutBordersVisible:(bool)arg1;
- (void)setMasterDrawablesSelectable:(bool)arg1;
- (void)setPageViewState:(long long)arg1;
- (void)setPencilAnnotationsHidden:(bool)arg1;
- (void)setPresentationAutoScrollSpeed:(double)arg1;
- (void)setRulersVisible:(bool)arg1;
- (void)setSelectedInspectorSwitchSegmentIdentifier:(id)arg1;
- (void)setSelectionPath:(id)arg1;
- (void)setShowUserDefinedGuides:(bool)arg1;
- (void)setShowsActivitySidebar:(bool)arg1;
- (void)setShowsCTDeletions:(bool)arg1;
- (void)setShowsCTMarkup:(bool)arg1;
- (void)setShowsComments:(bool)arg1;
- (void)setShowsPageNavigator:(bool)arg1;
- (void)setViewScale:(double)arg1;
- (void)setViewScaleMode:(long long)arg1;
- (void)setViewScaleModeiOS:(long long)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setWindowFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setWordCountHUDPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setWordCountHUDType:(int)arg1;
- (void)setWordCountHUDVisible:(bool)arg1;
- (bool)showUserDefinedGuides;
- (bool)showsActivitySidebar;
- (bool)showsCTDeletions;
- (bool)showsCTMarkup;
- (bool)showsComments;
- (bool)showsPageNavigator;
- (double)viewScale;
- (long long)viewScaleMode;
- (long long)viewScaleModeiOS;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })windowFrame;
- (struct CGPoint { double x1; double x2; })wordCountHUDPosition;
- (int)wordCountHUDType;
- (bool)wordCountHUDVisible;

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
