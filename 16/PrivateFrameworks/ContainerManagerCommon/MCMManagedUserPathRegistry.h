//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMManagedPath, MCMUserIdentity;

__attribute__((visibility("hidden")))
@interface MCMManagedUserPathRegistry
{
    MCMUserIdentity *_userIdentity;	// 136 = 0x88
    MCMManagedPath *_userHome;	// 144 = 0x90
    MCMManagedPath *_userLibrary;	// 152 = 0x98
    MCMManagedPath *_containermanagerUserLibrary;	// 160 = 0xa0
    MCMManagedPath *_containermanagerUserPendingUpdates;	// 168 = 0xa8
    MCMManagedPath *_containermanagerUserReplaceOperations;	// 176 = 0xb0
    MCMManagedPath *_containermanagerUserDeleteOperations;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0000000000038ad4
@property(readonly, nonatomic) MCMManagedPath *containermanagerUserDeleteOperations; // @synthesize containermanagerUserDeleteOperations=_containermanagerUserDeleteOperations;
@property(readonly, nonatomic) MCMManagedPath *containermanagerUserReplaceOperations; // @synthesize containermanagerUserReplaceOperations=_containermanagerUserReplaceOperations;
@property(readonly, nonatomic) MCMManagedPath *containermanagerUserPendingUpdates; // @synthesize containermanagerUserPendingUpdates=_containermanagerUserPendingUpdates;
@property(readonly, nonatomic) MCMManagedPath *containermanagerUserLibrary; // @synthesize containermanagerUserLibrary=_containermanagerUserLibrary;
@property(readonly, nonatomic) MCMManagedPath *userLibrary; // @synthesize userLibrary=_userLibrary;
@property(readonly, nonatomic) MCMManagedPath *userHome; // @synthesize userHome=_userHome;
@property(readonly, nonatomic) MCMUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
- (void)_initPathPropertiesWithUserHomeDirectoryURL:(id)arg1 clientUser:(id)arg2;	// IMP=0x00000000000386ca
- (id)initWithUserIdentity:(id)arg1 daemonUser:(id)arg2;	// IMP=0x000000000003852a

@end
