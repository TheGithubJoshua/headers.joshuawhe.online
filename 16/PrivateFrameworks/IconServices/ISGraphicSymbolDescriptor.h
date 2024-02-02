//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IconFoundation/IFGraphicSymbolDescriptor.h>

@class ISResourceProvider, NSURL;

__attribute__((visibility("hidden")))
@interface ISGraphicSymbolDescriptor : IFGraphicSymbolDescriptor
{
    NSURL *__url;	// 8 = 0x8
    ISResourceProvider *__resourceProvider;	// 16 = 0x10
}

+ (id)descriptorFromGraphicSymbolRecipe:(id)arg1;	// IMP=0x0000000000023d1f
- (void).cxx_destruct;	// IMP=0x0000000000024318
@property(retain) ISResourceProvider *_resourceProvider; // @synthesize _resourceProvider=__resourceProvider;
@property(retain) NSURL *_url; // @synthesize _url=__url;
- (id)description;	// IMP=0x00000000000241f6
@property(readonly) _Bool placeholder;

@end
