//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAlertController.h>

@interface UIAlertController (PhotosUICore)
+ (void)px_showDebugAlertInKeyWindowWithMessage:(id)arg1;	// IMP=0x00200000002f90e7
+ (id)px_alertControllerWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00200000003f0144
+ (id)px_alertForStorageUpgradeLoadFailure;	// IMP=0x00200000004cd304
+ (id)px_alertForCPLEnableError:(id)arg1 actionHandler:(CDUnknownBlockType)arg2 cancelHandler:(CDUnknownBlockType)arg3;	// IMP=0x00200000004ccb9c
+ (id)px_deleteITunesContentAlertWithAssetCount:(long long)arg1 includesPhotos:(_Bool)arg2 includesVideos:(_Bool)arg3 actionHandler:(CDUnknownBlockType)arg4 cancelHandler:(CDUnknownBlockType)arg5;	// IMP=0x00200000004cc8d2
@property(nonatomic) _Bool px_shouldForceAlertStyle;
@end

