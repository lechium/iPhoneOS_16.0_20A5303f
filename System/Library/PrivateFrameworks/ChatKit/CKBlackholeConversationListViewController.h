//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PSRootController, PSSpecifier, UIViewController;
@protocol PSController;

__attribute__((visibility("hidden")))
@interface CKBlackholeConversationListViewController
{
    UIViewController<PSController> *_parentController;	// 8 = 0x8
    PSRootController *_rootController;	// 16 = 0x10
    PSSpecifier *_specifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002e2919
- (_Bool)canBeShownFromSuspendedState;	// IMP=0x00000000002e2911
- (void)handleURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e28f4
- (void)handleURL:(id)arg1;	// IMP=0x00000000002e28d7
- (void)showController:(id)arg1 animate:(_Bool)arg2;	// IMP=0x00000000002e28ba
- (void)showController:(id)arg1;	// IMP=0x00000000002e289d
- (id)readPreferenceValue:(id)arg1;	// IMP=0x00000000002e2884
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000002e286b
- (id)specifier;	// IMP=0x00000000002e2856
- (void)setSpecifier:(id)arg1;	// IMP=0x00000000002e2805
- (id)rootController;	// IMP=0x00000000002e27f0
- (void)setRootController:(id)arg1;	// IMP=0x00000000002e27dc
- (id)parentController;	// IMP=0x00000000002e27c7
- (void)setParentController:(id)arg1;	// IMP=0x00000000002e27b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

