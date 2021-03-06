//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, UIInputWindowController;

__attribute__((visibility("hidden")))
@interface UIInputWindowControllerHosting : NSObject
{
    NSMutableArray *_hostingItems;	// 8 = 0x8
    unsigned long long _currentState;	// 16 = 0x10
    _Bool _requiresConstraintUpdate;	// 24 = 0x18
    int _extraHostsRequired;	// 28 = 0x1c
    UIInputWindowController *_owner;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000b48da4
@property(nonatomic) _Bool requiresConstraintUpdate; // @synthesize requiresConstraintUpdate=_requiresConstraintUpdate;
@property(nonatomic) int extraHostsRequired; // @synthesize extraHostsRequired=_extraHostsRequired;
@property(nonatomic) __weak UIInputWindowController *owner; // @synthesize owner=_owner;
- (unsigned long long)indexOfHost:(id)arg1;	// IMP=0x0000000000b48d4c
- (_Bool)host:(id)arg1 isForPurpose:(unsigned long long)arg2;	// IMP=0x0000000000b48cad
- (id)expectedPlacementForHost:(id)arg1;	// IMP=0x0000000000b48b90
- (id)placementForHost:(id)arg1;	// IMP=0x0000000000b48af8
- (id)subPlacementFromPlacement:(id)arg1 forHost:(id)arg2;	// IMP=0x0000000000b48a44
- (struct CGRect)visibleFrame;	// IMP=0x0000000000b489e4
- (void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2;	// IMP=0x0000000000b48893
- (void)updateViewSizingConstraints;	// IMP=0x0000000000b4887a
- (void)clearInputAssistantViewEdgeConstraints;	// IMP=0x0000000000b48861
- (void)clearInputAccessoryViewEdgeConstraints;	// IMP=0x0000000000b48848
- (void)resetInputViewVisibility;	// IMP=0x0000000000b4882f
- (void)clearInputViewEdgeConstraints;	// IMP=0x0000000000b48816
- (void)_updateBackdropViews;	// IMP=0x0000000000b487fd
- (void)layoutIfNeeded;	// IMP=0x0000000000b48642
- (void)performForInputAccessoryBackdropViews:(CDUnknownBlockType)arg1;	// IMP=0x0000000000b484bf
- (void)setNeedsLayout;	// IMP=0x0000000000b48347
- (void)removeAllAnimations;	// IMP=0x0000000000b482d8
- (void)disableViewSizingConstraints:(unsigned long long)arg1 forNewView:(id)arg2;	// IMP=0x0000000000b4816f
- (void)updateEmptyHeightConstraint;	// IMP=0x0000000000b48156
- (void)updateConstraintInsets;	// IMP=0x0000000000b4813d
- (void)resetBackdropHeight;	// IMP=0x0000000000b48124
- (void)initializeTranslateGestureRecognizerIfNecessary;	// IMP=0x0000000000b4810b
- (void)updateViewConstraints;	// IMP=0x0000000000b47f91
- (struct UIEdgeInsets)_inputViewPadding;	// IMP=0x0000000000b47c44
- (id)itemForPurpose:(unsigned long long)arg1;	// IMP=0x0000000000b47b92
- (void)reloadForPlacement;	// IMP=0x0000000000b474e5
- (void)unloadForPlacement;	// IMP=0x0000000000b474c8
- (_Bool)useCrescendoHostingItem;	// IMP=0x0000000000b472db
@property(readonly, retain, nonatomic) NSArray *allHostingItems;
- (id)initWithHost:(id)arg1;	// IMP=0x0000000000b4721a

@end

