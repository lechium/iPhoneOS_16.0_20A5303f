//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIScrollViewScrollIndicatorFallbackVisualStyle : NSObject
{
}

- (CDStruct_f413d7fe)valuesForLayoutSizeAnimationWhenExpanding:(_Bool)arg1;	// IMP=0x0000000000e37abd
- (id)colorForIndicatorStyle:(long long)arg1 expanded:(_Bool)arg2;	// IMP=0x0000000000e37aa4
@property(readonly, nonatomic) _Bool clipsToBounds;
- (struct UIEdgeInsets)cursorHitTestingInsets;	// IMP=0x0000000000e37a89
- (struct CGRect)hitTestingRectForIndicatorRect:(struct CGRect)arg1;	// IMP=0x0000000000e37a71
- (double)fillViewCornerRadiusForStaticDimensionSize:(double)arg1;	// IMP=0x0000000000e37a68
- (id)fillViewRoundedCornerCurve;	// IMP=0x0000000000e37a54
@property(readonly, nonatomic) double staticDimensionExpandedSize;
@property(readonly, nonatomic) double staticDimensionSize;
- (id)fillView;	// IMP=0x0000000000e37a1f

@end

