//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIVisualEffectView, VUILabel;

__attribute__((visibility("hidden")))
@interface VUIVisualEffectLabel : UIView
{
    VUILabel *_label;	// 8 = 0x8
    UIVisualEffectView *_visualEffectView;	// 16 = 0x10
    unsigned long long _visualEffectLabelType;	// 24 = 0x18
    long long _blurEffectStyle;	// 32 = 0x20
}

+ (long long)_backdropStyleForVisualEffectType:(unsigned long long)arg1 traitCollection:(id)arg2;	// IMP=0x001000000003ca4f
+ (id)labelWithType:(unsigned long long)arg1 label:(id)arg2 traitCollection:(id)arg3 existingVisualEffectLabel:(id)arg4;	// IMP=0x001000000003c599
- (void).cxx_destruct;	// IMP=0x000000000003ccb6
@property(nonatomic) long long blurEffectStyle; // @synthesize blurEffectStyle=_blurEffectStyle;
@property(nonatomic) unsigned long long visualEffectLabelType; // @synthesize visualEffectLabelType=_visualEffectLabelType;
@property(retain, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(retain, nonatomic) VUILabel *label; // @synthesize label=_label;
- (void)_configureVisualEffectForTraitCollection;	// IMP=0x000000000003cad4
- (double)vui_baselineOffsetFromBottom;	// IMP=0x000000000003ca32
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;	// IMP=0x000000000003ca15
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000003c920
- (void)_updateContentWithNewLabel:(id)arg1 oldLabel:(id)arg2;	// IMP=0x000000000003c88d
- (void)layoutSubviews;	// IMP=0x000000000003c7b5
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000003c798

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
