//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitSlideShowAssetActionPerformer : PXPhotoKitAssetActionPerformer
{
}

+ (id)systemImageNameForActionManager:(id)arg1;	// IMP=0x00100000002ed084
+ (id)createActivityWithActionManager:(id)arg1;	// IMP=0x00100000002ed00a
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3;	// IMP=0x00100000002ecf70
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002ecf51
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;	// IMP=0x00100000002ecf45
+ (_Bool)canPerformOnImplicitSelectionInContainerCollection:(id)arg1;	// IMP=0x00100000002ecf3d
+ (_Bool)canPerformOnSubsetOfSelection;	// IMP=0x00100000002ecf35
+ (_Bool)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2;	// IMP=0x00100000002ecf20
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;	// IMP=0x00100000002ecf0f
- (void)slideshowViewControllerDidFinish:(id)arg1 withVisibleAssets:(id)arg2;	// IMP=0x00000000002ece8a
- (id)_getSlideshowSession:(id)arg1;	// IMP=0x00000000002eccdf
- (id)_getLegacySlideshowSession;	// IMP=0x00000000002ecaa8
- (void)_startSlideshow;	// IMP=0x00000000002ec87a
- (void)performUserInteractionTask;	// IMP=0x00000000002ec7cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

