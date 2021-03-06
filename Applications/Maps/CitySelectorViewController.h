//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CitySelectorAPIController, CitySelectorAnalyticsManager, CitySelectorDataSource, ContainerHeaderView, ErrorModeView, GEOGuideLocation, GEOMapServiceTraits, LoadingModeView, NSArray, NSString, UICollectionView, UICollectionViewCompositionalLayout, UIScrollView;

@interface CitySelectorViewController
{
    GEOMapServiceTraits *_traits;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    CitySelectorDataSource *_dataSource;	// 24 = 0x18
    LoadingModeView *_loadingView;	// 32 = 0x20
    ErrorModeView *_errorView;	// 40 = 0x28
    ContainerHeaderView *_titleHeaderView;	// 48 = 0x30
    UICollectionViewCompositionalLayout *_layout;	// 56 = 0x38
    NSArray *_sections;	// 64 = 0x40
    CitySelectorAPIController *_apiController;	// 72 = 0x48
    CitySelectorAnalyticsManager *_analyticsManager;	// 80 = 0x50
    GEOGuideLocation *_sourceGuideLocation;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000003f1db6
@property(retain, nonatomic) GEOGuideLocation *sourceGuideLocation; // @synthesize sourceGuideLocation=_sourceGuideLocation;
@property(retain, nonatomic) CitySelectorAnalyticsManager *analyticsManager; // @synthesize analyticsManager=_analyticsManager;
@property(retain, nonatomic) CitySelectorAPIController *apiController; // @synthesize apiController=_apiController;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) UICollectionViewCompositionalLayout *layout; // @synthesize layout=_layout;
// Error: Property attributes should begin with the type ('T') attribute, property name: titleHeaderView
// Property attributes: (null)

@property(retain, nonatomic) ErrorModeView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) LoadingModeView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) CitySelectorDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(readonly, nonatomic) UIScrollView *pptTestScrollView;
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;	// IMP=0x00100000003f1c07
- (void)dataSource:(id)arg1 itemFocused:(id)arg2;	// IMP=0x00100000003f1c01
- (void)dataSourceUpdated:(id)arg1;	// IMP=0x00100000003f1bfb
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00100000003f1ac6
- (void)removeErrorView;	// IMP=0x00100000003f1a3c
- (void)addErrorView;	// IMP=0x00100000003f1611
- (void)removeLoadingView;	// IMP=0x00100000003f1587
- (void)addLoadingView;	// IMP=0x00100000003f12f7
- (void)resetCollectionViewLayout;	// IMP=0x00100000003f11e2
- (void)activateConstraintsForViewPinnedBelowHeader:(id)arg1;	// IMP=0x00100000003f0ecd
- (id)createLayoutUsingWidth:(double)arg1;	// IMP=0x00100000003f0d80
- (void)removeCollectionView;	// IMP=0x00100000003f0ce7
- (void)addAllCollectionsView;	// IMP=0x00100000003f09b8
- (void)activateHeaderConstraints;	// IMP=0x00100000003f063e
- (void)addHeaderView;	// IMP=0x00100000003f031f
- (void)initializeDataSource;	// IMP=0x00100000003f011a
- (void)initializeSections;	// IMP=0x00100000003efdfa
- (void)onTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x00100000003efc2d
- (void)routeToGuideLocation:(id)arg1;	// IMP=0x00100000003efbb8
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x00100000003efba6
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x00100000003efb50
- (void)handleDismissAction:(id)arg1;	// IMP=0x00100000003efa93
- (void)didChangeLayout:(unsigned long long)arg1;	// IMP=0x00100000003ef9dc
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000003ef909
- (void)viewDidLoad;	// IMP=0x00100000003ef737
- (id)initWithSourceGuideLocation:(id)arg1;	// IMP=0x00100000003ef5c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

