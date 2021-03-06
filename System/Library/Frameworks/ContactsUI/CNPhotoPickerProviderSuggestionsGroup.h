//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerProviderSuggestionsGroup
{
    NSArray *_addItems;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000235af5
- (void)setAddItems:(id)arg1;	// IMP=0x0000000000235ae1
- (id)addItems;	// IMP=0x0000000000235ad0
- (void)providerItemDidUpdate:(id)arg1;	// IMP=0x0000000000235a11
- (void)reloadMonogramProviderGroupWithVisualIdentity:(id)arg1 size:(struct CGSize)arg2 RTL:(_Bool)arg3;	// IMP=0x0000000000235885
- (id)defaultMonogramItem;	// IMP=0x0000000000235795
- (long long)removeProviderItem:(id)arg1;	// IMP=0x0000000000235706
- (long long)addProviderItem:(id)arg1;	// IMP=0x000000000023535c
- (unsigned long long)maxRecentsAndMonogramsCount;	// IMP=0x000000000023534a
- (id)paddedDisplayItems:(id)arg1;	// IMP=0x0000000000234ff4
- (id)providerItems:(id)arg1 withMaxRecentsAndMonogramsCount:(unsigned long long)arg2;	// IMP=0x0000000000234e32
- (void)prepareDisplayItems:(id)arg1;	// IMP=0x0000000000234b07
- (void)loadAvailablePaddingItems;	// IMP=0x00000000002348d1
- (id)dedupedSuggestionItemsGroupedByProvider;	// IMP=0x000000000023460f
- (id)itemsForProviderIdentifier:(id)arg1;	// IMP=0x000000000023458c
- (long long)indexForDefaultMonogram;	// IMP=0x000000000023452d
- (id)providerOfClass:(Class)arg1;	// IMP=0x000000000023449d
- (id)initWithProviders:(id)arg1 environment:(id)arg2 allowAddItem:(_Bool)arg3;	// IMP=0x0000000000234444

@end

