//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FBSSceneClientSettingsDiff, FBSSceneIdentity, FBSSceneMessage, FBSSceneTransitionContext, FBSWorkspaceSceneRequestOptions, NSSet;
@protocol __BSAction__, __FBSWorkspaceSceneRemnant__;

@protocol FBSWorkspaceServiceClientInterface
- (oneway void)sceneID:(FBSSceneIdentity *)arg1 sendMessage:(FBSSceneMessage *)arg2 withResponse:(void (^)(FBSSceneMessage *, NSError *))arg3;
- (oneway void)sceneID:(FBSSceneIdentity *)arg1 didReceiveActions:(NSSet<__BSAction__> *)arg2;
- (oneway void)sceneID:(FBSSceneIdentity *)arg1 didUpdateClientSettingsWithDiff:(FBSSceneClientSettingsDiff *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3;
- (oneway void)requestSceneWithOptions:(FBSWorkspaceSceneRequestOptions *)arg1 completion:(void (^)(FBSSceneIdentity *, NSError *))arg2;
- (oneway void)handshakeWithRemnants:(NSSet<__FBSWorkspaceSceneRemnant__> *)arg1;
@end
