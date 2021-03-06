//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WCDSystemObserver <NSObject>

@optional
- (void)systemObserverRunningIndependentlyWatchApps;
- (void)systemObserverUpdatingInstalledApps;
- (void)systemObserverProcessStateChangedForBundleID:(NSString *)arg1;
- (void)systemObserverAppDidTerminateForBundleID:(NSString *)arg1;
- (void)systemObserverAppDidSuspendForBundleID:(NSString *)arg1;
- (void)systemObserverWatchAppUIStatesChanged:(NSDictionary *)arg1;
- (void)systemObserverActiveComplicationsChanged;
- (void)systemObserverRemainingComplicationUserInfoTransfersReset;
- (void)systemObserverComplicationsInstalledChanged;
- (void)systemObserverWatchAppsInstalledChanged;
- (void)systemObserverInstalledApplicationsChanged;
- (void)systemObserverRemoteFirstUnlockedChanged;
- (void)systemObserverPairedListChanged;
- (void)systemObserverActiveDeviceConnectedChanged;
- (void)systemObserverActiveDeviceSwitchStarted;
- (void)systemObserverInitialSetUpComplete;
@end

