//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableData, _HMFCFHTTPServerConnection;

__attribute__((visibility("hidden")))
@interface _HMFCFHTTPServerRequest
{
    struct _CFHTTPServerRequest *_requestRef;	// 8 = 0x8
    struct __CFReadStream *_bodyStream;	// 16 = 0x10
    _HMFCFHTTPServerConnection *_connection;	// 24 = 0x18
    NSMutableData *_bodyData;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003840a
@property(readonly, nonatomic) NSMutableData *bodyData; // @synthesize bodyData=_bodyData;
@property(readonly, nonatomic) __weak _HMFCFHTTPServerConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) struct __CFReadStream *bodyStream; // @synthesize bodyStream=_bodyStream;
@property(readonly, nonatomic) struct _CFHTTPServerRequest *requestRef; // @synthesize requestRef=_requestRef;
- (void)setBody:(id)arg1;	// IMP=0x0000000000038308
- (void)setHeaders:(id)arg1;	// IMP=0x0000000000038252
- (void)setMethod:(id)arg1;	// IMP=0x000000000003819c
- (void)setURL:(id)arg1;	// IMP=0x00000000000380e6
- (id)body;	// IMP=0x0000000000038071
- (id)headerFields;	// IMP=0x0000000000037fe7
- (id)method;	// IMP=0x0000000000037fbb
- (id)URL;	// IMP=0x0000000000037f8f
- (void)appendBodyData:(id)arg1;	// IMP=0x0000000000037f72
- (id)responseWithStatusCode:(long long)arg1;	// IMP=0x0000000000037f37
- (id)attributeDescriptions;	// IMP=0x0000000000037e4b
- (void)dealloc;	// IMP=0x0000000000037dd3
- (id)initWithConnection:(id)arg1 requestRef:(struct _CFHTTPServerRequest *)arg2;	// IMP=0x0000000000037d0e
- (id)init;	// IMP=0x0000000000037c66

@end
