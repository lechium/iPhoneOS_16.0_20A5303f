//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAShapeLayer, LPContactsBadgeStyle, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface LPContactsBadgeView
{
    LPContactsBadgeStyle *_style;	// 8 = 0x8
    UIView *_avatarView;	// 16 = 0x10
    UIImageView *_highlightIndicatorView;	// 24 = 0x18
    UIView *_highlightShadowView;	// 32 = 0x20
    CAShapeLayer *_maskLayer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000bf0f2
- (struct CGRect)layoutExclusionRect;	// IMP=0x00000000000befc0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000beec9
- (void)layoutComponentView;	// IMP=0x00000000000beacb
- (id)initWithHost:(id)arg1 contacts:(id)arg2 highlighted:(_Bool)arg3 style:(id)arg4;	// IMP=0x00000000000be54c
- (id)initWithHost:(id)arg1;	// IMP=0x00000000000be53e

@end

