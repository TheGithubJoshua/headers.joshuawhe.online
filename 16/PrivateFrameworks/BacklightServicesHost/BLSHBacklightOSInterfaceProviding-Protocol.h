//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/BLSHOSInterfaceProviding-Protocol.h>

@protocol BLSHBacklightOSInterfaceProviding <BLSHOSInterfaceProviding>
@property(readonly, nonatomic, getter=isShowingBlankingWindow) _Bool showingBlankingWindow;
@property(readonly, nonatomic) long long backlightFactor;
@property(readonly, nonatomic, getter=isUsingAlwaysOnBrightnessCurve) _Bool useAlwaysOnBrightnessCurve;
@property(nonatomic, getter=isKernelAlwaysOnMode) _Bool kernelAlwaysOnMode;
@property(nonatomic, getter=isCAFlipbookSuppressed, setter=setCAFlipbookSuppressed:) _Bool caFlipbookSuppressed;
@property(nonatomic, getter=isCAFlipbookEnabled, setter=setCAFlipbookEnabled:) _Bool caFlipbookEnabled;
@property(nonatomic, getter=isCABlanked, setter=setCABlanked:) _Bool caBlanked;
- (void)willUnblank;
- (void)setShowingBlankingWindow:(_Bool)arg1 fadeDuration:(double)arg2;
- (void)setBacklightFactor:(long long)arg1 fadeDuration:(double)arg2;
- (void)setUseAlwaysOnBrightnessCurve:(_Bool)arg1 rampDuration:(double)arg2;
@end
