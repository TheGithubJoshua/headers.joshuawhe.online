//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (CALExtensions)
+ (id)iDiskSmallNameCompatibleNameForFilename:(id)arg1;	// IMP=0x008000000001269c
+ (id)davCompatibleFilenameForFilename:(id)arg1;	// IMP=0x00800000000125aa
+ (id)URLWithDirtyString:(id)arg1;	// IMP=0x0080000000013231
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;	// IMP=0x0080000000013096
+ (int)classicPortForScheme:(id)arg1;	// IMP=0x0080000000013028
- (id)pathWithoutDecodingAndRemovingTrailingSlash;	// IMP=0x0010000000012c8e
- (id)pathWithoutTrailingRemovingSlash;	// IMP=0x0010000000012bd2
- (id)serverURL;	// IMP=0x0010000000012a6f
- (id)unquotedPassword;	// IMP=0x0010000000012a1f
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 path:(id)arg4;	// IMP=0x0010000000012844
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;	// IMP=0x00100000000122d0
- (id)queryParameters;	// IMP=0x001000000001200c
- (id)calDAV_leastInfoStringRepresentationRelativeToParentURL:(id)arg1;	// IMP=0x0010000000013c52
- (_Bool)absoluteURLisEqual:(id)arg1;	// IMP=0x0010000000013b83
- (id)URLWithoutPassword;	// IMP=0x0010000000013aed
- (id)URLWithoutUsername;	// IMP=0x00100000000139c2
- (id)URLWithUsername:(id)arg1;	// IMP=0x00100000000137bb
- (id)uri;	// IMP=0x00100000000136ef
- (id)initWithDirtyString:(id)arg1;	// IMP=0x001000000001327e
@end
