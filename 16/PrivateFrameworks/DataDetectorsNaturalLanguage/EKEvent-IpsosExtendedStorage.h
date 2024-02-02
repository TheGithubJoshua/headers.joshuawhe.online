//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKit/EKEvent.h>

@class IPEventClassificationType, IPMessageUnit, NSArray;

@interface EKEvent (IpsosExtendedStorage)
- (id)ipsos_betterDescription;	// IMP=0x00300000000289dd
@property unsigned long long ipsos_eventAttributes;
@property unsigned long long ipsos_eventStatus;
@property double ipsos_experimentalConfidence;
@property double ipsos_confidence;
@property(readonly) double ipsos_duration;
@property unsigned long long ipsos_usedBubblesCount;
@property _Bool ipsos_disableTimeAdjustment;
@property _Bool ipsos_allDayPreferred;
@property(retain) IPMessageUnit *ipsos_messageUnit;
@property(retain) NSArray *ipsos_dataFeatures;
@property(retain) IPEventClassificationType *ipsos_eventClassificationType;
@property _Bool ipsos_isTimeOffset;
@property _Bool ipsos_isEventTimeOnlyAndReferrengingToSentDate;
@property _Bool ipsos_isDateTimeTenseDependent;
@property _Bool ipsos_timeNeedsMeridianGuess;
@property _Bool ipsos_usesDefaultClassificationTypeStartTime;
@property _Bool ipsos_isEndTimeApproximate;
@property _Bool ipsos_isTimeApproximate;
@end
