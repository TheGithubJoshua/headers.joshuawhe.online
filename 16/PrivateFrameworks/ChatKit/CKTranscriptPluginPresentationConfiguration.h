//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface CKTranscriptPluginPresentationConfiguration : NSObject
{
    _Bool _shouldDisableSnapshotView;	// 8 = 0x8
    UIView *_sourceView;	// 16 = 0x10
    unsigned long long _permittedArrowDirections;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003936c2
@property(readonly, nonatomic) _Bool shouldDisableSnapshotView; // @synthesize shouldDisableSnapshotView=_shouldDisableSnapshotView;
@property(readonly, nonatomic) unsigned long long permittedArrowDirections; // @synthesize permittedArrowDirections=_permittedArrowDirections;
@property(readonly, nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
- (id)initWithSourceView:(id)arg1 permittedArrowDirections:(unsigned long long)arg2 shouldDisableSnapshotView:(_Bool)arg3;	// IMP=0x000000000039361f

@end
