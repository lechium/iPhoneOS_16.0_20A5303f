//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject, NSString, PersonalizedItemManager;
@protocol OS_dispatch_queue;

@interface PersonalizedItemAutocompleteFilter
{
    NSArray *_personalizedItems;	// 8 = 0x8
    NSArray *_matchingItems;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_lock;	// 24 = 0x18
    _Bool _hasItemsWhenSearchStringIsEmpty;	// 32 = 0x20
    PersonalizedItemManager *_inputItems;	// 40 = 0x28
    NSString *_searchString;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000088b12b
@property(nonatomic) _Bool hasItemsWhenSearchStringIsEmpty; // @synthesize hasItemsWhenSearchStringIsEmpty=_hasItemsWhenSearchStringIsEmpty;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) PersonalizedItemManager *inputItems; // @synthesize inputItems=_inputItems;
- (void)personalizedItemManager:(id)arg1 didChangeItems:(id)arg2;	// IMP=0x001000000088b03b
- (void)personalizedItemManagerWillChangeItems:(id)arg1;	// IMP=0x001000000088b035
- (_Bool)itemIsAllowed:(id)arg1;	// IMP=0x001000000088af5f
- (id)allItems;	// IMP=0x001000000088a5b4
- (void)_invalidateResults;	// IMP=0x001000000088a525
- (void)dealloc;	// IMP=0x001000000088a31b
- (id)init;	// IMP=0x001000000088a292

@end

