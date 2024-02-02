//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookFoundation/BFMResource-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSString, NSURL;
@protocol BFMSeries;

@protocol BFMAsset <BFMResource>
@property(nonatomic, readonly) id <BFMSeries> seriesResource;
@property(nonatomic, readonly) NSNumber *height;
@property(nonatomic, readonly) NSNumber *width;
@property(nonatomic, readonly) NSString *artworkURL;
@property(nonatomic, readonly) NSURL *previewURL;
@property(nonatomic, readonly) long long fileSize;
@property(nonatomic, readonly) NSDictionary *offer;
@property(nonatomic, readonly) NSDate *expectedReleaseDate;
@property(nonatomic, readonly) _Bool isPreorder;
@property(nonatomic, readonly) NSNumber *price;
@property(nonatomic, readonly) NSString *priceFormatted;
@property(nonatomic, readonly) NSString *standardDescription;
@property(nonatomic, readonly) NSString *standardNotes;
@property(nonatomic, readonly) unsigned long long ratingCount;
@property(nonatomic, readonly) float averageRating;
@property(nonatomic, readonly) NSURL *bookSampleDownloadURL;
@property(nonatomic, readonly) NSString *pageProgressionDirection;
@property(nonatomic, readonly) _Bool isSG;
@property(nonatomic, readonly) _Bool hasSupplementalContent;
@property(nonatomic, readonly) NSDate *releaseDate;
@property(nonatomic, readonly) NSURL *url;
@property(nonatomic, readonly) NSString *buyParams;
@property(nonatomic, readonly) NSString *genre;
@property(nonatomic, readonly) _Bool isExplicit;
@property(nonatomic, readonly) NSString *contentRating;
@property(nonatomic, readonly) NSString *artistName;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSString *sequenceDisplayLabel;
@property(nonatomic, readonly) NSNumber *sequenceNumber;
@property(nonatomic, readonly) NSString *seriesName;
@property(nonatomic, readonly) _Bool isAudiobook;
@property(nonatomic, readonly) _Bool isBook;
@end
