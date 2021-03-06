//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSCache, NSString, PDFThumbnailView, UICollectionView, UICollectionViewDiffableDataSource;

__attribute__((visibility("hidden")))
@interface PDFThumbnailsCollectionView : UIView
{
    PDFThumbnailView *_thumbnailView;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    UICollectionViewDiffableDataSource *_dataSource;	// 24 = 0x18
    NSCache *_cache;	// 32 = 0x20
    UIView *_backgroundOnePixelView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000035a72
- (void)movePageWithTransaction:(id)arg1;	// IMP=0x000000000003563d
- (void)movePage:(id)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x0000000000035482
- (void)insertPages:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000000351cb
- (void)removePages:(id)arg1;	// IMP=0x0000000000034e6c
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x0000000000034830
- (void)_insertFileAtURL:(id)arg1 type:(id)arg2 atIndex:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000034789
- (id)supportedUTTypes;	// IMP=0x00000000000346d4
- (void)_insertImageWithURL:(id)arg1 atIndex:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000034213
- (void)_insertPDFDocumentWithURL:(id)arg1 atIndex:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003407c
- (unsigned long long)_insertPagesFromProvidedPDFDocument:(id)arg1 atPageIndex:(unsigned long long)arg2;	// IMP=0x0000000000033c59
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x00000000000337ea
- (void)writePDFDocumentFromPages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033027
- (void)itemProvider:(id)arg1 registerFileRepresentationForPage:(id)arg2 draggedPages:(id)arg3;	// IMP=0x0000000000032daf
- (void)itemProvider:(id)arg1 registerDataRepresentationForPage:(id)arg2 draggedPages:(id)arg3;	// IMP=0x0000000000032b2c
- (id)itemsForDragWithSession:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000326b2
- (long long)_collectionView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000326a0
- (id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;	// IMP=0x0000000000032559
- (void)collectionView:(id)arg1 dragSessionDidEnd:(id)arg2;	// IMP=0x0000000000032365
- (void)collectionView:(id)arg1 dragSessionWillBegin:(id)arg2;	// IMP=0x0000000000032225
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000003220d
- (void)pasteAfterPage:(id)arg1;	// IMP=0x0000000000031bc6
- (void)copyPage:(id)arg1;	// IMP=0x0000000000031a9e
- (id)defaultContextMenuForPage:(id)arg1;	// IMP=0x00000000000318a2
- (id)_pasteActionIfAvailableAfterPage:(id)arg1;	// IMP=0x00000000000313ab
- (_Bool)shouldDisplayActionButtonForPage:(id)arg1;	// IMP=0x000000000003131b
- (id)contextMenuForPage:(id)arg1;	// IMP=0x000000000003108e
- (id)contextMenuForBackgroundAtLocation:(struct CGPoint)arg1;	// IMP=0x0000000000030f42
- (id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;	// IMP=0x0000000000030eb9
- (id)collectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;	// IMP=0x0000000000030e30
- (id)previewForCollectionView:(id)arg1 indexPath:(id)arg2;	// IMP=0x0000000000030c31
- (id)previewForCollectionView:(id)arg1 contextMenuInteraction:(id)arg2;	// IMP=0x00000000000309b0
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;	// IMP=0x0000000000030990
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;	// IMP=0x0000000000030970
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x00000000000306f9
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00000000000304d7
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000303e6
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000000303ce
- (void)updateImageForCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000301bc
- (void)_updateActionsButtonVisibilityAtIndexPath:(id)arg1;	// IMP=0x0000000000030061
- (_Bool)_canEditDocument;	// IMP=0x000000000002ff97
- (void)_selectAndScrollToCurrentPageIfNeeded;	// IMP=0x000000000002fda1
- (void)_updateScrubber;	// IMP=0x000000000002fcee
- (void)_reloadPage:(id)arg1;	// IMP=0x000000000002f95b
- (void)pageChanged:(id)arg1;	// IMP=0x000000000002f898
- (void)currentPageChanged:(id)arg1;	// IMP=0x000000000002f86a
- (void)documentMutated:(id)arg1;	// IMP=0x000000000002f856
- (void)documentChanged:(id)arg1;	// IMP=0x000000000002f842
- (id)currentPage;	// IMP=0x000000000002f716
- (void)updateIconsImages;	// IMP=0x000000000002f702
@property(nonatomic) _Bool allowsPageReordering;
- (struct CGSize)thumbnailSizeForPage:(id)arg1 displayBox:(long long)arg2 thumbnailView:(id)arg3;	// IMP=0x000000000002f5f8
- (struct CGSize)thumbnailSizeForPage:(id)arg1 displayBox:(long long)arg2;	// IMP=0x000000000002f575
- (struct CGSize)thumbnailSizeForPage:(id)arg1;	// IMP=0x000000000002f47d
- (void)applySnapshotWithAnimation:(_Bool)arg1;	// IMP=0x000000000002f0eb
- (id)imageDrawingOperationQueue;	// IMP=0x000000000002f044
- (id)datasourceQueue;	// IMP=0x000000000002ef9a
- (void)loadImageWithPage:(id)arg1 displayBox:(long long)arg2 thumbnailView:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002e95b
- (id)cachedImageForPage:(id)arg1 displayBox:(long long)arg2 thumbnailView:(id)arg3;	// IMP=0x000000000002e8f4
- (void)updateCacheForPage:(id)arg1 withImage:(id)arg2;	// IMP=0x000000000002e6ea
- (id)cacheKeyForPage:(id)arg1;	// IMP=0x000000000002e59f
- (void)configureCell:(id)arg1 withPage:(id)arg2 indexPath:(id)arg3;	// IMP=0x000000000002e19a
- (void)updateImageForCell:(id)arg1 indexPath:(id)arg2 page:(id)arg3;	// IMP=0x000000000002dbe9
- (id)makeDatasource;	// IMP=0x000000000002d93a
- (id)initFromThumbnailView:(id)arg1;	// IMP=0x000000000002d396

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

