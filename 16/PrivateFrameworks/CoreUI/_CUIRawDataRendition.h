//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUIThemeRendition.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface _CUIRawDataRendition : CUIThemeRendition
{
    NSData *_dataBytes;	// 216 = 0xd8
}

- (id)data;	// IMP=0x000000000006e417
- (int)pixelFormat;	// IMP=0x000000000006e40c
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;	// IMP=0x000000000006e227
- (void)dealloc;	// IMP=0x000000000006e1e1
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;	// IMP=0x000000000006e1cf

@end
