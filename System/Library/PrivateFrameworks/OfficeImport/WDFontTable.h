//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, OITSUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface WDFontTable : NSObject
{
    OITSUNoCopyDictionary *mFontTable;	// 8 = 0x8
    NSMutableArray *mFontsInOrderOfInsertion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003f7fd8
- (id)description;	// IMP=0x00000000003f7f9a
- (id)fontAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003f7f84
- (unsigned long long)indexOfFont:(id)arg1;	// IMP=0x00000000003f7f6d
- (id)fonts;	// IMP=0x00000000003f7f57
- (id)createFontWithName:(id)arg1;	// IMP=0x00000000000ba981
- (id)fontWithName:(id)arg1 create:(_Bool)arg2;	// IMP=0x00000000000ba8d3
- (id)fontWithName:(id)arg1;	// IMP=0x00000000000bb562
- (void)clear;	// IMP=0x00000000000c1867
- (unsigned long long)count;	// IMP=0x00000000003f7f41
- (id)init;	// IMP=0x00000000000ba6bc

@end
