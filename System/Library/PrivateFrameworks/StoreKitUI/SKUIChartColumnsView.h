//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, SKUIFlexibleSegmentedControl, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface SKUIChartColumnsView : UIView
{
    NSArray *_allViewControllers;	// 8 = 0x8
    long long _animatingToNumberOfVisibleColumns;	// 16 = 0x10
    UIVisualEffectView *_effectView;	// 24 = 0x18
    UIView *_borderView0;	// 32 = 0x20
    UIView *_borderView1;	// 40 = 0x28
    long long _columnChangeAnimationCount;	// 48 = 0x30
    NSArray *_columnViews;	// 56 = 0x38
    struct UIEdgeInsets _contentInset;	// 64 = 0x40
    UIView *_headerBackgroundView;	// 96 = 0x60
    UIView *_headerBackgroundBottomBorder;	// 104 = 0x68
    NSArray *_headerViews;	// 112 = 0x70
    long long _numberOfVisibleColumns;	// 120 = 0x78
    SKUIFlexibleSegmentedControl *_segmentedControl;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000002b1b14
@property(readonly, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic) long long numberOfVisibleColumns; // @synthesize numberOfVisibleColumns=_numberOfVisibleColumns;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(copy, nonatomic) NSArray *chartViewControllers; // @synthesize chartViewControllers=_allViewControllers;
- (void)_reloadColumnViews;	// IMP=0x00000000002b0fc3
- (id)_headerViewWithViewControllers:(id)arg1;	// IMP=0x00000000002b0d71
- (void)segmentedControl:(id)arg1 didSelectSegmentIndex:(long long)arg2;	// IMP=0x00000000002b0d1a
- (void)_headerViewAction:(id)arg1;	// IMP=0x00000000002b0c74
- (void)layoutSubviews;	// IMP=0x00000000002b0525
- (void)endColumnChangeAnimation;	// IMP=0x00000000002b03c9
- (void)beginColumnChangeAnimationToNumberOfVisibleColumns:(long long)arg1;	// IMP=0x00000000002b0353
- (void)dealloc;	// IMP=0x00000000002b0308
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002b006e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
