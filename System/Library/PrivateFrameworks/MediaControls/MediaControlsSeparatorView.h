//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MTVisualStylingProvider;

__attribute__((visibility("hidden")))
@interface MediaControlsSeparatorView : UIView
{
    MTVisualStylingProvider *_visualStylingProvider;	// 8 = 0x8
    UIView *_separatorView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000069810
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // @synthesize visualStylingProvider=_visualStylingProvider;
- (void)layoutSubviews;	// IMP=0x00000000000696d7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000695e4

@end
