//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CARSettingsVehicleDelegate-Protocol.h"

@class CARSession, CARSettingsPanel, CRSSiriPreferences, CRSUIWallpaperPreferences, CRVehicle, MISSING_TYPE, UNNotificationSystemSettings;
@protocol CARNotificationSystemSettingsObserver, CARSessionObserving, CRSSiriPreferencesObserver;

@protocol CARSettingsPanelController <CARSettingsVehicleDelegate>
@property(readonly, nonatomic) UNNotificationSystemSettings *notificationSystemSettings;
@property(readonly, nonatomic) CRSSiriPreferences *siriPreferences;
@property(readonly, nonatomic) CRVehicle *vehicle;
@property(readonly, nonatomic) CARSession *carSession;
@property(readonly, nonatomic) CRSUIWallpaperPreferences *wallpaperPreferences;
- (void)removeNotificationSettingsObserver:(id <CARNotificationSystemSettingsObserver>)arg1;
- (void)addNotificationSettingsObserver:(id <CARNotificationSystemSettingsObserver>)arg1;
- (void)removeSiriPreferencesObserver:(id <CRSSiriPreferencesObserver>)arg1;
- (void)addSiriPreferencesObserver:(id <CRSSiriPreferencesObserver>)arg1;
- (void)removeObserver:(id <CARSessionObserving>)arg1;
- (void)addObserver:(id <CARSessionObserving>)arg1;
- (void)deregisterPanel:(CARSettingsPanel *)arg1;
- (void)registerPanel:(CARSettingsPanel *)arg1;
- (void)dismissPanel:(CARSettingsPanel *)arg1 completion:(void (^)(void))arg2;
- (void)dismissPanel:(CARSettingsPanel *)arg1;
- (void)presentPanel:(CARSettingsPanel *)arg1;
- (void)popToRootPanelIfHierarchyContainsPanel:(CARSettingsPanel *)arg1;
- (void)popToRootPanel;
- (void)popPanel;
- (void)popIfPanel:(CARSettingsPanel *)arg1;
- (MISSING_TYPE *)pushPanel: /* Error: Ran out of types for this method. */;
@end
