//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIVisualEffectView;
@protocol CarDynamicBlurViewDelegate;

@interface CarDynamicBlurView : UIView
{
    id <CarDynamicBlurViewDelegate> _delegate;	// 8 = 0x8
    long long _context;	// 16 = 0x10
    long long _handledUserInterfaceStyle;	// 24 = 0x18
    _Bool _shouldUseNightMode;	// 32 = 0x20
    UIVisualEffectView *_visualEffectView;	// 40 = 0x28
    _Bool _hasCornerValues;	// 48 = 0x30
    double _cornerRadius;	// 56 = 0x38
    _Bool _continuous;	// 64 = 0x40
    unsigned long long _maskedCorners;	// 72 = 0x48
    int _currentMode;	// 80 = 0x50
    UIView *_contentView;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000007d22c5
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) int currentMode; // @synthesize currentMode=_currentMode;
- (void)_changeVisualEffect;	// IMP=0x00100000007d1ced
- (void)_recalculateBlurModeWithInterfaceStyle:(long long)arg1;	// IMP=0x00100000007d1a4e
- (void)_redraw;	// IMP=0x00100000007d1a1d
- (long long)correctedUserInterfaceStyle;	// IMP=0x00100000007d1956
- (void)didMoveToSuperview;	// IMP=0x00100000007d18e8
- (void)didMoveToWindow;	// IMP=0x00100000007d187a
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000007d17e5
- (void)lightLevelController:(id)arg1 didUpdateLightLevel:(long long)arg2;	// IMP=0x00100000007d17a0
- (void)_updateCornerValues;	// IMP=0x00100000007d174f
- (void)_setCornerRadius:(double)arg1 continuous:(_Bool)arg2 maskedCorners:(unsigned long long)arg3;	// IMP=0x00100000007d1711
- (void)didAddSubview:(id)arg1;	// IMP=0x00100000007d16a6
- (void)_createContentView;	// IMP=0x00100000007d162e
- (void)dealloc;	// IMP=0x00100000007d15b9
- (id)initWithBlurViewContext:(long long)arg1 delegate:(id)arg2;	// IMP=0x00100000007d1435

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

