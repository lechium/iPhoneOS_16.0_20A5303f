//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMHomeManager, NSMutableSet, NSString;
@protocol MediaControlsHomeObserverDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MediaControlsHomeObserver : NSObject
{
    HMHomeManager *_homeManager;	// 8 = 0x8
    NSMutableSet *_knownUIDs;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 32 = 0x20
    id <MediaControlsHomeObserverDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000027073
@property(nonatomic) __weak id <MediaControlsHomeObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;	// IMP=0x0000000000026fbd
- (void)home:(id)arg1 didAddAccessory:(id)arg2;	// IMP=0x0000000000026f2e
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;	// IMP=0x0000000000026d30
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;	// IMP=0x0000000000026afc
- (void)homeManagerDidUpdateHomes:(id)arg1;	// IMP=0x00000000000269af
- (void)_notifyDelegate;	// IMP=0x00000000000268d0
- (void)_updateUIDs;	// IMP=0x00000000000265ba
- (_Bool)hasAccessoryWithUID:(id)arg1;	// IMP=0x0000000000026441
- (void)stopObserving;	// IMP=0x000000000002630a
- (void)beginObserving;	// IMP=0x00000000000261bd
- (id)init;	// IMP=0x0000000000025fa2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

