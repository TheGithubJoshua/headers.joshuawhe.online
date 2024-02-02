//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSArray, NSMutableOrderedSet;

@interface AKSegmentedCtrl : UIControl
{
    unsigned long long _selectionType;	// 8 = 0x8
    unsigned long long _selectedSegment;	// 16 = 0x10
    NSArray *_images;	// 24 = 0x18
    NSArray *_buttons;	// 32 = 0x20
    NSMutableOrderedSet *_selectionStack;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000d7ba1
@property(retain, nonatomic) NSMutableOrderedSet *selectionStack; // @synthesize selectionStack=_selectionStack;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
@property(nonatomic) unsigned long long selectedSegment; // @synthesize selectedSegment=_selectedSegment;
@property(nonatomic) unsigned long long selectionType; // @synthesize selectionType=_selectionType;
- (unsigned long long)segmentCount;	// IMP=0x00000000000d7ab0
- (id)segmentForTag:(long long)arg1;	// IMP=0x00000000000d793a
- (long long)tagForSegment:(unsigned long long)arg1;	// IMP=0x00000000000d78f6
- (void)setTag:(long long)arg1 forSegment:(unsigned long long)arg2;	// IMP=0x00000000000d78a7
- (id)segmentAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d77ff
- (_Bool)isEnabledForSegment:(unsigned long long)arg1;	// IMP=0x00000000000d77bb
- (void)setEnabled:(_Bool)arg1 forSegment:(unsigned long long)arg2;	// IMP=0x00000000000d776c
- (void)deselectAllSegments;	// IMP=0x00000000000d7592
- (void)selectSegmentWithTag:(long long)arg1;	// IMP=0x00000000000d7513
- (_Bool)isSelectedForSegment:(unsigned long long)arg1;	// IMP=0x00000000000d747b
- (void)setSelected:(_Bool)arg1 forSegment:(unsigned long long)arg2;	// IMP=0x00000000000d73ae
- (void)_setSelected:(_Bool)arg1 forSegment:(unsigned long long)arg2;	// IMP=0x00000000000d7119
- (void)_buttonTapped:(id)arg1;	// IMP=0x00000000000d7069
- (void)_configureForNewImages;	// IMP=0x00000000000d66c4
- (void)_commonInit;	// IMP=0x00000000000d665d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000d6644
- (id)initWithImages:(id)arg1;	// IMP=0x00000000000d659e

@end
