//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaControls/NSObject-Protocol.h>

@class MRNowPlayingAudioFormatContentInfo, MRNowPlayingAudioFormatController, NSString;

@protocol MRNowPlayingAudioFormatControllerDelegate <NSObject>

@optional
- (void)nowPlayingAudioFormatController:(MRNowPlayingAudioFormatController *)arg1 didChangeIsEligibleForSpatialization:(_Bool)arg2;
- (void)nowPlayingAudioFormatController:(MRNowPlayingAudioFormatController *)arg1 didChangeBestAvailableAudioFormat:(long long)arg2;
- (void)nowPlayingAudioFormatController:(MRNowPlayingAudioFormatController *)arg1 didChangeMultichannel:(_Bool)arg2;
- (void)nowPlayingAudioFormatController:(MRNowPlayingAudioFormatController *)arg1 didChangeAudioFormatDescription:(NSString *)arg2;
- (void)nowPlayingAudioFormatController:(MRNowPlayingAudioFormatController *)arg1 didChangeBundleID:(NSString *)arg2 displayName:(NSString *)arg3;
- (void)nowPlayingAudioFormatController:(MRNowPlayingAudioFormatController *)arg1 didChangeAudioFormatContentInfo:(MRNowPlayingAudioFormatContentInfo *)arg2;
@end
