//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIPointerRegion, UIPointerStyle;

@protocol _UIPointerArbitrating <NSObject>
@property(readonly, nonatomic) long long pointerState;
- (void)endScrollingWithRegion:(UIPointerRegion *)arg1;
- (void)beginScrollingWithRegion:(UIPointerRegion *)arg1;
- (void)exitRegion:(UIPointerRegion *)arg1 removeStyle:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)applyStyle:(UIPointerStyle *)arg1 forRegion:(UIPointerRegion *)arg2 effectSourceHandler:(void (^)(_UIPortalView *, _UIPortalView *, _UIPointerContentEffectAnimationBuilder *, _UILumaTrackingBackdropView *))arg3 completion:(void (^)(void))arg4;
@end
