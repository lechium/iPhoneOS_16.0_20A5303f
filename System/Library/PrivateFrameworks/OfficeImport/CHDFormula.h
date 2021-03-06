//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDReferenceCollection, EDWorkbook;

__attribute__((visibility("hidden")))
@interface CHDFormula
{
    EDReferenceCollection *mReferences;	// 16 = 0x10
    EDWorkbook *mWorkbook;	// 24 = 0x18
}

+ (id)formulaWithReferences:(id)arg1;	// IMP=0x0060000000231263
+ (id)formulaWithReference:(id)arg1;	// IMP=0x00600000002394ec
- (void).cxx_destruct;	// IMP=0x0000000000393598
- (id)constantValuesFromConstantStringFormula;	// IMP=0x00000000003933fb
- (_Bool)isConstantStringFormula;	// IMP=0x0000000000393380
- (void)prepareTokens;	// IMP=0x0000000000392e52
- (unsigned long long)countOfCellsBeingReferenced;	// IMP=0x000000000018d970
- (void)setReferences:(id)arg1;	// IMP=0x0000000000181b4d
- (id)references;	// IMP=0x000000000018155c
- (void)setWorkbook:(id)arg1;	// IMP=0x000000000017db58
- (id)initWithReferences:(id)arg1;	// IMP=0x00000000002312c8
- (id)initWithReference:(id)arg1;	// IMP=0x0000000000239551
- (id)initWithWorkbook:(id)arg1;	// IMP=0x0000000000392dd7
- (id)referencesFromFormula;	// IMP=0x000000000018164d

@end

