//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, VCPProtoBounds, VCPProtoTimeRange, VCPProtoVideoKeyFrame;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieHighlightResult : PBCodable
{
    NSData *_colorNormalizationBlob;	// 8 = 0x8
    float _curationScore;	// 16 = 0x10
    VCPProtoVideoKeyFrame *_keyFrame;	// 24 = 0x18
    VCPProtoBounds *_playbackCrop;	// 32 = 0x20
    VCPProtoTimeRange *_timeRange;	// 40 = 0x28
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x0010000000247c4d
- (void).cxx_destruct;	// IMP=0x00000000001af190
@property(retain, nonatomic) NSData *colorNormalizationBlob; // @synthesize colorNormalizationBlob=_colorNormalizationBlob;
@property(retain, nonatomic) VCPProtoBounds *playbackCrop; // @synthesize playbackCrop=_playbackCrop;
@property(retain, nonatomic) VCPProtoVideoKeyFrame *keyFrame; // @synthesize keyFrame=_keyFrame;
@property(nonatomic) float curationScore; // @synthesize curationScore=_curationScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001aefd5
- (unsigned long long)hash;	// IMP=0x00000000001aee64
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001aed1e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001aec1f
- (void)copyTo:(id)arg1;	// IMP=0x00000000001aeb72
- (void)writeTo:(id)arg1;	// IMP=0x00000000001aead1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001aeac4
- (id)dictionaryRepresentation;	// IMP=0x00000000001ae628
- (id)description;	// IMP=0x00000000001ae579
@property(readonly, nonatomic) _Bool hasColorNormalizationBlob;
- (id)exportToLegacyDictionary;	// IMP=0x00000000002480eb

@end
