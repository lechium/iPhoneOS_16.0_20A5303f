//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@protocol _TtP11ActivityKit25ActivityListenerXPCClient_
- (void)activitiesEndedWithIdentifiers:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (void)activitiesUpdatedWithUpdates:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (void)activityDescriptorsChangedWithDescriptors:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
@end

