//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSManagedObjectContext, NSSet;

__attribute__((visibility("hidden")))
@interface _TtC12FeedbackCore23FBKManagedObjectChanges : NSObject
{
    MISSING_TYPE *notification;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000000f2140
- (id)init;	// IMP=0x00000000000f20e0
@property(nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property(nonatomic, readonly) _Bool invalidatedAllObjects;
@property(nonatomic, readonly) NSSet *invalidatedObjects;
@property(nonatomic, readonly) NSSet *refreshedObjects;
@property(nonatomic, readonly) NSSet *deletedObjects;
@property(nonatomic, readonly) NSSet *updatedObjects;
@property(nonatomic, readonly) NSSet *insertedObjects;

@end
