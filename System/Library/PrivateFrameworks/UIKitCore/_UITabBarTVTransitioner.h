//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UISpringTimingParameters, UIView;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UITabBarTVTransitioner : NSObject
{
    _Bool _fromViewOriginalShouldRasterize;	// 8 = 0x8
    double _fromViewLayerOriginalRasterizationScale;	// 16 = 0x10
    _Bool _toViewOriginalShouldRasterize;	// 24 = 0x18
    double _toViewLayerOriginalRasterizationScale;	// 32 = 0x20
    _Bool _transitionFromRight;	// 40 = 0x28
    long long _transitionStyle;	// 48 = 0x30
    id <UIViewControllerContextTransitioning> _transitionContext;	// 56 = 0x38
    UISpringTimingParameters *_slideTimingParameters;	// 64 = 0x40
    UIView *_toViewXFlippedScreenShot;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000043977c
@property(retain, nonatomic) UIView *toViewXFlippedScreenShot; // @synthesize toViewXFlippedScreenShot=_toViewXFlippedScreenShot;
@property(retain, nonatomic) UISpringTimingParameters *slideTimingParameters; // @synthesize slideTimingParameters=_slideTimingParameters;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) _Bool transitionFromRight; // @synthesize transitionFromRight=_transitionFromRight;
@property(nonatomic) long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;
- (void)animateTransition:(id)arg1;	// IMP=0x00000000004389bc
- (double)transitionDuration:(id)arg1;	// IMP=0x000000000043895b
- (void)finishTransition;	// IMP=0x00000000004386aa
- (void)interruptTabBarControllerTransition;	// IMP=0x0000000000438698
- (id)init;	// IMP=0x000000000043865c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
