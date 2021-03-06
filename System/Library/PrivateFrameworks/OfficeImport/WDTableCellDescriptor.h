//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WDBorder, WDShading;

__attribute__((visibility("hidden")))
@interface WDTableCellDescriptor : NSObject
{
    WDShading *mShading;	// 8 = 0x8
    WDBorder *mTopBorder;	// 16 = 0x10
    WDBorder *mLeftBorder;	// 24 = 0x18
    WDBorder *mBottomBorder;	// 32 = 0x20
    WDBorder *mRightBorder;	// 40 = 0x28
    WDBorder *mDiagonalUpBorder;	// 48 = 0x30
    WDBorder *mDiagonalDownBorder;	// 56 = 0x38
    short mWidth;	// 64 = 0x40
    int mWidthType;	// 68 = 0x44
    short mTopMargin;	// 72 = 0x48
    int mTopMarginType;	// 76 = 0x4c
    short mBottomMargin;	// 80 = 0x50
    int mBottomMarginType;	// 84 = 0x54
    short mLeftMargin;	// 88 = 0x58
    int mLeftMarginType;	// 92 = 0x5c
    short mRightMargin;	// 96 = 0x60
    int mRightMarginType;	// 100 = 0x64
    int mVerticalAlignment;	// 104 = 0x68
    unsigned int mShadingOverridden:1;	// 108 = 0x6c
    unsigned int mTopBorderOverridden:1;	// 108 = 0x6c
    unsigned int mLeftBorderOverridden:1;	// 108 = 0x6c
    unsigned int mBottomBorderOverridden:1;	// 108 = 0x6c
    unsigned int mRightBorderOverridden:1;	// 108 = 0x6c
    unsigned int mDiagonalUpBorderOverridden:1;	// 108 = 0x6c
    unsigned int mDiagonalDownBorderOverridden:1;	// 108 = 0x6c
    unsigned int mWidthTypeOverridden:1;	// 108 = 0x6c
    unsigned int mTopMarginOverridden:1;	// 109 = 0x6d
    unsigned int mTopMarginTypeOverridden:1;	// 109 = 0x6d
    unsigned int mBottomMarginOverridden:1;	// 109 = 0x6d
    unsigned int mBottomMarginTypeOverridden:1;	// 109 = 0x6d
    unsigned int mLeftMarginOverridden:1;	// 109 = 0x6d
    unsigned int mLeftMarginTypeOverridden:1;	// 109 = 0x6d
    unsigned int mRightMarginOverridden:1;	// 109 = 0x6d
    unsigned int mRightMarginTypeOverridden:1;	// 109 = 0x6d
    unsigned int mVerticalAlignmentOverridden:1;	// 110 = 0x6e
    unsigned int mVerticallyMergedCell:1;	// 110 = 0x6e
    unsigned int mVerticallyMergedCellOverridden:1;	// 110 = 0x6e
    unsigned int mFirstInSetOfVerticallyMergedCells:1;	// 110 = 0x6e
    unsigned int mFirstInSetOfVerticallyMergedCellsOverridden:1;	// 110 = 0x6e
    unsigned int mNoWrap:1;	// 110 = 0x6e
    unsigned int mNoWrapOverridden:1;	// 110 = 0x6e
}

