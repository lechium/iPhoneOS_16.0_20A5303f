//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKQueryClientInterface-Protocol.h>

@class NSNumber, NSSet, NSUUID;

@protocol HKObserverQueryClientInterface <HKQueryClientInterface>
- (void)client_dataUpdatedInDatabaseForTypes:(NSSet *)arg1 withAnchor:(NSNumber *)arg2 query:(NSUUID *)arg3;
@end
