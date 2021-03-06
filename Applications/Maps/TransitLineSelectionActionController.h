//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ControlContainerViewController, NSString, TransitLineDisambiguationViewController;
@protocol ActionCoordination;

@interface TransitLineSelectionActionController : NSObject
{
    long long _viewModeToRestore;	// 8 = 0x8
    id <ActionCoordination> _coordinator;	// 16 = 0x10
    ControlContainerViewController *_containerViewController;	// 24 = 0x18
    TransitLineDisambiguationViewController *_disambiguationVC;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000992856
@property(retain, nonatomic) TransitLineDisambiguationViewController *disambiguationVC; // @synthesize disambiguationVC=_disambiguationVC;
@property(nonatomic) __weak ControlContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) __weak id <ActionCoordination> coordinator; // @synthesize coordinator=_coordinator;
- (_Bool)_shouldRestoreDisplayedViewModeForContext:(id)arg1;	// IMP=0x00100000009927a0
- (void)_clearTransitLineSelectionDeactivate:(_Bool)arg1 context:(id)arg2;	// IMP=0x00100000009925ea
- (void)_showTransitLineWithName:(id)arg1 identifier:(id)arg2 mapRegion:(id)arg3;	// IMP=0x001000000099242a
- (void)_zoomToRegionForLineIfNecessary:(id)arg1 region:(id)arg2 withStartingRegion:(id)arg3 startedShowingLineDate:(id)arg4;	// IMP=0x00100000009921b0
- (void)_disambiguateSelectedLineForLabelMarker:(id)arg1 onActivation:(CDUnknownBlockType)arg2;	// IMP=0x001000000099193a
- (void)containeeViewControllerGoToPreviousState:(id)arg1 withSender:(id)arg2;	// IMP=0x0010000000991831
- (id)mapView;	// IMP=0x00100000009917c0
- (void)deactivateWithContext:(id)arg1;	// IMP=0x00100000009917a6
- (_Bool)isShowingLineWithIdentifier:(id)arg1;	// IMP=0x0010000000991697
- (_Bool)isShowingLineForLineItem:(id)arg1;	// IMP=0x0010000000991653
- (_Bool)isShowingLineForLabelMarker:(id)arg1;	// IMP=0x001000000099156e
@property(readonly, nonatomic) _Bool isActive;
- (void)selectLine:(id)arg1 zoomToMapRegion:(_Bool)arg2 onActivation:(CDUnknownBlockType)arg3;	// IMP=0x00100000009910f3
- (void)selectLineForLabelMarker:(id)arg1 zoomToMapRegion:(_Bool)arg2 onActivation:(CDUnknownBlockType)arg3;	// IMP=0x0010000000990a19
- (id)_traits;	// IMP=0x0010000000990966
- (id)init;	// IMP=0x0010000000990950
- (id)initWithContainerViewController:(id)arg1 actionCoordinator:(id)arg2;	// IMP=0x00100000009908b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

