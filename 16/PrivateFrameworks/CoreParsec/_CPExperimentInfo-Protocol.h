//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol _CPExperimentInfo <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int version;
@property(nonatomic) int deploymentId;
@property(copy, nonatomic) NSString *treatmentId;
@property(copy, nonatomic) NSString *experimentId;
@property(copy, nonatomic) NSString *namespaceId;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
