//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UICollectionView;

@interface CarNavigationSearchView : UIView
{
    UICollectionView *_collectionView;	// 8 = 0x8
    NSArray *_categories;	// 16 = 0x10
    CDUnknownBlockType _siriSearchHandler;	// 24 = 0x18
    CDUnknownBlockType _categorySearchHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000acf89c
@property(copy, nonatomic) CDUnknownBlockType categorySearchHandler; // @synthesize categorySearchHandler=_categorySearchHandler;
@property(copy, nonatomic) CDUnknownBlockType siriSearchHandler; // @synthesize siriSearchHandler=_siriSearchHandler;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000acf689
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0010000000acf108
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0010000000acf0f6
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0010000000acf0eb
- (unsigned long long)_numberOfItems;	// IMP=0x0010000000acf0a6
- (double)preferredHeightForAvailableSize:(struct CGSize)arg1;	// IMP=0x0010000000acef68
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000acedd4
- (void)dealloc;	// IMP=0x0010000000aced6d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

