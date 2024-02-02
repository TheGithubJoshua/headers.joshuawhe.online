//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, NSString;

__attribute__((visibility("hidden")))
@interface BCSContactData : NSObject
{
    CNContact *_contact;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000bac2
- (void).cxx_destruct;	// IMP=0x000000000000bad4
@property(readonly, copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000ba9f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000ba1c
@property(readonly, copy, nonatomic) NSString *extraPreviewText;
@property(readonly, nonatomic) long long type;
- (id)initWithContact:(id)arg1;	// IMP=0x000000000000b97f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
