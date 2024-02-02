//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;
@protocol ECMailAccount, ECMailbox, ECMessage, EDPBHasher;

@protocol EDPBDataSetters

@optional
- (void)withHasher:(id <EDPBHasher>)arg1 setConversationID:(long long)arg2 data:(NSDictionary *)arg3;
- (void)withHasher:(id <EDPBHasher>)arg1 setMessage:(id <ECMessage>)arg2 mailboxType:(long long)arg3;
- (void)withHasher:(id <EDPBHasher>)arg1 setMessage:(id <ECMessage>)arg2 mailbox:(id <ECMailbox>)arg3;
- (void)withHasher:(id <EDPBHasher>)arg1 setMessage:(id <ECMessage>)arg2 data:(NSDictionary *)arg3;
- (void)withHasher:(id <EDPBHasher>)arg1 setDataFromMessage:(id <ECMessage>)arg2;
- (void)withHasher:(id <EDPBHasher>)arg1 setDataFromMessage:(id <ECMessage>)arg2 account:(id <ECMailAccount>)arg3;
@end
