//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreMotion/NSObject-Protocol.h>

@class CMDistributedSensingManager, CMVehicleStateData, NSError;

@protocol CMDistributedSensingDelegate <NSObject>

@optional
- (void)distributedSensingManager:(CMDistributedSensingManager *)arg1 didFailToSubscribeToVehicleState:(NSError *)arg2;
- (void)distributedSensingManager:(CMDistributedSensingManager *)arg1 didUpdateVehicleState:(CMVehicleStateData *)arg2;
@end

