//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@class HUAvailableRelatedTriggerItemModule, HUAvailableRelatedTriggerItemModuleContext, NSArray;

@interface HSPCSuggestedAutomationsItemManager : HFItemManager
{
    NSArray *_serviceLikeItems;	// 8 = 0x8
    HUAvailableRelatedTriggerItemModule *_recommendationModule;	// 16 = 0x10
    HUAvailableRelatedTriggerItemModuleContext *_context;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000016e3b
@property(retain, nonatomic) HUAvailableRelatedTriggerItemModuleContext *context; // @synthesize context=_context;
@property(retain, nonatomic) HUAvailableRelatedTriggerItemModule *recommendationModule; // @synthesize recommendationModule=_recommendationModule;
@property(retain, nonatomic) NSArray *serviceLikeItems; // @synthesize serviceLikeItems=_serviceLikeItems;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x0010000000016c8a
- (id)_buildItemModulesForHome:(id)arg1;	// IMP=0x0010000000016b49
- (id)_itemsToHideInSet:(id)arg1;	// IMP=0x001000000001688a
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x00100000000167a6
- (id)initWithDelegate:(id)arg1 serviceLikeItems:(id)arg2;	// IMP=0x0010000000016537

@end
