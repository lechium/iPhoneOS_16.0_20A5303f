//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface (null) (Files6)
- (_Bool)establishFirstResponder;	// IMP=0x00200000000f0170
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00100000000f0e10
- (void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;	// IMP=0x00100000000f1a30
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;	// IMP=0x00100000000f0e60
- (void)collectionViewDidEndMultipleSelectionInteraction:(id)arg1;	// IMP=0x00100000000f56a0
- (void)collectionView:(id)arg1 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;	// IMP=0x00100000000f55e0
- (_Bool)collectionView:(id)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;	// IMP=0x00100000000f5390
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x00100000000f4eb0
- (_Bool)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000000f4dd0
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00100000000f4cb0
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00100000000f4be0
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x00100000000f4ae0
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00100000000f4a60
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x00100000000f4950
- (void)collectionView:(id)arg1 performPrimaryActionForItemAtIndexPath:(id)arg2;	// IMP=0x00100000000f4550
- (_Bool)collectionView:(id)arg1 canPerformPrimaryActionForItemAtIndexPath:(id)arg2;	// IMP=0x00100000000f3230
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x00100000000f3110
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00100000000f3050
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x00100000000f2700
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;	// IMP=0x00100000000f26e0
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x00100000000f2550
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;	// IMP=0x00100000000f24e0
- (void)collectionView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00100000000fb310
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00100000000fac60
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemsAtIndexPaths:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00100000000fa480
- (id)collectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;	// IMP=0x00100000000f9de0
- (id)collectionView:(id)arg1 contextMenuConfiguration:(id)arg2 dismissalPreviewForItemAtIndexPath:(id)arg3;	// IMP=0x00100000000f9cd0
- (id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;	// IMP=0x00100000000f9b70
- (id)collectionView:(id)arg1 contextMenuConfiguration:(id)arg2 highlightPreviewForItemAtIndexPath:(id)arg3;	// IMP=0x00100000000f9640
- (void)collectionView:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00100000000f91d0
- (void)collectionView:(id)arg1 willDisplayContextMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00100000000f8f70
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;	// IMP=0x00100000000fc340
- (id)contextMenuForFolder;	// IMP=0x00100000000fc300
- (id)contextMenuForItemsAt:(id)arg1;	// IMP=0x00100000000fbc10
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x00100000000fb8a0
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00100000000fb420
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00100000000fb3a0
- (void)getCellFor:(id)arg1:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fd800
- (void)getViewFor:(id)arg1 waitForNewThumbnail:(_Bool)arg2:(CDUnknownBlockType)arg3;	// IMP=0x00100000000fd770
- (void)getPopoverTrackerForItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fd6f0
- (void)getTransitionControllerForItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fd6d0
- (void)getTransitionControllerForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fd5f0
- (void)revealWithItem:(id)arg1;	// IMP=0x00100000000fd280
@property(nonatomic, readonly) _Bool wantsAppearanceOverride;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0010000000102680
@end

