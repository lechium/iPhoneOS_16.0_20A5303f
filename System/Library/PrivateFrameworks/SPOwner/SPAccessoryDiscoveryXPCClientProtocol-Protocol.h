//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SPOwner/NSObject-Protocol.h>

@class NSError, SPDiscoveredAccessory;

@protocol SPAccessoryDiscoveryXPCClientProtocol <NSObject>
- (void)accessoryDiscoveryError:(NSError *)arg1;
- (void)lostAccessory:(SPDiscoveredAccessory *)arg1;
- (void)discoveredAccessory:(SPDiscoveredAccessory *)arg1;
@end
