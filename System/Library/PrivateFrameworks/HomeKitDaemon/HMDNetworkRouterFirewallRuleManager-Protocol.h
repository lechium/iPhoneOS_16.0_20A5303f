//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSSet;
@protocol HMDNetworkRouterFirewallRuleManagerClient;

@protocol HMDNetworkRouterFirewallRuleManager <NSObject>
- (void)fetchPairedMetadataVersionConfigurationsForAccessories:(NSSet *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (void)fetchRulesForAccessories:(NSSet *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (void)fetchCloudChangesWithCompletion:(void (^)(NSSet *, NSError *))arg1;
- (void)shutdownForClient:(id <HMDNetworkRouterFirewallRuleManagerClient>)arg1;
- (void)startupForClient:(id <HMDNetworkRouterFirewallRuleManagerClient>)arg1 completion:(void (^)(NSError *))arg2;
@end

