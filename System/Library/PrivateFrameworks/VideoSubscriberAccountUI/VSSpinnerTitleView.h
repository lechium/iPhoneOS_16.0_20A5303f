//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface VSSpinnerTitleView : UIView
{
    UILabel *_titleView;	// 8 = 0x8
    UIActivityIndicatorView *_spinner;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000abe4
- (void)didMoveToWindow;	// IMP=0x000000000000ab80
- (void)layoutSubviews;	// IMP=0x000000000000a976
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000000a7b2
- (void)dealloc;	// IMP=0x000000000000a769
- (id)initWithTitle:(id)arg1;	// IMP=0x000000000000a5ec

@end

