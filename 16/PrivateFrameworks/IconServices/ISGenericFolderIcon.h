//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISResourceProvider;

__attribute__((visibility("hidden")))
@interface ISGenericFolderIcon
{
    ISResourceProvider *_resourceProvider;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00600000000101f3
- (void).cxx_destruct;	// IMP=0x0000000000010341
- (id)makeResourceProvider;	// IMP=0x000000000001032f
@property(readonly) ISResourceProvider *resourceProvider; // @synthesize resourceProvider=_resourceProvider;
- (id)init;	// IMP=0x0000000000010248

@end
