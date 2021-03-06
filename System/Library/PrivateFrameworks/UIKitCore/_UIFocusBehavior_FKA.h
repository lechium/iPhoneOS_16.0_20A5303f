//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIFocusBehavior_FKA : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x001000000067889e
- (_Bool)supportsLinearMovementDebugOverlay;	// IMP=0x0000000000678bdf
- (_Bool)tabBasedMovementLoops;	// IMP=0x0000000000678bd7
- (long long)skipKeyCommandsForKeyEvents;	// IMP=0x0000000000678bcf
- (long long)deliverKeyEventsToFocusEngine;	// IMP=0x0000000000678bc7
- (_Bool)shouldSupressIndirectMovementOnSelect;	// IMP=0x0000000000678bbf
- (_Bool)shouldEnableFocusOnSelect;	// IMP=0x0000000000678bb7
- (_Bool)supportsArrowKeys;	// IMP=0x0000000000678baf
- (_Bool)supportsGameControllers;	// IMP=0x0000000000678b64
- (_Bool)shouldConvertIndirectTapsIntoArrowKeys;	// IMP=0x0000000000678b5c
- (_Bool)supportsIndirectPanningMovement;	// IMP=0x0000000000678b54
- (_Bool)showsFocusRingForItem:(id)arg1;	// IMP=0x0000000000678b4c
- (_Bool)supportsParentFocusRings;	// IMP=0x0000000000678b44
- (long long)focusRingVisibility;	// IMP=0x0000000000678b39
- (long long)buttonSelectionMode;	// IMP=0x0000000000678b31
- (_Bool)refinesIndexBarTargetContentOffset;	// IMP=0x0000000000678b29
- (_Bool)isContainerEligibleForFocusUpdateSearchRoot:(id)arg1;	// IMP=0x0000000000678a75
- (double)stabilizedLinearFocusMovementTimeout;	// IMP=0x0000000000678a6c
- (_Bool)wantsTreeLocking;	// IMP=0x0000000000678a64
- (_Bool)throttlesProgrammaticFocusUpdates;	// IMP=0x0000000000678a5c
- (long long)focusCastingMode;	// IMP=0x0000000000678a54
- (_Bool)supportsClipToBounds;	// IMP=0x0000000000678a40
- (_Bool)supportViewTransparencyAndMultipleWindows;	// IMP=0x0000000000678a2c
- (_Bool)treatFirstAndLastHeadingsAsGlobal;	// IMP=0x0000000000678a24
- (_Bool)defaultValueForSelectionFollowsFocusInTableView:(id)arg1;	// IMP=0x0000000000678a1c
- (_Bool)defaultValueForSelectionFollowsFocusInCollectionView:(id)arg1;	// IMP=0x0000000000678a14
- (_Bool)preventsCellFocusabilityWhileEditing;	// IMP=0x0000000000678a0c
- (long long)cellFocusability;	// IMP=0x0000000000678a04
- (_Bool)shouldUseAccessibilityCompareForItemGeometry;	// IMP=0x00000000006789fc
- (_Bool)infersScrollableContainer;	// IMP=0x00000000006789f4
- (_Bool)useDifferentialScrollTrigger;	// IMP=0x00000000006789ec
- (_Bool)enforcesStrictTargetContentOffsetAdjustmentBehavior;	// IMP=0x00000000006789e4
- (unsigned long long)focusGroupContainmentBehavior;	// IMP=0x00000000006789d9
- (unsigned long long)focusGroupMovementBehavior;	// IMP=0x00000000006789ce
- (long long)indirectMovementPriority;	// IMP=0x00000000006789c6
- (_Bool)supportsTabKey;	// IMP=0x00000000006789be
- (_Bool)includesContentScrollViewInPreferredFocusEnvironments;	// IMP=0x00000000006789b6
- (_Bool)searchBarTextFieldCanBecomeFocused;	// IMP=0x00000000006789ae
- (_Bool)tabBarButtonCanBecomeFocused;	// IMP=0x00000000006789a6
- (_Bool)tabBarCanBecomeFocused;	// IMP=0x000000000067899e
- (_Bool)textViewCanBecomeFocused:(id)arg1;	// IMP=0x0000000000678989
- (_Bool)controlCanBecomeFocused:(id)arg1;	// IMP=0x0000000000678981
- (_Bool)ignoresKeyWindowStatusWhenRestoringFocus;	// IMP=0x0000000000678979
- (long long)focusDeferral;	// IMP=0x0000000000678971
- (_Bool)syncsFocusAndResponder;	// IMP=0x0000000000678969
- (long long)requiredInputDevices;	// IMP=0x0000000000678933
- (_Bool)honorsFocusSystemEnabledInfoPlistKey;	// IMP=0x000000000067892b
- (_Bool)wantsFocusSystemForScene:(id)arg1;	// IMP=0x0000000000678923

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

