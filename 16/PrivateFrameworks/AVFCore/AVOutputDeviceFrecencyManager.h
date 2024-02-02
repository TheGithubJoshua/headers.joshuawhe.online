//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVOutputDeviceFrecencyManager : NSObject
{
}

+ (id)_frecentsWriter;	// IMP=0x00800000000e8ed7
+ (_Bool)_migrateFrecentsFromCFPreferencesToFrecentsFilePath:(id)arg1;	// IMP=0x00800000000e8c01
+ (id)_frecentsReaderAfterMigrationIfNecessary;	// IMP=0x00800000000e89c7
+ (id)_frecentsFilePath;	// IMP=0x00800000000e8834
+ (id)_frecentsContainerPath;	// IMP=0x00800000000e8793
+ (id)_applicationSupportPath;	// IMP=0x00800000000e8717
+ (double)frecencyScoreForDeviceID:(id)arg1;	// IMP=0x00800000000e85a2
+ (void)updateFrecencyListForDeviceID:(id)arg1;	// IMP=0x00800000000e7ef8

@end
