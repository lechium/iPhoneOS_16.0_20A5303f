//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewController.h>

@class NSArray, NSString, PUWallpaperDebugViewSpec, PXWallpaperSmartAlbumPeoplePickerDataSource;

__attribute__((visibility("hidden")))
@interface PUWallpaperSmartAlbumPeopleDebugViewController : UICollectionViewController
{
    PUWallpaperDebugViewSpec *_spec;	// 8 = 0x8
    PXWallpaperSmartAlbumPeoplePickerDataSource *_dataSource;	// 16 = 0x10
    NSArray *_dataSourceEntries;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000308a5
@property(retain, nonatomic) NSArray *dataSourceEntries; // @synthesize dataSourceEntries=_dataSourceEntries;
@property(retain, nonatomic) PXWallpaperSmartAlbumPeoplePickerDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) PUWallpaperDebugViewSpec *spec; // @synthesize spec=_spec;
- (_Bool)shouldAutorotate;	// IMP=0x000000000003082e
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;	// IMP=0x0000000000030823
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000003064d
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000000000305ef
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x0000000000030595
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000003053b
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x0000000000030533
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000030269
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000000301ce
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000003018a
- (void)wallpaperSmartAlbumPeoplePickerDataSourceChanged:(id)arg1;	// IMP=0x00000000000300ed
- (void)_updateDisplayDataSource;	// IMP=0x000000000002fef2
- (void)viewDidLoad;	// IMP=0x000000000002fd57
- (id)initWithSpec:(id)arg1;	// IMP=0x000000000002fcdf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

