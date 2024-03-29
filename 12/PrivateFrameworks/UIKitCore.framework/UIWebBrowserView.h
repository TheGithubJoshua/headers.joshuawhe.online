<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIWebBrowserView.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIWebBrowserView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIWebBrowserView : UIWebDocumentView <UIWebFormAccessoryDelegate, UIWebTouchEventsGestureRecognizerDelegate, _UIWebRotationDelegate> {
    UIWebFormAccessory * _accessory;
    unsigned int  _accessoryEnabled;
    NSHashTable * _activeHighlighters;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _addressViewBounds;
    unsigned int  _allowDOMFocusRedirects;
    unsigned int  _allowsLinkPreview;
    unsigned int  _allowsPictureInPictureVideo;
    unsigned int  _alwaysDispatchesScrollEvents;
    DOMNode * _assistedNodeStartingFocusRedirects;
    unsigned long long  _audioSessionCategoryOverride;
    <UIWebAutoFillDelegate> * _autoFillDelegate;
    DOMNode * _currentAssistedNode;
    NSMutableArray * _deferredTouchEvents;
    unsigned long long  _dispatchedTouchEvents;
    UIResponder * _editingDelegateForEverythingExceptForms;
    NSMutableDictionary * _focusPreservingTokens;
    unsigned int  _forceInputView;
    UIWebFormDelegate * _formDelegate;
    unsigned int  _formIsAutoFilling;
    unsigned int  _hasEditedTextField;
    NSObject<UIFormPeripheral> * _input;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inputViewBounds;
    unsigned int  _inputViewObeysDOMFocus;
    double  _lastAdjustmentForScroller;
    struct { 
        NSMutableArray *all; 
        NSMutableArray *html; 
        NSMutableArray *javascript; 
        NSMutableArray *css; 
        NSMutableArray *error; 
        NSMutableArray *warning; 
        NSMutableArray *tip; 
        NSMutableArray *log; 
    }  _messages;
    NSMutableSet * _overflowScrollViews;
    NSMutableSet * _overflowScrollViewsPendingDeletion;
    NSMutableSet * _overflowScrollViewsPendingInsertion;
    struct { 
        UIWebPDFView *view; 
        NSTimer *timer; 
    }  _pdf;
    bool  _pendingGeometryChangeAfterOverflowScroll;
    NSLock * _pendingOverflowDataLock;
    NSMutableArray * _pendingOverflowScrolls;
    UIWebTouchEventsGestureRecognizer * _webTouchEventsGestureRecognizer;
}

@property (nonatomic, retain) UIWebFormAccessory *_accessory;
@property (nonatomic, retain) DOMNode *_currentAssistedNode;
@property (nonatomic) UIResponder *_editingDelegateForEverythingExceptForms;
@property (nonatomic, retain) NSObject<UIFormPeripheral> *_input;
@property (getter=isAccessoryEnabled, nonatomic) bool accessoryEnabled;
@property (nonatomic) bool allowDOMFocusRedirects;
@property (nonatomic) bool allowsInlineMediaPlayback;
@property (nonatomic) bool allowsLinkPreview;
@property (nonatomic) bool allowsPictureInPictureVideo;
@property (nonatomic) bool alwaysDispatchesScrollEvents;
@property (nonatomic) unsigned int audioSessionCategoryOverride;
@property (nonatomic) <UIWebAutoFillDelegate> *autoFillDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasEditedTextField;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inputViewObeysDOMFocus;
@property (nonatomic, readonly) bool isDispatchingTouchEvents;
@property (nonatomic) bool mediaPlaybackRequiresUserAction;
@property (nonatomic) NSString *networkInterfaceName;
@property (readonly) Class superclass;

+ (id)getUIWebBrowserViewForWebFrame:(id)arg1;
+ (void)initialize;

