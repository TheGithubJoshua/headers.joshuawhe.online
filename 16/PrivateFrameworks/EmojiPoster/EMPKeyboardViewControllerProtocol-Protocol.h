//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;
@protocol UIKeyInput;

@protocol EMPKeyboardViewControllerProtocol
@property(nonatomic) _Bool shouldUpdateLayoutAutomatically;
@property(nonatomic, readonly) UIView *inputAssistantView;
@property(nonatomic, readonly) UIView *pathEffectView;
@property(nonatomic, retain) UIView<UIKeyInput> *textInputView;
@end
