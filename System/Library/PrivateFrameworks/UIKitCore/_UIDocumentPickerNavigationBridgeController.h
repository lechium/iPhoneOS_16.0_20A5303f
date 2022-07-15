//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UINavigationController.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerNavigationBridgeController : UINavigationController
{
    _Bool _hasSetInitialNavigationItem;	// 8 = 0x8
}

+ (id)_remoteViewControllerInterface;	// IMP=0x00100000005e5577
+ (id)_exportedInterface;	// IMP=0x00100000005e54cc
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000005e5ca8
- (id)popToRootViewControllerAnimated:(_Bool)arg1;	// IMP=0x00000000005e5c5d
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000005e5c12
- (id)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x00000000005e5bc7
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000005e5b86
- (void)_updateNavigationItem;	// IMP=0x00000000005e59da
- (void)_locationsMenu:(id)arg1;	// IMP=0x00000000005e58f1
- (void)_doneButton:(id)arg1;	// IMP=0x00000000005e58c6
- (id)hostingViewController;	// IMP=0x00000000005e58b4
- (void)_setTintColor:(id)arg1;	// IMP=0x00000000005e5883
- (void)_documentPickerDidDismiss;	// IMP=0x00000000005e580b
- (void)_prepareWithExtensionInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000005e572c
- (void)_setUploadURLWrapper:(id)arg1;	// IMP=0x00000000005e56a5
- (void)_setPickerMode:(unsigned long long)arg1;	// IMP=0x00000000005e561e
- (void)_setPickableTypes:(id)arg1;	// IMP=0x00000000005e5597

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
