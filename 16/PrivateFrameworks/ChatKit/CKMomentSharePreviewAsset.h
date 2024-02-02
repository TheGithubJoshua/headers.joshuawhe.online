//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSNumber, NSString, PHMomentShare, UIImage;

__attribute__((visibility("hidden")))
@interface CKMomentSharePreviewAsset : NSObject
{
    UIImage *_cachedImage;	// 8 = 0x8
    float _audioScore;	// 16 = 0x10
    PHMomentShare *_momentShare;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002fcfc3
@property(readonly, nonatomic) PHMomentShare *momentShare; // @synthesize momentShare=_momentShare;
@property(readonly, nonatomic) float audioScore; // @synthesize audioScore=_audioScore;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;	// IMP=0x00000000002fccf9
@property(readonly, nonatomic) double aspectRatio;
- (struct CGSize)size;	// IMP=0x00000000002fcc6b
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1;	// IMP=0x00000000002fcc44
@property(readonly, nonatomic) UIImage *previewImage;
@property(readonly, nonatomic) NSData *previewImageData;
@property(readonly, nonatomic) _Bool isPreviewImageDataAvailable;
@property(readonly, nonatomic) NSString *uuid;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002fc9e5
@property(readonly, nonatomic) _Bool isInSharedLibrary;
- (long long)isContentEqualTo:(id)arg1;	// IMP=0x00000000002fc943
@property(readonly, nonatomic) Class defaultImageProviderClass;
@property(readonly, nonatomic) unsigned long long thumbnailIndex;
@property(readonly, nonatomic) struct CGRect faceAreaRect;
@property(readonly, nonatomic) struct CGRect acceptableCropRect;
@property(readonly, nonatomic) struct CGRect preferredCropRect;
@property(readonly, nonatomic) unsigned long long pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth;
@property(readonly, nonatomic) _Bool isEligibleForAutoPlayback;
@property(readonly, nonatomic) _Bool isInCloud;
@property(readonly, nonatomic) _Bool representsBurst;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite;
@property(readonly, nonatomic) long long playbackVariation;
@property(readonly, nonatomic) long long playbackStyle;
@property(readonly, nonatomic) NSDate *localCreationDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) long long mediaType;
- (id)initWithMomentShare:(id)arg1;	// IMP=0x00000000002fc766
- (id)init;	// IMP=0x00000000002fc75d

// Remaining properties
@property(readonly, nonatomic) unsigned long long burstSelectionTypes;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) NSData *fetchColorNormalizationData;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *hdrGain;
@property(readonly, nonatomic) NSDate *importDate;
@property(readonly, nonatomic) _Bool isAutoPlaybackEligibilityEstimated;
@property(readonly, nonatomic) CDStruct_1b6d18a9 livePhotoVideoDuration;
@property(readonly, nonatomic) NSString *localizedGeoDescription;
@property(readonly, nonatomic) long long originalFileSize;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long thumbnailVersion;

@end
