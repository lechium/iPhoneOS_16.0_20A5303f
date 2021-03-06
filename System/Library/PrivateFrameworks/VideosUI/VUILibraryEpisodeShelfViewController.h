//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSIndexPath, NSString, UICollectionViewDiffableDataSource, VUIDialogInteractionController, VUIEpisodeDetailViewController, VUILibraryEpisodeListCell;
@protocol VUILibraryEpisodeShelfViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryEpisodeShelfViewController
{
    VUILibraryEpisodeListCell *_sizingCell;	// 8 = 0x8
    VUIDialogInteractionController *_dialogInteractionController;	// 16 = 0x10
    _Bool _shouldIgnoreSelectEvent;	// 24 = 0x18
    id <VUILibraryEpisodeShelfViewControllerDelegate> _delegate;	// 32 = 0x20
    NSArray *_episodeViewModels;	// 40 = 0x28
    VUIEpisodeDetailViewController *_episodeDetailViewController;	// 48 = 0x30
    NSIndexPath *_popoverIndexPath;	// 56 = 0x38
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000009f42
@property(retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(nonatomic) _Bool shouldIgnoreSelectEvent; // @synthesize shouldIgnoreSelectEvent=_shouldIgnoreSelectEvent;
@property(retain, nonatomic) NSIndexPath *popoverIndexPath; // @synthesize popoverIndexPath=_popoverIndexPath;
@property(retain, nonatomic) VUIEpisodeDetailViewController *episodeDetailViewController; // @synthesize episodeDetailViewController=_episodeDetailViewController;
@property(copy, nonatomic) NSArray *episodeViewModels; // @synthesize episodeViewModels=_episodeViewModels;
@property(nonatomic) __weak id <VUILibraryEpisodeShelfViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateHeaderView;	// IMP=0x0000000000009cec
- (_Bool)_canRemoveEpisodeAtIndexPath:(id)arg1;	// IMP=0x0000000000009bf1
- (void)_configureShelfLayout:(id)arg1;	// IMP=0x0000000000009b58
- (id)_episodeWithIdentifier:(id)arg1;	// IMP=0x0000000000009960
- (id)_episodeViewModelsWithFetchedEpisodes:(id)arg1;	// IMP=0x0000000000009750
- (id)_getEntityIdentifiersFromViewModels;	// IMP=0x00000000000094d6
- (id)_createDiffableDataSourceSnapshot;	// IMP=0x00000000000093f2
- (id)_createDiffableDataSourceForCollectionView:(id)arg1;	// IMP=0x00000000000091cc
- (void)dialogInteractionController:(id)arg1 interactionDidEndForIndexPath:(id)arg2;	// IMP=0x00000000000091a0
- (void)dialogInteractionController:(id)arg1 interactionDidBeginForIndexPath:(id)arg2;	// IMP=0x000000000000918c
- (_Bool)dialogInteractionController:(id)arg1 shouldBeginInteractionForIndexPath:(id)arg2;	// IMP=0x0000000000009162
- (void)removeDownloadDismissed;	// IMP=0x000000000000912d
- (void)removeDownloadPressed;	// IMP=0x0000000000008ff6
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x0000000000008fa0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000008f3e
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000008edc
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000008dce
- (void)episodeDetailViewControllerWasDismissed:(id)arg1;	// IMP=0x0000000000008dba
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000008a72
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000008a5e
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000008837
- (void)updateShelfLayout:(id)arg1;	// IMP=0x0000000000008743
- (void)configureWithCollectionView:(id)arg1;	// IMP=0x00000000000086a8
- (void)updateWithEpisodes:(id)arg1;	// IMP=0x000000000000846f
- (void)viewDidLoad;	// IMP=0x0000000000008304
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000082c1
- (id)initWithEpisodes:(id)arg1;	// IMP=0x0000000000008225

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

