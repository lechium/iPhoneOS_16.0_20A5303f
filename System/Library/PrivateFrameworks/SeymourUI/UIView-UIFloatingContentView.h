//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (UIFloatingContentView)
+ (id)smu_floatingContentViewWithFrame:(struct CGRect)arg1;	// IMP=0x0020000000004ef6
+ (id)smu_tvCarouselView;	// IMP=0x0020000000005444
+ (void)smu_animateUsingSpringWithTension:(double)arg1 friction:(double)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0020000000005505
+ (unsigned long long)smu_coreAnimationDefaultCurve;	// IMP=0x002000000000546f
+ (id)smu_tvFocusableTextView;	// IMP=0x002000000000833f
+ (id)smu_animationConfigurationForStyle:(long long)arg1;	// IMP=0x0020000000008bb6
- (_Bool)smu_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;	// IMP=0x001000000000561a
@property(nonatomic, setter=smu_setSpeedBumpEdges:) unsigned long long smu_speedBumpEdges;
@property(nonatomic) struct UIEdgeInsets smu_touchInsets;
- (_Bool)smu_shouldReverseLayoutDirection;	// IMP=0x00100000000054c2
@property(nonatomic, setter=smu_setContinuousCornerRadius:) double smu_continuousCornerRadius;
@property(nonatomic, setter=smu_setCornerRadius:) double smu_cornerRadius;
@end

