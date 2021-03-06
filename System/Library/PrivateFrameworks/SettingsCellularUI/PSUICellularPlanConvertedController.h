//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class CTCellularPlanItem, PSUICellularPlanUniversalReference;

__attribute__((visibility("hidden")))
@interface PSUICellularPlanConvertedController : PSListController
{
    CTCellularPlanItem *_plan;	// 192 = 0xc0
    PSUICellularPlanUniversalReference *_planReference;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000000000475dc
@property(retain, nonatomic) PSUICellularPlanUniversalReference *planReference; // @synthesize planReference=_planReference;
@property(retain, nonatomic) CTCellularPlanItem *plan; // @synthesize plan=_plan;
- (id)getLogger;	// IMP=0x0000000000047572
- (void)_maybeAddRemoveCellularPlanSpecifier:(id)arg1;	// IMP=0x0000000000047431
- (id)_turnOnThisLineSpecifier;	// IMP=0x000000000004732c
- (id)_phoneNumberSpecifier;	// IMP=0x00000000000471ab
- (id)_labelSpecifier;	// IMP=0x000000000004706e
- (id)_carrierNameSpecifier;	// IMP=0x0000000000046fed
- (id)_removeSIMSpecifier;	// IMP=0x0000000000046ed5
- (id)_phoneNumber:(id)arg1;	// IMP=0x0000000000046e67
- (id)_planLabel:(id)arg1;	// IMP=0x0000000000046e0c
- (id)specifiers;	// IMP=0x0000000000046a8e

@end

