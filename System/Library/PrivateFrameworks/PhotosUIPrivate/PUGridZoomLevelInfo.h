//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PHAssetResourceQualityClass, PHCachingImageManager, PUGridRenderedStrip, PUMomentsZoomLevelManager, PUSectionedGridLayout, PUZoomableGridViewController;

__attribute__((visibility("hidden")))
@interface PUGridZoomLevelInfo : NSObject
{
    PUGridRenderedStrip *_currentRenderedStrip;	// 8 = 0x8
    _Bool _useFloatingHeaderGroupName;	// 16 = 0x10
    _Bool _summarizeSections;	// 17 = 0x11
    PHCachingImageManager *_cachingImageManager;	// 24 = 0x18
    PUSectionedGridLayout *_collectionViewLayout;	// 32 = 0x20
    unsigned long long _zoomLevel;	// 40 = 0x28
    PUMomentsZoomLevelManager *_zoomLevelManager;	// 48 = 0x30
    PUGridZoomLevelInfo *_baseZoomLevelInfo;	// 56 = 0x38
    PUZoomableGridViewController *_zoomableGridViewController;	// 64 = 0x40
    double _pendingContentWidth;	// 72 = 0x48
    PHAssetResourceQualityClass *_qualityClass;	// 80 = 0x50
    long long _maxRowsPerSection;	// 88 = 0x58
    struct CGSize _thumbnailImageSize;	// 96 = 0x60
    struct CGSize _lastItemPixelSize;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000001b3eff
@property(nonatomic) _Bool summarizeSections; // @synthesize summarizeSections=_summarizeSections;
@property(readonly, nonatomic) long long maxRowsPerSection; // @synthesize maxRowsPerSection=_maxRowsPerSection;
@property(nonatomic) struct CGSize lastItemPixelSize; // @synthesize lastItemPixelSize=_lastItemPixelSize;
@property(retain, nonatomic) PHAssetResourceQualityClass *qualityClass; // @synthesize qualityClass=_qualityClass;
@property(nonatomic) double pendingContentWidth; // @synthesize pendingContentWidth=_pendingContentWidth;
@property(readonly, nonatomic) PUZoomableGridViewController *zoomableGridViewController; // @synthesize zoomableGridViewController=_zoomableGridViewController;
@property(readonly, nonatomic) PUGridZoomLevelInfo *baseZoomLevelInfo; // @synthesize baseZoomLevelInfo=_baseZoomLevelInfo;
@property(readonly, nonatomic) PUMomentsZoomLevelManager *zoomLevelManager; // @synthesize zoomLevelManager=_zoomLevelManager;
@property(readonly, nonatomic) unsigned long long zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(readonly, nonatomic) struct CGSize thumbnailImageSize; // @synthesize thumbnailImageSize=_thumbnailImageSize;
- (double)cellAspectRatioHint;	// IMP=0x00000000001b3e5a
- (long long)imageDeliveryMode;	// IMP=0x00000000001b3e52
@property(readonly, nonatomic) _Bool supportsCollectionViewDragSource;
- (_Bool)supportsEditMode;	// IMP=0x00000000001b3e35
- (_Bool)wantsAutomaticContentOffsetAdjustment;	// IMP=0x00000000001b3e2d
- (_Bool)wantsCloudStatusVisible;	// IMP=0x00000000001b3e25
- (_Bool)wantsAssetCountsVisible;	// IMP=0x00000000001b3e1d
- (_Bool)wantsMagnifierNavigation;	// IMP=0x00000000001b3e15
- (void)willShowMagnifiedViewController:(id)arg1;	// IMP=0x00000000001b3b5c
- (void)sectionedGridLayout:(id)arg1 didInvalidateWithContext:(id)arg2;	// IMP=0x00000000001b3ae2
- (_Bool)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(id)arg1;	// IMP=0x00000000001b3a01
- (struct CGPoint)sectionedGridLayout:(id)arg1 targetContentOffsetForProposedUpdatesContentOffset:(struct CGPoint)arg2;	// IMP=0x00000000001b3993
- (id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1;	// IMP=0x00000000001b38a6
- (void)sectionedGridLayout:(id)arg1 didFinalizePrepareTransitionIsAppearing:(_Bool)arg2;	// IMP=0x00000000001b37b1
- (void)sectionedGridLayout:(id)arg1 didPrepareTransitionIsAppearing:(_Bool)arg2;	// IMP=0x00000000001b36b7
- (long long)sectionedGridLayout:(id)arg1 maximumRowsForVisualSection:(long long)arg2;	// IMP=0x00000000001b367e
- (void)didTapHeaderView:(id)arg1;	// IMP=0x00000000001b34bd
- (void)headerView:(id)arg1 actionButtonPressed:(id)arg2;	// IMP=0x00000000001b34b7
- (void)renderedStrip:(id)arg1 enumerateAssetsForVisualSection:(long long)arg2 inVisualItemRange:(struct _NSRange)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000001b32b5
- (id)renderedStrip:(id)arg1 imageDataForAsset:(id)arg2 imageWidth:(int *)arg3 imageHeight:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;	// IMP=0x00000000001b320f
- (void)didFinishZoomLevelTransition;	// IMP=0x00000000001b3209
- (void)prepareForTransitionFromZoomLevelInfo:(id)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3;	// IMP=0x00000000001b3203
- (void)prepareForTransitionToZoomLevelInfo:(id)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3;	// IMP=0x00000000001b31fd
- (void)modelDidChange:(id)arg1;	// IMP=0x00000000001b31f7
- (_Bool)supportsIncrementalChangeNotifications;	// IMP=0x00000000001b31ef
- (void)_updateBackdropGroupNameForHeaderView:(id)arg1;	// IMP=0x00000000001b30fa
- (_Bool)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;	// IMP=0x00000000001b2d06
@property(readonly, nonatomic) double itemContentScale;
- (_Bool)configureGridCell:(id)arg1 forIndexPath:(id)arg2;	// IMP=0x00000000001b2c7a
- (void)registerReusableViewClassesForCollectionView:(id)arg1;	// IMP=0x00000000001b2b1a
- (void)willAnimateSizeTransition;	// IMP=0x00000000001b2a18
@property(readonly, nonatomic) long long cellFillMode;
@property(readonly, nonatomic) struct CGSize imageRequestItemSize;
- (void)updateLayoutMetricsForWidth:(double)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;	// IMP=0x00000000001b2896
@property(readonly, nonatomic) long long dateRangeFormatterPreset;
@property(readonly, nonatomic) struct __CFString *aggregateLevelKey;
@property(readonly, nonatomic) double zoomOutDuration;
@property(readonly, nonatomic) double zoomInDuration;
- (void)updateForSizeChangeIfNecessary;	// IMP=0x00000000001b26b8
@property(readonly, nonatomic) PUSectionedGridLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(readonly, nonatomic) PHCachingImageManager *cachingImageManager; // @synthesize cachingImageManager=_cachingImageManager;
- (id)initWithZoomLevel:(unsigned long long)arg1 zoomLevelManager:(id)arg2 baseZoomLevelInfo:(id)arg3;	// IMP=0x00000000001b252c
- (_Bool)shouldUseDynamicLayout;	// IMP=0x00000000001b4af0
- (void)pushPhotosDetailsViewForVisualSection:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001b494f
- (long long)_detailViewSourceOriginWithZoomLevel:(unsigned long long)arg1;	// IMP=0x00000000001b4938
- (id)imageDataForAsset:(id)arg1 itemContentScale:(double)arg2 imageWidth:(int *)arg3 imageHeight:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;	// IMP=0x00000000001b4424
- (id)diagnosticsProviderForVisualSection:(long long)arg1;	// IMP=0x00000000001b441c
- (void)getPhotosDataSource:(id *)arg1 displayTitleInfo:(id *)arg2 forDetailsForVisualSection:(long long)arg3;	// IMP=0x00000000001b43fe
- (id)assetsToDisplayInMapForVisualSection:(long long)arg1;	// IMP=0x00000000001b43f6
@property(readonly, nonatomic) NSString *renderedStripsElementKind;
@property(readonly, nonatomic) NSString *sectionHeaderElementKind;
@property(nonatomic) _Bool useFloatingHeaderGroupName;
- (id)newCollectionViewLayout;	// IMP=0x00000000001b419e
- (void)configureSectionHeaderView:(id)arg1 forVisualSection:(long long)arg2;	// IMP=0x00000000001b404b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

