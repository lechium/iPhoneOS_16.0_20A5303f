//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUIStackedBarCell : UIButton
{
    _Bool _expanded;	// 8 = 0x8
    UILabel *_expandedLabel;	// 16 = 0x10
    UIButton *_backButton;	// 24 = 0x18
    UIView *_separator;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000125c5d
@property(readonly, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
- (void)layoutSubviews;	// IMP=0x00000000001259cb
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001259a9
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000125928
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000125656
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000125374

@end
