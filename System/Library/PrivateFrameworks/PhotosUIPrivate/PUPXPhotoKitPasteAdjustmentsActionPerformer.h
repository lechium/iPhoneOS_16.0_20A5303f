//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitPasteAdjustmentsActionPerformer : PXPhotoKitAssetActionPerformer
{
}

+ (id)systemImageNameForActionManager:(id)arg1;	// IMP=0x00800000002ebd24
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;	// IMP=0x00800000002ebd13
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00800000002ebcf4
+ (id)newActivityProgressAlertForAction:(id)arg1 assets:(id)arg2;	// IMP=0x00800000002ebc68
+ (id)newProgressToastForAction:(id)arg1 assets:(id)arg2;	// IMP=0x00800000002eb970
+ (id)newEditActionForPerformer:(id)arg1 class:(Class)arg2 assets:(id)arg3;	// IMP=0x00800000002eb5cf
+ (_Bool)_canPasteOnAsset:(id)arg1;	// IMP=0x00800000002eb514
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;	// IMP=0x00800000002eb502
+ (_Bool)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2;	// IMP=0x00800000002eb21d
- (void)performUserInteractionTask;	// IMP=0x00000000002eb111

@end

