//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CloudTabHeaderView : UIView
{
    UILabel *_label;	// 8 = 0x8
    UIImageView *_icon;	// 16 = 0x10
    UIView *_separatorView;	// 24 = 0x18
    long long _style;	// 32 = 0x20
    double _bottomPadding;	// 40 = 0x28
    double _paddingBetweenIconAndLabel;	// 48 = 0x30
    double _leftEdgeInset;	// 56 = 0x38
}

+ (double)defaultHeightForStyle:(long long)arg1;	// IMP=0x00600000000ab57d
- (void).cxx_destruct;	// IMP=0x00000000000abb5d
@property(copy, nonatomic) NSString *text;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000aba30
- (struct CGSize)_iconSizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000ab973
- (void)layoutSubviews;	// IMP=0x00000000000ab5d5
@property(readonly, nonatomic) struct CGRect labelFrame;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000ab540
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000000000ab1d1

@end
