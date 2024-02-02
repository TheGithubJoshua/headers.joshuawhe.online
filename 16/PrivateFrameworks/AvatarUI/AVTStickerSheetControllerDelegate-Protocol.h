//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AvatarUI/NSObject-Protocol.h>

@class AVTUIStickerItem, UIScrollView;
@protocol AVTAvatarRecord, AVTStickerSheetController;

@protocol AVTStickerSheetControllerDelegate <NSObject>
- (void)stickerSheetController:(id <AVTStickerSheetController>)arg1 didFinishRenderingStickersForRecord:(id <AVTAvatarRecord>)arg2;
- (void)stickerSheetController:(id <AVTStickerSheetController>)arg1 didInteractWithStickerItem:(AVTUIStickerItem *)arg2 atIndex:(long long)arg3 byPeeling:(_Bool)arg4;
- (void)stickerSheetController:(id <AVTStickerSheetController>)arg1 scrollView:(UIScrollView *)arg2 willEndDraggingWithTargetContentOffset:(inout struct CGPoint *)arg3;
- (void)stickerSheetController:(id <AVTStickerSheetController>)arg1 didScrollToContentOffset:(struct CGPoint)arg2;
@end
