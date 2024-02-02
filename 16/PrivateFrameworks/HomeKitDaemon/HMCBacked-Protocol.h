//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class Protocol;
@protocol MKFObject, NSCopying;

@protocol HMCBacked
@property(readonly) id <NSCopying> backingModelKey;
@property(readonly) Protocol *backingModelType;
- (id)initWithBackingModel:(id <MKFObject>)arg1;
- (_Bool)updateBackingModel:(id <MKFObject>)arg1 error:(id *)arg2;
@end
