//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AllRefinementsDataSource, AllRefinementsViewModel, ModalCardHeaderView, NSNumber, UICollectionView, UICollectionViewLayout;
@protocol AllRefinementsViewControllerDelegate, ResultRefinementsAnalytics;

@interface AllRefinementsViewController
{
    id <AllRefinementsViewControllerDelegate> _allRefinementsDelegate;	// 8 = 0x8
    AllRefinementsViewModel *_viewModel;	// 16 = 0x10
    UICollectionViewLayout *_collectionViewLayout;	// 24 = 0x18
    UICollectionView *_collectionView;	// 32 = 0x20
    AllRefinementsDataSource *_dataSource;	// 40 = 0x28
    ModalCardHeaderView *_modalHeaderView;	// 48 = 0x30
    NSNumber *_selectionSequenceNumber;	// 56 = 0x38
    id <ResultRefinementsAnalytics> _analyticsDelegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000030383f
@property(nonatomic) __weak id <ResultRefinementsAnalytics> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(retain, nonatomic) NSNumber *selectionSequenceNumber; // @synthesize selectionSequenceNumber=_selectionSequenceNumber;
@property(retain, nonatomic) ModalCardHeaderView *modalHeaderView; // @synthesize modalHeaderView=_modalHeaderView;
@property(retain, nonatomic) AllRefinementsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UICollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) AllRefinementsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <AllRefinementsViewControllerDelegate> allRefinementsDelegate; // @synthesize allRefinementsDelegate=_allRefinementsDelegate;
- (void)_sendAnalyticsForEvent:(unsigned long long)arg1;	// IMP=0x001000000030364c
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0010000000303606
- (void)didTapOnApply:(id)arg1;	// IMP=0x0010000000303510
- (void)didTapOnCancel:(id)arg1;	// IMP=0x00100000003034e0
- (void)updateHeaderHairlineAnimated:(_Bool)arg1;	// IMP=0x0010000000303313
- (void)dismiss;	// IMP=0x00100000003032ff
- (void)addCollectionView;	// IMP=0x0010000000302ac5
- (void)addHeaderView;	// IMP=0x0010000000302578
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000302454
- (void)viewDidLoad;	// IMP=0x00100000003023fe
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x0010000000302189
- (id)initWithViewModel:(id)arg1 selectionSequenceNumber:(id)arg2 resultRefinementsAnalyticsDelegate:(id)arg3;	// IMP=0x0010000000301fb3

@end
