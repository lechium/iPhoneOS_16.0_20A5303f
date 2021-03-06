//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIFocusBehavior_IOS : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x00100000011f21f3
- (_Bool)supportsLinearMovementDebugOverlay;	// IMP=0x00000000011f29b3
- (_Bool)tabBasedMovementLoops;	// IMP=0x00000000011f29ab
- (long long)skipKeyCommandsForKeyEvents;	// IMP=0x00000000011f29a0
- (long long)deliverKeyEventsToFocusEngine;	// IMP=0x00000000011f2995
- (_Bool)shouldSupressIndirectMovementOnSelect;	// IMP=0x00000000011f298d
- (_Bool)shouldEnableFocusOnSelect;	// IMP=0x00000000011f2985
- (_Bool)supportsTabKey;	// IMP=0x00000000011f297d
- (_Bool)supportsArrowKeys;	// IMP=0x00000000011f2975
- (_Bool)supportsGameControllers;	// IMP=0x00000000011f292a
- (_Bool)shouldConvertIndirectTapsIntoArrowKeys;	// IMP=0x00000000011f2922
- (_Bool)supportsIndirectPanningMovement;	// IMP=0x00000000011f291a
- (_Bool)showsFocusRingForItem:(id)arg1;	// IMP=0x00000000011f2912
- (_Bool)supportsParentFocusRings;	// IMP=0x00000000011f290a
- (long long)focusRingVisibility;	// IMP=0x00000000011f28ba
- (long long)buttonSelectionMode;	// IMP=0x00000000011f28af
- (_Bool)refinesIndexBarTargetContentOffset;	// IMP=0x00000000011f28a7
- (_Bool)isContainerEligibleForFocusUpdateSearchRoot:(id)arg1;	// IMP=0x00000000011f2892
- (double)stabilizedLinearFocusMovementTimeout;	// IMP=0x00000000011f286c
- (_Bool)wantsTreeLocking;	// IMP=0x00000000011f2864
- (_Bool)throttlesProgrammaticFocusUpdates;	// IMP=0x00000000011f285c
- (long long)focusCastingMode;	// IMP=0x00000000011f2851
- (_Bool)supportsClipToBounds;	// IMP=0x00000000011f2849
- (_Bool)supportViewTransparencyAndMultipleWindows;	// IMP=0x00000000011f2835
- (_Bool)treatFirstAndLastHeadingsAsGlobal;	// IMP=0x00000000011f282d
- (_Bool)defaultValueForSelectionFollowsFocusInTableView:(id)arg1;	// IMP=0x00000000011f266d
- (_Bool)defaultValueForSelectionFollowsFocusInCollectionView:(id)arg1;	// IMP=0x00000000011f24ad
- (_Bool)preventsCellFocusabilityWhileEditing;	// IMP=0x00000000011f24a5
- (long long)cellFocusability;	// IMP=0x00000000011f2470
- (_Bool)shouldUseAccessibilityCompareForItemGeometry;	// IMP=0x00000000011f2468
- (_Bool)infersScrollableContainer;	// IMP=0x00000000011f2460
- (_Bool)useDifferentialScrollTrigger;	// IMP=0x00000000011f2458
- (_Bool)enforcesStrictTargetContentOffsetAdjustmentBehavior;	// IMP=0x00000000011f2450
- (unsigned long long)focusGroupContainmentBehavior;	// IMP=0x00000000011f2445
- (unsigned long long)focusGroupMovementBehavior;	// IMP=0x00000000011f243a
- (long long)indirectMovementPriority;	// IMP=0x00000000011f2432
- (_Bool)includesContentScrollViewInPreferredFocusEnvironments;	// IMP=0x00000000011f242a
- (_Bool)searchBarTextFieldCanBecomeFocused;	// IMP=0x00000000011f2422
- (_Bool)tabBarButtonCanBecomeFocused;	// IMP=0x00000000011f241a
- (_Bool)tabBarCanBecomeFocused;	// IMP=0x00000000011f2412
- (_Bool)textViewCanBecomeFocused:(id)arg1;	// IMP=0x00000000011f23fd
- (_Bool)controlCanBecomeFocused:(id)arg1;	// IMP=0x00000000011f233e
- (_Bool)ignoresKeyWindowStatusWhenRestoringFocus;	// IMP=0x00000000011f2336
- (long long)focusDeferral;	// IMP=0x00000000011f232b
- (_Bool)syncsFocusAndResponder;	// IMP=0x00000000011f2323
- (long long)requiredInputDevices;	// IMP=0x00000000011f2307
- (_Bool)honorsFocusSystemEnabledInfoPlistKey;	// IMP=0x00000000011f22ff
- (_Bool)wantsFocusSystemForScene:(id)arg1;	// IMP=0x00000000011f2285
- (_Bool)_shouldOverrideFocusSystemEnabledForScene:(id)arg1;	// IMP=0x00000000011f2278

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

