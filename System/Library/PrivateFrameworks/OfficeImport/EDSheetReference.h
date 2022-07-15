//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface EDSheetReference
{
    unsigned long long mSheetIndex;	// 24 = 0x18
}

+ (id)referenceWithSheetIndex:(unsigned long long)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5;	// IMP=0x0060000000181a9b
- (id)description;	// IMP=0x00000000003ad26a
- (void)unionWithReference:(id)arg1;	// IMP=0x00000000003ad1bc
- (_Bool)fullyAdjacentToReference:(id)arg1;	// IMP=0x000000000023d019
- (unsigned long long)sheetIndex;	// IMP=0x00000000001858d5
- (_Bool)isSheedIndexValid;	// IMP=0x00000000003ad1a7
- (unsigned long long)hash;	// IMP=0x00000000003ad164
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003ad0e8
- (_Bool)isEqualToTableReference:(id)arg1;	// IMP=0x00000000003ad067
- (id)initWithSheetIndex:(unsigned long long)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5;	// IMP=0x0000000000181afa
- (id)init;	// IMP=0x00000000003ad024

@end
