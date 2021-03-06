//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ECMappingContext, EDWorkbook, EDWorksheet, NSString;

__attribute__((visibility("hidden")))
@interface EDFormulaHelper : NSObject
{
    EDWorkbook *mWorkbook;	// 8 = 0x8
    EDWorksheet *mWorksheet;	// 16 = 0x10
    int mRowNumber;	// 24 = 0x18
    int mColumnNumber;	// 28 = 0x1c
    ECMappingContext *mMappingContext;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000003a7e4f
- (int)columnNumber;	// IMP=0x00000000003a7e46
- (int)rowNumber;	// IMP=0x00000000003a7e3d
- (id)workbook;	// IMP=0x00000000003a7e2f
- (int)resolveFunctionName:(id)arg1;	// IMP=0x00000000001f90b5
- (_Bool)isCurrentSheet:(id)arg1;	// IMP=0x000000000021041c
- (unsigned long long)resolveTableColumn:(id)arg1 columnName:(id)arg2;	// IMP=0x00000000003a7cca
- (unsigned long long)resolveTableToSheetId:(id)arg1;	// IMP=0x0000000000231e46
- (id)resolveTable:(id)arg1;	// IMP=0x000000000020fc52
- (unsigned long long)resolveFile:(id)arg1;	// IMP=0x00000000003a7ca7
- (unsigned long long)resolveFirstSheet:(id)arg1 lastSheet:(id)arg2;	// IMP=0x00000000003a7bf9
- (unsigned long long)resolveSheet:(id)arg1;	// IMP=0x000000000021005d
- (unsigned long long)resolveName:(id)arg1;	// IMP=0x000000000020f9d2
- (id)initWithWorkbook:(id)arg1 worksheet:(id)arg2 rowNumber:(int)arg3 columnNumber:(int)arg4;	// IMP=0x00000000001f3091
- (unsigned long long)createIndexWithType:(int)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3;	// IMP=0x0000000000210154

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

