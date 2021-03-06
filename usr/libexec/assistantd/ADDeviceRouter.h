//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceProximityManager, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface ADDeviceRouter : NSObject
{
    NSArray *_currentDeviceContextTuples;	// 8 = 0x8
    long long _isLocalDeviceFollowerInStereoPair;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    ADDeviceProximityManager *_deviceProximityManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000937c3
- (void)requestLifecycleObserver:(id)arg1 requestDidEndWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x0010000000093727
- (void)requestLifecycleObserver:(id)arg1 requestWasCancelledWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x0010000000093721
- (void)requestLifecycleObserver:(id)arg1 requestWillBeginWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x0010000000093637
- (void)getPreferredDeviceToHandleCommand:(id)arg1 logNearbyDeviceMetrics:(_Bool)arg2 executionContext:(id)arg3 sharedUserID:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000009303b
- (void)_fetchCurrentDeviceContextTuplesIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000092e05
- (void)_updateContext:(id)arg1;	// IMP=0x0010000000092d0e
- (void)updateContext:(id)arg1;	// IMP=0x0010000000092bfb
- (id)_initWithQueue:(id)arg1 deviceProximityManager:(id)arg2;	// IMP=0x0010000000092b26
- (id)initWithQueue:(id)arg1;	// IMP=0x0010000000092aa5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
// Error: Property attributes should begin with the type ('T') attribute, property name: superclass
// Property attributes: (null)


@end

