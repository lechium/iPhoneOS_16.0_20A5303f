//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADTextBodyAutoFit, OADTextWarp;

__attribute__((visibility("hidden")))
@interface OADTextBodyProperties
{
    OADTextBodyAutoFit *mAutoFit;	// 24 = 0x18
    OADTextWarp *mTextWarp;	// 32 = 0x20
    float mTopInset;	// 40 = 0x28
    float mLeftInset;	// 44 = 0x2c
    float mBottomInset;	// 48 = 0x30
    float mRightInset;	// 52 = 0x34
    float mRotation;	// 56 = 0x38
    float mColumnSpacing;	// 60 = 0x3c
    unsigned short mColumnCount;	// 64 = 0x40
    unsigned short mTextBodyId;	// 66 = 0x42
    unsigned char mTextAnchorType;	// 68 = 0x44
    unsigned char mFlowType;	// 69 = 0x45
    unsigned char mWrapType;	// 70 = 0x46
    unsigned char mVerticalOverflowType;	// 71 = 0x47
    unsigned char mHorizontalOverflowType;	// 72 = 0x48
    unsigned int mRepectFirstLastParagraphSpacing:1;	// 73 = 0x49
    unsigned int mIsUpright:1;	// 73 = 0x49
    unsigned int mIsAnchorCenter:1;	// 73 = 0x49
    unsigned int mIsLeftToRightColumns:1;	// 73 = 0x49
    unsigned int mHasVerticalOverflowType:1;	// 73 = 0x49
    unsigned int mHasHorizontalOverflowType:1;	// 73 = 0x49
    unsigned int mHasTextBodyId:1;	// 73 = 0x49
    unsigned int mHasFlowType:1;	// 73 = 0x49
    unsigned int mHasWrapType:1;	// 74 = 0x4a
    unsigned int mHasTextAnchorType:1;	// 74 = 0x4a
    unsigned int mHasIsAnchorCenter:1;	// 74 = 0x4a
    unsigned int mHasIsUpright:1;	// 74 = 0x4a
    unsigned int mHasRotation:1;	// 74 = 0x4a
    unsigned int mHasColumnCount:1;	// 74 = 0x4a
    unsigned int mHasColumnSpacing:1;	// 74 = 0x4a
    unsigned int mHasIsLeftToRightColumns:1;	// 74 = 0x4a
    unsigned int mHasRepectFirstLastParagraphSpacing:1;	// 75 = 0x4b
    unsigned int mHasTopInset:1;	// 75 = 0x4b
    unsigned int mHasLeftInset:1;	// 75 = 0x4b
    unsigned int mHasRightInset:1;	// 75 = 0x4b
    unsigned int mHasBottomInset:1;	// 75 = 0x4b
}

