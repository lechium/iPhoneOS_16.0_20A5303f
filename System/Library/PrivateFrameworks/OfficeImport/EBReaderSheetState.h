//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EBReaderState, EDSheet;

__attribute__((visibility("hidden")))
@interface EBReaderSheetState : NSObject
{
    EBReaderState *mReaderState;	// 8 = 0x8
    EDSheet *mEDSheet;	// 16 = 0x10
    struct map<int, unsigned long, std::less<int>, std::allocator<std::pair<const int, unsigned long>>> mSharedFormulas;	// 24 = 0x18
    unsigned long long mChartIndex;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x000000000011f19e
- (void).cxx_destruct;	// IMP=0x000000000012d55f
- (void)reportWorksheetWarning:(id)arg1;	// IMP=0x0000000000190687
- (unsigned long long)nextChartIndex;	// IMP=0x000000000018dcc1
- (void)setSharedFormulaIndex:(unsigned long long)arg1 forRowCol:(int)arg2;	// IMP=0x000000000014af87
- (unsigned long long)sharedFormulaIndexForRowCol:(int)arg1;	// IMP=0x000000000014b2a6
- (void)setEDSheet:(id)arg1;	// IMP=0x000000000011f9ef
- (id)edSheet;	// IMP=0x000000000012298b
- (id)resources;	// IMP=0x0000000000124599
- (id)workbook;	// IMP=0x000000000017a3ed
- (void *)xlReader;	// IMP=0x000000000011fc2b
- (id)readerState;	// IMP=0x000000000011f9e1
- (id)initWithReaderState:(id)arg1;	// IMP=0x000000000011f1b6

@end
