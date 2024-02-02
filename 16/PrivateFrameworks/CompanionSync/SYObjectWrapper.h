//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SYObject;

__attribute__((visibility("hidden")))
@interface SYObjectWrapper : NSObject
{
    long long _type;	// 8 = 0x8
    id <SYObject> _wrappedObject;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000015bce
@property(readonly, nonatomic) id <SYObject> wrappedObject; // @synthesize wrappedObject=_wrappedObject;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long changeType;
@property(readonly, nonatomic) NSString *sequencer;
@property(readonly, nonatomic) NSString *objectIdentifier;
- (id)initWithSYObject:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000015a27

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
