//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarActivityIconView, _UIStatusBarImageView, _UIStatusBarPillView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBackgroundActivityItem
{
    _UIStatusBarPillView *_backgroundView;	// 8 = 0x8
    _UIStatusBarActivityIconView *_iconView;	// 16 = 0x10
    _UIStatusBarImageView *_secondaryIconView;	// 24 = 0x18
    long long _previousType;	// 32 = 0x20
}

+ (double)_fontSizeAdjustmentForActivityType:(long long)arg1;	// IMP=0x0040000000f0a838
+ (double)_verticalOffsetForActivityType:(long long)arg1;	// IMP=0x0040000000f0a7cb
+ (_Bool)_identifierContainsSecondaryItemImage:(id)arg1;	// IMP=0x0040000000f09765
+ (_Bool)_identifierContainsItemImage:(id)arg1;	// IMP=0x0040000000f09707
+ (id)secondaryIconDisplayIdentifier;	// IMP=0x0040000000f0955d
+ (id)backgroundDisplayIdentifier;	// IMP=0x0040000000f09544
- (void).cxx_destruct;	// IMP=0x0000000000f0afd9
@property(nonatomic) long long previousType; // @synthesize previousType=_previousType;
@property(retain, nonatomic) _UIStatusBarImageView *secondaryIconView; // @synthesize secondaryIconView=_secondaryIconView;
@property(retain, nonatomic) _UIStatusBarActivityIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) _UIStatusBarPillView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (_Bool)crossfadeForUpdate:(id)arg1;	// IMP=0x0000000000f0aeda
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x0000000000f0ae23
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x0000000000f0ad6c
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000000f0ac84
- (id)imageView;	// IMP=0x0000000000f0ac72
- (void)_create_secondaryIconView;	// IMP=0x0000000000f0ac18
- (void)_create_iconView;	// IMP=0x0000000000f0ab87
- (void)_create_backgroundView;	// IMP=0x0000000000f0aaf6
- (id)_visualEffectForActivityType:(long long)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000f0aa69
- (_Bool)_shouldPulseForActivityType:(long long)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000f0aa2c
- (_Bool)_shouldRingForActivityType:(long long)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000f0a9fc
- (id)_backgroundColorForActivityType:(long long)arg1;	// IMP=0x0000000000f0a85b
- (id)secondaryImageForUpdate:(id)arg1;	// IMP=0x0000000000f0a706
- (id)_secondarySystemImageNameForActivityType:(long long)arg1;	// IMP=0x0000000000f0a6fe
- (id)imageForUpdate:(id)arg1;	// IMP=0x0000000000f0a417
- (id)_textLabelForActivityType:(long long)arg1;	// IMP=0x0000000000f0a400
- (id)_imageNameForActivityType:(long long)arg1;	// IMP=0x0000000000f0a3de
- (id)_systemImageNameForActivityType:(long long)arg1;	// IMP=0x0000000000f0a3c4
- (id)imageNameForUpdate:(id)arg1;	// IMP=0x0000000000f0a334
- (id)systemImageNameForUpdate:(id)arg1;	// IMP=0x0000000000f0a2a4
- (void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000000f0a1dd
- (void)updatedDisplayItemsWithData:(id)arg1;	// IMP=0x0000000000f0a13c
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000000f0989b
- (_Bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;	// IMP=0x0000000000f097c3
- (id)_backgroundActivityViewForIdentifier:(id)arg1;	// IMP=0x0000000000f09686
- (id)createDisplayItemForIdentifier:(id)arg1;	// IMP=0x0000000000f095cd
- (id)indicatorEntryKey;	// IMP=0x0000000000f095b9
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;	// IMP=0x0000000000f09576

@end
