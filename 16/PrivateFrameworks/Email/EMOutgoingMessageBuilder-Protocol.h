//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EMMessageObjectID, NSData;

@protocol EMOutgoingMessageBuilder
@property(nonatomic) long long conversationNotificationLevel;
@property(nonatomic) _Bool shouldEncrypt;
@property(nonatomic) _Bool shouldSign;
@property(retain, nonatomic) EMMessageObjectID *originalMessageID;
@property(nonatomic) long long action;
@property(copy, nonatomic) NSData *messageData;
@end
