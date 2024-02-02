//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL, SFPunchout;

@protocol DDParsecHostVCInterface
- (void)remoteVCIsReady;
- (void)performClientTextQueryWithTerm:(NSString *)arg1 queryId:(unsigned long long)arg2 sessionId:(NSString *)arg3 userAgent:(NSString *)arg4 reply:(void (^)(NSArray *, NSError *))arg5;
- (void)performClientQueryWithServerAccessPermitted:(_Bool)arg1 localSearchPermitted:(_Bool)arg2;
- (void)openTrailerPunchout:(SFPunchout *)arg1;
- (void)getStatusBarHidden:(void (^)(_Bool))arg1;
- (void)openParsecURL:(NSURL *)arg1;
- (void)reportAnIssueWithReportIdentifier:(NSString *)arg1;
- (void)interactionEndedWithPunchout:(_Bool)arg1;
- (void)showingFTE:(_Bool)arg1;
- (void)showingErrorView:(_Bool)arg1;
@end