+ (id)defaultEscherWordArtProperties;	// IMP=0x00600000001549d6
+ (id)defaultProperties;	// IMP=0x006000000001f958
- (void).cxx_destruct;	// IMP=0x000000000032e177
- (id)description;	// IMP=0x000000000032e139
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000032d816
- (unsigned long long)hash;	// IMP=0x000000000032d5fc
- (void)removeUnnecessaryOverrides;	// IMP=0x000000000002efa8
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;	// IMP=0x000000000032c93b
- (void)setRotation:(float)arg1;	// IMP=0x000000000001fe14
- (float)rotation;	// IMP=0x0000000000030222
- (_Bool)hasRotation;	// IMP=0x00000000000301fc
- (void)setIsUpright:(_Bool)arg1;	// IMP=0x000000000001fdef
- (_Bool)isUpright;	// IMP=0x00000000000301b9
- (_Bool)hasIsUpright;	// IMP=0x0000000000030193
- (void)setTextAnchorType:(unsigned char)arg1;	// IMP=0x000000000001fdd4
- (unsigned char)textAnchorType;	// IMP=0x0000000000030154
- (_Bool)hasTextAnchorType;	// IMP=0x000000000003012e
- (void)setIsAnchorCenter:(_Bool)arg1;	// IMP=0x000000000001fdae
- (_Bool)isAnchorCenter;	// IMP=0x00000000000300ea
- (_Bool)hasIsAnchorCenter;	// IMP=0x00000000000300c4
- (_Bool)isWarped;	// IMP=0x000000000032c65c
- (void)setTextWarp:(id)arg1;	// IMP=0x000000000001fd9a
- (id)textWarp;	// IMP=0x0000000000155128
- (_Bool)hasTextWarp;	// IMP=0x000000000003009d
- (void)setTextBodyId:(int)arg1;	// IMP=0x000000000032c640
- (int)textBodyId;	// IMP=0x000000000032c62f
- (_Bool)hasTextBodyId;	// IMP=0x0000000000030088
- (void)setHorizontalOverflowType:(unsigned char)arg1;	// IMP=0x000000000001fd7f
- (unsigned char)horizontalOverflowType;	// IMP=0x000000000032c5f0
- (_Bool)hasHorizontalOverflowType;	// IMP=0x000000000032c5ca
- (void)setVerticalOverflowType:(unsigned char)arg1;	// IMP=0x000000000001fd64
- (unsigned char)verticalOverflowType;	// IMP=0x0000000000030049
- (_Bool)hasVerticalOverflowType;	// IMP=0x0000000000030023
- (void)setWrapType:(unsigned char)arg1;	// IMP=0x000000000001fd49
- (unsigned char)wrapType;	// IMP=0x000000000002ffe4
- (_Bool)hasWrapType;	// IMP=0x000000000002ffbe
- (void)setFlowType:(unsigned char)arg1;	// IMP=0x000000000001fd2e
- (unsigned char)flowType;	// IMP=0x000000000002ff7f
- (_Bool)hasFlowType;	// IMP=0x000000000002ff59
- (void)setAutoFit:(id)arg1;	// IMP=0x000000000001fd1a
- (id)autoFit;	// IMP=0x000000000002fe8a
- (_Bool)hasAutoFit;	// IMP=0x000000000002fe63
- (void)setIsLeftToRightColumns:(_Bool)arg1;	// IMP=0x000000000001fcb9
- (_Bool)isLeftToRightColumns;	// IMP=0x000000000002fe1f
- (_Bool)hasIsLeftToRightColumns;	// IMP=0x000000000002fdf9
- (void)setColumnSpacing:(float)arg1;	// IMP=0x000000000001fc9c
- (float)columnSpacing;	// IMP=0x000000000002fdb0
- (_Bool)hasColumnSpacing;	// IMP=0x000000000002fd8a
- (void)setColumnCount:(int)arg1;	// IMP=0x000000000001fc80
- (int)columnCount;	// IMP=0x000000000002fd4b
- (_Bool)hasColumnCount;	// IMP=0x000000000002fd25
- (void)setRightInset:(float)arg1;	// IMP=0x000000000001fc63
- (float)rightInset;	// IMP=0x000000000002fc6d
- (void)setBottomInset:(float)arg1;	// IMP=0x000000000001fc46
- (float)bottomInset;	// IMP=0x000000000002fcdc
- (void)setLeftInset:(float)arg1;	// IMP=0x000000000001fc29
- (float)leftInset;	// IMP=0x000000000002fbfe
- (void)setTopInset:(float)arg1;	// IMP=0x000000000001fc0c
- (float)topInset;	// IMP=0x000000000002fb8f
- (_Bool)hasBottomInset;	// IMP=0x000000000002fcb6
- (_Bool)hasRightInset;	// IMP=0x000000000002fc47
- (_Bool)hasLeftInset;	// IMP=0x000000000002fbd8
- (_Bool)hasTopInset;	// IMP=0x000000000002fb69
- (void)setRespectLastFirstLineSpacing:(_Bool)arg1;	// IMP=0x000000000001fbe9
- (_Bool)respectLastFirstLineSpacing;	// IMP=0x000000000032c589
- (_Bool)hasRespectLastFirstLineSpacing;	// IMP=0x000000000002fb43
- (id)initWithDefaults;	// IMP=0x000000000001f988
- (id)init;	// IMP=0x000000000001f929

@end
