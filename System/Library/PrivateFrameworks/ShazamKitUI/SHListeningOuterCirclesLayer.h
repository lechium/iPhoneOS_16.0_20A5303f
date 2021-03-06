//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMediaTimingFunction, NSArray;

__attribute__((visibility("hidden")))
@interface SHListeningOuterCirclesLayer
{
    NSArray *_outerCircleLayers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000cbb3
@property(retain, nonatomic) NSArray *outerCircleLayers; // @synthesize outerCircleLayers=_outerCircleLayers;
@property(readonly, nonatomic) CAMediaTimingFunction *linearTimingFunction;
@property(readonly, nonatomic) CAMediaTimingFunction *inOutQuartTimingFunction;
@property(readonly, nonatomic) CAMediaTimingFunction *inOutSineTimingFunction;
- (id)outerCircleCoreScaleAnimation;	// IMP=0x000000000000c9e3
- (id)outerCircleCoreBorderWidthAnimation;	// IMP=0x000000000000c86b
- (id)outerCircleCoreSizeAnimation;	// IMP=0x000000000000c715
- (id)scaleNullAnimation;	// IMP=0x000000000000c5bf
- (void)addCoreAnimationToOuterCircleLayer:(id)arg1 withStartOffset:(double)arg2;	// IMP=0x000000000000c28b
- (void)addScaleAnimationToCircleLayer:(id)arg1;	// IMP=0x000000000000c1f7
- (void)startListeningAnimation;	// IMP=0x000000000000c0df
- (void)layoutSublayers;	// IMP=0x000000000000be70
- (id)buildOuterCircleLayers;	// IMP=0x000000000000bd2d
- (void)setup;	// IMP=0x000000000000bbc2

@end

