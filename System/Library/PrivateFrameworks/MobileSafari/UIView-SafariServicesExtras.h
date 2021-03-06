//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString;

@interface UIView (SafariServicesExtras)
+ (void)_sf_cancelLinkAnimationsOnWindow:(id)arg1;	// IMP=0x0020000000034b95
+ (void)_sf_performLinkAnimation:(long long)arg1 onView:(id)arg2;	// IMP=0x0020000000034a4f
+ (void)_sf_animateLinkImage:(struct CGImage *)arg1 withAnimation:(long long)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4 toRect:(struct CGRect)arg5 inView:(id)arg6 afterImageDisappearsBlock:(CDUnknownBlockType)arg7 afterDestinationLayerBouncesBlock:(CDUnknownBlockType)arg8;	// IMP=0x0020000000033176
+ (void)_sf_animateLinkImage:(id)arg1 withAnimation:(long long)arg2 fromPoint:(struct CGPoint)arg3 inView:(id)arg4 toRect:(struct CGRect)arg5 inView:(id)arg6 afterImageDisappearsBlock:(CDUnknownBlockType)arg7 afterDestinationLayerBouncesBlock:(CDUnknownBlockType)arg8;	// IMP=0x0020000000032fd0
+ (void)sf_animate:(_Bool)arg1 usingDefaultDampedSpringWithDelay:(double)arg2 initialSpringVelocity:(double)arg3 options:(unsigned long long)arg4 preferredFrameRateRange:(struct CAFrameRateRange)arg5 animations:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0020000000039512
+ (void)sf_animateUsingDefaultDampedSpringWithDelay:(double)arg1 initialSpringVelocity:(double)arg2 options:(unsigned long long)arg3 preferredFrameRateRange:(struct CAFrameRateRange)arg4 animations:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00200000000394f1
+ (void)sf_animate:(_Bool)arg1 usingDefaultTimingWithOptions:(unsigned long long)arg2 preferredFrameRateRange:(struct CAFrameRateRange)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00200000000393c8
+ (void)sf_animated:(_Bool)arg1 usingFastSpringWithDelay:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00200000000392e6
+ (void)sf_animate:(_Bool)arg1 usingDefaultDampedSpringWithDelay:(double)arg2 initialSpringVelocity:(double)arg3 options:(unsigned long long)arg4 animations:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x002000000003921d
+ (void)sf_animate:(_Bool)arg1 withDuration:(double)arg2 delay:(double)arg3 options:(unsigned long long)arg4 animations:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0020000000039154
+ (void)sf_animate:(_Bool)arg1 usingDefaultMotionWithDelay:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x002000000003912e
+ (void)sf_animate:(_Bool)arg1 usingDefaultMotionWithOptions:(unsigned long long)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x002000000003910b
+ (void)sf_animate:(_Bool)arg1 usingDefaultTimingWithOptions:(unsigned long long)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0020000000039059
- (void)sf_applyContentSizeCategoryLimitsForToolbarButton;	// IMP=0x0010000000032f8e
- (void)_sf_addInteractionUnlessNil:(id)arg1;	// IMP=0x0010000000032f75
- (void)_sf_addEdgeMatchedSubview:(id)arg1;	// IMP=0x0010000000032cd6
- (void)_sf_setMatchesIntrinsicContentSize;	// IMP=0x0010000000032c5a
- (id)_sf_firstAncestorViewOfClass:(Class)arg1;	// IMP=0x0010000000032bca
- (void)_sf_setOrderedSubviews:(id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0010000000032b6e
- (id)_sf_snapshotImageFromIOSurface;	// IMP=0x0010000000032a87
- (double)_sf_convertY:(double)arg1 toCoordinateSpace:(id)arg2;	// IMP=0x0010000000032a6b
- (id)sf_commonAncestrySummaryWithView:(id)arg1;	// IMP=0x00100000000327ae
- (long long)_sf_depth;	// IMP=0x0010000000032744
@property(readonly, nonatomic) NSString *sf_viewAncestrySummary;
- (id)_sf_viewAncestrySummaryWithMinDepth:(long long)arg1 paddingLevel:(long long)arg2;	// IMP=0x00100000000324a9
@property(readonly, nonatomic) NSString *sf_privacyPreservingDescription;
@property(readonly, nonatomic) struct CGRect _sf_bottomUnsafeAreaFrameForToolbar;
@property(readonly, nonatomic) struct CGRect _sf_bottomUnsafeAreaFrame;
@property(readonly, nonatomic) struct CGRect _sf_safeAreaBounds;
@property(readonly, nonatomic) struct UIEdgeInsets _sf_safeAreaInsetsFlippedForLayoutDirectionality;
@property(readonly, nonatomic) _Bool _sf_hasLandscapeAspectRatio;
@property(readonly, nonatomic) _Bool _sf_usesLeftToRightLayout;
@property(readonly, nonatomic) _Bool _sf_isFullScreenHeight;
@property(readonly, nonatomic) _Bool _sf_isFullScreenWidth;
- (void)ss_setUntransformedFrame:(struct CGRect)arg1;	// IMP=0x0010000000038ef8
- (struct CGRect)ss_untransformedFrame;	// IMP=0x0010000000038e38
- (void)sf_configureLargeContentViewerWithImage:(id)arg1 title:(id)arg2;	// IMP=0x00100000000a2fa8
- (void)sf_configureLargeContentViewerForBarItem:(long long)arg1;	// IMP=0x00100000000a2eea
@end

