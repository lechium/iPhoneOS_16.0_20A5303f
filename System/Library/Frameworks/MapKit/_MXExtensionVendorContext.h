//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol _MXExtensionResponseObserver;

__attribute__((visibility("hidden")))
@interface _MXExtensionVendorContext
{
    id <_MXExtensionResponseObserver> _observer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000ce854
- (id)_errorForVendor:(id)arg1 requestDispatcher:(id)arg2;	// IMP=0x00000000000ce6f1
- (void)stopSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2;	// IMP=0x00000000000ce5fa
- (void)startSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 toObserver:(id)arg3;	// IMP=0x00000000000ce4e7
- (void)handleRequest:(id)arg1 requestDispatcher:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ce40c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
