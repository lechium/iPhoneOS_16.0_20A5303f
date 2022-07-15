//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXMLayoutHeader, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AXMLayoutTable
{
    AXMLayoutHeader *_header;	// 8 = 0x8
    NSMutableArray *_rows;	// 16 = 0x10
    NSMutableArray *_columns;	// 24 = 0x18
}

+ (id)region:(id)arg1 row:(id)arg2;	// IMP=0x006000000003f2d7
- (void).cxx_destruct;	// IMP=0x000000000003f50c
- (id)columns;	// IMP=0x000000000003f4f7
- (id)rows;	// IMP=0x000000000003f4e2
- (id)firstColumn;	// IMP=0x000000000003f4c5
- (void)addColumn:(id)arg1;	// IMP=0x000000000003f4a8
- (id)header;	// IMP=0x000000000003f493
- (id)firstLine;	// IMP=0x000000000003f476
- (void)addRow:(id)arg1;	// IMP=0x000000000003f459
- (struct CGRect)normalizedFrame;	// IMP=0x000000000003f40c
- (struct CGRect)frame;	// IMP=0x000000000003f3bf

@end
