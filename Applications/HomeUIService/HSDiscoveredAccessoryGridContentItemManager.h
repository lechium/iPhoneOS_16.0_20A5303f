//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUServiceGridItemManager.h>

@class HFAccessoryBrowsingManager, NSString;

@interface HSDiscoveredAccessoryGridContentItemManager : HUServiceGridItemManager
{
    HFAccessoryBrowsingManager *_accessoryBrowsingManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000004af77
@property(readonly, nonatomic) HFAccessoryBrowsingManager *accessoryBrowsingManager; // @synthesize accessoryBrowsingManager=_accessoryBrowsingManager;
- (void)_reloadDiscoveredAccessoryItemProviderWithSenderSelector:(SEL)arg1;	// IMP=0x001000000004ae24
- (void)accessoryBrowsingManager:(id)arg1 didRemoveNewSharingDevice:(id)arg2;	// IMP=0x001000000004ae0f
- (void)accessoryBrowsingManager:(id)arg1 didFindNewSharingDevice:(id)arg2;	// IMP=0x001000000004adfa
- (void)accessoryBrowsingManager:(id)arg1 didRemoveNewAccessory:(id)arg2;	// IMP=0x001000000004ade5
- (void)accessoryBrowsingManager:(id)arg1 didFindNewAccessory:(id)arg2;	// IMP=0x001000000004add0
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;	// IMP=0x001000000004ab5e
- (void)_unregisterForExternalUpdates;	// IMP=0x001000000004aaed
- (void)_registerForExternalUpdates;	// IMP=0x001000000004aa7c
- (id)initWithAccessoryBrowsingManager:(id)arg1 delegate:(id)arg2 discoveredAccessoryFilter:(id)arg3;	// IMP=0x001000000004a86c
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(_Bool)arg2 itemProvidersCreator:(CDUnknownBlockType)arg3;	// IMP=0x001000000004a7b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

