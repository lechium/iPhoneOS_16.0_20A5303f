//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelGenericObject, NSHashTable, NSTimer;

__attribute__((visibility("hidden")))
@interface LPMediaRemotePlaybackObserver : NSObject
{
    MPModelGenericObject *_enqueuedItem;	// 8 = 0x8
    MPModelGenericObject *_enqueuedItemContext;	// 16 = 0x10
    double _elapsedTime;	// 24 = 0x18
    double _totalTime;	// 32 = 0x20
    _Bool _isPlaying;	// 40 = 0x28
    _Bool _enqueuedItemIsLive;	// 41 = 0x29
    NSHashTable *_clients;	// 48 = 0x30
    NSTimer *_timer;	// 56 = 0x38
}

+ (id)shared;	// IMP=0x00600000000a2368
- (void).cxx_destruct;	// IMP=0x00000000000a411c
- (_Bool)playbackInformationMatchesPlayingItem:(id)arg1;	// IMP=0x00000000000a3748
- (_Bool)isPlaying;	// IMP=0x00000000000a373f
- (double)elapsedFractionForPlaybackInformation:(id)arg1;	// IMP=0x00000000000a35c3
- (void)updatePlaybackState;	// IMP=0x00000000000a27bc
- (void)dispatchPlayingItemDidChangeToAllClients;	// IMP=0x00000000000a268e
- (double)minimumUpdateInterval;	// IMP=0x00000000000a251e
- (void)removeClient:(id)arg1;	// IMP=0x00000000000a24c0
- (void)addClient:(id)arg1;	// IMP=0x00000000000a23bd

@end
