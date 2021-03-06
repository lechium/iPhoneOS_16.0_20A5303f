//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WDDocument, WDTablePropertiesValues;

__attribute__((visibility("hidden")))
@interface WDTableProperties : NSObject
{
    unsigned int mOriginal:1;	// 8 = 0x8
    unsigned int mTracked:1;	// 8 = 0x8
    unsigned int mResolved:1;	// 8 = 0x8
    WDTablePropertiesValues *mOriginalProperties;	// 16 = 0x10
    WDTablePropertiesValues *mTrackedProperties;	// 24 = 0x18
    WDDocument *mDocument;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000004095d4
@property(readonly) __weak WDDocument *document; // @synthesize document=mDocument;
- (id)description;	// IMP=0x0000000000409596
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000409498
- (_Bool)isTableFloating;	// IMP=0x00000000000e8d7c
- (_Bool)isFormattingChangeDateOverridden;	// IMP=0x0000000000409413
- (void)setFormattingChangeDate:(id)arg1;	// IMP=0x000000000040937b
- (id)formattingChangeDate;	// IMP=0x0000000000409306
- (_Bool)isEditDateOverridden;	// IMP=0x0000000000409281
- (void)setEditDate:(id)arg1;	// IMP=0x00000000004091e9
- (id)editDate;	// IMP=0x0000000000409174
- (_Bool)isDeletionDateOverridden;	// IMP=0x00000000004090ef
- (void)setDeletionDate:(id)arg1;	// IMP=0x0000000000409057
- (id)deletionDate;	// IMP=0x0000000000408fe2
- (_Bool)isIndexToAuthorIDOfFormattingChangeOverridden;	// IMP=0x0000000000408f5d
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;	// IMP=0x0000000000408ef7
- (unsigned short)indexToAuthorIDOfFormattingChange;	// IMP=0x0000000000408e8d
- (_Bool)isIndexToAuthorIDOfEditOverridden;	// IMP=0x0000000000408e08
- (void)setIndexToAuthorIDOfEdit:(unsigned short)arg1;	// IMP=0x0000000000408da2
- (unsigned short)indexToAuthorIDOfEdit;	// IMP=0x0000000000408d38
- (_Bool)isIndexToAuthorIDOfDeletionOverridden;	// IMP=0x0000000000408cb3
- (void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1;	// IMP=0x0000000000408c4d
- (unsigned short)indexToAuthorIDOfDeletion;	// IMP=0x0000000000408be3
- (_Bool)isBiDirectionalOverridden;	// IMP=0x0000000000408b5e
- (void)setBiDirectional:(_Bool)arg1;	// IMP=0x0000000000408af8
- (_Bool)biDirectional;	// IMP=0x0000000000408a8e
- (_Bool)isFormattingChangedOverridden;	// IMP=0x0000000000408a09
- (void)setFormattingChanged:(int)arg1;	// IMP=0x00000000004089a6
- (int)formattingChanged;	// IMP=0x000000000040893c
- (_Bool)isEditedOverridden;	// IMP=0x00000000004088b7
- (void)setEdited:(int)arg1;	// IMP=0x0000000000408854
- (int)edited;	// IMP=0x00000000004087ea
- (_Bool)isDeletedOverridden;	// IMP=0x0000000000408765
- (void)setDeleted:(int)arg1;	// IMP=0x0000000000408702
- (int)deleted;	// IMP=0x0000000000408698
- (_Bool)isBottomDistanceFromTextOverridden;	// IMP=0x0000000000408613
- (void)setBottomDistanceFromText:(long long)arg1;	// IMP=0x000000000023e23c
- (long long)bottomDistanceFromText;	// IMP=0x00000000004085a9
- (_Bool)isRightDistanceFromTextOverridden;	// IMP=0x0000000000408524
- (void)setRightDistanceFromText:(long long)arg1;	// IMP=0x0000000000200c00
- (long long)rightDistanceFromText;	// IMP=0x00000000004084ba
- (_Bool)isTopDistanceFromTextOverridden;	// IMP=0x0000000000408435
- (void)setTopDistanceFromText:(long long)arg1;	// IMP=0x00000000004083d2
- (long long)topDistanceFromText;	// IMP=0x0000000000408368
- (_Bool)isLeftDistanceFromTextOverridden;	// IMP=0x00000000004082e3
- (void)setLeftDistanceFromText:(long long)arg1;	// IMP=0x0000000000200b9d
- (long long)leftDistanceFromText;	// IMP=0x00000000000f9dc2
- (_Bool)isHorizontalPositionOverridden;	// IMP=0x00000000000e8f4c
- (void)setHorizontalPosition:(long long)arg1;	// IMP=0x000000000022198a
- (long long)horizontalPosition;	// IMP=0x00000000000f9d58
- (_Bool)isVerticalPositionOverridden;	// IMP=0x00000000000e8fd1
- (void)setVerticalPosition:(long long)arg1;	// IMP=0x0000000000200b3a
- (long long)verticalPosition;	// IMP=0x0000000000216620
- (_Bool)isHorizontalAnchorOverridden;	// IMP=0x00000000000e8e42
- (void)setHorizontalAnchor:(int)arg1;	// IMP=0x0000000000200ad7
- (int)horizontalAnchor;	// IMP=0x0000000000200c63
- (_Bool)isVerticalAnchorOverridden;	// IMP=0x00000000000e8ec7
- (void)setVerticalAnchor:(int)arg1;	// IMP=0x0000000000200a74
- (int)verticalAnchor;	// IMP=0x000000000021668a
- (_Bool)isCellSpacingTypeOverridden;	// IMP=0x000000000040825e
- (void)setCellSpacingType:(int)arg1;	// IMP=0x0000000000216f5e
- (int)cellSpacingType;	// IMP=0x00000000004081f1
- (_Bool)isCellSpacingOverridden;	// IMP=0x000000000040816c
- (void)setCellSpacing:(short)arg1;	// IMP=0x000000000020090a
- (short)cellSpacing;	// IMP=0x0000000000408102
- (_Bool)isIndentTypeOverridden;	// IMP=0x000000000040807d
- (void)setIndentType:(int)arg1;	// IMP=0x0000000000100786
- (int)indentType;	// IMP=0x0000000000408010
- (_Bool)isIndentOverridden;	// IMP=0x0000000000407f8b
- (void)setIndent:(short)arg1;	// IMP=0x0000000000100720
- (short)indent;	// IMP=0x0000000000407f21
- (_Bool)isWidthTypeOverridden;	// IMP=0x0000000000407e9c
- (void)setWidthType:(int)arg1;	// IMP=0x00000000001006bd
- (int)widthType;	// IMP=0x0000000000407e2f
- (_Bool)isWidthOverridden;	// IMP=0x0000000000407daa
- (void)setWidth:(long long)arg1;	// IMP=0x000000000010065a
- (long long)width;	// IMP=0x0000000000407d40
- (_Bool)isAlignmentOverridden;	// IMP=0x0000000000407cbb
- (void)setAlignment:(int)arg1;	// IMP=0x00000000000e5eac
- (int)alignment;	// IMP=0x0000000000407c51
- (_Bool)isJustificationOverridden;	// IMP=0x0000000000407bcc
- (void)setJustification:(int)arg1;	// IMP=0x000000000016814a
- (int)justification;	// IMP=0x0000000000407b62
- (void)clearInsideVerticalBorder;	// IMP=0x0000000000407ae6
- (_Bool)isInsideVerticalBorderOverridden;	// IMP=0x00000000000f8e72
- (id)mutableInsideVerticalBorder;	// IMP=0x00000000000e5daf
- (id)insideVerticalBorder;	// IMP=0x00000000000f8ef7
- (void)clearInsideHorizontalBorder;	// IMP=0x0000000000407a6a
- (_Bool)isInsideHorizontalBorderOverridden;	// IMP=0x00000000000f8d78
- (id)mutableInsideHorizontalBorder;	// IMP=0x00000000000e5cb2
- (id)insideHorizontalBorder;	// IMP=0x00000000000f8dfd
- (void)clearRightBorder;	// IMP=0x00000000004079ee
- (_Bool)isRightBorderOverridden;	// IMP=0x00000000000f8bb9
- (id)mutableRightBorder;	// IMP=0x00000000000e5bb5
- (id)rightBorder;	// IMP=0x00000000000f8c3e
- (void)clearBottomBorder;	// IMP=0x0000000000407972
- (_Bool)isBottomBorderOverridden;	// IMP=0x00000000000f8abf
- (id)mutableBottomBorder;	// IMP=0x00000000000e5ab8
- (id)bottomBorder;	// IMP=0x00000000000f8b44
- (void)clearLeftBorder;	// IMP=0x00000000004078f6
- (_Bool)isLeftBorderOverridden;	// IMP=0x00000000000f89c5
- (id)mutableLeftBorder;	// IMP=0x00000000000e59bb
- (id)leftBorder;	// IMP=0x00000000000f8a4a
- (void)clearTopBorder;	// IMP=0x000000000040787a
- (_Bool)isTopBorderOverridden;	// IMP=0x00000000000f84ec
- (id)mutableTopBorder;	// IMP=0x00000000000e5775
- (id)topBorder;	// IMP=0x00000000000f8633
- (void)clearShading;	// IMP=0x00000000000e5f0f
- (_Bool)isShadingOverridden;	// IMP=0x00000000004077f5
- (id)mutableShading;	// IMP=0x00000000002167ee
- (id)shading;	// IMP=0x0000000000407780
- (_Bool)isLookOverridden;	// IMP=0x00000000004076fb
- (void)setLook:(unsigned short)arg1;	// IMP=0x0000000000407695
- (unsigned short)look;	// IMP=0x000000000040762b
- (_Bool)isBaseStyleOverridden;	// IMP=0x00000000000e8c36
- (void)setBaseStyle:(id)arg1;	// IMP=0x0000000000164b35
- (id)baseStyle;	// IMP=0x00000000001b2c70
- (void)setResolveMode:(int)arg1;	// IMP=0x00000000000e4ff5
- (int)resolveMode;	// IMP=0x0000000000407609
- (id)initWithDocument:(id)arg1;	// IMP=0x00000000000e4a96
- (id)init;	// IMP=0x00000000004075fb
- (void)moveOrignalToTracked;	// IMP=0x0000000000409605

@end

