//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IMItemChatContext.h"

@class IMMessage;

@interface IMMessageItemChatContext : IMItemChatContext
{
    _Bool _invitation;	// 8 = 0x8
    IMMessage *_message;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d7041
@property(nonatomic) _Bool invitation; // @synthesize invitation=_invitation;
@property(retain, nonatomic) IMMessage *message; // @synthesize message=_message;
- (void)dealloc;	// IMP=0x00000000000d6fcd

@end
