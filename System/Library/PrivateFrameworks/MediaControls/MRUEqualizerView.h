//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MRUVisualStylingProvider, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MRUEqualizerView : UIView
{
    _Bool _animating;	// 8 = 0x8
    MRUVisualStylingProvider *_stylingProvider;	// 16 = 0x10
    NSArray *_barViews;	// 24 = 0x18
    double _width;	// 32 = 0x20
    double _spacing;	// 40 = 0x28
    long long _visualStyle;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000004e3f1
@property(nonatomic) long long visualStyle; // @synthesize visualStyle=_visualStyle;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) NSArray *barViews; // @synthesize barViews=_barViews;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void)stopAnimating;	// IMP=0x000000000004e076
- (void)startAnimating;	// IMP=0x000000000004dceb
- (void)updateBarHeights;	// IMP=0x000000000004db0e
- (void)updateVisualStyling;	// IMP=0x000000000004d9a4
- (void)visualStylingProviderDidChange:(id)arg1;	// IMP=0x000000000004d992
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000004d829
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000004d771
- (void)layoutSubviews;	// IMP=0x000000000004d723
- (id)initWithNumberOfBars:(unsigned long long)arg1 width:(double)arg2 spacing:(double)arg3;	// IMP=0x000000000004d53d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

