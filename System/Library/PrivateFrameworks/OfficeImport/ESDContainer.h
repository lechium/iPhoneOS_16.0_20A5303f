//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ESDContainer
{
    NSMutableArray *mChildren;	// 32 = 0x20
}

+ (void)readChildrenOfObject:(struct EshObject *)arg1 reader:(struct OcReader *)arg2 toArray:(id)arg3;	// IMP=0x00600000000db8fe
+ (void)pbReadChildrenOfObject:(struct EshObject *)arg1 toArray:(id)arg2 state:(id)arg3;	// IMP=0x006000000000d6c4
- (void).cxx_destruct;	// IMP=0x000000000032f986
- (void)writeToWriter:(struct OcWriter *)arg1;	// IMP=0x000000000032f8af
- (id)containerChildAt:(unsigned long long)arg1;	// IMP=0x000000000032f837
- (id)containerChildOfType:(unsigned short)arg1 instance:(short)arg2 mustExist:(_Bool)arg3;	// IMP=0x000000000032f7bf
- (id)firstContainerChildOfType:(unsigned short)arg1 mustExist:(_Bool)arg2;	// IMP=0x000000000032f747
- (id)containerFromObject:(id)arg1 mustExist:(_Bool)arg2;	// IMP=0x000000000032f6bf
- (id)childOfType:(unsigned short)arg1 instance:(short)arg2;	// IMP=0x000000000001de66
- (unsigned long long)indexOfFirstChildOfType:(unsigned short)arg1 afterIndex:(unsigned long long)arg2;	// IMP=0x0000000000022e20
- (id)firstChildOfType:(unsigned short)arg1 afterIndex:(unsigned long long)arg2;	// IMP=0x000000000032f66c
- (id)firstChildOfType:(unsigned short)arg1 afterChild:(id)arg2;	// IMP=0x000000000032f564
- (id)firstChildOfType:(unsigned short)arg1;	// IMP=0x0000000000017eed
- (void)removeChild:(id)arg1;	// IMP=0x000000000032f4b6
- (id)insertEshChild:(struct EshObject *)arg1 at:(unsigned long long)arg2;	// IMP=0x000000000032f3d6
- (void)insertChild:(id)arg1 at:(unsigned long long)arg2;	// IMP=0x000000000032f32f
- (struct EshObject *)addAtomChildOfType:(unsigned short)arg1;	// IMP=0x000000000032f2d7
- (id)addContainerChildOfType:(unsigned short)arg1;	// IMP=0x000000000032f27b
- (id)addChildOfType:(unsigned short)arg1;	// IMP=0x000000000032f1fc
- (id)addEshChild:(struct EshObject *)arg1;	// IMP=0x000000000032f16f
- (void)addChild:(id)arg1;	// IMP=0x00000000000a22ff
- (id)childAt:(unsigned long long)arg1;	// IMP=0x00000000000181dc
- (unsigned long long)childCount;	// IMP=0x00000000000181bf
- (void *)eshContainer;	// IMP=0x00000000000a2394
- (id)initFromReader:(struct OcReader *)arg1 type:(unsigned short)arg2 version:(unsigned short)arg3;	// IMP=0x0000000000159bc4
- (id)initWithEshObject:(struct EshObject *)arg1;	// IMP=0x000000000000ffd8
- (id)shapeContainer;	// IMP=0x0000000000141fec
- (void *)eshGroup;	// IMP=0x000000000010966c
- (id)initForExcelBinaryWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;	// IMP=0x000000000039cb9b
- (id)initPBWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;	// IMP=0x0000000000435fe0
- (void)addCStringWithChar2String:(const unsigned short *)arg1 instance:(int)arg2;	// IMP=0x00000000004366f5
- (void)addCStringWithNSString:(id)arg1 instance:(int)arg2;	// IMP=0x000000000043664f
- (id)addPptEshClientChildOfType:(unsigned short)arg1;	// IMP=0x0000000000436430
- (struct EshObject *)addPptAtomChildOfType:(unsigned short)arg1;	// IMP=0x00000000004363f7
- (id)addPptContainerChildOfType:(unsigned short)arg1;	// IMP=0x000000000043637b

@end

