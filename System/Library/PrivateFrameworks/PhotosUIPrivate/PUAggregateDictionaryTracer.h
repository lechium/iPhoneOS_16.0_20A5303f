//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMapTable;
@protocol PUDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUAggregateDictionaryTracer : NSObject
{
    _Bool __streamedVideoDidStartPlaying;	// 8 = 0x8
    NSMapTable *__browsingViewModelTracers;	// 16 = 0x10
    id <PUDisplayAsset> __lastViewedAsset;	// 24 = 0x18
    NSDate *__lastPlayStartDate;	// 32 = 0x20
    id <PUDisplayAsset> __lastPlayedAsset;	// 40 = 0x28
    long long __assetPlayCount;	// 48 = 0x30
    id <PUDisplayAsset> __streamedVideo;	// 56 = 0x38
    double __streamedVideoBeginTime;	// 64 = 0x40
    long long __streamedVideoStallCount;	// 72 = 0x48
    long long __oneUpPresentationOrigin;	// 80 = 0x50
    id <PUDisplayAsset> __lastViewedAssetPerOrigin;	// 88 = 0x58
}

+ (id)sharedTracer;	// IMP=0x00400000000855b2
- (void).cxx_destruct;	// IMP=0x000000000008550d
@property(retain, nonatomic) id <PUDisplayAsset> _lastViewedAssetPerOrigin; // @synthesize _lastViewedAssetPerOrigin=__lastViewedAssetPerOrigin;
@property(nonatomic) long long _oneUpPresentationOrigin; // @synthesize _oneUpPresentationOrigin=__oneUpPresentationOrigin;
@property(nonatomic, setter=_setStreamedVideoStallCount:) long long _streamedVideoStallCount; // @synthesize _streamedVideoStallCount=__streamedVideoStallCount;
@property(nonatomic, setter=_setStreamedVideoBeginTime:) double _streamedVideoBeginTime; // @synthesize _streamedVideoBeginTime=__streamedVideoBeginTime;
@property(nonatomic, setter=_setStreamedVideoDidStartPlaying:) _Bool _streamedVideoDidStartPlaying; // @synthesize _streamedVideoDidStartPlaying=__streamedVideoDidStartPlaying;
@property(nonatomic, setter=_setStreamedVideo:) __weak id <PUDisplayAsset> _streamedVideo; // @synthesize _streamedVideo=__streamedVideo;
@property(nonatomic, setter=_setAssetPlayCount:) long long _assetPlayCount; // @synthesize _assetPlayCount=__assetPlayCount;
@property(nonatomic, setter=_setLastPlayedAsset:) __weak id <PUDisplayAsset> _lastPlayedAsset; // @synthesize _lastPlayedAsset=__lastPlayedAsset;
@property(retain, nonatomic, setter=_setLastPlayStartDate:) NSDate *_lastPlayStartDate; // @synthesize _lastPlayStartDate=__lastPlayStartDate;
@property(nonatomic, setter=_setLastViewedAsset:) __weak id <PUDisplayAsset> _lastViewedAsset; // @synthesize _lastViewedAsset=__lastViewedAsset;
@property(readonly, nonatomic) NSMapTable *_browsingViewModelTracers; // @synthesize _browsingViewModelTracers=__browsingViewModelTracers;
- (void)userDidEnterOneUpFromOrigin:(long long)arg1;	// IMP=0x00000000000853c4
- (void)userStartedViewingCollection:(id)arg1 withListViewItemSelectionTrackerKey:(struct __CFString *)arg2;	// IMP=0x0000000000085031
- (id)_browsingViewModelTracerForBrowsingViewModel:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x0000000000084f4d
- (long long)_assetTypeForAsset:(id)arg1;	// IMP=0x0000000000084ea9
- (void)streamedVideoPlaybackEnded;	// IMP=0x0000000000084cf3
- (void)streamedVideoPlaybackStalled:(id)arg1;	// IMP=0x0000000000084a2c
- (void)streamedVideoPlaybackStartedActuallyPlaying:(id)arg1;	// IMP=0x00000000000847a1
- (void)streamedVideoPlaybackBegan:(id)arg1;	// IMP=0x0000000000084619
- (void)vitalityPlayedForAssetInOneUp:(id)arg1;	// IMP=0x0000000000084530
- (void)userDidPlayAssetInOneUp:(id)arg1;	// IMP=0x0000000000084113
- (void)userWillPlayAssetInOneUp:(id)arg1;	// IMP=0x00000000000840c0
- (void)userViewedAssetInOneUp:(id)arg1;	// IMP=0x0000000000083dcf
- (void)userViewedHDRPhotoInOneUpFor:(double)arg1;	// IMP=0x0000000000083cf1
- (void)userViewedPhotoInOneUpFor:(double)arg1;	// IMP=0x0000000000083c0e
- (void)userBrowsedOneUpFor:(double)arg1;	// IMP=0x0000000000083b2b
- (void)invalidateContext:(id)arg1;	// IMP=0x000000000008393d
- (void)userStoppedViewingCurrentAssetOfBrowsingViewModel:(id)arg1 inContext:(id)arg2;	// IMP=0x00000000000837b1
- (void)userStartedViewingCurrentAssetOfBrowsingViewModel:(id)arg1 inContext:(id)arg2;	// IMP=0x000000000008360a
- (id)init;	// IMP=0x00000000000835a4

@end

