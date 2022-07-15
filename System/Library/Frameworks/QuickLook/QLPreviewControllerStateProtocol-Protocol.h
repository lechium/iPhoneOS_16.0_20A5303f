//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLook/NSObject-Protocol.h>

@class FPSandboxingURLWrapper, NSDictionary, NSString, NSURL, NSUUID, QLPreviewItemEditedCopy, UIColor;
@protocol QLPreviewItem, QLPrintingProtocol, QLRemotePopoverTracker;

@protocol QLPreviewControllerStateProtocol <NSObject>
- (void)updateTitle:(NSString *)arg1;
- (void)updatePreferredContentSize:(struct CGSize)arg1;
- (void)updatePreviewItemAtIndex:(unsigned long long)arg1 editedCopy:(QLPreviewItemEditedCopy *)arg2 completionHandler:(void (^)(void))arg3;
- (void)presentAlertControllerForScenario:(long long)arg1;
- (void)expandContentOfItemAtIndex:(unsigned long long)arg1 withUUID:(NSUUID *)arg2 unarchivedItemsURLWrapper:(FPSandboxingURLWrapper *)arg3;
- (void)beginInteractiveTransition;
- (id)previewItemDisplayStateForItem:(id <QLPreviewItem>)arg1;
- (void)setPreviewItemDisplayState:(id)arg1 onItemAtIndex:(unsigned long long)arg2;
- (void)forwardMessage:(NSDictionary *)arg1 toItemAtIndex:(unsigned long long)arg2 withUUID:(NSUUID *)arg3 completionHandler:(void (^)(NSDictionary *, NSError *))arg4;
- (void)currentPreviewItemViewControllerHasUnsavedEdits:(_Bool)arg1;
- (void)setCanChangeCurrentPage:(_Bool)arg1;
- (void)updateStateRestorationWithUserInfo:(NSDictionary *)arg1;
- (void)getStateRestorationUserInfo:(void (^)(NSDictionary *))arg1;
- (void)triggerQuickLookDismissal;
- (void)showShareSheetWithPopoverTracker:(id <QLRemotePopoverTracker>)arg1 customSharedURL:(NSURL *)arg2 dismissCompletion:(void (^)(void))arg3;
- (void)showShareSheet;
- (void)openURLIfAllowed:(NSURL *)arg1;
- (void)setPrinter:(id <QLPrintingProtocol>)arg1;
- (void)setAccessoryViewVisible:(_Bool)arg1;
- (void)updateKeyCommands;
- (void)updateOverlayButtons:(_Bool)arg1;
- (void)setNavBarCanBeVisible:(_Bool)arg1;
- (void)setToolbarCanBeVisible:(_Bool)arg1;
- (void)previewCollectionUpdatePreviewItem:(long long)arg1;
- (void)setFullscreenBackgroundColor:(UIColor *)arg1;
- (void)setFullScreen:(_Bool)arg1;

@optional
- (void)setScreenEdgePanWidth:(double)arg1;
@end
