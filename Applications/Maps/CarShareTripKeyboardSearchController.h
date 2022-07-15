//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CarKeyboardModeController, CarTableView, MSPSharedTripSharingIdentity, NSArray, NSMutableDictionary, NSOrderedSet, NSSet, NSString, NSTimer, SharedTripSuggestionsDataSource;

@interface CarShareTripKeyboardSearchController : UIViewController
{
    CarTableView *_tableView;	// 8 = 0x8
    NSString *_inputText;	// 16 = 0x10
    NSOrderedSet *_matches;	// 24 = 0x18
    MSPSharedTripSharingIdentity *_sharingIdentity;	// 32 = 0x20
    NSSet *_alreadySharingHandles;	// 40 = 0x28
    SharedTripSuggestionsDataSource *_dataSource;	// 48 = 0x30
    NSTimer *_dismissTimer;	// 56 = 0x38
    NSMutableDictionary *_cellsByContactStringValue;	// 64 = 0x40
    _Bool _userInteracted;	// 72 = 0x48
    CDUnknownBlockType _searchHandler;	// 80 = 0x50
    CarKeyboardModeController *_keyboardMode;	// 88 = 0x58
    CDUnknownBlockType _dismissHandler;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000008970e6
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(nonatomic) __weak CarKeyboardModeController *keyboardMode; // @synthesize keyboardMode=_keyboardMode;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
- (void)sharedTripService:(id)arg1 didUpdateReceivers:(id)arg2;	// IMP=0x0010000000897029
- (void)sharedTripServiceDidUpdateSendingAvailability:(id)arg1;	// IMP=0x0010000000897023
- (void)sharedTripService:(id)arg1 didUpdateSharingIdentity:(id)arg2;	// IMP=0x0010000000896f68
- (void)sharedTripService:(id)arg1 sharingDidInvalidateWithError:(id)arg2;	// IMP=0x0010000000896f62
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0010000000896f50
- (void)_attemptToStartShareWithContact:(id)arg1;	// IMP=0x001000000089681e
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000008965c0
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0010000000896410
- (void)_commitShareForCellAtIndexPath:(id)arg1;	// IMP=0x001000000089636d
- (void)carShareTripContactCellDidFinishRingAnimation:(id)arg1;	// IMP=0x0010000000896316
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000896100
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000008960e3
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000008960d8
- (void)_commitPendingShares;	// IMP=0x0010000000895ed8
- (void)_cancelDismiss;	// IMP=0x0010000000895e96
- (void)_dismissAfterDelay;	// IMP=0x0010000000895d38
- (void)_toggleSharingForContactAtIndexPath:(id)arg1;	// IMP=0x0010000000895cb4
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x0010000000895b5e
- (void)handleCancelButtonPressed;	// IMP=0x0010000000895aef
- (void)handleSearchButtonPressedWithText:(id)arg1;	// IMP=0x0010000000895a0a
- (void)handleSearchTextDidChange:(id)arg1;	// IMP=0x0010000000895a04
- (void)updateForInteractionModel:(unsigned long long)arg1;	// IMP=0x00100000008959dc
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000895986
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000089582c
- (void)viewDidLoad;	// IMP=0x00100000008955da
- (id)initWithContactSearchResults:(id)arg1 dataSource:(id)arg2 searchHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000008953cb
- (id)initWithContactSearchResults:(id)arg1 dataSource:(id)arg2;	// IMP=0x00100000008953b6

// Remaining properties
@property(nonatomic) struct CGSize availableCardSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly) Class superclass;

@end
