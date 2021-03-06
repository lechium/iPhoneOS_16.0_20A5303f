//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class NSString;
@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate;

@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler <NSObject>
@property(readonly, nonatomic, getter=isRunning) _Bool running;
@property(readonly, nonatomic) __weak id <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate> delegate;
@property(readonly, nonatomic) double retryInterval;
@property(readonly, nonatomic) double interval;
@property(readonly, nonatomic) NSString *identifier;
- (void)stop;
- (void)start;
@end

