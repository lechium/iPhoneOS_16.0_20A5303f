//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AllCollectionsAPIController, AllCollectionsDataSource, ContainerHeaderView, ErrorModeView, GEOMapServiceTraits, LoadingModeView, NSArray, NSDiffableDataSourceSnapshot, NSString, UICollectionView, UICollectionViewCompositionalLayout, UIScrollView;

@interface AllCollectionsViewController
{
    UICollectionViewCompositionalLayout *_layout;	// 8 = 0x8
    GEOMapServiceTraits *_traits;	// 16 = 0x10
    UICollectionView *_collectionView;	// 24 = 0x18
    ContainerHeaderView *_titleHeaderView;	// 32 = 0x20
    UICollectionViewCompositionalLayout *_flowLayout;	// 40 = 0x28
    AllCollectionsDataSource *_dataSource;	// 48 = 0x30
    NSDiffableDataSourceSnapshot *_snapshot;	// 56 = 0x38
    LoadingModeView *_loadingView;	// 64 = 0x40
    ErrorModeView *_errorView;	// 72 = 0x48
    NSArray *_sections;	// 80 = 0x50
    AllCollectionsAPIController *_apiController;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000007781d2
@property(retain, nonatomic) AllCollectionsAPIController *apiController; // @synthesize apiController=_apiController;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) ErrorModeView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) LoadingModeView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSDiffableDataSourceSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(retain, nonatomic) AllCollectionsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionViewCompositionalLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
// Error: Property attributes should begin with the type ('T') attribute, property name: titleHeaderView
// Property attributes: (null)

@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
- (void)pptPresentFirstCollection;	// IMP=0x0010000000778023
@property(readonly, nonatomic) UIScrollView *pptTestScrollView;
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;	// IMP=0x001000000077800b
- (void)dataSource:(id)arg1 itemFocused:(id)arg2;	// IMP=0x0010000000778005
- (void)dataSourceUpdated:(id)arg1;	// IMP=0x0010000000777fff
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x0010000000777fed
- (void)routeToGuidesHomeFromExploreGuides:(id)arg1;	// IMP=0x0010000000777fe7
- (void)routeToCuratedCollection:(id)arg1;	// IMP=0x0010000000777f72
- (void)resetCollectionViewLayout;	// IMP=0x0010000000777e5d
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000777d8a
- (void)removeErrorView;	// IMP=0x0010000000777d00
- (void)addErrorView;	// IMP=0x0010000000777879
- (void)removeLoadingView;	// IMP=0x00100000007777ef
- (void)addLoadingView;	// IMP=0x001000000077755f
- (void)activateConstraintsForViewPinnedBelowHeader:(id)arg1;	// IMP=0x001000000077724a
- (void)activateHeaderConstraints;	// IMP=0x0010000000776ed0
- (id)createLayoutUsingWidth:(double)arg1;	// IMP=0x0010000000776dc0
- (void)removeCollectionView;	// IMP=0x0010000000776d27
- (void)addAllCollectionsView;	// IMP=0x0010000000776a50
- (void)initializeDataSource;	// IMP=0x0010000000776748
- (void)initializeSections;	// IMP=0x001000000077656b
- (void)addHeaderView;	// IMP=0x001000000077624c
- (void)onTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x0010000000775fdd
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x0010000000775f87
- (void)handleDismissAction:(id)arg1;	// IMP=0x0010000000775eca
- (void)didChangeLayout:(unsigned long long)arg1;	// IMP=0x0010000000775e13
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000775da9
- (void)viewDidLoad;	// IMP=0x0010000000775bea
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000775ad0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
