//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

__attribute__((visibility("hidden")))
@interface SFBadgeMaskView : UIView
{
    struct CGRect _badgeRect;	// 8 = 0x8
}

+ (Class)layerClass;	// IMP=0x006000000008e8d2
@property(nonatomic) struct CGRect badgeRect; // @synthesize badgeRect=_badgeRect;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000008eb88
- (void)_updateShape;	// IMP=0x000000000008ea25
- (void)layoutSubviews;	// IMP=0x000000000008e8f5
@property(readonly, nonatomic) CAShapeLayer *shapeLayer;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000008e7ed

@end

