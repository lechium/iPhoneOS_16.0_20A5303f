//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MRDIdleTopologySimplifier : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableDictionary *_playbackTimers;	// 16 = 0x10
    double _recentlyPlayingInterval;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000b7433
@property(readonly, nonatomic) double recentlyPlayingInterval; // @synthesize recentlyPlayingInterval=_recentlyPlayingInterval;
@property(retain, nonatomic) NSMutableDictionary *playbackTimers; // @synthesize playbackTimers=_playbackTimers;
- (void)_onQueue_simplifyToplogyOfPlayerPathIfNeeded:(id)arg1;	// IMP=0x00100000000b69b4
- (void)_onQueue_adjustPlaybackTimerIfNeededForPlayerPath:(id)arg1;	// IMP=0x00100000000b654b
- (void)_handleIsPlayingDidChangeNotification:(id)arg1;	// IMP=0x00100000000b6402
- (void)unregisterForChanges;	// IMP=0x00100000000b63a8
- (void)registerForChanges;	// IMP=0x00100000000b6337
- (_Bool)isMultiplayerHost;	// IMP=0x00100000000b62ec
- (id)localDeviceUID;	// IMP=0x00100000000b62cc
- (double)timeSincePlayingForPlayerPath:(id)arg1;	// IMP=0x00100000000b61ee
- (id)lastPlayingDateForPlayerPath:(id)arg1;	// IMP=0x00100000000b610b
- (unsigned int)playbackStateForPlayerPath:(id)arg1;	// IMP=0x00100000000b6034
- (void)dealloc;	// IMP=0x00100000000b5f73
- (void)_initialize;	// IMP=0x00100000000b5ed0
- (id)init;	// IMP=0x00100000000b5dec

@end

