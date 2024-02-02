//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface NGMPBPublicDevicePrekey : PBCodable
{
    double _timestamp;	// 8 = 0x8
    NSData *_prekey;	// 16 = 0x10
    NSData *_prekeySignature;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001a60d
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSData *prekeySignature; // @synthesize prekeySignature=_prekeySignature;
@property(retain, nonatomic) NSData *prekey; // @synthesize prekey=_prekey;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001a52a
- (unsigned long long)hash;	// IMP=0x000000000001a3db
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001a2fa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001a24a
- (void)copyTo:(id)arg1;	// IMP=0x000000000001a1c7
- (void)writeTo:(id)arg1;	// IMP=0x000000000001a146
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001a139
- (id)dictionaryRepresentation;	// IMP=0x0000000000019e6c
- (id)description;	// IMP=0x0000000000019dbd

@end
