//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/NSObject-Protocol.h>

@class ECMessageFlagChange, ECMessageFlags, NSArray, NSData, NSDate, NSIndexSet, NSString;

@protocol ECIMAPServerInterface <NSObject>
@property(readonly, nonatomic) _Bool hasValidConnection;
- (_Bool)appendData:(NSData *)arg1 toMailboxNamed:(NSString *)arg2 flags:(ECMessageFlags *)arg3 dateReceived:(NSDate *)arg4 appendInfo:(id *)arg5 error:(id *)arg6;
- (_Bool)moveUIDs:(NSIndexSet *)arg1 toMailboxNamed:(NSString *)arg2 copyInfo:(id *)arg3 error:(id *)arg4;
- (_Bool)copyUIDs:(NSIndexSet *)arg1 toMailboxNamed:(NSString *)arg2 copyInfo:(id *)arg3 error:(id *)arg4;
- (_Bool)storeGmailLabels:(NSArray *)arg1 state:(_Bool)arg2 forUIDs:(NSIndexSet *)arg3;
- (_Bool)storeFlagChange:(ECMessageFlagChange *)arg1 forUIDs:(NSIndexSet *)arg2;
- (_Bool)expungeUIDs:(NSIndexSet *)arg1;
- (_Bool)expunge;
@end
