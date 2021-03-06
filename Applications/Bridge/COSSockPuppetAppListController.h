//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSAppListController.h>

@class NSString;

@interface COSSockPuppetAppListController : PSAppListController
{
}

- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x002000000000df2f
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x001000000000dc78
- (id)bundle;	// IMP=0x001000000000dc4e
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;	// IMP=0x001000000000d7db
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x001000000000d778
- (void)updateInstallStateForApplication:(id)arg1 installState:(long long)arg2;	// IMP=0x001000000000d6c4
- (void)restrictShowOnWatchSpecifierIfNecessary:(id)arg1;	// IMP=0x001000000000d593
- (void)launchTestFlight:(id)arg1;	// IMP=0x000000000000d58d
- (id)puppetAppShows:(id)arg1;	// IMP=0x001000000000d4a3
- (void)presentACError:(id)arg1;	// IMP=0x001000000000d0cb
- (void)setPuppetAppShows:(id)arg1 specifier:(id)arg2;	// IMP=0x001000000000c1dd
- (id)device;	// IMP=0x001000000000c1d3
- (void)_resetAfterAppDeletionResponse:(long long)arg1;	// IMP=0x001000000000bfa3
- (void)_resetAfterSockPuppetResponseWithState:(long long)arg1;	// IMP=0x001000000000be2f
- (id)systemPolicy;	// IMP=0x001000000000be27
- (void)deleteAppOnGizmo:(id)arg1;	// IMP=0x001000000000ba4a
- (void)deleteAppAlert:(id)arg1;	// IMP=0x001000000000b748
- (id)deleteAppOnGizmoSpecifier;	// IMP=0x001000000000b605
- (id)showOnWatchSpecifier;	// IMP=0x001000000000b47a
- (void)recheckWatchAppInstallState:(long long)arg1;	// IMP=0x001000000000b1ce
- (id)addShowOnWatchSectionToSpecifiers:(id)arg1;	// IMP=0x001000000000ada4
- (id)specifiers;	// IMP=0x001000000000a390
- (_Bool)showsOnGizmoEnabled;	// IMP=0x001000000000a388
- (id)customSpecifiers;	// IMP=0x001000000000a380
- (void)dealloc;	// IMP=0x001000000000a2a0
- (id)init;	// IMP=0x001000000000a1e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

