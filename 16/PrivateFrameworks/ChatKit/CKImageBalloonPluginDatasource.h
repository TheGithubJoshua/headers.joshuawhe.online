//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMCore/IMBalloonPluginDataSource.h>

@class CKBalloonView, CKMediaObject;

__attribute__((visibility("hidden")))
@interface CKImageBalloonPluginDatasource : IMBalloonPluginDataSource
{
    CKMediaObject *_mediaObject;	// 8 = 0x8
    CKBalloonView *_balloonView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000010c463
@property(retain, nonatomic) CKBalloonView *balloonView; // @synthesize balloonView=_balloonView;
@property(retain, nonatomic) CKMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
- (void)previewDidChange:(id)arg1;	// IMP=0x000000000010c2a0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000010c019
- (id)imageBalloon;	// IMP=0x000000000010bda4
- (id)initWithPluginPayload:(id)arg1;	// IMP=0x000000000010bd0d

@end
