//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActivitySharing/HKQueryClientInterface-Protocol.h>

@class NSData, NSUUID;

@protocol ASFriendListQueryClientInterface <HKQueryClientInterface>
- (void)client_deliverFriendList:(NSData *)arg1 queryUUID:(NSUUID *)arg2;
@end

