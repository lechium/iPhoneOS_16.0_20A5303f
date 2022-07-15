//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PreferenceValuesDataSource, UICollectionView, UITableView;

@interface PreferencesValuesContaineeViewController
{
    PreferenceValuesDataSource *_dataSource;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    UICollectionView *_collectionView;	// 24 = 0x18
}

+ (_Bool)useCollectionView;	// IMP=0x00200000009cc1e0
- (void).cxx_destruct;	// IMP=0x00200000009cce48
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)dataSourceDidRebuildSections:(id)arg1;	// IMP=0x00100000009ccdd7
- (void)rebuildSections;	// IMP=0x00100000009ccd9a
- (void)loadContentNowIfNeeded;	// IMP=0x00100000009ccd5d
- (void)addSectionWithTitle:(id)arg1 content:(CDUnknownBlockType)arg2;	// IMP=0x00100000009cccd7
- (void)addSection:(id)arg1;	// IMP=0x00100000009ccc65
- (void)prepareContent;	// IMP=0x00100000009ccc28
@property(readonly, nonatomic) PreferenceValuesDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)shouldAutorotate;	// IMP=0x00100000009ccbcb
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000009ccb8a
- (id)initialConstraints;	// IMP=0x00100000009ccaea
- (void)setupSubviews;	// IMP=0x00100000009cc33c
- (id)collectionViewDecorationItems;	// IMP=0x00100000009cc334
- (long long)collectionViewConfigurationSeparatorStyle;	// IMP=0x00100000009cc32c
- (id)collectionViewLayoutBoundarySupplementaryItems;	// IMP=0x00100000009cc324
- (struct NSDirectionalEdgeInsets)collectionViewDecorationItemContentInsetsForSection:(long long)arg1;	// IMP=0x00100000009cc305
- (struct NSDirectionalEdgeInsets)collectionViewListSectionContentInsetsForSection:(long long)arg1;	// IMP=0x00100000009cc29f
- (long long)collectionViewListLayoutAppearanceStyle;	// IMP=0x00100000009cc297
- (void)viewDidLoad;	// IMP=0x00100000009cc1e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
