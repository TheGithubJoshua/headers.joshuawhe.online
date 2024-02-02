//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, SFDialogTextField, SFDialogTextView, SFDialogView, UIButton, UIStackView, UITableView;

__attribute__((visibility("hidden")))
@interface SFDialogContentView : UIView
{
    NSArray *_actionButtons;	// 8 = 0x8
    UIStackView *_actionButtonsView;	// 16 = 0x10
    UIButton *_closeButton;	// 24 = 0x18
    unsigned long long _actionIndexTriggeredByOptionReturnKey;	// 32 = 0x20
    unsigned long long _actionIndexTriggeredByEscapeKey;	// 40 = 0x28
    unsigned long long _actionIndexTriggeredByReturnKey;	// 48 = 0x30
    _Bool _hasAttemptedHardwareKeyboardFocus;	// 56 = 0x38
    SFDialogTextField *_inputTextField;	// 64 = 0x40
    NSArray *_layoutConstraintsWhenInputIsVisible;	// 72 = 0x48
    NSArray *_layoutConstraintsWhenPasswordIsVisible;	// 80 = 0x50
    NSArray *_layoutConstraintsWhenInputAndPasswordAreVisible;	// 88 = 0x58
    SFDialogTextView *_messageTextView;	// 96 = 0x60
    SFDialogTextField *_passwordTextField;	// 104 = 0x68
    NSLayoutConstraint *_actionButtonsLeadingConstraintForHorizontalStackAlignment;	// 112 = 0x70
    NSLayoutConstraint *_actionButtonsLeadingConstraintForVerticalStackAlignment;	// 120 = 0x78
    UITableView *_tableView;	// 128 = 0x80
    NSArray *_tableData;	// 136 = 0x88
    CDUnknownBlockType _tableDidSelectRowAction;	// 144 = 0x90
    long long _selectedRow;	// 152 = 0x98
    NSArray *_layoutConstraintsWhenTableViewIsVisible;	// 160 = 0xa0
    NSLayoutConstraint *_tableViewHeightConstraint;	// 168 = 0xa8
    SFDialogView *_dialogView;	// 176 = 0xb0
    NSArray *_actions;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0000000000087b58
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(nonatomic) __weak SFDialogView *dialogView; // @synthesize dialogView=_dialogView;
- (void)_invokeDelegateWithSelectedIndex:(unsigned long long)arg1;	// IMP=0x0000000000087a4b
- (void)_escapeAction:(id)arg1;	// IMP=0x0000000000087a2e
- (void)_optionReturnAction:(id)arg1;	// IMP=0x0000000000087a11
- (void)_returnAction:(id)arg1;	// IMP=0x00000000000879f4
- (void)_focusInputTextField:(id)arg1;	// IMP=0x00000000000879d7
- (void)_actionTriggered:(id)arg1;	// IMP=0x000000000008799b
- (_Bool)_usesLoginFormAppearance;	// IMP=0x0000000000087953
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000087738
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000087450
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000087433
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000000873b7
- (void)didAppear;	// IMP=0x000000000008739a
- (void)setTableViewRows:(id)arg1 didSelectRowAction:(CDUnknownBlockType)arg2;	// IMP=0x0000000000087283
- (void)_updateActionButtons;	// IMP=0x000000000008711f
- (void)endEditing;	// IMP=0x0000000000086abe
- (void)_setText:(id)arg1 placeholder:(id)arg2 forTextField:(id)arg3;	// IMP=0x0000000000086a22
- (void)setPasswordText:(id)arg1 placeholder:(id)arg2;	// IMP=0x000000000008696b
- (void)setInputText:(id)arg1 placeholder:(id)arg2;	// IMP=0x000000000008694e
- (void)setMessageText:(id)arg1;	// IMP=0x0000000000086931
- (void)setTitleText:(id)arg1;	// IMP=0x0000000000086914
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000086834
- (void)layoutSubviews;	// IMP=0x0000000000086456
- (double)_desiredButtonsWidth;	// IMP=0x00000000000861a1
- (void)updateConstraints;	// IMP=0x0000000000086045
- (_Bool)_wantsPriorityOverFocusUpdates;	// IMP=0x000000000008603d
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000000085f35
- (id)keyCommands;	// IMP=0x0000000000085de1
- (_Bool)becomeFirstResponder;	// IMP=0x0000000000085caa
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000000085ca2
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000085c73
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000084763

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
