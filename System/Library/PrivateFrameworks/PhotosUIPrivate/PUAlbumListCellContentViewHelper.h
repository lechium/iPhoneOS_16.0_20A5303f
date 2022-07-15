//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PHImageRequestOptions, PUAlbumListCellContentViewHelperConfiguration, PUFontManager, PXAssetBadgeManager, PXCollectionTileLayoutTemplate, PXExtendedTraitCollection, PXFeatureSpec, PXFeatureSpecManager, PXPhotoKitCollectionsDataSourceManager, PXUIMediaProvider, UIImage;

__attribute__((visibility("hidden")))
@interface PUAlbumListCellContentViewHelper : NSObject
{
    PXExtendedTraitCollection *_traitCollection;	// 8 = 0x8
    PUAlbumListCellContentViewHelperConfiguration *_configuration;	// 16 = 0x10
    PXPhotoKitCollectionsDataSourceManager *_dataSourceManager;	// 24 = 0x18
    PXUIMediaProvider *_mediaProvider;	// 32 = 0x20
    PUFontManager *_fontManager;	// 40 = 0x28
    UIImage *_emptyPeopleAlbumPlaceholderImage;	// 48 = 0x30
    UIImage *_emptyAlbumPlaceholderImage;	// 56 = 0x38
    UIImage *_emptySharedAlbumPlaceholderImage;	// 64 = 0x40
    PHImageRequestOptions *_imageRequestOptions;	// 72 = 0x48
    PXFeatureSpecManager *_featureSpecManager;	// 80 = 0x50
    PXFeatureSpec *_featureSpec;	// 88 = 0x58
    PXAssetBadgeManager *_badgeManager;	// 96 = 0x60
    PXCollectionTileLayoutTemplate *_collectionTileLayoutTemplate;	// 104 = 0x68
    struct CGSize _albumCellSize;	// 112 = 0x70
    struct UIEdgeInsets _previewInsets;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000000922ae
@property(retain, nonatomic) PXCollectionTileLayoutTemplate *collectionTileLayoutTemplate; // @synthesize collectionTileLayoutTemplate=_collectionTileLayoutTemplate;
@property(retain, nonatomic) PXAssetBadgeManager *badgeManager; // @synthesize badgeManager=_badgeManager;
@property(retain, nonatomic) PXFeatureSpec *featureSpec; // @synthesize featureSpec=_featureSpec;
@property(retain, nonatomic) PXFeatureSpecManager *featureSpecManager; // @synthesize featureSpecManager=_featureSpecManager;
@property(retain, nonatomic) PHImageRequestOptions *imageRequestOptions; // @synthesize imageRequestOptions=_imageRequestOptions;
@property(retain, nonatomic) UIImage *emptySharedAlbumPlaceholderImage; // @synthesize emptySharedAlbumPlaceholderImage=_emptySharedAlbumPlaceholderImage;
@property(retain, nonatomic) UIImage *emptyAlbumPlaceholderImage; // @synthesize emptyAlbumPlaceholderImage=_emptyAlbumPlaceholderImage;
@property(retain, nonatomic) UIImage *emptyPeopleAlbumPlaceholderImage; // @synthesize emptyPeopleAlbumPlaceholderImage=_emptyPeopleAlbumPlaceholderImage;
@property(nonatomic) struct CGSize albumCellSize; // @synthesize albumCellSize=_albumCellSize;
@property(retain, nonatomic) PUFontManager *fontManager; // @synthesize fontManager=_fontManager;
@property(readonly, nonatomic) PXUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(readonly, nonatomic) PUAlbumListCellContentViewHelperConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) struct UIEdgeInsets previewInsets; // @synthesize previewInsets=_previewInsets;
@property(readonly, nonatomic) PXExtendedTraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000091fef
- (id)_getDisplayableAssetsForStandInCollectionList:(id)arg1 maximumCount:(long long)arg2 useCache:(_Bool)arg3 correspondingCollections:(out id *)arg4;	// IMP=0x0000000000091f5b
- (void)_getDisplayableAssets:(id *)arg1 indexes:(id *)arg2 forCollection:(id)arg3 maximumCount:(long long)arg4 useCache:(_Bool)arg5;	// IMP=0x0000000000091ec8
- (id)_getDisplayableFacesForCollectionList:(id)arg1 maximumCount:(long long)arg2;	// IMP=0x0000000000091d2e
- (id)subtitleForCollection:(id)arg1;	// IMP=0x0000000000091a73
- (void)_prepareStackView:(id)arg1 forCollection:(id)arg2 withStackCount:(long long)arg3 withCustomEmptyPlaceHolderImage:(id)arg4;	// IMP=0x00000000000916e0
- (void)_prepareStackView:(id)arg1 forCollection:(id)arg2 withStackCount:(long long)arg3;	// IMP=0x0000000000091391
- (void)_updateAlbumListCellContentViewForPeopleAlbum:(id)arg1;	// IMP=0x0000000000090fb8
- (void)_updateAlbumListCellContentViewForPlacesAlbum:(id)arg1;	// IMP=0x0000000000090de8
- (void)_updateStackView:(id)arg1 forAssets:(id)arg2 collection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4;	// IMP=0x0000000000090aec
- (void)_updateStackView:(id)arg1 forFaces:(id)arg2 inCollection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4;	// IMP=0x0000000000090926
- (id)_visibleAssetsForCollection:(id)arg1 maximumNumberOfVisibleAssets:(long long)arg2 correspondingCollections:(out id *)arg3;	// IMP=0x0000000000090791
- (id)_visibleAssetsForCollection:(id)arg1 correspondingCollections:(out id *)arg2;	// IMP=0x00000000000906b6
- (unsigned long long)_editCapabilitiesForAlbum:(id)arg1;	// IMP=0x0000000000090605
- (void)_recalculateAlbumCellSize;	// IMP=0x00000000000903ee
- (void)_invalidateAlbumCellSize;	// IMP=0x00000000000903da
- (void)reconfigureImageInAlbumListCellContentView:(id)arg1 withImage:(id)arg2 isPlaceholder:(_Bool)arg3;	// IMP=0x00000000000902f8
- (long long)estimatedIndexOfAssetForStackItemAtIndex:(long long)arg1 inCollection:(id)arg2 albumListCellContentView:(id)arg3;	// IMP=0x00000000000901cd
- (void)configureAlbumListCellContentView:(id)arg1 forCollection:(id)arg2 title:(id)arg3 animated:(_Bool)arg4 enabled:(_Bool)arg5 editing:(_Bool)arg6;	// IMP=0x000000000008fd25
- (id)initWithConfiguration:(id)arg1 dataSourceManager:(id)arg2 mediaProvider:(id)arg3 extendedTraitCollection:(id)arg4;	// IMP=0x000000000008fb9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
