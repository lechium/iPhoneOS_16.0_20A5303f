//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKQueryClientInterface-Protocol.h>

@class NSArray, NSUUID;

@protocol HKDeviceQueryClientInterface <HKQueryClientInterface>
- (void)clientRemote_deliverDevices:(NSArray *)arg1 done:(_Bool)arg2 reset:(_Bool)arg3 query:(NSUUID *)arg4;
@end

