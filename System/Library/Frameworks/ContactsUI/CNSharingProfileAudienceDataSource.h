//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNSharingProfileRowItem, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNSharingProfileAudienceDataSource : NSObject
{
    _Bool _shouldShowEveryone;	// 8 = 0x8
    unsigned long long _selectedSharingAudience;	// 16 = 0x10
    CNSharingProfileRowItem *_selectedItem;	// 24 = 0x18
    NSArray *_valuesArray;	// 32 = 0x20
    NSArray *_items;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000081d59
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSArray *valuesArray; // @synthesize valuesArray=_valuesArray;
@property(nonatomic) _Bool shouldShowEveryone; // @synthesize shouldShowEveryone=_shouldShowEveryone;
@property(retain, nonatomic) CNSharingProfileRowItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(nonatomic) unsigned long long selectedSharingAudience; // @synthesize selectedSharingAudience=_selectedSharingAudience;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000081c00
- (id)itemForIndex:(unsigned long long)arg1;	// IMP=0x0000000000081bb1
- (unsigned long long)numberOfItems;	// IMP=0x0000000000081b9b
- (id)sectionFooterLabel;	// IMP=0x0000000000081b0b
- (id)sectionHeaderLabel;	// IMP=0x0000000000081aaf
- (void)reloadItems;	// IMP=0x0000000000081843
- (unsigned long long)sharingAudienceForIndex:(unsigned long long)arg1;	// IMP=0x00000000000817fb
- (unsigned long long)indexForSharingAudience:(unsigned long long)arg1;	// IMP=0x00000000000817a0
@property(readonly, nonatomic) unsigned long long selectedIndex;
- (_Bool)supportsSelection;	// IMP=0x0000000000081782
- (unsigned long long)sharingAudienceForItem:(id)arg1;	// IMP=0x000000000008174d
- (id)initWithSelectedSharingAudience:(unsigned long long)arg1;	// IMP=0x00000000000816a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
