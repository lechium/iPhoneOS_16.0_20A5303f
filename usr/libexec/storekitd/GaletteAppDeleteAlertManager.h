//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GaletteAppDeleteAlertManager : NSObject
{
}

+ (void)_appDeleteAlertIsEnabledWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00400000000730ea
+ (id)_galetteAppForBundleID:(id)arg1;	// IMP=0x0010000000072f7e
+ (void)_cleanupAfterUninstallingBundleID:(id)arg1;	// IMP=0x0010000000072d4f
+ (void)_showUninstallAlertForApp:(id)arg1 bundleID:(id)arg2;	// IMP=0x001000000007293c
+ (void)handleUninstalledAppsWithBundleIDs:(id)arg1;	// IMP=0x0010000000072461
+ (void)handleInstalledAppsWithBundleIDs:(id)arg1;	// IMP=0x00100000000720be

@end

