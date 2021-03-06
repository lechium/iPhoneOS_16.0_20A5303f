//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIStatusBarForegroundStyleAttributes, UIStatusBarItem, UIStatusBarLayoutManager, _UILegibilityImageSet, _UILegibilityView;

__attribute__((visibility("hidden")))
@interface UIStatusBarItemView : UIView
{
    double _currentOverlap;	// 184 = 0xb8
    struct CGContext *_imageContext;	// 192 = 0xc0
    double _imageContextScale;	// 200 = 0xc8
    _UILegibilityView *_legibilityView;	// 208 = 0xd0
    _UILegibilityImageSet *_lastGeneratedTextImage;	// 216 = 0xd8
    double _lastGeneratedTextImageLetterSpacing;	// 224 = 0xe0
    NSString *_lastGeneratedTextImageText;	// 232 = 0xe8
    _Bool _visible;	// 240 = 0xf0
    _Bool _allowsUpdates;	// 241 = 0xf1
    _Bool _shouldTintContentImage;	// 242 = 0xf2
    UIStatusBarItem *_item;	// 248 = 0xf8
    UIStatusBarLayoutManager *_layoutManager;	// 256 = 0x100
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;	// 264 = 0x108
}

+ (id)createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3 foregroundStyle:(id)arg4;	// IMP=0x0060000000eefffc
- (void).cxx_destruct;	// IMP=0x0000000000ef1ce3
@property(readonly, nonatomic) _Bool shouldTintContentImage; // @synthesize shouldTintContentImage=_shouldTintContentImage;
@property(nonatomic) _Bool allowsUpdates; // @synthesize allowsUpdates=_allowsUpdates;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) UIStatusBarForegroundStyleAttributes *foregroundStyle; // @synthesize foregroundStyle=_foregroundStyle;
@property(nonatomic) __weak UIStatusBarLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(readonly, nonatomic) UIStatusBarItem *item; // @synthesize item=_item;
- (id)accessibilityHUDRepresentation;	// IMP=0x0000000000ef1c4c
- (_Bool)_shouldReverseLayoutDirection;	// IMP=0x0000000000ef1c2b
- (id)description;	// IMP=0x0000000000ef1b65
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000ef1b03
- (void)endDisablingRasterization;	// IMP=0x0000000000ef1aa9
- (void)beginDisablingRasterization;	// IMP=0x0000000000ef1a4f
- (id)imageWithShadowNamed:(id)arg1;	// IMP=0x0000000000ef19ac
- (void)clearCachedTextImage;	// IMP=0x0000000000ef195b
- (id)cachedImageWithText:(id)arg1 truncatedWithEllipsesAtMaxWidth:(double)arg2 letterSpacing:(double)arg3;	// IMP=0x0000000000ef1731
- (id)imageWithText:(id)arg1 shouldCache:(_Bool)arg2;	// IMP=0x0000000000ef15ed
- (id)imageWithText:(id)arg1;	// IMP=0x0000000000ef15d6
- (void)endImageContext;	// IMP=0x0000000000ef158d
- (id)imageFromImageContextClippedToWidth:(double)arg1;	// IMP=0x0000000000ef1405
- (void)beginImageContextWithMinimumWidth:(double)arg1;	// IMP=0x0000000000ef11d5
- (void)updateForNewStyle:(id)arg1;	// IMP=0x0000000000ef11cf
- (void)setPersistentAnimationsEnabled:(_Bool)arg1;	// IMP=0x0000000000ef11c9
- (void)performPendedActions;	// IMP=0x0000000000ef11c3
- (id)contentsIOSurface;	// IMP=0x0000000000ef11bb
- (id)contentsImage;	// IMP=0x0000000000ef11b3
- (_Bool)animatesDataChange;	// IMP=0x0000000000ef11ab
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;	// IMP=0x0000000000ef11a3
- (double)maximumOverlap;	// IMP=0x0000000000ef119a
- (double)addContentOverlap:(double)arg1;	// IMP=0x0000000000ef1191
- (double)resetContentOverlap;	// IMP=0x0000000000ef1188
- (double)extraRightPadding;	// IMP=0x0000000000ef117f
- (double)extraLeftPadding;	// IMP=0x0000000000ef1176
- (double)shadowPadding;	// IMP=0x0000000000ef1126
- (double)standardPadding;	// IMP=0x0000000000ef10d6
- (long long)textAlignment;	// IMP=0x0000000000ef1091
- (id)textFont;	// IMP=0x0000000000ef1025
- (long long)textStyle;	// IMP=0x0000000000ef101a
- (void)setContentMode:(long long)arg1;	// IMP=0x0000000000ef0fc4
- (double)updateContentsAndWidth;	// IMP=0x0000000000ef0de8
- (void)_tintContentLayerIfNeeded;	// IMP=0x0000000000ef0cf1
- (double)neededSizeForImageSet:(id)arg1;	// IMP=0x0000000000ef0bff
- (double)adjustFrameToNewSize:(double)arg1;	// IMP=0x0000000000ef0b21
- (void)setLayerContentsImage:(id)arg1;	// IMP=0x0000000000ef0681
- (double)legibilityStrength;	// IMP=0x0000000000ef0673
- (long long)legibilityStyle;	// IMP=0x0000000000ef062f
- (double)setStatusBarData:(id)arg1 actions:(int)arg2;	// IMP=0x0000000000ef05af
- (double)currentRightOverlap;	// IMP=0x0000000000ef0591
- (double)currentLeftOverlap;	// IMP=0x0000000000ef0573
- (double)currentOverlap;	// IMP=0x0000000000ef0561
- (void)setCurrentOverlap:(double)arg1;	// IMP=0x0000000000ef054f
- (void)setVisible:(_Bool)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;	// IMP=0x0000000000ef03ec
- (void)setVisible:(_Bool)arg1 settingAlpha:(_Bool)arg2;	// IMP=0x0000000000ef03b9
- (id)foregroundView;	// IMP=0x0000000000ef0328
- (void)dealloc;	// IMP=0x0000000000ef02e2
- (_Bool)allowsUserInteraction;	// IMP=0x0000000000ef02da
- (id)initWithItem:(id)arg1 data:(id)arg2 actions:(int)arg3 style:(id)arg4;	// IMP=0x0000000000ef0112
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x0000000000ef00a4

@end

