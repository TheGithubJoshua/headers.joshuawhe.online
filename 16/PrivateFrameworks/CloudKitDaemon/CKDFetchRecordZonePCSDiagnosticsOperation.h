//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKPCSDiagnosticInformation, NSArray, NSDictionary, NSString;

@interface CKDFetchRecordZonePCSDiagnosticsOperation
{
    NSString *_identityStatus;	// 8 = 0x8
    NSDictionary *_invalidPCSByZoneID;	// 16 = 0x10
    NSDictionary *_validPCSByZoneID;	// 24 = 0x18
    NSArray *_recordZoneIDs;	// 32 = 0x20
    CKPCSDiagnosticInformation *_pcsDiagnosticInfo;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000022c19b
@property(retain, nonatomic) CKPCSDiagnosticInformation *pcsDiagnosticInfo; // @synthesize pcsDiagnosticInfo=_pcsDiagnosticInfo;
@property(retain, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property(retain, nonatomic) NSDictionary *validPCSByZoneID; // @synthesize validPCSByZoneID=_validPCSByZoneID;
@property(retain, nonatomic) NSDictionary *invalidPCSByZoneID; // @synthesize invalidPCSByZoneID=_invalidPCSByZoneID;
@property(retain, nonatomic) NSString *identityStatus; // @synthesize identityStatus=_identityStatus;
- (void)main;	// IMP=0x000000000022ba13
- (int)operationType;	// IMP=0x000000000022ba08
- (void)_handleRecordZoneFetch:(id)arg1 zoneID:(id)arg2 responseCode:(id)arg3;	// IMP=0x000000000022b66e
- (id)activityCreate;	// IMP=0x000000000022b645
- (id)relevantZoneIDs;	// IMP=0x000000000022b3d6
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x000000000022b347

@end
