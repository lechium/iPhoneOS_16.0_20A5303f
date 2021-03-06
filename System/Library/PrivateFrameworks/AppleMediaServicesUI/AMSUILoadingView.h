//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUICommonView.h"

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface AMSUILoadingView : AMSUICommonView
{
    UIActivityIndicatorView *_activityIndicator;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000033bea
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000033acf
- (void)layoutSubviews;	// IMP=0x00000000000337e2
- (void)stopAnimating;	// IMP=0x00000000000337a5
- (void)startAnimating;	// IMP=0x0000000000033768
- (void)setLoadingText:(id)arg1;	// IMP=0x00000000000336d8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000033551

@end

