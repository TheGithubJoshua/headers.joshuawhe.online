//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class GEORPUserCredentials, NSData, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEORPProblemOptInRequest : PBRequest
{
    PBDataReader *_reader;	// 8 = 0x8
    NSData *_devicePushToken;	// 16 = 0x10
    NSString *_problemId;	// 24 = 0x18
    GEORPUserCredentials *_userCredentials;	// 32 = 0x20
    NSString *_userEmail;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    _Bool _didOptIn;	// 60 = 0x3c
    struct {
        unsigned int has_didOptIn:1;
        unsigned int read_devicePushToken:1;
        unsigned int read_problemId:1;
        unsigned int read_userCredentials:1;
        unsigned int read_userEmail:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0010000000f99edc
- (void).cxx_destruct;	// IMP=0x0000000000f9aa9c
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000f9a9ad
- (unsigned long long)hash;	// IMP=0x0000000000f9a8f1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f9a759
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f9a516
- (void)copyTo:(id)arg1;	// IMP=0x0000000000f9a3e6
- (Class)responseClass;	// IMP=0x0000000000f9a3d5
- (unsigned int)requestTypeCode;	// IMP=0x0000000000f9a3ca
- (void)writeTo:(id)arg1;	// IMP=0x0000000000f9a191
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000f9a184
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000f99c91
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000f99c7f
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000f9993d
- (id)jsonRepresentation;	// IMP=0x0000000000f9992e
- (id)dictionaryRepresentation;	// IMP=0x0000000000f99693
- (id)description;	// IMP=0x0000000000f995e4
@property(retain, nonatomic) NSString *userEmail;
@property(readonly, nonatomic) _Bool hasUserEmail;
@property(retain, nonatomic) NSData *devicePushToken;
@property(readonly, nonatomic) _Bool hasDevicePushToken;
@property(retain, nonatomic) GEORPUserCredentials *userCredentials;
@property(readonly, nonatomic) _Bool hasUserCredentials;
@property(nonatomic) _Bool hasDidOptIn;
@property(nonatomic) _Bool didOptIn;
@property(retain, nonatomic) NSString *problemId;
@property(readonly, nonatomic) _Bool hasProblemId;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000f9897a
- (id)init;	// IMP=0x0000000000f9891e
- (id)initWithSubmissionID:(id)arg1 allowContactBackAtEmailAddress:(id)arg2 traits:(id)arg3;	// IMP=0x00000000013f33cd

@end
