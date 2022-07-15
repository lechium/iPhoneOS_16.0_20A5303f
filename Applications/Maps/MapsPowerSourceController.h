//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable;
@protocol OS_dispatch_queue;

@interface MapsPowerSourceController : NSObject
{
    int _anyPowerSourceToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 24 = 0x18
    GEOObserverHashTable *_powerSourceObservers;	// 32 = 0x20
    long long _chargingState;	// 40 = 0x28
}

+ (id)sharedController;	// IMP=0x00200000009d7640
- (void).cxx_destruct;	// IMP=0x00200000009d85ad
- (void)_handleNotifyCallback;	// IMP=0x00100000009d8509
- (void)_updateChargingState;	// IMP=0x00100000009d7d74
@property(readonly, nonatomic) long long chargingState;
- (void)unregisterObserver:(id)arg1;	// IMP=0x00100000009d7bfd
- (void)registerObserver:(id)arg1;	// IMP=0x00100000009d7b2c
- (void)dealloc;	// IMP=0x00100000009d7a71
- (id)init;	// IMP=0x00100000009d7695

@end
