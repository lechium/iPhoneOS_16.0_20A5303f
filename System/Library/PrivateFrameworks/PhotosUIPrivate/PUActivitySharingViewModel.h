//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXObservable.h>

@class NSString, PHFetchResult, PHPerson, PUPhotoSelectionManager, PXPhotosDataSource;
@protocol PXDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUActivitySharingViewModel : PXObservable
{
    _Bool _actionSheet;	// 8 = 0x8
    PHFetchResult *_collectionListFetchResult;	// 16 = 0x10
    PXPhotosDataSource *_photosDataSource;	// 24 = 0x18
    NSString *_localizedTitle;	// 32 = 0x20
    NSString *_localizedSubtitle;	// 40 = 0x28
    id <PXDisplayAsset> _keyAsset;	// 48 = 0x30
    PHPerson *_person;	// 56 = 0x38
    long long _sourceOrigin;	// 64 = 0x40
    PUPhotoSelectionManager *_selectionManager;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000004b73cf
@property(retain, nonatomic) PUPhotoSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(readonly, nonatomic) long long sourceOrigin; // @synthesize sourceOrigin=_sourceOrigin;
@property(readonly, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(readonly, nonatomic) id <PXDisplayAsset> keyAsset; // @synthesize keyAsset=_keyAsset;
@property(readonly, copy, nonatomic) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property(readonly, copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic, getter=isActionSheet) _Bool actionSheet; // @synthesize actionSheet=_actionSheet;
@property(readonly, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
@property(readonly, nonatomic) PHFetchResult *collectionListFetchResult; // @synthesize collectionListFetchResult=_collectionListFetchResult;
- (void)setActionSheet:(_Bool)arg1;	// IMP=0x00000000004b730c
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000004b72dd
- (id)mutableChangeObject;	// IMP=0x00000000004b72d4
- (id)init;	// IMP=0x00000000004b71ba
- (id)initWithActivitySharingConfiguration:(id)arg1;	// IMP=0x00000000004b6fdb

@end

