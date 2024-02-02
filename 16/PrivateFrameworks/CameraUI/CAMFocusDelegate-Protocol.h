//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMFocusResult, CUCaptureController;

@protocol CAMFocusDelegate <NSObject>
- (void)captureControllerWillResetFocusAndExposure:(CUCaptureController *)arg1;
- (_Bool)captureController:(CUCaptureController *)arg1 shouldResetFocusAndExposureForReason:(long long)arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputFocusResult:(CAMFocusResult *)arg2;

@optional
- (double)captureControllerDelayBeforeResettingFocusAndExposureAfterCapture:(CUCaptureController *)arg1;
@end
