//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WDVideoURLManager : NSObject
{
}

+ (id)_baseURLForIdentifier:(id)arg1;	// IMP=0x0080000000057874
+ (void)_fetchRawManifestForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x008000000005765e
+ (id)_parseJSON:(id)arg1;	// IMP=0x0080000000057620
+ (id)preferredLanguageFromLanguages:(id)arg1 languagePreferences:(id)arg2;	// IMP=0x00800000000574dc
+ (void)_fetchPreferredURLForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00800000000571cd
+ (_Bool)isVideoPlaybackEnabled;	// IMP=0x00800000000571c5
+ (void)fetchURLForVideoWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0080000000056f7d

@end
