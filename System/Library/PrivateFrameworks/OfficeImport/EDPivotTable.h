//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDCollection, EDReference, EDResources, NSString;

__attribute__((visibility("hidden")))
@interface EDPivotTable : NSObject
{
    EDResources *mResources;	// 8 = 0x8
    _Bool mShowLastColumn;	// 16 = 0x10
    _Bool mShowRowHeaders;	// 17 = 0x11
    _Bool mShowColumnHeaders;	// 18 = 0x12
    _Bool mShowRowStripes;	// 19 = 0x13
    _Bool mShowColumnStripes;	// 20 = 0x14
    _Bool mApplyNumberFormats;	// 21 = 0x15
    _Bool mApplyBorderFormats;	// 22 = 0x16
    _Bool mApplyFontFormats;	// 23 = 0x17
    _Bool mApplyPatternFormats;	// 24 = 0x18
    _Bool mApplyAlignmentFormats;	// 25 = 0x19
    _Bool mApplyWidthHeightFormats;	// 26 = 0x1a
    _Bool mUseAutoFormatting;	// 27 = 0x1b
    _Bool mColGrandTotals;	// 28 = 0x1c
    _Bool mRowGrandTotals;	// 29 = 0x1d
    _Bool mCustomListSort;	// 30 = 0x1e
    _Bool mCompactData;	// 31 = 0x1f
    _Bool mCompact;	// 32 = 0x20
    _Bool mDataCaption;	// 33 = 0x21
    _Bool mDataOnRows;	// 34 = 0x22
    _Bool mDisableFieldList;	// 35 = 0x23
    _Bool mMergeItem;	// 36 = 0x24
    _Bool mMultipleFieldFilters;	// 37 = 0x25
    _Bool mOutline;	// 38 = 0x26
    _Bool mOutlineData;	// 39 = 0x27
    _Bool mPageOverThenDown;	// 40 = 0x28
    _Bool mShowCalcMbrs;	// 41 = 0x29
    _Bool mShowDataDropDown;	// 42 = 0x2a
    _Bool mShowDropZones;	// 43 = 0x2b
    _Bool mShowEmptyCol;	// 44 = 0x2c
    _Bool mShowEmptyRow;	// 45 = 0x2d
    _Bool mShowHeaders;	// 46 = 0x2e
    _Bool mShowMemberPropertyTips;	// 47 = 0x2f
    _Bool mShowMissing;	// 48 = 0x30
    _Bool mShowMultipleLabel;	// 49 = 0x31
    _Bool mSubtotalHiddenItems;	// 50 = 0x32
    NSString *mName;	// 56 = 0x38
    NSString *mStyleName;	// 64 = 0x40
    NSString *mColumnHeaderCaption;	// 72 = 0x48
    NSString *mRowHeaderCaption;	// 80 = 0x50
    NSString *mPageStyleName;	// 88 = 0x58
    EDReference *mPivotTableRange;	// 96 = 0x60
    unsigned long long mStyleIndex;	// 104 = 0x68
    long long mFirstHeaderRow;	// 112 = 0x70
    long long mFirstDataRow;	// 120 = 0x78
    long long mFirstDataColumn;	// 128 = 0x80
    unsigned long long mRowPageCount;	// 136 = 0x88
    unsigned long long mColumnPageCount;	// 144 = 0x90
    unsigned long long mPageWrap;	// 152 = 0x98
    unsigned long long mAutoFormatId;	// 160 = 0xa0
    unsigned long long mDataPosition;	// 168 = 0xa8
    EDCollection *mRowFields;	// 176 = 0xb0
    EDCollection *mColumnFields;	// 184 = 0xb8
    EDCollection *mRowItems;	// 192 = 0xc0
    EDCollection *mColumnItems;	// 200 = 0xc8
    EDCollection *mPivotFields;	// 208 = 0xd0
    EDCollection *mDataFields;	// 216 = 0xd8
    EDCollection *mConditionalFields;	// 224 = 0xe0
    EDCollection *mPivotAreas;	// 232 = 0xe8
    EDCollection *mPageFields;	// 240 = 0xf0
}

