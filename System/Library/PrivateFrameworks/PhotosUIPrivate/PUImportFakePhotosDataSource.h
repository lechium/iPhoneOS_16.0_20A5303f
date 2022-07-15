//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPhotosDataSource.h>

@class PXImportAssetsDataSource;

__attribute__((visibility("hidden")))
@interface PUImportFakePhotosDataSource : PXPhotosDataSource
{
    PXImportAssetsDataSource *_importDataSource;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001df85e
@property(retain, nonatomic) PXImportAssetsDataSource *importDataSource; // @synthesize importDataSource=_importDataSource;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;	// IMP=0x00000000001df7a3
- (id)prepareForPhotoLibraryChange:(id)arg1;	// IMP=0x00000000001df70b
- (void)prefetchApproximateAssetsAtIndexPaths:(id)arg1 reverseOrder:(_Bool)arg2;	// IMP=0x00000000001df675
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x00000000001df622
- (long long)numberOfSections;	// IMP=0x00000000001df5de
- (id)initWithImportDataSource:(id)arg1;	// IMP=0x00000000001df552

@end
