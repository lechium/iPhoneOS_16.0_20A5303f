//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitRestoreAssetActionPerformer
{
}

+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3;	// IMP=0x00800000002e8010
+ (_Bool)canPerformOnImplicitSelectionInContainerCollection:(id)arg1;	// IMP=0x00800000002e7ffb
+ (_Bool)canPerformOnSubsetOfSelection;	// IMP=0x00800000002e7ff3
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;	// IMP=0x00800000002e7fd4
+ (_Bool)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2;	// IMP=0x00800000002e7da4
- (long long)destructivePhotosAction;	// IMP=0x00000000002e7d99

@end