- (id)_absoluteUrlRelativeToDocumentURL:(id)arg1;
- (id)_accessory;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_activeRectForRectToCenter:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_addAdditionalSubview:(id)arg1;
- (void)_assistFormNode:(id)arg1;
- (void)_autoFillFrame:(id)arg1;
- (void)_beginAllowingFocusRedirects;
- (void)_centerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSizeChange:(bool)arg2 withVisibleHeight:(double)arg3 pinningEdge:(unsigned long long)arg4;
- (void)_centerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSizeChange:(bool)arg2 withVisibleHeight:(double)arg3 pinningEdge:(unsigned long long)arg4 toValue:(double)arg5;
- (void)_clearAllConsoleMessages;
- (void)_clearFormAutoFillStateForFrame:(id)arg1;
- (void)_clearSelectionAndUI;
- (void)_clearToken:(id)arg1;
- (id)_collectAdditionalSubviews;
- (struct CGPoint { double x1; double x2; })_convertWindowPointToViewport:(struct CGPoint { double x1; double x2; })arg1;
- (id)_currentAssistedNode;
- (struct CGSize { double x1; double x2; })_defaultScrollViewContentSize;
- (void)_deferWebEvent:(id)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_didScroll;
- (void)_dispatchWebEvent:(id)arg1;
- (void)_displayFormNodeInputView;
- (bool)_dumpWebArchiveAtPath:(id)arg1;
- (id)_editingDelegate;
- (id)_editingDelegateForEverythingExceptForms;
- (void)_endAllowingFocusRedirects;
- (void)_endDeferringEvents;
- (void)_handleDeferredEvents;
- (bool)_hasSubviewContainingWebContent:(id)arg1;
- (id)_input;
- (bool)_isAutoFilling;
- (bool)_keepKeyboardVisibleDuringFocusRedirects;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_keyboardDidHide:(id)arg1;
- (id)_keyboardResponder;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_nextAccessoryTab:(id)arg1;
- (void)_noteOverflowScrollViewPendingDeletion:(id)arg1;
- (void)_noteOverflowScrollViewPendingInsertion:(id)arg1;
- (void)_overflowScrollView:(id)arg1 didEndScrollingForNode:(id)arg2;
- (void)_overflowScrollView:(id)arg1 scrollOffsetChangedForNode:(id)arg2 whileScrolling:(bool)arg3;
- (void)_overflowScrollView:(id)arg1 willStartScrollingForNode:(id)arg2;
- (void)_preserveFocusWithToken:(id)arg1 destructively:(bool)arg2;
- (void)_prevAccessoryTab:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (void)_reloadInputViewsAfterPotentialFocusRedirect;
- (void)_removeAdditionalSubview:(id)arg1;
- (void)_removeFindOnPageHighlighter:(id)arg1;
- (bool)_requiresKeyboardResetOnReload;
- (bool)_requiresKeyboardWhenFirstResponder;
- (void)_resetFormDataForFrame:(id)arg1;
- (bool)_restoreFocusWithToken:(id)arg1;
- (void)_scrollCaretToVisible:(id)arg1;
- (void)_setInputViewBoundsForAutomaticKeyboardInfo:(id)arg1 adjustScrollView:(bool)arg2;
- (void)_setSelectedDOMRangeAndUpdateUI:(id)arg1;
- (void)_setUnobscuredSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)_shouldDeferEvents;
- (bool)_shouldRestorationInputViewsOnlyWhenKeepingFirstResponder;
- (void)_startAssistingKeyboard;
- (void)_startAssistingNode:(id)arg1;
- (void)_startDeferringEvents;
- (void)_startURLificationIfNeededCoalesce:(bool)arg1;
- (void)_stopAssistingFormNode;
- (void)_stopAssistingKeyboard;
- (void)_stopAssistingNode:(id)arg1;
- (void)_transliterateChinese:(id)arg1;
- (void)_updateAccessory;
- (void)_updateAutoFillButton;
- (void)_updateFixedPositionContent;
- (void)_updateFixedPositioningObjectsLayoutAfterScroll;
- (void)_updateFixedPositioningObjectsLayoutAfterVisibleGeometryChange;
- (void)_updateFixedPositioningObjectsLayoutDuringScroll;
- (void)_updateFixedPositioningObjectsLayoutSoon;
- (void)_updateScrollerViewForInputView:(id)arg1;
- (void)_webThreadOverflowScrollOffsetChanged;
- (void)_webTouchEventsRecognized:(id)arg1;
- (void)_webViewFormEditedStatusHasChanged:(id)arg1;
- (void)_zoomToNode:(id)arg1 forceScroll:(bool)arg2;
- (void)_zoomToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ensuringVisibilityOfRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withScale:(double)arg3 forceScroll:(bool)arg4;
- (void)_zoomToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ensuringVisibilityOfRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withScale:(double)arg3 forceScroll:(bool)arg4 formAssistantFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 animationDuration:(double)arg6;
- (void)_zoomToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withScale:(double)arg2;
- (void)acceptedAutoFillWord:(id)arg1;
- (void)accessoryAutoFill;
- (void)accessoryClear;
- (void)accessoryDone;
- (void)accessoryTab:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })activeRectForRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)addFindOnPageHighlighter;
- (bool)allowDOMFocusRedirects;
- (bool)allowsInlineMediaPlayback;
- (bool)allowsLinkPreview;
- (bool)allowsPictureInPictureVideo;
- (bool)alwaysDispatchesScrollEvents;
- (bool)appendOverflowScrollForNode:(id)arg1 offset:(struct CGPoint { double x1; double x2; })arg2 whileScrolling:(bool)arg3;
- (void)assistFormNode:(id)arg1;
- (unsigned int)audioSessionCategoryOverride;
- (id)autoFillDelegate;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)clearMessagesMatchingMask:(int)arg1;
- (bool)considerHeightOfRectOfInterestForRotation;
- (struct CGSize { double x1; double x2; })contentSizeForScrollView:(id)arg1;
- (void)copy:(id)arg1;
- (void)dealloc;
- (void)formDelegateTextDidChange;
- (id)formElement;
- (bool)hasEditedTextField;
- (double)heightToKeepVisible;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithWebView:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)inputAccessoryView;
- (id)inputView;
- (bool)inputViewObeysDOMFocus;
- (void)installGestureRecognizers;
- (bool)isAccessoryEnabled;
- (bool)isAnyTouchOverActiveArea:(id)arg1;
- (bool)isAutoFillMode;
- (bool)isDispatchingTouchEvents;
- (bool)isEditable;
- (id)keyCommands;
- (bool)mediaPlaybackRequiresUserAction;
- (id)messagesMatchingMask:(int)arg1;
- (double)minimumVerticalContentOffset;
- (id)networkInterfaceName;
- (bool)playsNicelyWithGestures;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfInterestForRotation;
- (void)redrawScaledDocument;
- (bool)resignFirstResponder;
- (void)rotateEnclosingScrollViewToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)scaleForProposedNewScale:(double)arg1 andOldScale:(double)arg2;
- (struct { double x1; double x2; double x3; })scalesForContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setAccessoryEnabled:(bool)arg1;
- (void)setAllowDOMFocusRedirects:(bool)arg1;
- (void)setAllowsInlineMediaPlayback:(bool)arg1;
- (void)setAllowsLinkPreview:(bool)arg1;
- (void)setAllowsPictureInPictureVideo:(bool)arg1;
- (void)setAlwaysDispatchesScrollEvents:(bool)arg1;
- (void)setAudioSessionCategoryOverride:(unsigned int)arg1;
- (void)setAutoFillDelegate:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInputViewObeysDOMFocus:(bool)arg1;
- (void)setMediaPlaybackRequiresUserAction:(bool)arg1;
- (void)setNetworkInterfaceName:(id)arg1;
- (void)set_accessory:(id)arg1;
- (void)set_currentAssistedNode:(id)arg1;
- (void)set_editingDelegateForEverythingExceptForms:(id)arg1;
- (void)set_input:(id)arg1;
- (bool)shouldIgnoreWebTouch;
- (void)simulateDidScroll;
- (id)textDocument;
- (id)textFormElement;
- (void)updateBoundariesOfScrollView:(id)arg1 withScales:(struct { double x1; double x2; double x3; })arg2;
- (void)webView:(id)arg1 addMessageToConsole:(id)arg2 withSource:(id)arg3;
- (void)webView:(id)arg1 didCreateOrUpdateScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 scrollSize:(id)arg4 forNode:(id)arg5 allowHorizontalScrollbar:(bool)arg6 allowVerticalScrollbar:(bool)arg7;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 elementDidBlurNode:(id)arg2;
- (void)webView:(id)arg1 elementDidFocusNode:(id)arg2;
- (void)webView:(id)arg1 willCloseFrame:(id)arg2;
- (void)webView:(id)arg1 willRemoveScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 forNode:(id)arg4;
- (void)webViewDidCommitCompositingLayerChanges:(id)arg1;
- (void)webViewDidPreventDefaultForEvent:(id)arg1;

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
