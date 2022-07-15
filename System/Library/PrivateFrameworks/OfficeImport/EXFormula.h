//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXFormula : NSObject
{
}

+ (id)edTokensForFormulaString:(id)arg1 sheet:(id)arg2 workbook:(id)arg3;	// IMP=0x00800000003ba1db
+ (void)applyArrayedFormulasToSheet:(id)arg1 state:(id)arg2;	// IMP=0x00800000001c4fa2
+ (void)readFrom:(struct _xmlNode *)arg1 rowNumber:(int)arg2 columnNumber:(int)arg3 edCell:(struct EDCellHeader *)arg4 edRowBlocks:(id)arg5 state:(id)arg6;	// IMP=0x00800000001f27eb
+ (id)edFormulaFromXmlFormulaElement:(struct _xmlNode *)arg1 formulaClass:(Class)arg2 state:(id)arg3;	// IMP=0x008000000020f94d
+ (id)edFormulaFromXmlFormulaElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00800000003ba154
+ (void)applyArrayedFormula:(id)arg1 edReference:(id)arg2 edWorksheet:(id)arg3 state:(id)arg4;	// IMP=0x0080000000244fa2
+ (Class)formulaClassFromXmlFormulaElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00800000001f28bd
+ (id)edTokensForFormulaString:(id)arg1 formulaClass:(Class)arg2 rowNumber:(int)arg3 columnNumber:(int)arg4 sheet:(id)arg5 workbook:(id)arg6;	// IMP=0x00800000001f2f23
+ (id)readFrom:(struct _xmlNode *)arg1 formulaClass:(Class)arg2 rowNumber:(int)arg3 columnNumber:(int)arg4 edCell:(struct EDCellHeader *)arg5 edRowBlocks:(id)arg6 state:(id)arg7;	// IMP=0x00800000001f2a0c

@end
