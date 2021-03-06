//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SensorKit/NSObject-Protocol.h>

@class NSDictionary, NSSet, NSString, SRAuthorizationStore;

@protocol SRAuthorizationStoreDelegate <NSObject>

@optional
- (void)authorizationStore:(SRAuthorizationStore *)arg1 didUpdateAuthorizationsForBundleId:(NSString *)arg2 sensors:(NSSet *)arg3;
- (void)authorizationStore:(SRAuthorizationStore *)arg1 didDetermineInitialAuthorizationValues:(NSDictionary *)arg2;
@end

