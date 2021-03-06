//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RPCompanionLinkClient;
@protocol COEndpointMonitorDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface COEndpointMonitor : NSObject
{
    RPCompanionLinkClient *_client;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    unsigned long long _activeEndpointCount;	// 24 = 0x18
    id <COEndpointMonitorDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000007708c
@property __weak id <COEndpointMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_activateLink;	// IMP=0x0000000000076f1a
- (void)startMonitoring;	// IMP=0x0000000000076ed4
- (id)init;	// IMP=0x0000000000076e52

@end

