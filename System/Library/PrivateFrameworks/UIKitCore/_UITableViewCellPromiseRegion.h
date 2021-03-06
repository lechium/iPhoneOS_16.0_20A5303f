//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexPath, NSString, UIFocusEffect, UITableView, UIView;
@protocol UICoordinateSpace, UIFocusEnvironment, UIFocusItemContainer;

__attribute__((visibility("hidden")))
@interface _UITableViewCellPromiseRegion : NSObject
{
    UITableView *_tableView;	// 8 = 0x8
    NSIndexPath *_indexPath;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000109711a
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void)_searchForFocusRegionsInContext:(id)arg1;	// IMP=0x0000000001096f2d
- (id)_preferredFocusRegionCoordinateSpace;	// IMP=0x0000000001096eb3
- (_Bool)_isLazyFocusItemContainer;	// IMP=0x0000000001096eab
@property(readonly, nonatomic) id <UICoordinateSpace> coordinateSpace;
- (id)focusItemsInRect:(struct CGRect)arg1;	// IMP=0x0000000001096dc3
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000001096dbd
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000001096db5
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
- (void)updateFocusIfNeeded;	// IMP=0x0000000001096d58
- (void)setNeedsFocusUpdate;	// IMP=0x0000000001096d02
@property(readonly, nonatomic, getter=_isEligibleForFocusInteraction) _Bool eligibleForFocusInteraction;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) _Bool canBecomeFocused;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
- (id)_focusDebugOverlayParentView;	// IMP=0x0000000001096c45
- (id)_focusRegionGuides;	// IMP=0x0000000001096c3d
- (id)_focusRegionView;	// IMP=0x0000000001096c35
- (_Bool)_isTransparentFocusRegion;	// IMP=0x0000000001096c2d
- (id)_fulfillPromisedFocusRegion;	// IMP=0x0000000001096bcc
- (_Bool)_isPromiseFocusRegion;	// IMP=0x0000000001096bc4
- (id)_childFocusRegionsInRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x0000000001096bbc
- (_Bool)_legacy_isEligibleForFocusInteraction;	// IMP=0x0000000001096baa
- (struct CGRect)_focusRegionFrame;	// IMP=0x0000000001096b1a
- (id)_focusRegionFocusSystem;	// IMP=0x0000000001096aca
@property(readonly, copy) NSString *description;

// Remaining properties
@property(nonatomic) _Bool areChildrenFocused;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=_isEligibleForFocusOcclusion) _Bool eligibleForFocusOcclusion;
@property(readonly, copy, nonatomic) UIFocusEffect *focusEffect;
@property(readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property(readonly, nonatomic) long long focusGroupPriority;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isTransparentFocusItem;
@property(readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property(readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end

