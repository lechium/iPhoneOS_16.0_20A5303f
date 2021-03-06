//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSDate, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MRUAssetsProvider : NSObject
{
    NSMutableDictionary *_completionBlocks;	// 8 = 0x8
    NSCache *_imageCache;	// 16 = 0x10
    NSCache *_applicationCache;	// 24 = 0x18
    NSDate *_purgeApplicationCacheDate;	// 32 = 0x20
}

+ (id)packageDescriptionWithName:(id)arg1;	// IMP=0x00400000000a5fed
+ (id)packageWithName:(id)arg1;	// IMP=0x00400000000a5f2a
+ (id)sharing;	// IMP=0x00400000000a5f0a
+ (id)phone;	// IMP=0x00400000000a5eea
+ (id)routingNearby;	// IMP=0x00400000000a5eca
+ (id)routingAccessoryMultiSelected;	// IMP=0x00400000000a5eaa
+ (id)routingAccessorySelected;	// IMP=0x00400000000a5e8a
+ (id)routingAccessoryMultiDeselected;	// IMP=0x00400000000a5e6a
+ (id)expandedRoutingChevron;	// IMP=0x00400000000a5e4a
+ (id)collapsedRoutingChevron;	// IMP=0x00400000000a5e2a
+ (id)volumeTrackWithHeight:(double)arg1;	// IMP=0x00400000000a5bcf
+ (id)volumeThumbWithSize:(double)arg1;	// IMP=0x00400000000a59fd
+ (id)volumeRelativePlus;	// IMP=0x00400000000a598c
+ (id)volumeRelativeMinus;	// IMP=0x00400000000a591b
+ (id)volumeMax;	// IMP=0x00400000000a58fb
+ (id)volumeMin;	// IMP=0x00400000000a58db
+ (id)goForwardForTimeInterval:(double)arg1;	// IMP=0x00400000000a5884
+ (id)goBackwardForTimeInterval:(double)arg1;	// IMP=0x00400000000a582d
+ (id)goForwardSymbolForTimeInterval:(double)arg1;	// IMP=0x00400000000a5791
+ (id)goBackwardSymbolForTimeInterval:(double)arg1;	// IMP=0x00400000000a56f5
+ (id)wishlist;	// IMP=0x00400000000a56d5
+ (id)dislike;	// IMP=0x00400000000a56b5
+ (id)like;	// IMP=0x00400000000a5695
+ (id)menu;	// IMP=0x00400000000a5675
+ (id)forward;	// IMP=0x00400000000a5612
+ (id)backward;	// IMP=0x00400000000a55af
+ (id)languageOptions;	// IMP=0x00400000000a558f
+ (id)tvRemote;	// IMP=0x00400000000a551e
+ (id)stop;	// IMP=0x00400000000a54bb
+ (id)pause;	// IMP=0x00400000000a5458
+ (id)play;	// IMP=0x00400000000a53f5
+ (id)forwardSymbol;	// IMP=0x00400000000a53e8
+ (id)backwardSymbol;	// IMP=0x00400000000a53db
+ (id)stopSymbol;	// IMP=0x00400000000a53ce
+ (id)pauseSymbol;	// IMP=0x00400000000a53c1
+ (id)playSymbol;	// IMP=0x00400000000a53b4
+ (id)controlOtherSpeakers;	// IMP=0x00400000000a5394
+ (id)wirelessSharing;	// IMP=0x00400000000a5374
+ (id)genericDevices;	// IMP=0x00400000000a5354
+ (id)airplayVideo;	// IMP=0x00400000000a5334
+ (id)airplay;	// IMP=0x00400000000a5314
+ (id)sharedAssetsProvider;	// IMP=0x00400000000a52bf
- (void).cxx_destruct;	// IMP=0x00000000000a693a
@property(retain, nonatomic) NSDate *purgeApplicationCacheDate; // @synthesize purgeApplicationCacheDate=_purgeApplicationCacheDate;
@property(readonly) NSCache *applicationCache; // @synthesize applicationCache=_applicationCache;
@property(readonly) NSCache *imageCache; // @synthesize imageCache=_imageCache;
@property(readonly) NSMutableDictionary *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
- (void)imageForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a6347
- (id)applicationIconForBundleIdentifier:(id)arg1;	// IMP=0x00000000000a607e
- (id)init;	// IMP=0x00000000000a5233

@end

