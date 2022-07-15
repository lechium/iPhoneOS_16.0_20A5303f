//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PSUISubscriptionContextMenusProductionFactory : NSObject
{
    _Bool _popViewControllerOnPlanRemoval;	// 8 = 0x8
    PSListController *_hostController;	// 16 = 0x10
    PSSpecifier *_parentSpecifier;	// 24 = 0x18
    PSSpecifier *_groupSpecifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000045df6
@property(nonatomic) _Bool popViewControllerOnPlanRemoval; // @synthesize popViewControllerOnPlanRemoval=_popViewControllerOnPlanRemoval;
@property(nonatomic) __weak PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(nonatomic) __weak PSSpecifier *parentSpecifier; // @synthesize parentSpecifier=_parentSpecifier;
@property(nonatomic) __weak PSListController *hostController; // @synthesize hostController=_hostController;
- (id)createRoamingSpecifiersSubgroupWithServiceDescriptor:(id)arg1;	// IMP=0x0000000000045d08
- (id)createDataModeSubgroupWithContext:(id)arg1;	// IMP=0x0000000000045bdd
- (id)createPasscodeStatusCache;	// IMP=0x0000000000045bc4
- (id)createCellularPlanManager;	// IMP=0x0000000000045bab
- (id)createCellularPlanManagerCache;	// IMP=0x0000000000045b92
- (id)createDataCache;	// IMP=0x0000000000045b79
- (id)createCarrierBundleCache;	// IMP=0x0000000000045b60
- (id)createSimStatusCache;	// IMP=0x0000000000045b47
- (id)createCallCache;	// IMP=0x0000000000045b2e
- (id)createSimSubgroup;	// IMP=0x0000000000045a9c
- (id)createNetworkSettingsSubgroup;	// IMP=0x0000000000045a0a
- (id)createMyNumberSubgroup;	// IMP=0x0000000000045978
- (id)createNetworkSelectionSubgroup;	// IMP=0x00000000000458e6
- (id)createCarrierSpaceSubgroup;	// IMP=0x00000000000457e5
- (id)createCallingSubgroup;	// IMP=0x0000000000045753
- (_Bool)shouldPopViewControllerOnPlanRemoval;	// IMP=0x000000000004574a
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 groupSpecifier:(id)arg3 popViewControllerOnPlanRemoval:(_Bool)arg4;	// IMP=0x0000000000045647

@end
