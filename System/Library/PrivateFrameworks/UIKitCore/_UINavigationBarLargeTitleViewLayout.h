//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UILabel, UIView, _UINavigationBarLargeTitleView;

__attribute__((visibility("hidden")))
@interface _UINavigationBarLargeTitleViewLayout : NSObject
{
    NSMutableDictionary *_titleHeightCache;	// 8 = 0x8
    NSMutableDictionary *_restingHeightCache;	// 16 = 0x10
    double _cachedRestingHeight;	// 24 = 0x18
    _Bool _alignAccessoryViewToTitleBaseline;	// 32 = 0x20
    _Bool _providesExtraSpaceForExcessiveLineHeights;	// 33 = 0x21
    _UINavigationBarLargeTitleView *_contentView;	// 40 = 0x28
    long long _titleType;	// 48 = 0x30
    UILabel *_titleLabel;	// 56 = 0x38
    unsigned long long _twoLineMode;	// 64 = 0x40
    double _titleRestingHeight;	// 72 = 0x48
    UIView *_accessoryView;	// 80 = 0x50
    unsigned long long _accessoryViewHorizontalAlignment;	// 88 = 0x58
    struct NSDirectionalEdgeInsets _layoutMargins;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000001ab90e
@property(nonatomic) struct NSDirectionalEdgeInsets layoutMargins; // @synthesize layoutMargins=_layoutMargins;
@property(nonatomic) unsigned long long accessoryViewHorizontalAlignment; // @synthesize accessoryViewHorizontalAlignment=_accessoryViewHorizontalAlignment;
@property(nonatomic) _Bool providesExtraSpaceForExcessiveLineHeights; // @synthesize providesExtraSpaceForExcessiveLineHeights=_providesExtraSpaceForExcessiveLineHeights;
@property(nonatomic) _Bool alignAccessoryViewToTitleBaseline; // @synthesize alignAccessoryViewToTitleBaseline=_alignAccessoryViewToTitleBaseline;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) double titleRestingHeight; // @synthesize titleRestingHeight=_titleRestingHeight;
@property(nonatomic) unsigned long long twoLineMode; // @synthesize twoLineMode=_twoLineMode;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long titleType; // @synthesize titleType=_titleType;
@property(readonly, nonatomic) _UINavigationBarLargeTitleView *contentView; // @synthesize contentView=_contentView;
- (void)updateLayoutData:(id)arg1 layoutWidth:(double)arg2;	// IMP=0x00000000001ab7fc
- (void)removeContent;	// IMP=0x00000000001ab7b4
- (struct CGSize)sizeFittingSize:(struct CGSize)arg1 titleType:(long long)arg2;	// IMP=0x00000000001ab78c
- (struct CGSize)_cachedTitleHeightSizeAndUpdateRestingSizeForWidth:(double)arg1;	// IMP=0x00000000001ab1de
- (struct CGSize)_cachedTitleHeightSizeAndUpdateRestingSizeForWidthSupportingMultiLineShrinkToFit:(double)arg1;	// IMP=0x00000000001aaa08
- (void)_invalidateTitleHeightCache;	// IMP=0x00000000001aa9cf
- (double)_textHeightForSize:(struct CGSize)arg1 titleType:(long long)arg2;	// IMP=0x00000000001aa936
- (void)setContentHidden:(_Bool)arg1;	// IMP=0x00000000001aa915
- (void)setContentAlpha:(double)arg1;	// IMP=0x00000000001aa8d0
- (void)cleanupAfterLayoutTransitionCompleted;	// IMP=0x00000000001aa8be
- (void)layoutViewsWithOffset:(struct UIOffset)arg1 useRestingTitleHeight:(_Bool)arg2;	// IMP=0x00000000001a9f44
- (void)layoutViewsWithOffsetSupportingMultiLineShrinkToFit:(struct UIOffset)arg1 useRestingTitleHeight:(_Bool)arg2;	// IMP=0x00000000001a938e
- (void)layoutViews;	// IMP=0x00000000001a9374
- (void)_enforceLayoutOrdering;	// IMP=0x00000000001a9317
- (void)updateRestingTitleHeight;	// IMP=0x00000000001a91b0
- (struct CGRect)_contentLayoutBounds;	// IMP=0x00000000001a918f
- (struct CGRect)_contentLayoutBoundsUsingRestingTitleHeight:(_Bool)arg1;	// IMP=0x00000000001a90ba
- (id)initWithContentView:(id)arg1;	// IMP=0x00000000001a8f9b
- (id)description;	// IMP=0x00000000001a8e05

@end

