//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMPanoramaView;

@protocol CAMPanoramaViewDelegate <NSObject>
- (void)panoramaView:(CAMPanoramaView *)arg1 didUpdateInstruction:(long long)arg2;
- (void)panoramaViewDidRequestSynchronizedDirectionChange:(CAMPanoramaView *)arg1 toDirection:(long long)arg2;
@end
