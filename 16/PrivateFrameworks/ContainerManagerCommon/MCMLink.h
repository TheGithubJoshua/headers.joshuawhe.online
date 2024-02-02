//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMContainerIdentityMinimal;

__attribute__((visibility("hidden")))
@interface MCMLink : NSObject
{
    _Bool _implied;	// 8 = 0x8
    MCMContainerIdentityMinimal *_originContainerIdentity;	// 16 = 0x10
    MCMContainerIdentityMinimal *_containerIdentity;	// 24 = 0x18
    unsigned long long _attributes;	// 32 = 0x20
}

+ (id)linkFromPlist:(id)arg1 originContainerIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x00100000000bddde
- (void).cxx_destruct;	// IMP=0x00000000000bdd93
@property(readonly, nonatomic) _Bool implied; // @synthesize implied=_implied;
@property(readonly, nonatomic) unsigned long long attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) MCMContainerIdentityMinimal *containerIdentity; // @synthesize containerIdentity=_containerIdentity;
@property(readonly, nonatomic) MCMContainerIdentityMinimal *originContainerIdentity; // @synthesize originContainerIdentity=_originContainerIdentity;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bdbf8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bdb68
- (_Bool)isFuzzyEqualToLink:(id)arg1;	// IMP=0x00000000000bdaac
- (_Bool)isEqualToLink:(id)arg1;	// IMP=0x00000000000bda17
- (unsigned long long)hash;	// IMP=0x00000000000bd9a9
- (id)description;	// IMP=0x00000000000bd8a9
- (id)linkInverted;	// IMP=0x00000000000bd77d
- (id)linkBySubtractingAttributes:(unsigned long long)arg1;	// IMP=0x00000000000bd698
- (id)linkByMergingWithLink:(id)arg1;	// IMP=0x00000000000bd47e
- (id)plist;	// IMP=0x00000000000bd2fd
- (id)initWithVersion1PlistDictionary:(id)arg1 originContainerIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x00000000000bcf19
- (id)initWithPlist:(id)arg1 originContainerIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x00000000000bcdcc
- (id)initWithLibsystemLink:(struct container_link_s *)arg1 defaultUserIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x00000000000bcc31
- (id)initWithOriginContainerIdentity:(id)arg1 containerIdentity:(id)arg2 attributes:(unsigned long long)arg3 implied:(_Bool)arg4;	// IMP=0x00000000000bcb2d

@end
