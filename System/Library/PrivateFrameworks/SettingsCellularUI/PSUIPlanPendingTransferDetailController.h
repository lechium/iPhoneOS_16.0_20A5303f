//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class PSUIPlanPendingTransferMenusGroup;

__attribute__((visibility("hidden")))
@interface PSUIPlanPendingTransferDetailController : PSListController
{
    PSUIPlanPendingTransferMenusGroup *_planPendingTransferMenus;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00000000000428bd
@property(retain, nonatomic) PSUIPlanPendingTransferMenusGroup *planPendingTransferMenus; // @synthesize planPendingTransferMenus=_planPendingTransferMenus;
- (id)getLogger;	// IMP=0x0000000000042878
- (id)specifiers;	// IMP=0x00000000000426ed
- (void)cellularPlanChanged;	// IMP=0x00000000000424b5
- (id)init;	// IMP=0x0000000000042421

@end
