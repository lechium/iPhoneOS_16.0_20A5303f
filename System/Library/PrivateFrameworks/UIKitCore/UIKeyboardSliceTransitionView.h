//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, NSMutableDictionary, UIKBCacheToken;

__attribute__((visibility("hidden")))
@interface UIKeyboardSliceTransitionView
{
    struct CGImage *_defaultKeyplaneImage;	// 160 = 0xa0
    struct CGImage *_splitKeyplaneImage;	// 168 = 0xa8
    CALayer *_leftKeys;	// 176 = 0xb0
    CALayer *_rightKeys;	// 184 = 0xb8
    CALayer *_spaceFill;	// 192 = 0xc0
    NSMutableDictionary *_controlKeys;	// 200 = 0xc8
    CALayer *_topEdgeHighlight;	// 208 = 0xd0
    UIKBCacheToken *_keyplaneToken;	// 216 = 0xd8
    long long _orientation;	// 224 = 0xe0
    struct {
        unsigned int position:1;
        unsigned int slices:1;
        unsigned int backgroundAndShadows:1;
        unsigned int backgroundGradients:1;
        unsigned int topEdgeHighlight:1;
        unsigned int shiftKeys:1;
        unsigned int returnKeys:1;
        unsigned int moreIntlKeys:1;
    } _rebuildFlags;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x0000000000ca79cf
- (_Bool)canDisplayTransition;	// IMP=0x0000000000ca7960
- (void)updateWithProgress:(double)arg1;	// IMP=0x0000000000ca78b0
- (void)rebuildControlKeys:(unsigned long long)arg1;	// IMP=0x0000000000ca788e
- (void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 startToken:(id)arg3 endToken:(id)arg4 keyboardType:(long long)arg5 orientation:(long long)arg6;	// IMP=0x0000000000ca7623
- (void)updateTransition;	// IMP=0x0000000000ca75da
- (void)_delayedUpdateTransition;	// IMP=0x0000000000ca73f4
- (void)setHidden:(_Bool)arg1;	// IMP=0x0000000000ca7380
- (void)transformForProgress:(double)arg1;	// IMP=0x0000000000ca7310
- (id)meshTransformForProgress:(double)arg1;	// IMP=0x0000000000ca7026
- (void)rebuildMoreIntlKeys;	// IMP=0x0000000000ca63b7
- (void)rebuildReturnSlices;	// IMP=0x0000000000ca6057
- (void)rebuildShiftSlices;	// IMP=0x0000000000ca5c56
- (void)rebuildSliceTransitions;	// IMP=0x0000000000ca4882
- (void)refreshKeyplaneImages;	// IMP=0x0000000000ca47cc
- (void)updateTransitionForSlice:(id)arg1 withStart:(id)arg2 startContents:(id)arg3 end:(id)arg4 endContents:(id)arg5 updateContents:(_Bool)arg6;	// IMP=0x0000000000ca4524
- (void)rebuildBackgroundGradientTransitions;	// IMP=0x0000000000ca4328
- (void)rebuildBackgroundAndShadowTransitions;	// IMP=0x0000000000ca39bf
- (void)rebuildShadows;	// IMP=0x0000000000ca2114
- (void)rebuildTopEdgeHighlightTransition;	// IMP=0x0000000000ca1c58
- (id)crossfadeOpacityAnimation;	// IMP=0x0000000000ca189e
- (double)adjustedRightWidthAtMergePoint;	// IMP=0x0000000000ca180c
- (double)adjustedLeftWidthAtMergePoint;	// IMP=0x0000000000ca178a
- (struct CGImage *)splitKeyboardImage;	// IMP=0x0000000000ca1779
- (struct CGImage *)defaultKeyboardImage;	// IMP=0x0000000000ca1768
- (struct CGImage *)getKeyboardImageAsSplit:(_Bool)arg1;	// IMP=0x0000000000ca170e
- (void)rebuildTransitionForSplitStyleChange:(id)arg1;	// IMP=0x0000000000ca16f1
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000ca15ed
- (void)dealloc;	// IMP=0x0000000000ca1592
- (void)setRebuildFlags;	// IMP=0x0000000000ca1581
- (void)initializeLayers;	// IMP=0x0000000000ca12b2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000ca11f1

@end
