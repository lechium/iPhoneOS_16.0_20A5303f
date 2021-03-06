//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPreviewInteractionControllerDelegate_Private-Protocol.h>

@class UIPreviewInteractionController, UIPreviewMenuItem, UIViewController;

@protocol UIPreviewInteractionControllerDelegate_Internal <UIPreviewInteractionControllerDelegate_Private>

@optional
@property(readonly, nonatomic) struct CGRect sourceRect;
- (void)previewInteractionController:(UIPreviewInteractionController *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)previewInteractionController:(UIPreviewInteractionController *)arg1 willPresentViewController:(UIViewController *)arg2;
- (_Bool)previewInteractionControllerShouldPerformCompatibilityCommitTransition:(UIPreviewInteractionController *)arg1;
- (void)previewInteractionController:(UIPreviewInteractionController *)arg1 didSelectMenuItem:(UIPreviewMenuItem *)arg2;
@end

