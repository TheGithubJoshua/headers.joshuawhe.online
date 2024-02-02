//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariSwift/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol _SFSiriLinkActionPerformer <NSObject>
- (void)navigateContinuousReadingListToDirection:(unsigned long long)arg1;
- (void)closeStartPage;
- (void)openStartPage;
- (void)setView:(unsigned long long)arg1 visible:(_Bool)arg2;
- (void)performSearchUsingQuery:(NSString *)arg1;
- (void)openTabGroupOfType:(long long)arg1 uuidString:(NSString *)arg2;
- (void)createNewTabGroupWithTitle:(NSString *)arg1;
- (void)closeTabWithUUID:(NSUUID *)arg1;
- (void)openTabWithUUID:(NSUUID *)arg1;
- (void)createNewPrivateTab;
- (void)createNewTab;
- (void)setReaderModeEnabled:(_Bool)arg1;
- (void)toggleReaderMode;
- (void)openBookmarkWithUUIDString:(NSString *)arg1;
- (void)createReadingListItem;
- (void)createNewBookmarkWithTitle:(NSString *)arg1;
@end
