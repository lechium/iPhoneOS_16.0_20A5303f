//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXActivity.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface PUWallpaperActivity : PXActivity
{
    UIViewController *_wallpaperActivityViewController;	// 8 = 0x8
    _Bool __wallpaperModificationAllowed;	// 16 = 0x10
    _Bool __needsUpdateWallpaperModificationAllowed;	// 17 = 0x11
}

- (void).cxx_destruct;	// IMP=0x00000000004ebae4
@property(nonatomic, setter=_setNeedsUpdateWallpaperModificationAllowed:) _Bool _needsUpdateWallpaperModificationAllowed; // @synthesize _needsUpdateWallpaperModificationAllowed=__needsUpdateWallpaperModificationAllowed;
@property(nonatomic, getter=_isWallpaperModificationAllowed, setter=_setWallpaperModificationAllowed:) _Bool _wallpaperModificationAllowed; // @synthesize _wallpaperModificationAllowed=__wallpaperModificationAllowed;
- (void)modalRemoteViewControllerDidDismiss:(id)arg1;	// IMP=0x00000000004eba8d
- (void)wallpaperPreviewViewControllerSetButtonPressed:(id)arg1;	// IMP=0x00000000004eb51e
- (void)wallpaperPreviewViewControllerCancelButtonPressed:(id)arg1;	// IMP=0x00000000004eb4cb
- (void)_updateWallpaperModificationAllowedIfNeeded;	// IMP=0x00000000004eb3a0
- (void)_restrictionsChanged:(id)arg1;	// IMP=0x00000000004eb341
- (void)_handleSetWallpaperActionWithController:(id)arg1 locations:(long long)arg2;	// IMP=0x00000000004eb308
- (void)_fetchImageForWallPaperAsset:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000004eb212
- (id)activityViewController;	// IMP=0x00000000004eb1fd
- (void)performActivity;	// IMP=0x00000000004eb1e9
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x00000000004ea791
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00000000004ea68c
- (id)activityImage;	// IMP=0x00000000004ea57a
- (id)activityTitle;	// IMP=0x00000000004ea562
- (id)activityType;	// IMP=0x00000000004ea54e
- (void)dealloc;	// IMP=0x00000000004ea4d9
- (id)init;	// IMP=0x00000000004ea32a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

