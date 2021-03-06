//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PSSpecifier, UIViewController;

__attribute__((visibility("hidden")))
@interface STSetUpForFamilyGroupSpecifierProvider
{
    UIViewController *_presenter;	// 8 = 0x8
    PSSpecifier *_setupFamilySpecifier;	// 16 = 0x10
}

+ (id)providerWithCoordinator:(id)arg1 presenter:(id)arg2;	// IMP=0x001000000008b096
- (void).cxx_destruct;	// IMP=0x000000000008bad9
@property(readonly, nonatomic) PSSpecifier *setupFamilySpecifier; // @synthesize setupFamilySpecifier=_setupFamilySpecifier;
@property(nonatomic) __weak UIViewController *presenter; // @synthesize presenter=_presenter;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000008ba3d
- (void)presentAppleAccountSetupFamilyController:(id)arg1;	// IMP=0x000000000008b705
- (void)_updateEnabledValue;	// IMP=0x000000000008b639
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000008b4b9
- (void)setCoordinator:(id)arg1;	// IMP=0x000000000008b3f5
- (void)dealloc;	// IMP=0x000000000008b380
- (id)init;	// IMP=0x000000000008b12e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

