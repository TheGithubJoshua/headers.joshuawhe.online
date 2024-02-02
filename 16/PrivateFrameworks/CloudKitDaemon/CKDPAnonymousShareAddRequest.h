//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface CKDPAnonymousShareAddRequest : PBRequest
{
    NSString *_anonymousShareTupleHash;	// 8 = 0x8
    NSData *_encryptedShareTuple;	// 16 = 0x10
}

+ (id)options;	// IMP=0x0010000000134682
- (void).cxx_destruct;	// IMP=0x0000000000134ceb
@property(retain, nonatomic) NSData *encryptedShareTuple; // @synthesize encryptedShareTuple=_encryptedShareTuple;
@property(retain, nonatomic) NSString *anonymousShareTupleHash; // @synthesize anonymousShareTupleHash=_anonymousShareTupleHash;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000134c3e
- (unsigned long long)hash;	// IMP=0x0000000000134bf1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000134b29
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000134a8b
- (void)copyTo:(id)arg1;	// IMP=0x0000000000134a28
- (void)writeTo:(id)arg1;	// IMP=0x00000000001349cb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001349be
- (id)dictionaryRepresentation;	// IMP=0x00000000001347ab
- (id)description;	// IMP=0x00000000001346fc
@property(readonly, nonatomic) _Bool hasEncryptedShareTuple;
@property(readonly, nonatomic) _Bool hasAnonymousShareTupleHash;

@end
