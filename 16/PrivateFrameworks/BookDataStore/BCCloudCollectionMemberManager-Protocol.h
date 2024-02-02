//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookDataStore/BDSCloudKitSupportSignOutDissociate-Protocol.h>
#import <BookDataStore/NSObject-Protocol.h>

@class BCMutableCloudSyncVersions, BCMutableCollectionMember, NSArray, NSDictionary, NSString;

@protocol BCCloudCollectionMemberManager <NSObject, BDSCloudKitSupportSignOutDissociate>
- (void)getCollectionMemberChangesSince:(BCMutableCloudSyncVersions *)arg1 completion:(void (^)(NSSet *, NSSet *, BCMutableCloudSyncVersions *, NSError *, _Bool))arg2;
- (void)fetchMaxSortOrderInCollectionID:(NSString *)arg1 completion:(void (^)(int, NSError *))arg2;
- (void)fetchCollectionMembersInCollectionID:(NSString *)arg1 completion:(void (^)(NSArray *, BCMutableCloudSyncVersions *, NSError *))arg2;
- (void)fetchCollectionMembersIncludingDeleted:(_Bool)arg1 completion:(void (^)(NSArray *, BCMutableCloudSyncVersions *, NSError *))arg2;
- (void)collectionMemberForCollectionMemberID:(NSString *)arg1 completion:(void (^)(BCMutableCollectionMember *, NSError *))arg2;
- (void)deleteCollectionMemberForCollectionMemberIDs:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)deleteCollectionMemberForCollectionMemberID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)setCollectionMembers:(NSDictionary *)arg1 completion:(void (^)(_Bool, _Bool, NSError *))arg2;
- (void)setCollectionMember:(BCMutableCollectionMember *)arg1 completion:(void (^)(_Bool, _Bool, NSError *))arg2;
- (void)currentCollectionMemberCloudSyncVersions:(void (^)(BCMutableCloudSyncVersions *))arg1;
@end
