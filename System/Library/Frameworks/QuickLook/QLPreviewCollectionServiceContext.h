//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@protocol QLPreviewItemProvider;

__attribute__((visibility("hidden")))
@interface QLPreviewCollectionServiceContext : NSExtensionContext
{
    id <QLPreviewItemProvider> _itemProvider;	// 8 = 0x8
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x001000000003652a
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x0010000000035ef2
- (void).cxx_destruct;	// IMP=0x00000000000377d7
- (void)setScreenEdgePanWidth:(double)arg1;	// IMP=0x0000000000037733
- (void)setPreviewItemDisplayState:(id)arg1 onItemAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000376bb
- (void)setIsContentManaged:(_Bool)arg1;	// IMP=0x000000000003766f
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000003761e
- (void)overrideParentApplicationDisplayIdentifierWithIdentifier:(id)arg1;	// IMP=0x00000000000375ac
- (void)setLoadingString:(id)arg1;	// IMP=0x000000000003753a
- (void)setAllowInteractiveTransitions:(_Bool)arg1;	// IMP=0x00000000000374ee
- (void)getCurrentPreviewActivityUserInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003747c
- (void)notifyStateRestorationUserInfo:(id)arg1;	// IMP=0x000000000003740a
- (void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1;	// IMP=0x00000000000373be
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000037346
- (void)tearDownTransition:(_Bool)arg1;	// IMP=0x00000000000372fa
- (void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(_Bool)arg3 useInteractiveTransition:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000003724b
- (void)completeTransition:(_Bool)arg1 withDuration:(double)arg2;	// IMP=0x00000000000371f5
- (void)updateTransitionWithProgress:(double)arg1;	// IMP=0x00000000000371a6
- (void)keyCommandWasPerformed:(id)arg1;	// IMP=0x0000000000037134
- (void)keyCommandsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000370c2
- (void)requestLockForCurrentItem;	// IMP=0x0000000000037085
- (void)shouldDisplayLockActivityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000037013
- (void)documentMenuActionWillBegin;	// IMP=0x0000000000036f79
- (void)actionSheetDidDismiss;	// IMP=0x0000000000036f3c
- (void)prepareForActionSheetPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000036eca
- (void)saveCurrentPreviewEditsSynchronously:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000036e52
- (void)toolbarButtonPressedWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000036d00
- (void)toolbarButtonsForTraitCollection:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000036c7a
- (void)hostApplicationDidBecomeActive;	// IMP=0x0000000000036c3d
- (void)hostApplicationDidEnterBackground:(_Bool)arg1;	// IMP=0x0000000000036bf1
- (void)hostSceneWillDeactivate;	// IMP=0x0000000000036b57
- (void)setCurrentPreviewItemIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000036b06
- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4;	// IMP=0x0000000000036a56
- (void)setNotificationCenter:(id)arg1;	// IMP=0x00000000000369e0
- (void)getNetworkObserverWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000036970
- (void)invalidateService;	// IMP=0x00000000000368a3
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000036831
- (void)getPreviewCollectionUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000367a5
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;	// IMP=0x0000000000036733
- (id)_previewCollection;	// IMP=0x00000000000366df
- (id)_protocolHost;	// IMP=0x0000000000036596

@end
