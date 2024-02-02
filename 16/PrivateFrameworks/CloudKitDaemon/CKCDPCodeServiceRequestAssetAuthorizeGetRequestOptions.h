//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions : PBCodable
{
    unsigned long long _contentRequestAuthorizeGetOptions;	// 8 = 0x8
    NSMutableArray *_contentRequestHeaders;	// 16 = 0x10
    struct {
        unsigned int contentRequestAuthorizeGetOptions:1;
    } _has;	// 24 = 0x18
}

+ (Class)contentRequestHeadersType;	// IMP=0x0010000000261cae
- (void).cxx_destruct;	// IMP=0x00000000002629bf
@property(nonatomic) unsigned long long contentRequestAuthorizeGetOptions; // @synthesize contentRequestAuthorizeGetOptions=_contentRequestAuthorizeGetOptions;
@property(retain, nonatomic) NSMutableArray *contentRequestHeaders; // @synthesize contentRequestHeaders=_contentRequestHeaders;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000262812
- (unsigned long long)hash;	// IMP=0x00000000002627c2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000262701
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000026250d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000262426
- (void)writeTo:(id)arg1;	// IMP=0x00000000002622be
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002622b1
- (id)dictionaryRepresentation;	// IMP=0x0000000000261db4
- (id)description;	// IMP=0x0000000000261d05
@property(nonatomic) _Bool hasContentRequestAuthorizeGetOptions;
- (id)contentRequestHeadersAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000261c91
- (unsigned long long)contentRequestHeadersCount;	// IMP=0x0000000000261c74
- (void)addContentRequestHeaders:(id)arg1;	// IMP=0x0000000000261c0a
- (void)clearContentRequestHeaders;	// IMP=0x0000000000261bed

@end
