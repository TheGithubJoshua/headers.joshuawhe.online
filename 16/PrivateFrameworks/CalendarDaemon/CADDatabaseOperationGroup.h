//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CADOperationGroup.h"

__attribute__((visibility("hidden")))
@interface CADDatabaseOperationGroup : CADOperationGroup
{
}

+ (_Bool)requiresEventAccess;	// IMP=0x0010000000013fc4
- (void)CADDatabaseGetDefaultAlarmOffsetForAllDay:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001dac2
- (void)CADDatabaseMigrateSubscribedCalendar:(id)arg1 toSource:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000001d273
- (int)_updatePropertiesAndRelations:(id)arg1 database:(struct CalDatabase *)arg2 insertedObjectMap:(id)arg3;	// IMP=0x000000000001cd8a
- (int)_deleteObjects:(id)arg1 database:(struct CalDatabase *)arg2;	// IMP=0x000000000001cc70
- (id)_insertObjectsWithTemporaryObjectIDs:(id)arg1 database:(struct CalDatabase *)arg2 error:(int *)arg3;	// IMP=0x000000000001c80e
- (id)_insert:(id)arg1 delete:(id)arg2 update:(id)arg3 database:(struct CalDatabase *)arg4 error:(int *)arg5;	// IMP=0x000000000001c70c
- (int)preflightObjectID:(id)arg1 inDatabase:(struct CalDatabase *)arg2;	// IMP=0x000000000001c5ab
- (int)preflightAccessForDeletes:(id)arg1 updates:(id)arg2 inDatabase:(struct CalDatabase *)arg3;	// IMP=0x000000000001c131
- (int)insert:(id)arg1 deletes:(id)arg2 updates:(id)arg3 insertedObjectIDMap:(id)arg4 inDatabase:(struct CalDatabase *)arg5;	// IMP=0x000000000001bd96
- (int)findDatabaseForObject:(id)arg1 withUpdates:(id)arg2 personas:(id *)arg3 accounts:(id *)arg4 nextTempDBID:(int *)arg5;	// IMP=0x000000000001b28e
- (void)CADDatabaseCommitDeletes:(id)arg1 updatesAndInserts:(id)arg2 andFetchChangesSinceTimestamp:(id)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000018fd6
- (void)CADDatabaseRebuildOccurrenceCacheWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018d8b
- (void)CADDatabaseSetShowsDeclinedEvents:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018d12
- (void)CADDatabaseExportICSDataForCalendar:(id)arg1 options:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000189ad
- (void)CADDatabaseExportICSDataForCalendarItems:(id)arg1 options:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000184b5
- (id)_importEvents:(id)arg1 data:(id)arg2 intoCalendarWithID:(id)arg3 inDatabase:(struct CalDatabase *)arg4 optionsMask:(unsigned long long)arg5 batchSize:(int)arg6 outError:(int *)arg7;	// IMP=0x000000000001812e
- (void)CADDatabaseImportEvents:(id)arg1 fromICSData:(id)arg2 intoCalendarsWithIDs:(id)arg3 optionsMask:(unsigned long long)arg4 batchSize:(int)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0000000000016c0c
- (void)CADDatabaseLastConfirmedSplashScreenVersion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016abf
- (_Bool)_CADDatabaseCanModifyCalendarDatabase;	// IMP=0x0000000000016a63
- (void)CADDatabaseCanModifyCalendarDatabase:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016a15
- (void)CADDatabaseGetChangedEntityIDsSinceTimestamp:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016434
- (void)CADDatabaseGetChangesSinceSequenceToken:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015fdd
- (void)CADDatabaseGetSequenceToken:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015df8
- (struct __CFSet *)_copyToIntCFSetRef:(id)arg1;	// IMP=0x0000000000015c89
- (struct __CFArray *)_copyToIntCFArrayRef:(id)arg1;	// IMP=0x0000000000015b1a
- (void)CADDatabaseMarkIndividualChangesConsumed:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015583
- (void)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceToken:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015232
- (void)CADDatabaseFetchObjectChangesForEntityTypes:(id)arg1 insideObject:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000014a82
- (void)CADDatabaseFetchChangedObjectIDs:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014529
- (void)CADDatabaseUnregisterForDetailedChangeTracking:(CDUnknownBlockType)arg1;	// IMP=0x00000000000143f1
- (void)CADDatabaseRegisterForDetailedChangeTrackingInSource:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001413d
- (void)CADDatabaseGetUUID:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013fcc

@end
