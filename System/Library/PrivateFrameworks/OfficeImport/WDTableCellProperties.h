//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WDDocument;

__attribute__((visibility("hidden")))
@interface WDTableCellProperties : NSObject
{
    short mWidth;	// 8 = 0x8
    short mPosition;	// 10 = 0xa
    unsigned int mOriginal:1;	// 12 = 0xc
    unsigned int mTracked:1;	// 12 = 0xc
    unsigned int mResolved:1;	// 12 = 0xc
    CDStruct_dbdf0818 mOriginalProperties;	// 16 = 0x10
    CDStruct_dbdf0818 mTrackedProperties;	// 184 = 0xb8
    WDDocument *mDocument;	// 352 = 0x160
}

- (id).cxx_construct;	// IMP=0x00000000000e7071
- (void).cxx_destruct;	// IMP=0x00000000004074c5
@property(readonly) __weak WDDocument *document; // @synthesize document=mDocument;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004072fe
- (_Bool)isFormattingChangeDateOverridden;	// IMP=0x000000000040727b
- (void)setFormattingChangeDate:(id)arg1;	// IMP=0x0000000000407219
- (id)formattingChangeDate;	// IMP=0x00000000004071ab
- (_Bool)isEditDateOverridden;	// IMP=0x0000000000407129
- (void)setEditDate:(id)arg1;	// IMP=0x00000000004070c7
- (id)editDate;	// IMP=0x0000000000407059
- (_Bool)isDeletionDateOverridden;	// IMP=0x0000000000406fd9
- (void)setDeletionDate:(id)arg1;	// IMP=0x0000000000406f77
- (id)deletionDate;	// IMP=0x0000000000406f09
- (_Bool)isIndexToAuthorIDOfFormattingChangeOverridden;	// IMP=0x0000000000406ec2
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;	// IMP=0x0000000000406e92
- (unsigned short)indexToAuthorIDOfFormattingChange;	// IMP=0x0000000000406e58
- (_Bool)isIndexToAuthorIDOfEditOverridden;	// IMP=0x0000000000406df1
- (void)setIndexToAuthorIDOfEdit:(unsigned short)arg1;	// IMP=0x0000000000406dc1
- (unsigned short)indexToAuthorIDOfEdit;	// IMP=0x0000000000406d87
- (_Bool)isIndexToAuthorIDOfDeletionOverridden;	// IMP=0x0000000000406d20
- (void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1;	// IMP=0x0000000000406cf0
- (unsigned short)indexToAuthorIDOfDeletion;	// IMP=0x0000000000406cb6
- (_Bool)isFormattingChangedOverridden;	// IMP=0x0000000000406c4f
- (void)setFormattingChanged:(int)arg1;	// IMP=0x0000000000406c20
- (int)formattingChanged;	// IMP=0x0000000000406bea
- (_Bool)isEditedOverridden;	// IMP=0x0000000000406b83
- (void)setEdited:(int)arg1;	// IMP=0x0000000000406b54
- (int)edited;	// IMP=0x0000000000406b1e
- (_Bool)isDeletedOverridden;	// IMP=0x0000000000406ab7
- (void)setDeleted:(int)arg1;	// IMP=0x0000000000406a88
- (int)deleted;	// IMP=0x0000000000406a52
- (_Bool)isNoWrapOverridden;	// IMP=0x00000000004069eb
- (void)setNoWrap:(_Bool)arg1;	// IMP=0x000000000040699d
- (_Bool)noWrap;	// IMP=0x0000000000406951
- (_Bool)isFirstInSetOfVerticallyMergedCellsOverridden;	// IMP=0x00000000004068ea
- (void)setFirstInSetOfVerticallyMergedCells:(_Bool)arg1;	// IMP=0x00000000000e8018
- (_Bool)firstInSetOfVerticallyMergedCells;	// IMP=0x000000000040689e
- (_Bool)isVerticallyMergedCellOverridden;	// IMP=0x0000000000406837
- (void)setVerticallyMergedCell:(_Bool)arg1;	// IMP=0x00000000000e7fc9
- (_Bool)verticallyMergedCell;	// IMP=0x00000000004067eb
- (_Bool)isTextDirectionOverridden;	// IMP=0x0000000000406784
- (void)setTextDirection:(int)arg1;	// IMP=0x00000000000e7f99
- (int)textDirection;	// IMP=0x0000000000406749
- (_Bool)isVerticalAlignmentOverridden;	// IMP=0x00000000000fbde4
- (void)setVerticalAlignment:(int)arg1;	// IMP=0x00000000000e7f69
- (int)verticalAlignment;	// IMP=0x00000000000fbe4b
- (_Bool)isRightMarginTypeOverridden;	// IMP=0x00000000004066e2
- (void)setRightMarginType:(int)arg1;	// IMP=0x000000000021c347
- (int)rightMarginType;	// IMP=0x00000000004066a8
- (_Bool)isRightMarginOverridden;	// IMP=0x00000000000fbee9
- (void)setRightMargin:(short)arg1;	// IMP=0x000000000021c317
- (short)rightMargin;	// IMP=0x000000000021c3af
- (_Bool)isLeftMarginTypeOverridden;	// IMP=0x000000000040665c
- (void)setLeftMarginType:(int)arg1;	// IMP=0x000000000021c2e7
- (int)leftMarginType;	// IMP=0x0000000000406620
- (_Bool)isLeftMarginOverridden;	// IMP=0x00000000000fbe81
- (void)setLeftMargin:(short)arg1;	// IMP=0x000000000021c2b7
- (short)leftMargin;	// IMP=0x000000000021c377
- (_Bool)isBottomMarginTypeOverridden;	// IMP=0x00000000004065b8
- (void)setBottomMarginType:(int)arg1;	// IMP=0x000000000021c287
- (int)bottomMarginType;	// IMP=0x000000000040657e
- (_Bool)isBottomMarginOverridden;	// IMP=0x0000000000406517
- (void)setBottomMargin:(short)arg1;	// IMP=0x000000000021c257
- (short)bottomMargin;	// IMP=0x00000000004064df
- (_Bool)isTopMarginTypeOverridden;	// IMP=0x0000000000406478
- (void)setTopMarginType:(int)arg1;	// IMP=0x000000000021c227
- (int)topMarginType;	// IMP=0x000000000040643e
- (_Bool)isTopMarginOverridden;	// IMP=0x00000000004063d7
- (void)setTopMargin:(short)arg1;	// IMP=0x000000000021c1f7
- (short)topMargin;	// IMP=0x000000000040639f
- (_Bool)isWidthTypeOverridden;	// IMP=0x00000000000f928a
- (void)setWidthType:(int)arg1;	// IMP=0x00000000000e82b3
- (int)widthType;	// IMP=0x00000000000f92f2
- (_Bool)isInsideVerticalBorderOverridden;	// IMP=0x0000000000406337
- (id)mutableInsideVerticalBorder;	// IMP=0x00000000001e289b
- (id)insideVerticalBorder;	// IMP=0x00000000004062f3
- (_Bool)isInsideHorizontalBorderOverridden;	// IMP=0x00000000004062ac
- (id)mutableInsideHorizontalBorder;	// IMP=0x00000000001e2804
- (id)insideHorizontalBorder;	// IMP=0x0000000000406268
- (_Bool)isDiagonalDownBorderOverridden;	// IMP=0x0000000000406207
- (id)mutableDiagonalDownBorder;	// IMP=0x000000000023f249
- (id)diagonalDownBorder;	// IMP=0x00000000004061c2
- (_Bool)isDiagonalUpBorderOverridden;	// IMP=0x0000000000406161
- (id)mutableDiagonalUpBorder;	// IMP=0x000000000023f1b3
- (id)diagonalUpBorder;	// IMP=0x000000000040611c
- (_Bool)isRightBorderOverridden;	// IMP=0x00000000000fbd3d
- (id)mutableRightBorder;	// IMP=0x00000000000e7ed3
- (id)rightBorder;	// IMP=0x00000000000fbd9e
- (_Bool)isBottomBorderOverridden;	// IMP=0x00000000000fbc97
- (id)mutableBottomBorder;	// IMP=0x00000000000e7e3d
- (id)bottomBorder;	// IMP=0x00000000000fbcf8
- (_Bool)isLeftBorderOverridden;	// IMP=0x00000000000fbbf1
- (id)mutableLeftBorder;	// IMP=0x00000000000e7da7
- (id)leftBorder;	// IMP=0x00000000000fbc52
- (_Bool)isTopBorderOverridden;	// IMP=0x00000000000fbb4a
- (id)mutableTopBorder;	// IMP=0x00000000000e7d10
- (id)topBorder;	// IMP=0x00000000000fbbab
- (void)clearShading;	// IMP=0x0000000000406093
- (_Bool)isShadingOverridden;	// IMP=0x00000000000fbf50
- (id)mutableShading;	// IMP=0x00000000001cf810
- (id)shading;	// IMP=0x00000000001cf961
- (void)originalToTracked;	// IMP=0x0000000000406076
- (void)addProperties:(id)arg1;	// IMP=0x000000000022fb01
- (void)setResolveMode:(int)arg1;	// IMP=0x00000000000e7575
- (int)resolveMode;	// IMP=0x0000000000406053
- (void)setPosition:(short)arg1;	// IMP=0x00000000000e7d05
- (short)position;	// IMP=0x0000000000406049
- (void)setWidth:(short)arg1;	// IMP=0x00000000000e8067
- (short)width;	// IMP=0x00000000000f932b
- (id)initWithDocument:(id)arg1;	// IMP=0x00000000000e70d2
- (id)init;	// IMP=0x0000000000164a66
- (id)description;	// IMP=0x00000000004075bd
- (void)addPropertiesValues:(CDStruct_dbdf0818 *)arg1 to:(CDStruct_dbdf0818 *)arg2;	// IMP=0x000000000022fb76

@end
