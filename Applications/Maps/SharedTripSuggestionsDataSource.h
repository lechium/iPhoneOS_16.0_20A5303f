//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSOrderedSet, NSString, UITableViewDiffableDataSource;
@protocol SharedTripSuggestionsDataSourceDelegate;

@interface SharedTripSuggestionsDataSource : NSObject
{
    _Bool _includeActiveContacts;	// 8 = 0x8
    NSArray *_contactsForDisplay;	// 16 = 0x10
    NSOrderedSet *_changedContacts;	// 24 = 0x18
    CDUnknownBlockType _tableDataSourceSnapshotAdjustmentBlock;	// 32 = 0x20
    NSObject<SharedTripSuggestionsDataSourceDelegate> *_delegate;	// 40 = 0x28
    unsigned long long _softCap;	// 48 = 0x30
    NSOrderedSet *_orderedSuggestions;	// 56 = 0x38
    NSOrderedSet *_activeContacts;	// 64 = 0x40
    NSOrderedSet *_wereActiveContacts;	// 72 = 0x48
    NSArray *_initiallyActiveHandles;	// 80 = 0x50
    UITableViewDiffableDataSource *_tableViewDataSource;	// 88 = 0x58
}

+ (void)prefetchSuggestionsAndCapabilitiesWithContext:(id)arg1;	// IMP=0x002000000072ef34
- (void).cxx_destruct;	// IMP=0x00200000007316da
@property(retain, nonatomic) UITableViewDiffableDataSource *tableViewDataSource; // @synthesize tableViewDataSource=_tableViewDataSource;
@property(retain, nonatomic) NSArray *initiallyActiveHandles; // @synthesize initiallyActiveHandles=_initiallyActiveHandles;
@property(retain, nonatomic) NSOrderedSet *wereActiveContacts; // @synthesize wereActiveContacts=_wereActiveContacts;
@property(retain, nonatomic) NSOrderedSet *activeContacts; // @synthesize activeContacts=_activeContacts;
@property(retain, nonatomic) NSOrderedSet *orderedSuggestions; // @synthesize orderedSuggestions=_orderedSuggestions;
@property(nonatomic) _Bool includeActiveContacts; // @synthesize includeActiveContacts=_includeActiveContacts;
@property(nonatomic) unsigned long long softCap; // @synthesize softCap=_softCap;
@property(nonatomic) __weak NSObject<SharedTripSuggestionsDataSourceDelegate> *delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType tableDataSourceSnapshotAdjustmentBlock; // @synthesize tableDataSourceSnapshotAdjustmentBlock=_tableDataSourceSnapshotAdjustmentBlock;
@property(retain, nonatomic) NSOrderedSet *changedContacts; // @synthesize changedContacts=_changedContacts;
- (id)contactForItemIndexPath:(id)arg1;	// IMP=0x0010000000731532
- (id)contactForItemIdentifier:(id)arg1;	// IMP=0x0010000000731182
- (unsigned long long)sharingStateForContact:(id)arg1;	// IMP=0x001000000073105f
- (void)abandon;	// IMP=0x0010000000730fbb
- (void)toggleContact:(id)arg1;	// IMP=0x0010000000730cdd
- (void)resetContactsForDisplayOrdering;	// IMP=0x0010000000730c5a
@property(readonly, nonatomic) NSArray *contactsForDisplay; // @synthesize contactsForDisplay=_contactsForDisplay;
- (id)_recommendedContactsForDisplay;	// IMP=0x00100000007305eb
- (void)findChangedContactsWithNewActiveSet:(id)arg1;	// IMP=0x0010000000730421
- (void)_refreshWithActiveContacts:(id)arg1;	// IMP=0x0010000000730155
- (void)sharedTripService:(id)arg1 didUpdateReceivers:(id)arg2;	// IMP=0x00100000007300b8
- (void)sharedTripServiceDidUpdateSendingAvailability:(id)arg1;	// IMP=0x001000000072fff8
- (void)sharedTripService:(id)arg1 didUpdateSharingIdentity:(id)arg2;	// IMP=0x001000000072fff2
- (void)sharedTripService:(id)arg1 sharingDidInvalidateWithError:(id)arg2;	// IMP=0x001000000072ffec
- (void)capabilityLevelsDidUpdate;	// IMP=0x001000000072ff70
- (void)dataDidUpdateAnimatingChanges:(_Bool)arg1;	// IMP=0x001000000072fc8a
- (void)dataDidUpdate;	// IMP=0x001000000072fc73
- (void)dataWillUpdate;	// IMP=0x001000000072fbd6
- (void)suggestionsDidUpdateInCache:(id)arg1;	// IMP=0x001000000072fb4b
- (void)suggestionsWillUpdateInCache:(id)arg1;	// IMP=0x001000000072facf
@property(readonly, nonatomic, getter=isRefreshing) _Bool refreshing;
- (void)clearTableView;	// IMP=0x001000000072fa70
- (void)addTableView:(id)arg1 cellProvider:(id)arg2;	// IMP=0x001000000072f9ad
- (void)_updateFromCache;	// IMP=0x001000000072f8b8
- (void)dealloc;	// IMP=0x001000000072f7b4
- (id)initWithSoftCellCap:(unsigned long long)arg1 includeActiveContacts:(_Bool)arg2;	// IMP=0x001000000072f597

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
