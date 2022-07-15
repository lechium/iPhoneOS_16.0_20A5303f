//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ECFormulaProcessor : NSObject
{
    void *mXlFormulaProcessorLasso;	// 8 = 0x8
    void *mXlFormulaProcessorXl;	// 16 = 0x10
    void *mXlNameTable;	// 24 = 0x18
    void *mLassoSheetNames;	// 32 = 0x20
    void *mXlSheetNames;	// 40 = 0x28
    void *mXlLinkTable;	// 48 = 0x30
}

+ (id)formulaStringForEDFormula:(id)arg1 edWorksheet:(id)arg2 xlFormulaProcessor:(void *)arg3;	// IMP=0x00600000003a2d86
- (void *)xlFormulaProcessorXl;	// IMP=0x00000000003a2d7c
- (void *)xlFormulaProcessorLasso;	// IMP=0x00000000003a2d72
- (void)setupWithWorkbook:(id)arg1;	// IMP=0x00000000003a2bb6
- (void)dealloc;	// IMP=0x00000000003a2ae3
- (id)init;	// IMP=0x00000000003a2aa0
- (void *)sheetNamesFromWorkbook:(id)arg1;	// IMP=0x00000000003a2ff8
- (void *)setupWithWorkbook:(id)arg1 xlNameTable:(void *)arg2 sheetNames:(void *)arg3 xlLinkTable:(void *)arg4 lassoSyntax:(_Bool)arg5;	// IMP=0x00000000003a2f8f

@end
