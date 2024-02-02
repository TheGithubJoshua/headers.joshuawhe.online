//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRQueryItem, NSProgress;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRQueryItemProgressObserver : NSObject
{
    BRQueryItem *_item;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id _subscriber;	// 24 = 0x18
    NSProgress *_progress;	// 32 = 0x20
    _Bool _started;	// 40 = 0x28
    _Bool _isUpload;	// 41 = 0x29
    CDUnknownBlockType _progressHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000004b1f6
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(readonly, nonatomic) BRQueryItem *item; // @synthesize item=_item;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000004ae2c
- (void)start;	// IMP=0x000000000004ad8e
- (void)stop;	// IMP=0x000000000004ac1e
- (void)_subscribe;	// IMP=0x000000000004a565
- (void)_stopObserving;	// IMP=0x000000000004a525
- (void)setQueue:(id)arg1;	// IMP=0x000000000004a4da
- (id)description;	// IMP=0x000000000004a3d5
- (void)dealloc;	// IMP=0x000000000004a2f7
- (id)initWithItem:(id)arg1;	// IMP=0x000000000004a284

@end
