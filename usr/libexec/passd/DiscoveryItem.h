//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DiscoveryItem
{
    unsigned long long _itemOrder;	// 24 = 0x18
}

+ (id)_propertySettersForAccount;	// IMP=0x00400000001ccc63
+ (id)_predicateForViewCount:(long long)arg1;	// IMP=0x00100000001ccbf2
+ (id)_predicateForEntitledToForceLargeCard;	// IMP=0x00100000001ccbcb
+ (id)_predicateForShouldBadge;	// IMP=0x00100000001ccba4
+ (id)_predicateForCheckingRelevantDate:(id)arg1;	// IMP=0x00100000001cc8e4
+ (id)_predicateForNonTerminalItems;	// IMP=0x00100000001cc7aa
+ (id)_predicateForActiveOrActionedItems;	// IMP=0x00100000001cc694
+ (id)_predicateForActiveOrActionedRelevantItemsRequiringBadge:(id)arg1;	// IMP=0x00100000001cc534
+ (id)_predicateForActiveOrActionedAndRelevantItems:(id)arg1;	// IMP=0x00100000001cc419
+ (id)_predicateForItemIdentifier:(id)arg1;	// IMP=0x00100000001cc3f6
+ (void)deleteAllItemsInDatabase:(id)arg1;	// IMP=0x00100000001cc35c
+ (void)deleteItemsNotIncludingIdentifiers:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001cc2b7
+ (void)deleteItemWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001cc275
+ (id)updateItem:(id)arg1 inDatabse:(id)arg2;	// IMP=0x00100000001cb82c
+ (id)insertOrUpdateItem:(id)arg1 itemOrder:(unsigned long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001cb232
+ (id)itemWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001cb1a6
+ (id)nonTerminalItemIdentifiersInDatabase:(id)arg1;	// IMP=0x00100000001caf91
+ (id)activeItemIdentifiersWithRelevantDate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001cad7b
+ (_Bool)activeItemRequiringBadgeExistsForRelevantDate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001cace6
+ (id)discoveryItemsMatchingQuery:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001cab0c
+ (id)orderedQueryWithPredicate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001ca9d3
+ (id)activeItemsRequiringBadgingForRelevantDate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001ca91d
+ (id)activeItemsWithRelevantDate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001ca867
+ (id)itemsWithRelevantDate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001ca7b1
+ (id)itemsInDatabase:(id)arg1;	// IMP=0x00100000001ca6fa
+ (id)databaseTable;	// IMP=0x00100000001ca6ed
@property(nonatomic) unsigned long long itemOrder; // @synthesize itemOrder=_itemOrder;
- (unsigned long long);	// IMP=0x00100000001cd4ca
- (void)setItemOrder;	// IMP=0x00100000001cd336
- (id)item;	// IMP=0x00100000001cbda4
- (void)updateWithItem:(id)arg1;	// IMP=0x00100000001cb8e0
- (id)initWithItem:(id)arg1 itemOrder:(unsigned long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001cb325

@end

