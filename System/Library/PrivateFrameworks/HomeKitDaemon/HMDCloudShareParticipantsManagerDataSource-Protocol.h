//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCloudShareParticipantsManager, HMDUser;

@protocol HMDCloudShareParticipantsManagerDataSource <NSObject>
- (_Bool)manager:(HMDCloudShareParticipantsManager *)arg1 shouldShareWithUser:(HMDUser *)arg2;

@optional
- (_Bool)areShareModificationsEnabledForManager:(HMDCloudShareParticipantsManager *)arg1;
- (_Bool)canUseUntrustedAccountHandlesForParticipantManager:(HMDCloudShareParticipantsManager *)arg1;
- (_Bool)manager:(HMDCloudShareParticipantsManager *)arg1 shouldGrantWriteAccessToUser:(HMDUser *)arg2;
@end

