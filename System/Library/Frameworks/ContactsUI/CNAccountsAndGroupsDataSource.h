//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNAccountsAndGroupsItem, CNContactStore, CNContactStoreFilter, CNUIGroupsAndContainersSaveManager, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNAccountsAndGroupsDataSource : NSObject
{
    CNContactStoreFilter *_filter;	// 8 = 0x8
    CNContactStoreFilter *_serverFilter;	// 16 = 0x10
    _Bool _hidesSearchableSources;	// 24 = 0x18
    _Bool _onlyShowsGroupsInSections;	// 25 = 0x19
    CNContactStore *_store;	// 32 = 0x20
    CNAccountsAndGroupsItem *_currentlyEditingGroupItem;	// 40 = 0x28
    NSArray *_sections;	// 48 = 0x30
    CNAccountsAndGroupsItem *_rootItem;	// 56 = 0x38
    CNUIGroupsAndContainersSaveManager *_groupsAndContainersSaveManager;	// 64 = 0x40
    NSString *_currentlyEditingGroupIdentifier;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000001e1429
@property(retain, nonatomic) NSString *currentlyEditingGroupIdentifier; // @synthesize currentlyEditingGroupIdentifier=_currentlyEditingGroupIdentifier;
@property(retain, nonatomic) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager; // @synthesize groupsAndContainersSaveManager=_groupsAndContainersSaveManager;
@property(retain, nonatomic) CNAccountsAndGroupsItem *rootItem; // @synthesize rootItem=_rootItem;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) CNAccountsAndGroupsItem *currentlyEditingGroupItem; // @synthesize currentlyEditingGroupItem=_currentlyEditingGroupItem;
@property(copy, nonatomic) CNContactStoreFilter *filter; // @synthesize filter=_filter;
@property(nonatomic) _Bool onlyShowsGroupsInSections; // @synthesize onlyShowsGroupsInSections=_onlyShowsGroupsInSections;
@property(nonatomic) _Bool hidesSearchableSources; // @synthesize hidesSearchableSources=_hidesSearchableSources;
@property(retain, nonatomic) CNContactStore *store; // @synthesize store=_store;
- (_Bool)isFilterShowingItem:(id)arg1;	// IMP=0x00000000001e1037
- (id)allContactsForItem:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x00000000001e0d57
- (id)allContactsForMainItem:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x00000000001e08aa
- (long long)contactCountForItem:(id)arg1;	// IMP=0x00000000001e0856
- (id)sectionForIdentifier:(id)arg1;	// IMP=0x00000000001e0789
- (id)sectionIdentifierForItem:(id)arg1;	// IMP=0x00000000001e06cf
- (id)containerIdentifierForItem:(id)arg1;	// IMP=0x00000000001e0637
- (id)groupIdentifierForGroupItem:(id)arg1;	// IMP=0x00000000001e05d9
- (void)updateRootItemSelection;	// IMP=0x00000000001e0452
@property(readonly, nonatomic, getter=isTrivial) _Bool trivial;
@property(readonly, nonatomic) CNContactStoreFilter *serverFilter;
- (void)setServerFilterForItem:(id)arg1;	// IMP=0x00000000001e025a
- (id)multiSelectFilter;	// IMP=0x00000000001e004a
- (void)removeServerFilter;	// IMP=0x00000000001e0030
- (void)setFilterForItem:(id)arg1;	// IMP=0x00000000001dfdf3
- (void)_applyFilter;	// IMP=0x00000000001df9c0
@property(readonly, nonatomic) CNAccountsAndGroupsItem *showAllSectionItem;
- (void)_reloadSections;	// IMP=0x00000000001dde86
- (void)reload;	// IMP=0x00000000001dde72
- (_Bool)hasChanges;	// IMP=0x00000000001dd81e
- (id)initWithStore:(id)arg1;	// IMP=0x00000000001dd751

@end
