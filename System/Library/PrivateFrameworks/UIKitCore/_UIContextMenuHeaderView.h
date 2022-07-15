//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionReusableView.h"

@class NSString, UILabel, UIView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuHeaderView : UICollectionReusableView
{
    _Bool _needsConstraintRebuild;	// 8 = 0x8
    unsigned long long _separatorStyle;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    UIView *_contentView;	// 32 = 0x20
    UIVisualEffectView *_bgView;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
    UIView *_separator;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000b03810
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIVisualEffectView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long separatorStyle; // @synthesize separatorStyle=_separatorStyle;
- (double)_separatorHeight;	// IMP=0x0000000000b036ed
- (struct UIEdgeInsets)layoutMargins;	// IMP=0x0000000000b03605
- (void)updateConstraints;	// IMP=0x0000000000b02e05
- (void)_setNeedsConstraintRebuild;	// IMP=0x0000000000b02de8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000b02c7c
- (unsigned long long)_titleLabelNumberOfLines;	// IMP=0x0000000000b02c0a
- (id)_titleFont;	// IMP=0x0000000000b02be7
- (void)setBackgroundMaterialGroupName:(id)arg1;	// IMP=0x0000000000b02a54
- (_Bool)_isDisplayingTitleLabel;	// IMP=0x0000000000b029f0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000b025b8

@end
