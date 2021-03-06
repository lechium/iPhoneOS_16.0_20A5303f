//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarServiceItemView
{
    NSString *_serviceString;	// 8 = 0x8
    NSString *_crossfadeString;	// 16 = 0x10
    unsigned long long _crossfadeStep;	// 24 = 0x18
    double _maxWidth;	// 32 = 0x20
    double _serviceWidth;	// 40 = 0x28
    double _crossfadeWidth;	// 48 = 0x30
    int _contentType;	// 56 = 0x38
    _Bool _loopingNecessaryForString;	// 60 = 0x3c
    _Bool _loopNowIfNecessary;	// 61 = 0x3d
    _Bool _loopingNow;	// 62 = 0x3e
    double _letterSpacing;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000f022af
- (id)accessibilityHUDRepresentation;	// IMP=0x0000000000f02255
- (_Bool)_loopingNecessary;	// IMP=0x0000000000f02245
- (void)_crossfadeStepAnimation;	// IMP=0x0000000000f01fd0
- (_Bool)_crossfaded;	// IMP=0x0000000000f01fb1
- (void)_loopAnimationDidStopInDirection:(_Bool)arg1;	// IMP=0x0000000000f01ca5
- (void)performPendedActions;	// IMP=0x0000000000f01aaf
- (double)extraRightPadding;	// IMP=0x0000000000f01a19
- (_Bool)animatesDataChange;	// IMP=0x0000000000f01a11
- (void)setVisible:(_Bool)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;	// IMP=0x0000000000f018fb
- (id)contentsImage;	// IMP=0x0000000000f018af
- (id)_crossfadeContentsImage;	// IMP=0x0000000000f01887
- (id)_serviceContentsImage;	// IMP=0x0000000000f01823
- (id)_contentsImageFromString:(id)arg1 withWidth:(double)arg2 letterSpacing:(double)arg3;	// IMP=0x0000000000f016cb
- (double)updateContentsAndWidth;	// IMP=0x0000000000f01369
- (long long)legibilityStyle;	// IMP=0x0000000000f01323
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;	// IMP=0x0000000000f01156
- (_Bool)updateForContentType:(int)arg1 serviceString:(id)arg2 serviceCrossfadeString:(id)arg3 maxWidth:(double)arg4 actions:(int)arg5;	// IMP=0x0000000000f00d7b
- (double)addContentOverlap:(double)arg1;	// IMP=0x0000000000f00ce7
- (double)resetContentOverlap;	// IMP=0x0000000000f00c82
- (double)standardPadding;	// IMP=0x0000000000f00c4b

@end

