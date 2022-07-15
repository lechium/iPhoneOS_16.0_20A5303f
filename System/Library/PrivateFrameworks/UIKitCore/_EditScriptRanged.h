//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _EditScriptRangedAtom;

__attribute__((visibility("hidden")))
@interface _EditScriptRanged
{
    long long _options;	// 48 = 0x30
    _EditScriptRangedAtom *_currentScriptAtom;	// 56 = 0x38
}

+ (id)editScriptForSmallestSingleEditFromString:(id)arg1 toString:(id)arg2;	// IMP=0x0060000000afb899
+ (id)editScriptFromString:(id)arg1 toString:(id)arg2 chunkSize:(long long)arg3 orderAtomsAscending:(_Bool)arg4 operationPrecedence:(long long)arg5 options:(long long)arg6;	// IMP=0x0060000000afae31
+ (id)editScriptFromString:(id)arg1 toString:(id)arg2;	// IMP=0x0060000000afae10
- (void).cxx_destruct;	// IMP=0x0000000000afb94c
- (void)computeSmallestSingleEdit;	// IMP=0x0000000000afb6ee
- (void)removeAnyOverlapBetweenIndexOfFirstDifference:(long long *)arg1 andReverseIndexOfLastDifference:(long long *)arg2 shouldShortenFirstDifference:(_Bool)arg3;	// IMP=0x0000000000afb66f
- (void)finalizeCurrentScriptAtom;	// IMP=0x0000000000afb3e0
- (void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4;	// IMP=0x0000000000afb225
- (void)initializeCurrentScriptAtom;	// IMP=0x0000000000afb204
- (id)applyToString:(id)arg1;	// IMP=0x0000000000afafe8
@property(readonly, nonatomic) NSString *stringB;
@property(readonly, nonatomic) NSString *stringA;
- (id)initWithOperationPrecedence:(long long)arg1 dataClass:(Class)arg2 chunkSize:(long long)arg3 stringA:(id)arg4 stringB:(id)arg5 orderAtomsAscending:(_Bool)arg6 options:(long long)arg7;	// IMP=0x0000000000aface2

@end
