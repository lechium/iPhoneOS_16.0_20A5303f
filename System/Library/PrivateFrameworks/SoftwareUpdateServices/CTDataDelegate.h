//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CTDataDelegate : NSObject
{
    NSObject<OS_dispatch_queue> *_initiationQueue;	// 8 = 0x8
    CTXPCServiceSubscriptionContext *_subscriptionContext;	// 16 = 0x10
    CoreTelephonyClient *_client;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0010000000028e77
- (void)preferredDataSimChanged:(id)arg1;	// IMP=0x000000000002906f
- (id)getPreferredDataSubscriptionContext;	// IMP=0x0000000000028f65
- (id)getCTClient;	// IMP=0x0000000000028efe
- (void)_initCTClient;	// IMP=0x0000000000028ebc
- (id)init;	// IMP=0x0000000000028e29

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
