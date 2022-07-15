//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BuddySimpleTCController, NRTermsEvent, NSMutableArray, NSString, RUILoader, RUIObjectModel, RUIPage, UIViewController;
@protocol COSBuddyControllerDelegate;

@interface COSTermsConditionsController : NSObject
{
    RUIObjectModel *_objectModel;	// 8 = 0x8
    _Bool _warrantySentinelExists;	// 16 = 0x10
    _Bool _didAgree;	// 17 = 0x11
    id <COSBuddyControllerDelegate> _delegate;	// 24 = 0x18
    NRTermsEvent *_onlineTerms;	// 32 = 0x20
    RUILoader *_loader;	// 40 = 0x28
    RUIPage *_loadingPage;	// 48 = 0x30
    NSMutableArray *_objectModels;	// 56 = 0x38
    UIViewController *_viewController;	// 64 = 0x40
    NRTermsEvent *_offlineLicense;	// 72 = 0x48
    NRTermsEvent *_offlineMultiterms;	// 80 = 0x50
    NRTermsEvent *_offlineWarranty;	// 88 = 0x58
    BuddySimpleTCController *_offlineLicenseVC;	// 96 = 0x60
    BuddySimpleTCController *_offlineWarrantyVC;	// 104 = 0x68
}

+ (_Bool)skipControllerForExpressMode:(id)arg1;	// IMP=0x002000000010bb6d
+ (_Bool)controllerNeedsToRun;	// IMP=0x001000000010bb65
- (void).cxx_destruct;	// IMP=0x002000000010d64f
@property(retain, nonatomic) BuddySimpleTCController *offlineWarrantyVC; // @synthesize offlineWarrantyVC=_offlineWarrantyVC;
@property(retain, nonatomic) BuddySimpleTCController *offlineLicenseVC; // @synthesize offlineLicenseVC=_offlineLicenseVC;
@property(retain, nonatomic) NRTermsEvent *offlineWarranty; // @synthesize offlineWarranty=_offlineWarranty;
@property(retain, nonatomic) NRTermsEvent *offlineMultiterms; // @synthesize offlineMultiterms=_offlineMultiterms;
@property(retain, nonatomic) NRTermsEvent *offlineLicense; // @synthesize offlineLicense=_offlineLicense;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSMutableArray *objectModels; // @synthesize objectModels=_objectModels;
@property(retain, nonatomic) RUIPage *loadingPage; // @synthesize loadingPage=_loadingPage;
@property(retain, nonatomic) RUILoader *loader; // @synthesize loader=_loader;
@property(retain, nonatomic) NRTermsEvent *onlineTerms; // @synthesize onlineTerms=_onlineTerms;
@property(nonatomic) _Bool didAgree; // @synthesize didAgree=_didAgree;
@property(nonatomic) _Bool warrantySentinelExists; // @synthesize warrantySentinelExists=_warrantySentinelExists;
@property(nonatomic) __weak id <COSBuddyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)localizedWaitScreenDescription;	// IMP=0x001000000010d4a5
- (double)waitScreenPushGracePeriod;	// IMP=0x001000000010d475
- (_Bool)holdWithWaitScreen;	// IMP=0x001000000010d46d
- (void)_presentDisagreeConfirmationAlert;	// IMP=0x001000000010d149
- (void)buddyTCSubController:(id)arg1 didFinishWithAgree:(_Bool)arg2;	// IMP=0x001000000010cf1c
- (void)objectModel:(id)arg1 didNavigateBackFromController:(id)arg2 withGesture:(_Bool)arg3;	// IMP=0x001000000010cf16
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;	// IMP=0x001000000010c9c2
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;	// IMP=0x001000000010c5d7
- (id)parentViewControllerForObjectModel:(id)arg1;	// IMP=0x001000000010c5c5
- (void)_popObjectModelAnimated:(_Bool)arg1;	// IMP=0x001000000010c447
- (void)_cleanupLoader;	// IMP=0x001000000010c402
- (void)loader:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x001000000010c3bc
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;	// IMP=0x001000000010c1f6
- (void)presentConfirmationAlertWithTitle:(id)arg1 message:(id)arg2 okButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 termsEvent:(id)arg5;	// IMP=0x001000000010bfd7
- (void)markTermsAsAcceptedWithTermsEvent:(id)arg1;	// IMP=0x001000000010bd73
- (_Bool)holdBeforeDisplaying;	// IMP=0x001000000010bb75
- (void)endPerformancePhases;	// IMP=0x001000000010ba49
- (id)holdActivityIdentifier;	// IMP=0x001000000010ba3c
- (void)queryGizmoForShowWarrantySentinel;	// IMP=0x001000000010b937
- (void)enteredCompatibilityState:(id)arg1;	// IMP=0x001000000010b7e1
- (void)removeFromNavHierarchyOf:(id)arg1;	// IMP=0x001000000010b6a4
- (id)_navigationController;	// IMP=0x001000000010b68e
- (void)retrieveOfflineTerms;	// IMP=0x001000000010b57f
- (void)_showTermsFromRequest:(id)arg1;	// IMP=0x001000000010b469
- (void)handleOnlineTermsAndConditionsResponse:(id)arg1 forRequest:(id)arg2 error:(id)arg3;	// IMP=0x001000000010ac5f
- (void)requestOnlineTermsAndConditions;	// IMP=0x001000000010aa11
- (id)offlineWarrantyController;	// IMP=0x001000000010a93a
- (id)offlineLicenseController;	// IMP=0x001000000010a863
- (id)termsEventWithDocumentationID:(id)arg1 data:(id)arg2;	// IMP=0x001000000010a73c
- (void)offlineTermsResponse:(id)arg1;	// IMP=0x001000000010a355
- (void)warrantySentinelResponse:(id)arg1;	// IMP=0x0010000000109cad
- (void)dealloc;	// IMP=0x0010000000109c38
- (id)init;	// IMP=0x0010000000109c09

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
