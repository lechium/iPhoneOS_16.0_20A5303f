//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSDictionary, NSString, UICollectionViewDiffableDataSource, VUIFamilyMemberCell, VUILegacyCollectionView, VUILibraryFamilyMembersDataSource, VUIViewControllerContentPresenter;
@protocol VUIFamilyMembersViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUIFamilyMembersViewController : UIViewController
{
    double _lastAppearWidth;	// 8 = 0x8
    id <VUIFamilyMembersViewControllerDelegate> _delegate;	// 16 = 0x10
    VUILibraryFamilyMembersDataSource *_dataSource;	// 24 = 0x18
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 32 = 0x20
    VUIViewControllerContentPresenter *_contentPresenter;	// 40 = 0x28
    VUILegacyCollectionView *_collectionView;	// 48 = 0x30
    VUIFamilyMemberCell *_sizingCell;	// 56 = 0x38
    NSDictionary *_familyMemberHashToFamilyMemberDictionary;	// 64 = 0x40
    long long _gridType;	// 72 = 0x48
    long long _gridStyle;	// 80 = 0x50
    double _tvCellWidth;	// 88 = 0x58
    struct CGSize _lastCollectionViewSize;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000015fbb1
@property(nonatomic) double tvCellWidth; // @synthesize tvCellWidth=_tvCellWidth;
@property(nonatomic) struct CGSize lastCollectionViewSize; // @synthesize lastCollectionViewSize=_lastCollectionViewSize;
@property(nonatomic) long long gridStyle; // @synthesize gridStyle=_gridStyle;
@property(nonatomic) long long gridType; // @synthesize gridType=_gridType;
@property(retain, nonatomic) NSDictionary *familyMemberHashToFamilyMemberDictionary; // @synthesize familyMemberHashToFamilyMemberDictionary=_familyMemberHashToFamilyMemberDictionary;
@property(retain, nonatomic) VUIFamilyMemberCell *sizingCell; // @synthesize sizingCell=_sizingCell;
@property(retain, nonatomic) VUILegacyCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // @synthesize contentPresenter=_contentPresenter;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(retain, nonatomic) VUILibraryFamilyMembersDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <VUIFamilyMembersViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateNavigationBarPadding;	// IMP=0x000000000015f7c2
- (void)_clearCollectionViewSelections:(_Bool)arg1;	// IMP=0x000000000015f590
- (void)_updateLayoutForSizeIfNeeded:(struct CGSize)arg1;	// IMP=0x000000000015f4b7
- (void)_updateCurrentViewIfNeeded;	// IMP=0x000000000015f3ad
- (id)_generateFamilyMemberHashToFamilyMemberDictionaryForFamilyMembers:(id)arg1;	// IMP=0x000000000015f175
- (id)_getFamilyMemberIdentifiersFromFamilyMembers;	// IMP=0x000000000015f125
- (id)_createDiffableDataSourceSnapshot;	// IMP=0x000000000015f041
- (id)_createDiffableDataSource;	// IMP=0x000000000015edc5
- (id)_createCollectionView;	// IMP=0x000000000015ecb7
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x000000000015ecae
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000015ea2d
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000015e90b
- (void)dataSourceDidFinishFetching:(id)arg1;	// IMP=0x000000000015e7b9
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000015e677
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000015e62c
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000015e4f0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000015e407
- (void)applicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x000000000015e356
- (void)unregisterApplicationNotifications;	// IMP=0x000000000015e303
- (void)registerForApplicationNotifications;	// IMP=0x000000000015e29c
- (void)viewDidLayoutSubviews;	// IMP=0x000000000015e164
- (void)dealloc;	// IMP=0x000000000015e126
- (void)viewDidLoad;	// IMP=0x000000000015df75
- (void)loadView;	// IMP=0x000000000015de02
- (id)initWithDataSource:(id)arg1;	// IMP=0x000000000015dcfb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
