//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;
@protocol MKMapServiceTicket, SupplementaryElementsDataSourceDelegate;

@interface RatingsHistoryDataSource
{
    NSArray *_reviewedPlaces;	// 8 = 0x8
    NSArray *_sections;	// 16 = 0x10
    id <MKMapServiceTicket> _mapItemTicket;	// 24 = 0x18
    id <SupplementaryElementsDataSourceDelegate> _privacyDelegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000033da0c
@property(nonatomic) __weak id <SupplementaryElementsDataSourceDelegate> privacyDelegate; // @synthesize privacyDelegate=_privacyDelegate;
- (void)reviewedPlaceObjectsDidChange;	// IMP=0x001000000033d9cd
- (void)_cancelMapItemTicket;	// IMP=0x001000000033d98b
- (void)_fetchMapItemsForReviewedPlaces:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000033d1d1
- (void)_fetchReviewedPlaces;	// IMP=0x001000000033cf26
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x001000000033ce63
- (void)privacyTextTapped;	// IMP=0x001000000033ce26
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x001000000033c6b4
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x001000000033c525
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x001000000033c4b4
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x001000000033c497
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x001000000033c3a7
- (id)sectionAtIndex:(long long)arg1;	// IMP=0x001000000033c343
- (double)footerHeightForSection:(long long)arg1 collectionView:(id)arg2;	// IMP=0x001000000033c111
- (id)_footerLinkText;	// IMP=0x001000000033c0a9
- (id)_footerText;	// IMP=0x001000000033c041
- (void)_buildContent;	// IMP=0x001000000033b878
- (void)_loadContent;	// IMP=0x001000000033b81f
- (void)dealloc;	// IMP=0x001000000033b7e1
- (id)initWithCollectionView:(id)arg1 updateLocation:(_Bool)arg2;	// IMP=0x001000000033b754

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
