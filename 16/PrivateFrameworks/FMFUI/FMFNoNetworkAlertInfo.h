//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface FMFNoNetworkAlertInfo : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_message;	// 16 = 0x10
    NSURL *_actionURL;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000041b5
@property(retain, nonatomic) NSURL *actionURL; // @synthesize actionURL=_actionURL;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end
