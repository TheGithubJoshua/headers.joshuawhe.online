//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOWaypointTyped, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitNearbyScheduleLookupOrigin : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOWaypointTyped *_waypointTyped;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000063c0b8
- (unsigned long long)hash;	// IMP=0x000000000063c09b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000063c001
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000063bf76
- (void)writeTo:(id)arg1;	// IMP=0x000000000063be20
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000063be11
- (id)jsonRepresentation;	// IMP=0x000000000063ba97
- (id)dictionaryRepresentation;	// IMP=0x000000000063b897
- (id)description;	// IMP=0x000000000063b7e8

@end