- (void).cxx_destruct;	// IMP=0x0000000000405fea
- (void)setNoWrapOverridden:(_Bool)arg1;	// IMP=0x0000000000405fd7
- (_Bool)isNoWrapOverridden;	// IMP=0x0000000000405fc9
- (void)setNoWrap:(_Bool)arg1;	// IMP=0x0000000000405fb6
- (_Bool)noWrap;	// IMP=0x0000000000405fa8
- (void)setFirstInSetOfVerticallyMergedCellsOverridden:(_Bool)arg1;	// IMP=0x0000000000405f95
- (_Bool)isFirstInSetOfVerticallyMergedCellsOverridden;	// IMP=0x0000000000405f87
- (void)setFirstInSetOfVerticallyMergedCells:(_Bool)arg1;	// IMP=0x0000000000405f74
- (_Bool)firstInSetOfVerticallyMergedCells;	// IMP=0x0000000000405f66
- (void)setVerticallyMergedCellOverridden:(_Bool)arg1;	// IMP=0x0000000000405f53
- (_Bool)isVerticallyMergedCellOverridden;	// IMP=0x0000000000405f45
- (void)setVerticallyMergedCell:(_Bool)arg1;	// IMP=0x0000000000405f33
- (_Bool)verticallyMergedCell;	// IMP=0x0000000000405f26
- (void)setVerticalAlignmentOverridden:(_Bool)arg1;	// IMP=0x0000000000405f16
- (_Bool)isVerticalAlignmentOverridden;	// IMP=0x0000000000405f0b
- (void)setVerticalAlignment:(int)arg1;	// IMP=0x0000000000405f02
- (int)verticalAlignment;	// IMP=0x0000000000405ef9
- (void)setRightMarginTypeOverridden:(_Bool)arg1;	// IMP=0x0000000000405ee6
- (_Bool)isRightMarginTypeOverridden;	// IMP=0x0000000000405eda
- (void)setRightMarginType:(int)arg1;	// IMP=0x0000000000405ed1
- (int)rightMarginType;	// IMP=0x0000000000405ec8
- (void)setRightMarginOverridden:(_Bool)arg1;	// IMP=0x0000000000405eb5
- (_Bool)isRightMarginOverridden;	// IMP=0x0000000000405ea7
- (void)setRightMargin:(short)arg1;	// IMP=0x0000000000405e9d
- (short)rightMargin;	// IMP=0x0000000000405e93
- (void)setLeftMarginTypeOverridden:(_Bool)arg1;	// IMP=0x0000000000405e80
- (_Bool)isLeftMarginTypeOverridden;	// IMP=0x0000000000405e72
- (void)setLeftMarginType:(int)arg1;	// IMP=0x0000000000405e69
- (int)leftMarginType;	// IMP=0x0000000000405e60
- (void)setLeftMarginOverridden:(_Bool)arg1;	// IMP=0x0000000000405e4d
- (_Bool)isLeftMarginOverridden;	// IMP=0x0000000000405e3f
- (void)setLeftMargin:(short)arg1;	// IMP=0x0000000000405e35
- (short)leftMargin;	// IMP=0x0000000000405e2b
- (void)setBottomMarginTypeOverridden:(_Bool)arg1;	// IMP=0x0000000000405e18
- (_Bool)isBottomMarginTypeOverridden;	// IMP=0x0000000000405e0a
- (void)setBottomMarginType:(int)arg1;	// IMP=0x0000000000405e01
- (int)bottomMarginType;	// IMP=0x0000000000405df8
- (void)setBottomMarginOverridden:(_Bool)arg1;	// IMP=0x0000000000405de5
- (_Bool)isBottomMarginOverridden;	// IMP=0x0000000000405dd7
- (void)setBottomMargin:(short)arg1;	// IMP=0x0000000000405dcd
- (short)bottomMargin;	// IMP=0x0000000000405dc3
- (void)setTopMarginTypeOverridden:(_Bool)arg1;	// IMP=0x0000000000405db1
- (_Bool)isTopMarginTypeOverridden;	// IMP=0x0000000000405da4
- (void)setTopMarginType:(int)arg1;	// IMP=0x0000000000405d9b
- (int)topMarginType;	// IMP=0x0000000000405d92
- (void)setTopMarginOverridden:(_Bool)arg1;	// IMP=0x0000000000405d82
- (_Bool)isTopMarginOverridden;	// IMP=0x0000000000405d77
- (void)setTopMargin:(short)arg1;	// IMP=0x0000000000405d6d
- (short)topMargin;	// IMP=0x0000000000405d63
- (void)setWidthTypeOverridden:(_Bool)arg1;	// IMP=0x0000000000405d50
- (_Bool)isWidthTypeOverridden;	// IMP=0x0000000000405d44
- (void)setWidthType:(int)arg1;	// IMP=0x0000000000405d3b
- (int)widthType;	// IMP=0x0000000000405d32
- (void)setWidth:(short)arg1;	// IMP=0x0000000000405d28
- (void)setDiagonalDownBorderOverridden:(_Bool)arg1;	// IMP=0x0000000000405d15
- (_Bool)isDiagonalDownBorderOverridden;	// IMP=0x0000000000405d07
- (void)setDiagonalDownBorder:(id)arg1;	// IMP=0x0000000000405cf6
- (id)diagonalDownBorder;	// IMP=0x0000000000405ce8
- (void)setDiagonalUpBorderOverridden:(_Bool)arg1;	// IMP=0x0000000000405cd5
- (_Bool)isDiagonalUpBorderOverridden;	// IMP=0x0000000000405cc7
- (void)setDiagonalUpBorder:(id)arg1;	// IMP=0x0000000000405cb6
- (id)diagonalUpBorder;	// IMP=0x0000000000405ca8
- (void)setRightBorderOverridden:(_Bool)arg1;	// IMP=0x0000000000405c95
- (_Bool)isRightBorderOverridden;	// IMP=0x0000000000405c87
- (void)setRightBorder:(id)arg1;	// IMP=0x0000000000405c76
- (id)rightBorder;	// IMP=0x0000000000405c68
- (void)setBottomBorderOverridden:(_Bool)arg1;	// IMP=0x0000000000405c55
- (_Bool)isBottomBorderOverridden;	// IMP=0x0000000000405c47
- (void)setBottomBorder:(id)arg1;	// IMP=0x0000000000405c36
- (id)bottomBorder;	// IMP=0x0000000000405c28
- (void)setLeftBorderOverridden:(_Bool)arg1;	// IMP=0x0000000000405c15
- (_Bool)isLeftBorderOverridden;	// IMP=0x0000000000405c07
- (void)setLeftBorder:(id)arg1;	// IMP=0x0000000000405bf6
- (id)leftBorder;	// IMP=0x0000000000405be8
- (void)setTopBorderOverridden:(_Bool)arg1;	// IMP=0x0000000000405bd6
- (_Bool)isTopBorderOverridden;	// IMP=0x0000000000405bc9
- (void)setTopBorder:(id)arg1;	// IMP=0x0000000000405bb8
- (id)topBorder;	// IMP=0x0000000000405baa
- (void)setShadingOverridden:(_Bool)arg1;	// IMP=0x0000000000405b9a
- (_Bool)isShadingOverridden;	// IMP=0x0000000000405b8f
- (void)setShading:(id)arg1;	// IMP=0x0000000000405b7e
- (id)shading;	// IMP=0x0000000000405b70

@end

