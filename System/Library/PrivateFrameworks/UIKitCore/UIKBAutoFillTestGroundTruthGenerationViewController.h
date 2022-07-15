//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSLayoutConstraint, NSString, UIBarButtonItem, UIKBAutoFillTestExpectedResult, UIKBAutoFillTestTaggerView, UIKBAutoFillTestViewController, UIScrollView, UIView;
@protocol UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestGroundTruthGenerationViewController : UIViewController
{
    UIKBAutoFillTestViewController *_testViewController;	// 8 = 0x8
    UIKBAutoFillTestExpectedResult *_expectedResult;	// 16 = 0x10
    UIScrollView *_scrollView;	// 24 = 0x18
    UIKBAutoFillTestTaggerView *_taggerView;	// 32 = 0x20
    NSLayoutConstraint *_scrollViewBottomConstraint;	// 40 = 0x28
    UIView *_highlightView;	// 48 = 0x30
    UIView *_highlightBox;	// 56 = 0x38
    UIBarButtonItem *_doneBarButtonItem;	// 64 = 0x40
    id <UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000092d8eb
@property(readonly, nonatomic) UIKBAutoFillTestViewController *testViewController; // @synthesize testViewController=_testViewController;
@property(nonatomic) __weak id <UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)taggerView:(id)arg1 didTagTextFieldRequest:(id)arg2 withSelectedType:(long long)arg3;	// IMP=0x000000000092d844
- (void)taggerView:(id)arg1 didTagFormRequest:(id)arg2 withSelectedType:(long long)arg3;	// IMP=0x000000000092d824
- (long long)taggerView:(id)arg1 selectedTypeForTextFieldRequest:(id)arg2;	// IMP=0x000000000092d7b9
- (long long)taggerView:(id)arg1 selectedTypeForFormRequest:(id)arg2;	// IMP=0x000000000092d79c
- (void)taggerView:(id)arg1 willTagRequest:(id)arg2;	// IMP=0x000000000092d740
- (void)taggerViewDidFinish:(id)arg1;	// IMP=0x000000000092d6de
- (void)_removeTaggerHighlightView;	// IMP=0x000000000092d60e
- (void)_moveTaggerHighlightViewOverView:(id)arg1;	// IMP=0x000000000092d0aa
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000092caae
- (void)_cancelBarButtonItemAction:(id)arg1;	// IMP=0x000000000092ca55
- (void)viewDidLoad;	// IMP=0x000000000092c207
- (void)_enumerateSubviewsOfRootView:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000092c062
- (id)initWithAutoFillTestViewController:(id)arg1;	// IMP=0x000000000092bfc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
