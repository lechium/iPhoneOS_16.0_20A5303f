//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

__attribute__((visibility("hidden")))
@interface PSUICarrierSpaceUsageController : PSListController
{
}

- (id)getLogger;	// IMP=0x000000000001538c
- (id)remainingCreditDescription:(id)arg1;	// IMP=0x0000000000015332
- (_Bool)shouldShowRemainingCredit:(id)arg1;	// IMP=0x00000000000152e7
- (id)messagesDescription:(id)arg1;	// IMP=0x0000000000014ebd
- (_Bool)shouldShowOnlyRemainingMessages:(id)arg1;	// IMP=0x0000000000014dc5
- (_Bool)shouldShowMessages:(id)arg1;	// IMP=0x0000000000014c93
- (id)callsDescription:(id)arg1;	// IMP=0x0000000000014869
- (_Bool)shouldShowOnlyRemainingCalls:(id)arg1;	// IMP=0x0000000000014771
- (_Bool)shouldShowCalls:(id)arg1;	// IMP=0x000000000001463f
- (id)dataUsageDescription:(id)arg1;	// IMP=0x00000000000145b4
- (_Bool)shouldShowOnlyRemainingData:(id)arg1;	// IMP=0x00000000000144bc
- (_Bool)shouldShowData:(id)arg1;	// IMP=0x000000000001438a
- (_Bool)shouldShowPlanSection:(id)arg1;	// IMP=0x00000000000142fc
- (id)usageGraphSpecifierForSection:(id)arg1;	// IMP=0x00000000000139fc
- (id)specifiers;	// IMP=0x00000000000121a9
- (_Bool)hasMultiplePlansOfSameTypeForNetworkUsageLabel:(id)arg1;	// IMP=0x0000000000011cf0
- (_Bool)hasMultiplePlansOfTheSameTypeInTheSameSectionCategory;	// IMP=0x0000000000011890
- (_Bool)hasMultipleDevicesOfTheSameType;	// IMP=0x000000000001142d
- (id)planCategorySectionLabelForPlanMetrics:(id)arg1;	// IMP=0x00000000000112be
- (id)deviceTypeSectionLabelForAccountMetrics:(id)arg1;	// IMP=0x00000000000110ea
- (id)usageSections;	// IMP=0x0000000000010369
- (id)usageCategories;	// IMP=0x000000000000ff89
- (id)barGraphColors;	// IMP=0x000000000000fd9e
- (_Bool)shouldReloadSpecifiersOnResume;	// IMP=0x000000000000fd96
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000000fb8b
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000000faa8
- (void)carrierSpaceChanged;	// IMP=0x000000000000f9e9
- (void)simStatusChanged;	// IMP=0x000000000000f8b5

@end
