//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIViewController;

__attribute__((visibility("hidden")))
@interface SKUIViewControllerContainerView : UIView
{
    UIViewController *_viewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002b59ac
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)_updateLayoutOfViewControllerView;	// IMP=0x00000000002b5917
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000002b57a5
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000002b5753
- (void)layoutSubviews;	// IMP=0x00000000002b5712
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002b56b0

@end
