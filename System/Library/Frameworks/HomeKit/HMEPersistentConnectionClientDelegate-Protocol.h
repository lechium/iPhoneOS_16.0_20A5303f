//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMERouterClientDelegate-Protocol.h>

@class NSArray;

@protocol HMEPersistentConnectionClientDelegate <HMERouterClientDelegate>
- (void)sendChangeRegistrationsMessageWithAddedFilters:(NSArray *)arg1 removedFilters:(NSArray *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
@end
