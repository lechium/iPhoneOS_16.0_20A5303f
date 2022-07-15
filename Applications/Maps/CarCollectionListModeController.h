//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarCollectionListCardViewController, CarMapTrackingController, NGChromeViewController, NSArray, NSString;

@interface CarCollectionListModeController : NSObject
{
    NGChromeViewController *_chromeViewController;	// 8 = 0x8
    CarCollectionListCardViewController *_collectionListCard;	// 16 = 0x10
    NSArray *_collections;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000004c7dae
@property(retain, nonatomic) NSArray *collections; // @synthesize collections=_collections;
@property(retain, nonatomic) CarCollectionListCardViewController *collectionListCard; // @synthesize collectionListCard=_collectionListCard;
@property(nonatomic) __weak NGChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(readonly, nonatomic) int currentUsageTarget;
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
@property(readonly, nonatomic) NSArray *preferredCarFocusEnvironments;
@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
- (void)collectionListCard:(id)arg1 didSelectCollection:(id)arg2;	// IMP=0x00100000004c7b26
- (void)collectionManager:(id)arg1 contentDidChange:(id)arg2;	// IMP=0x00100000004c7b11
- (void)_updateCollections:(id)arg1;	// IMP=0x00100000004c7a3a
- (void)configureCard:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000004c787f
- (id)desiredCards;	// IMP=0x00100000004c7818
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x00100000004c77c5
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x00100000004c770b
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
@property(readonly, nonatomic) long long autohideBehavior;
- (_Bool)showsMapView;	// IMP=0x00100000004c76e0
- (id)init;	// IMP=0x00100000004c764c

// Remaining properties
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
@property(readonly, nonatomic) double autohideIdlenessInterval;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
@property(readonly, nonatomic) CDStruct_917cde60 mapControlsConfiguration;
@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
@property(readonly, nonatomic) _Bool showsHeadingIndicator;
@property(readonly, nonatomic) _Bool showsSpeedLimit;
@property(readonly) Class superclass;
@property(readonly, nonatomic) CarMapTrackingController *trackingController;
@property(readonly, nonatomic) id visuallySelectedItem;
@property(readonly, nonatomic) _Bool zoomInButtonPressed;
@property(readonly, nonatomic) _Bool zoomOutButtonPressed;

@end
