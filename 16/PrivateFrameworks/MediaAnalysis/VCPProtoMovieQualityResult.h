//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieQualityResult : PBCodable
{
    float _qualityScore;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000025c14c
- (void).cxx_destruct;	// IMP=0x0000000000063a9c
@property(nonatomic) float qualityScore; // @synthesize qualityScore=_qualityScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000639e4
- (unsigned long long)hash;	// IMP=0x00000000000638cd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006381e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000063794
- (void)copyTo:(id)arg1;	// IMP=0x0000000000063736
- (void)writeTo:(id)arg1;	// IMP=0x00000000000636d5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000636c8
- (id)dictionaryRepresentation;	// IMP=0x00000000000633c4
- (id)description;	// IMP=0x0000000000063315
- (id)exportToLegacyDictionary;	// IMP=0x000000000025c2d0

@end
