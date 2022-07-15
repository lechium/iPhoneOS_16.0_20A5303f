//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface REDPredictedActionClientListener : NSObject
{
    NSMutableSet *_clients;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x002000000000a051
- (void).cxx_destruct;	// IMP=0x002000000000a595
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000a25a
- (void)dealloc;	// IMP=0x001000000000a1ee
- (id)init;	// IMP=0x001000000000a0a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
