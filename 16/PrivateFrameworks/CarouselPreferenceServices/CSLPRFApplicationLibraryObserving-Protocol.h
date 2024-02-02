//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarouselPreferenceServices/NSObject-Protocol.h>

@class NSArray;
@protocol CSLPRFApplicationLibrary;

@protocol CSLPRFApplicationLibraryObserving <NSObject>
- (void)applicationLibrary:(id <CSLPRFApplicationLibrary>)arg1 didRemoveApplications:(NSArray *)arg2;
- (void)applicationLibrary:(id <CSLPRFApplicationLibrary>)arg1 didUpdateApplications:(NSArray *)arg2;
- (void)applicationLibrary:(id <CSLPRFApplicationLibrary>)arg1 didAddApplications:(NSArray *)arg2;
@end
