//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject;
@protocol OS_dispatch_queue, VOTElementRotorDelegate><VOTCustomActionContext;

@interface VOTElementRotor
{
    NSArray *_enabledWebRotorItems;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_enabledWebRotorItemsQueue;	// 88 = 0x58
    _Bool _showsWebSearchResults;	// 96 = 0x60
    long long _temporaryRotorTypeNeedingPromotion;	// 104 = 0x68
    _Bool _ignoreDefaultTypeAutofill;	// 112 = 0x70
    CDUnknownBlockType _updatedWebRotorItemsCallback;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00200000000d2ac6
@property(copy, nonatomic) CDUnknownBlockType updatedWebRotorItemsCallback; // @synthesize updatedWebRotorItemsCallback=_updatedWebRotorItemsCallback;
@property(nonatomic) _Bool ignoreDefaultTypeAutofill; // @synthesize ignoreDefaultTypeAutofill=_ignoreDefaultTypeAutofill;
@property(nonatomic) _Bool showsWebSearchResults; // @synthesize showsWebSearchResults=_showsWebSearchResults;
- (_Bool)customActionsAreDragDrop:(id)arg1;	// IMP=0x00100000000d2799
- (_Bool)customActionsAreValid:(id)arg1;	// IMP=0x00100000000d24f3
- (void)updateRotorForElement:(id)arg1 shouldPreserveRotorNavigation:(_Bool)arg2 firstResponder:(id)arg3;	// IMP=0x00100000000cf6f9
- (void)updateRotorForElement:(id)arg1 shouldPreserveRotorNavigation:(_Bool)arg2;	// IMP=0x00100000000cf6e4
- (_Bool)rotorTypeIsValid:(long long)arg1 eventOrigin:(long long)arg2;	// IMP=0x00100000000cf3f4
- (void)nanoUpdateRotorForElement:(id)arg1;	// IMP=0x00100000000cef19
- (void)_promoteGesturedTextInputRotorIfNeeded;	// IMP=0x00100000000cee41
- (void)_depromoteMLElementSupport;	// IMP=0x00100000000cedc3
- (id)_currentEnabledWebRotorItems;	// IMP=0x00100000000cec62
- (void)_updateWebRotorItems;	// IMP=0x00100000000ce87c
- (_Bool)_customPublicRotorInRotor:(id)arg1;	// IMP=0x00100000000ce671
- (long long)_firstNonGesturedTextInputRotorTypeWithFallback:(long long)arg1;	// IMP=0x00100000000ce445
- (void)dealloc;	// IMP=0x00100000000ce3fb
- (id)init;	// IMP=0x00100000000ce1e0

// Remaining properties
@property(nonatomic) __weak id <VOTElementRotorDelegate><VOTCustomActionContext> delegate; // @dynamic delegate;

@end
