//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface MTLSimCommandStoragePool : NSObject
{
    struct StorageEntry *head;	// 8 = 0x8
    struct StorageEntry *tail;	// 16 = 0x10
    unsigned long long storageSize;	// 24 = 0x18
    NSObject<OS_dispatch_semaphore> *semaphore;	// 32 = 0x20
}

- (void)returnStorage:(struct StorageEntry *)arg1;	// IMP=0x000000000000e2b8
- (struct StorageEntry *)getStorage;	// IMP=0x000000000000e24e
- (struct StorageEntry *)allocStorage;	// IMP=0x000000000000e1b8
- (void)dealloc;	// IMP=0x000000000000e150
- (id)initWithEntrySize:(unsigned long long)arg1;	// IMP=0x000000000000e100

@end
