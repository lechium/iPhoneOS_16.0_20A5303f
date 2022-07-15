//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NDApplication;

@protocol NDApplicationObserver <NSObject>

@optional
- (void)applicationEndedTransitionalDiscretionaryBackgroundPeriod:(NDApplication *)arg1;
- (void)applicationEndedExtendedNonDiscretionaryBackgroundGracePeriod:(NDApplication *)arg1;
- (void)applicationEndedNonDiscretionaryBackgroundGracePeriod:(NDApplication *)arg1;
- (void)applicationNoLongerInForeground:(NDApplication *)arg1;
- (void)applicationEnteredForeground:(NDApplication *)arg1;
- (void)applicationWasSuspended:(NDApplication *)arg1;
- (void)backgroundUpdatesEnabledForApplication:(NDApplication *)arg1;
- (void)backgroundUpdatesDisabledForApplication:(NDApplication *)arg1;
- (void)applicationWasQuitFromAppSwitcher:(NDApplication *)arg1;
@end
