//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, WDDocument, WDTableCell;

__attribute__((visibility("hidden")))
@interface WDText : NSObject
{
    NSMutableArray *mBlocks;	// 8 = 0x8
    int mTextType;	// 16 = 0x10
    WDDocument *mDocument;	// 24 = 0x18
    WDTableCell *mTableCell;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000040baf7
@property(readonly) __weak WDDocument *document; // @synthesize document=mDocument;
- (id)description;	// IMP=0x000000000040bab9
- (id)content;	// IMP=0x000000000040b979
- (_Bool)isEmpty;	// IMP=0x000000000040b8a6
- (id)newRunIterator;	// IMP=0x000000000040b848
- (id)runIterator;	// IMP=0x000000000040b7cb
- (id)newBlockIterator;	// IMP=0x000000000040b79c
- (id)blockIterator;	// IMP=0x000000000040b765
- (int)tableNestingLevel;	// IMP=0x00000000000d4cd9
- (void)removeLastBlock;	// IMP=0x00000000000ff743
- (void)removeLastCharacter:(unsigned short)arg1;	// IMP=0x00000000000e85c3
- (id)addTableAtIndex:(int)arg1;	// IMP=0x000000000040b6f6
- (id)addTable;	// IMP=0x00000000000e490c
- (id)paragraphs;	// IMP=0x000000000040b546
- (id)firstParagraph;	// IMP=0x000000000040b365
- (id)addParagraphAtIndex:(int)arg1;	// IMP=0x000000000040b2f6
- (id)addParagraph;	// IMP=0x00000000000d6270
@property(readonly) __weak WDTableCell *tableCell; // @synthesize tableCell=mTableCell;
- (int)textType;	// IMP=0x00000000000d554e
- (void)addBlock:(id)arg1;	// IMP=0x000000000040b2df
- (unsigned long long)indexOfBlock:(id)arg1;	// IMP=0x000000000040b2c8
- (id)lastBlock;	// IMP=0x00000000001adf5f
- (id)blockAt:(unsigned long long)arg1;	// IMP=0x00000000000ecfd0
- (unsigned long long)blockCount;	// IMP=0x00000000000eb7c3
- (id)blocks;	// IMP=0x000000000040b2ba
- (id)initWithDocument:(id)arg1 textType:(int)arg2 tableCell:(id)arg3;	// IMP=0x00000000000c0ea2
- (id)initWithDocument:(id)arg1 textType:(int)arg2;	// IMP=0x00000000000c0e8c

@end

