//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/NSObject-Protocol.h>

@class DNDBypassSettings, DNDGlobalConfigurationService;

@protocol DNDGlobalConfigurationServiceListener <NSObject>

@optional
- (void)globalConfigurationService:(DNDGlobalConfigurationService *)arg1 didReceiveUpdatedPhoneCallBypassSettings:(DNDBypassSettings *)arg2;
- (void)globalConfigurationService:(DNDGlobalConfigurationService *)arg1 didReceiveUpdatedPreventAutoReplySetting:(_Bool)arg2;
- (void)globalConfigurationService:(DNDGlobalConfigurationService *)arg1 didReceiveUpdatedPairSyncState:(unsigned long long)arg2;
@end
