//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPCharSequence, NSArray;

__attribute__((visibility("hidden")))
@interface CPTextLine
{
    CPCharSequence *charSequence;	// 128 = 0x80
    CDStruct_2e2afed4 *wordArray;	// 136 = 0x88
    unsigned int wordCount;	// 144 = 0x90
    struct CPInlineContainer *inlineList;	// 152 = 0x98
    int lineNumber;	// 160 = 0xa0
    int columnNumber;	// 164 = 0xa4
    double baseline;	// 168 = 0xa8
    _Bool baseLineIsNull;	// 176 = 0xb0
    _Bool hasBeenSplit;	// 177 = 0xb1
    _Bool hasBeenProcessed;	// 178 = 0xb2
    _Bool maySplit;	// 179 = 0xb3
    _Bool hasTabs;	// 180 = 0xb4
    NSArray *columnBreaks;	// 184 = 0xb8
    NSArray *xsegments;	// 192 = 0xc0
    int levels;	// 200 = 0xc8
    float maximumLetterGap;	// 204 = 0xcc
    float maximumWordGap;	// 208 = 0xd0
    int tabsBefore;	// 212 = 0xd4
    _Bool irregular;	// 216 = 0xd8
    unsigned int leftSpacerIndex;	// 220 = 0xdc
    unsigned int rightSpacerIndex;	// 224 = 0xe0
    _Bool isListItem;	// 228 = 0xe4
    unsigned int listSpacerIndex;	// 232 = 0xe8
    _Bool lineBreakAfter;	// 236 = 0xec
    struct CPPDFStyle *uniformStyle;	// 240 = 0xf0
    unsigned short uniformStyleFlags;	// 248 = 0xf8
    double monospaceWidth;	// 256 = 0x100
    unsigned int *spacesBefore;	// 264 = 0x108
    _Bool disposed;	// 272 = 0x110
}

