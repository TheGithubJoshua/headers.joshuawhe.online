//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSURL, PQLConnection;

__attribute__((visibility("hidden")))
@interface BRCDatabaseBackupStorage : NSObject
{
    PQLConnection *_database;	// 8 = 0x8
    NSURL *_databaseURL;	// 16 = 0x10
    NSArray *_urlPropertiesToFetch;	// 24 = 0x18
    NSURL *_attachedDatabaseURL;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000f2ff7
@property(retain, nonatomic) NSURL *attachedDatabaseURL; // @synthesize attachedDatabaseURL=_attachedDatabaseURL;
@property(retain, nonatomic) NSArray *urlPropertiesToFetch; // @synthesize urlPropertiesToFetch=_urlPropertiesToFetch;
@property(retain, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
@property(retain, nonatomic) PQLConnection *database; // @synthesize database=_database;
- (_Bool)fixUpClientState:(id)arg1;	// IMP=0x00000000000f2cf3
- (_Bool)fixUpBackupDetector:(id)arg1;	// IMP=0x00000000000f29a1
- (_Bool)clearStagedIDs:(id)arg1;	// IMP=0x00000000000f284e
- (_Bool)updateIDs:(id)arg1;	// IMP=0x00000000000f2531
- (_Bool)negateIDs:(id)arg1;	// IMP=0x00000000000f23de
- (_Bool)setForeignKeys:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x00000000000f230a
- (_Bool)updateAttachedDatabase;	// IMP=0x00000000000f2037
- (id)docIDForURL:(id)arg1;	// IMP=0x00000000000f1f37
- (_Bool)attachDatabase:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f1b59
- (void)populateNewColumnsInDatabase:(id)arg1 forRecord:(id)arg2 basePath:(id)arg3;	// IMP=0x00000000000f1699
- (void)populateNewColumnsWithBasePath:(id)arg1;	// IMP=0x00000000000f13be
- (id)backupManifestEnumerator:(id)arg1;	// IMP=0x00000000000f1316
- (void)flushAndClose;	// IMP=0x00000000000f10da
- (_Bool)addRecord:(id)arg1;	// IMP=0x00000000000f0ebf
- (_Bool)setUpDatabaseWithError:(id *)arg1;	// IMP=0x00000000000f0cf7
- (void)dealloc;	// IMP=0x00000000000f0b4f
- (id)initWithDatabaseURL:(id)arg1;	// IMP=0x00000000000f099b

@end
