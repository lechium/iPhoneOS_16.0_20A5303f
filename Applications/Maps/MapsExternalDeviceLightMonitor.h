//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface MapsExternalDeviceLightMonitor
{
    long long _lightLevel;	// 8 = 0x8
    NSMutableDictionary *_scenesByType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000fdf92
@property(retain, nonatomic) NSMutableDictionary *scenesByType; // @synthesize scenesByType=_scenesByType;
- (id)_sceneWithHighestPriority;	// IMP=0x00100000000fdd1e
- (void)_reloadConnectedScenes;	// IMP=0x00100000000fd951
- (void)_updateLightLevel;	// IMP=0x00100000000fd6e9
- (void)_processWindowScene:(id)arg1 willConnect:(_Bool)arg2;	// IMP=0x00100000000fd57a
- (void)_sceneDidDisconnect:(id)arg1;	// IMP=0x00100000000fd371
- (void)_sceneWillConnnect:(id)arg1;	// IMP=0x00100000000fd165
- (void)_carPlayWindowMapTraitDidChange:(id)arg1;	// IMP=0x00100000000fce23
@property(readonly, nonatomic) _Bool isCarPlayConnected;
@property(nonatomic) long long lightLevel; // @synthesize lightLevel=_lightLevel;
- (void)_setMonitoring:(_Bool)arg1;	// IMP=0x00100000000fc94d
- (id)init;	// IMP=0x00100000000fc8e0

@end
