//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ETOpaqueCopy : NSObject
{
    struct shared_ptr<Espresso::abstract_blob_container> blob;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000004adac1
- (void).cxx_destruct;	// IMP=0x00000000004adab3
- (const void *)getBlob;	// IMP=0x00000000004adaa9
- (id)initWithAbstractBlobContainer:(void *)arg1;	// IMP=0x00000000004ad9ed

@end
