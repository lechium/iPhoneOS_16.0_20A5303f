//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLookUICore/QLItemViewController.h>

@class NSLayoutConstraint, WKWebView;

__attribute__((visibility("hidden")))
@interface QLWebLocationItemViewController : QLItemViewController
{
    WKWebView *_webView;	// 8 = 0x8
    CDUnknownBlockType _loadingHandler;	// 16 = 0x10
    NSLayoutConstraint *_leftConstraint;	// 24 = 0x18
    NSLayoutConstraint *_rightConstraint;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000049e91
- (void)_updateConstraintConstants:(_Bool)arg1;	// IMP=0x0000000000049cd0
- (_Bool)canPinchToDismiss;	// IMP=0x0000000000049c5e
- (_Bool)canSwipeToDismiss;	// IMP=0x0000000000049c56
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000049b8c
- (_Bool)automaticallyUpdateScrollViewIndicatorInset;	// IMP=0x0000000000049b84
- (_Bool)automaticallyUpdateScrollViewContentInset;	// IMP=0x0000000000049b7c
- (_Bool)automaticallyUpdateScrollViewContentOffset;	// IMP=0x0000000000049b74
- (id)scrollView;	// IMP=0x0000000000049b57
- (_Bool)canEnterFullScreen;	// IMP=0x0000000000049b4f
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000049b04
- (void)dealloc;	// IMP=0x0000000000049ab1
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004990d
- (void)loadView;	// IMP=0x0000000000049429

@end

