//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKServerChangeToken.h>

@class NSString;

@interface CKServerChangeToken (BRCAddition)
+ (id)newFromSqliteStatement:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2;	// IMP=0x001000000015e20d
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;	// IMP=0x001000000015e1b2
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;	// IMP=0x001000000015e161
- (id)descriptionWithContext:(id)arg1;	// IMP=0x001000000015dd2e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
