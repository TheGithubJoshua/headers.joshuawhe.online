//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata : PBCodable
{
    NSMutableArray *_cryptoSessions;	// 8 = 0x8
}

+ (Class)cryptoSessionsType;	// IMP=0x001000000015462f
- (void).cxx_destruct;	// IMP=0x00000000001550c2
@property(retain, nonatomic) NSMutableArray *cryptoSessions; // @synthesize cryptoSessions=_cryptoSessions;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000154f68
- (unsigned long long)hash;	// IMP=0x0000000000154f4b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000154eb1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000154cee
- (void)copyTo:(id)arg1;	// IMP=0x0000000000154c27
- (void)writeTo:(id)arg1;	// IMP=0x0000000000154af7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000154aea
- (id)dictionaryRepresentation;	// IMP=0x00000000001546ef
- (id)description;	// IMP=0x0000000000154640
- (id)cryptoSessionsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000154612
- (unsigned long long)cryptoSessionsCount;	// IMP=0x00000000001545f5
- (void)addCryptoSessions:(id)arg1;	// IMP=0x000000000015458b
- (void)clearCryptoSessions;	// IMP=0x000000000015456e

@end
