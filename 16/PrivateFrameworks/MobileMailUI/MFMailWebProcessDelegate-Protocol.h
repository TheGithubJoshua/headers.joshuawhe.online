//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileMailUI/NSObject-Protocol.h>

@class NSArray, NSURL;

@protocol MFMailWebProcessDelegate <NSObject>
- (void)webProcessDidCreateBrowserContextControllerLoadDelegate;
- (void)webProcessFailedToLoadResourceWithProxyForURL:(NSURL *)arg1 failureReason:(long long)arg2;
- (void)webProcessDidBlockLoadingResourceWithURL:(NSURL *)arg1;
- (void)webProcessDidFinishLoadForURL:(NSURL *)arg1;
- (void)webProcessDidFinishDocumentLoadForURL:(NSURL *)arg1 andRequestedRemoteURLs:(NSArray *)arg2;
- (void)webProcessDidFailLoadingResourceWithURL:(NSURL *)arg1;
@end