@property(nonatomic) _Bool lineBreakAfter; // @synthesize lineBreakAfter;
@property(nonatomic) unsigned int listSpacerIndex; // @synthesize listSpacerIndex;
@property(nonatomic) _Bool isListItem; // @synthesize isListItem;
@property(nonatomic) unsigned int rightSpacerIndex; // @synthesize rightSpacerIndex;
@property(nonatomic) unsigned int leftSpacerIndex; // @synthesize leftSpacerIndex;
- (double)medianFontSize;	// IMP=0x0000000000031e1f
- (_Bool)hasDropCap;	// IMP=0x0000000000031d6c
- (long long)topIsAbove:(id)arg1;	// IMP=0x0000000000031cb2
- (id)attributes;	// IMP=0x0000000000031ca5
- (void)setIrregular:(_Bool)arg1;	// IMP=0x0000000000031c95
- (_Bool)irregular;	// IMP=0x0000000000031c85
- (void)setMaximumWordGap:(float)arg1;	// IMP=0x0000000000031c73
- (float)maximumWordGap;	// IMP=0x0000000000031c61
- (void)setMaximumLetterGap:(float)arg1;	// IMP=0x0000000000031c4f
- (float)maximumLetterGap;	// IMP=0x0000000000031c3d
- (void)recomputeLevels;	// IMP=0x0000000000031bc0
- (void)setLevels:(int)arg1;	// IMP=0x0000000000031bb0
- (int)levels;	// IMP=0x0000000000031ba0
- (void)setSpaces:(unsigned int)arg1 beforeWordAtIndex:(unsigned int)arg2;	// IMP=0x0000000000031b02
- (unsigned int)spacesBeforeWordAtIndex:(unsigned int)arg1;	// IMP=0x0000000000031ad0
- (double)monospaceWidth;	// IMP=0x000000000003190f
- (_Bool)isMonospaced;	// IMP=0x00000000000318eb
- (_Bool)styleIsUniform:(struct CPPDFStyle **)arg1 styleFlags:(unsigned short)arg2;	// IMP=0x00000000000317c7
- (void)recomputeBaseline;	// IMP=0x0000000000031677
- (void)translateObjectYBy:(double)arg1;	// IMP=0x000000000003162b
- (_Bool)isIndivisible;	// IMP=0x0000000000031623
- (void)setBaselineToNull;	// IMP=0x0000000000031612
- (void)setBaseline:(double)arg1;	// IMP=0x0000000000031600
- (double)baseline;	// IMP=0x0000000000031527
- (_Bool)hyphenated;	// IMP=0x000000000003151f
- (struct CGPoint)anchor;	// IMP=0x00000000000314c7
- (_Bool)overlapsHorizontally:(struct CGRect)arg1;	// IMP=0x0000000000031414
- (_Bool)overlapsWith:(id)arg1;	// IMP=0x00000000000313b8
- (long long)baseLineDescending:(id)arg1;	// IMP=0x000000000003135d
- (long long)baseLineAscending:(id)arg1;	// IMP=0x0000000000031302
- (struct CGRect)bounds;	// IMP=0x0000000000031229
- (void)fitBoundsToChildren;	// IMP=0x0000000000031223
- (int)tabsBefore;	// IMP=0x0000000000031213
- (void)setTabsBefore:(int)arg1;	// IMP=0x0000000000031203
- (_Bool)hasTabs;	// IMP=0x00000000000311f3
- (void)setHasTabs:(_Bool)arg1;	// IMP=0x00000000000311e3
- (void)accept:(id)arg1;	// IMP=0x00000000000311c8
- (void)setColumnBreaks:(id)arg1;	// IMP=0x000000000003118a
- (id)columnBreaks;	// IMP=0x0000000000031179
- (_Bool)hasBeenProcessed;	// IMP=0x0000000000031169
- (void)setHasBeenProcessed:(_Bool)arg1;	// IMP=0x0000000000031159
- (_Bool)hasBeenSplit;	// IMP=0x0000000000031149
- (void)setHasBeenSplit:(_Bool)arg1;	// IMP=0x0000000000031139
- (id)properties;	// IMP=0x000000000003112c
- (_Bool)mapToWordPairsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;	// IMP=0x000000000003109b
- (_Bool)mapToWordPairs:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;	// IMP=0x000000000003101c
- (_Bool)mapToWordsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;	// IMP=0x0000000000030fa9
- (_Bool)mapToWords:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;	// IMP=0x0000000000030f37
- (_Bool)removeTextLines:(id)arg1 whereTrue:(CDUnknownFunctionPointerType)arg2 passing:(void *)arg3;	// IMP=0x0000000000030d36
- (id)newTextLineFromWordAt:(unsigned int)arg1 lengthInWords:(unsigned int)arg2;	// IMP=0x0000000000030b83
- (_Bool)changesFontAt:(id)arg1;	// IMP=0x0000000000030ae0
- (_Bool)hasJustifiedAlignment;	// IMP=0x0000000000030ac1
- (int)align;	// IMP=0x0000000000030a63
- (long long)zOrder;	// IMP=0x0000000000030a0a
- (void)anchorChunk:(id)arg1 atWordIndex:(unsigned int)arg2;	// IMP=0x00000000000308bf
- (struct CPInlineContainer *)inlineList;	// IMP=0x00000000000308ae
- (unsigned int)inlineCount;	// IMP=0x000000000003088e
- (CDStruct_2e2afed4 *)lastWord;	// IMP=0x0000000000030861
- (CDStruct_2e2afed4 *)firstWord;	// IMP=0x000000000003083f
- (CDStruct_2e2afed4 *)wordAtIndex:(unsigned int)arg1;	// IMP=0x0000000000030813
- (struct CGRect)boundsOfWordAtIndex:(unsigned int)arg1;	// IMP=0x00000000000307d3
- (unsigned int)wordCount;	// IMP=0x00000000000307c3
- (CDStruct_2e2afed4 *)wordArrayOfSize:(unsigned int)arg1;	// IMP=0x000000000003074e
- (CDStruct_2e2afed4 *)wordArray;	// IMP=0x000000000003073d
- (id)charSequence;	// IMP=0x000000000003072c
- (void)setCharSequence:(id)arg1;	// IMP=0x00000000000306ee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000030604
- (void)dealloc;	// IMP=0x000000000003059f
- (void)finalize;	// IMP=0x0000000000030561
- (void)dispose;	// IMP=0x00000000000304da
- (id)init;	// IMP=0x0000000000030430

@end