+ (id)pivotTableWithResources:(id)arg1;	// IMP=0x0060000000237459
- (void).cxx_destruct;	// IMP=0x00000000003aa65e
- (id)description;	// IMP=0x00000000003aa620
- (id)pageFields;	// IMP=0x00000000002380f3
- (id)pivotAreas;	// IMP=0x0000000000238360
- (id)conditionalFormats;	// IMP=0x000000000023834f
- (id)dataFields;	// IMP=0x0000000000238104
- (id)pivotFields;	// IMP=0x0000000000237b74
- (id)columnItems;	// IMP=0x00000000002380e2
- (id)rowItems;	// IMP=0x000000000023800d
- (id)columnFields;	// IMP=0x00000000002380d1
- (id)rowFields;	// IMP=0x0000000000237ffc
- (void)setSubtotalHiddenItems:(_Bool)arg1;	// IMP=0x00000000003aa617
- (_Bool)subtotalHiddenItems;	// IMP=0x00000000003aa60e
- (void)setShowMultipleLabel:(_Bool)arg1;	// IMP=0x00000000003aa605
- (_Bool)showMultipleLabel;	// IMP=0x00000000003aa5fc
- (void)setShowMissing:(_Bool)arg1;	// IMP=0x00000000003aa5f3
- (_Bool)showMissing;	// IMP=0x00000000003aa5ea
- (void)setShowMemberPropertyTips:(_Bool)arg1;	// IMP=0x00000000003aa5e1
- (_Bool)showMemberPropertyTips;	// IMP=0x00000000003aa5d8
- (void)setShowHeaders:(_Bool)arg1;	// IMP=0x00000000003aa5cf
- (_Bool)showHeaders;	// IMP=0x00000000003aa5c6
- (void)setShowEmptyRow:(_Bool)arg1;	// IMP=0x00000000003aa5bd
- (_Bool)showEmptyRow;	// IMP=0x00000000003aa5b4
- (void)setShowEmptyCol:(_Bool)arg1;	// IMP=0x00000000003aa5ab
- (_Bool)showEmptyCol;	// IMP=0x00000000003aa5a2
- (void)setShowDropZones:(_Bool)arg1;	// IMP=0x00000000003aa599
- (_Bool)showDropZones;	// IMP=0x00000000003aa590
- (void)setShowDataDropDown:(_Bool)arg1;	// IMP=0x00000000003aa587
- (_Bool)showDataDropDown;	// IMP=0x00000000003aa57e
- (void)setShowCalcMbrs:(_Bool)arg1;	// IMP=0x000000000023841f
- (_Bool)showCalcMbrs;	// IMP=0x00000000003aa575
- (void)setPageOverThenDown:(_Bool)arg1;	// IMP=0x00000000003aa56c
- (_Bool)pageOverThenDown;	// IMP=0x00000000003aa563
- (void)setOutlineData:(_Bool)arg1;	// IMP=0x0000000000238416
- (_Bool)outlineData;	// IMP=0x00000000003aa55a
- (void)setOutline:(_Bool)arg1;	// IMP=0x000000000023840d
- (_Bool)outline;	// IMP=0x00000000003aa551
- (void)setMultipleFieldFilters:(_Bool)arg1;	// IMP=0x0000000000238404
- (_Bool)multipleFieldFilters;	// IMP=0x00000000003aa548
- (void)setMergeItem:(_Bool)arg1;	// IMP=0x00000000003aa53f
- (_Bool)mergeItem;	// IMP=0x00000000003aa536
- (void)setDisableFieldList:(_Bool)arg1;	// IMP=0x00000000003aa52d
- (_Bool)disableFieldList;	// IMP=0x00000000003aa524
- (void)setDataOnRows:(_Bool)arg1;	// IMP=0x00000000003aa51b
- (_Bool)dataOnRows;	// IMP=0x00000000003aa512
- (void)setDataCaption:(_Bool)arg1;	// IMP=0x00000000002383fb
- (_Bool)dataCaption;	// IMP=0x00000000003aa509
- (void)setCompact:(_Bool)arg1;	// IMP=0x00000000003aa500
- (_Bool)compact;	// IMP=0x0000000000239003
- (void)setCompactData:(_Bool)arg1;	// IMP=0x00000000003aa4f7
- (_Bool)compactData;	// IMP=0x00000000003aa4ee
- (void)setCustomListSort:(_Bool)arg1;	// IMP=0x00000000003aa4e5
- (_Bool)customListSort;	// IMP=0x00000000003aa4dc
- (void)setRowGrandTotals:(_Bool)arg1;	// IMP=0x00000000003aa4d3
- (_Bool)rowGrandTotals;	// IMP=0x00000000003aa4ca
- (void)setUseAutoFormatting:(_Bool)arg1;	// IMP=0x00000000002383f2
- (_Bool)useAutoFormatting;	// IMP=0x00000000003aa4c1
- (void)setColGrandTotals:(_Bool)arg1;	// IMP=0x00000000003aa4b8
- (_Bool)colGrandTotals;	// IMP=0x00000000003aa4af
- (void)setApplyWidthHeightFormats:(_Bool)arg1;	// IMP=0x00000000002383e9
- (_Bool)applyWidthHeightFormats;	// IMP=0x00000000003aa4a6
- (void)setApplyAlignmentFormats:(_Bool)arg1;	// IMP=0x00000000002383e0
- (_Bool)applyAlignmentFormats;	// IMP=0x00000000003aa49d
- (void)setApplyPatternFormats:(_Bool)arg1;	// IMP=0x00000000002383d7
- (_Bool)applyPatternFormats;	// IMP=0x00000000003aa494
- (void)setApplyFontFormats:(_Bool)arg1;	// IMP=0x00000000002383ce
- (_Bool)applyFontFormats;	// IMP=0x00000000003aa48b
- (void)setApplyBorderFormats:(_Bool)arg1;	// IMP=0x00000000002383c5
- (_Bool)applyBorderFormats;	// IMP=0x00000000003aa482
- (void)setApplyNumberFormats:(_Bool)arg1;	// IMP=0x00000000002383bc
- (_Bool)applyNumberFormats;	// IMP=0x00000000003aa479
- (void)setShowColumnHeaders:(_Bool)arg1;	// IMP=0x0000000000237b6b
- (_Bool)showColumnHeaders;	// IMP=0x00000000002387e9
- (void)setShowRowHeaders:(_Bool)arg1;	// IMP=0x0000000000237b62
- (_Bool)showRowHeaders;	// IMP=0x00000000002387f2
- (void)setShowColumnStripes:(_Bool)arg1;	// IMP=0x0000000000237b59
- (_Bool)showColumnStripes;	// IMP=0x00000000002387fb
- (void)setShowRowStripes:(_Bool)arg1;	// IMP=0x0000000000237b50
- (_Bool)showRowStripes;	// IMP=0x0000000000238fe8
- (void)setShowLastColumn:(_Bool)arg1;	// IMP=0x0000000000237b47
- (_Bool)showLastColumn;	// IMP=0x00000000003aa470
- (void)setDataPosition:(unsigned long long)arg1;	// IMP=0x00000000003aa463
- (unsigned long long)dataPosition;	// IMP=0x00000000003aa456
- (void)setAutoFormatId:(unsigned long long)arg1;	// IMP=0x00000000003aa449
- (unsigned long long)autoFormatId;	// IMP=0x00000000003aa43c
- (void)setPageWrap:(unsigned long long)arg1;	// IMP=0x00000000003aa42f
- (unsigned long long)pageWrap;	// IMP=0x00000000003aa422
- (void)setFirstDataColumn:(long long)arg1;	// IMP=0x0000000000237937
- (long long)firstDataColumn;	// IMP=0x00000000002387dc
- (void)setFirstDataRow:(long long)arg1;	// IMP=0x000000000023792d
- (long long)firstDataRow;	// IMP=0x00000000002387d2
- (void)setFirstHeaderRow:(long long)arg1;	// IMP=0x0000000000237923
- (long long)firstHeaderRow;	// IMP=0x00000000002387c8
- (void)setColumnPageCount:(unsigned long long)arg1;	// IMP=0x00000000003aa415
- (unsigned long long)columnPageCount;	// IMP=0x00000000003aa408
- (void)setRowPageCount:(unsigned long long)arg1;	// IMP=0x00000000003aa3fb
- (unsigned long long)rowPageCount;	// IMP=0x00000000003aa3ee
- (void)setPivotTableRange:(id)arg1;	// IMP=0x00000000002378d8
- (id)pivotTableRange;	// IMP=0x00000000002387ba
- (void)setName:(id)arg1;	// IMP=0x0000000000238371
- (id)name;	// IMP=0x00000000003aa3e0
- (void)setStyleName:(id)arg1;	// IMP=0x0000000000237afc
- (id)styleName;	// IMP=0x00000000003aa3d2
- (void)setPageStyleName:(id)arg1;	// IMP=0x00000000003aa387
- (id)pageStyleName;	// IMP=0x00000000003aa379
- (void)setRowHeaderCaption:(id)arg1;	// IMP=0x00000000003aa32e
- (id)rowHeaderCaption;	// IMP=0x00000000003aa320
- (void)setColumnHeaderCaption:(id)arg1;	// IMP=0x00000000003aa2d5
- (id)columnHeaderCaption;	// IMP=0x00000000003aa2c7
- (void)setStyle:(id)arg1;	// IMP=0x00000000003aa224
- (id)style;	// IMP=0x000000000023844d
- (id)initWithResources:(id)arg1;	// IMP=0x00000000002374be
- (void)setStyleIndex:(unsigned long long)arg1;	// IMP=0x00000000003aa743
- (unsigned long long)styleIndex;	// IMP=0x00000000003aa739

@end
