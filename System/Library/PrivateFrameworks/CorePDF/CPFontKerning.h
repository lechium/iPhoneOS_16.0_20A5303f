//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CPFontKerning : NSObject
{
    struct __CFData *kernTable;	// 8 = 0x8
    const char *dataPtr;	// 16 = 0x10
    unsigned int offset;	// 24 = 0x18
    unsigned int kernTableLength;	// 28 = 0x1c
    struct __CFDictionary *kernDictionary;	// 32 = 0x20
    _Bool override;	// 40 = 0x28
    _Bool valid;	// 41 = 0x29
}

- (struct __CFDictionary *)createKernTable;	// IMP=0x000000000004f328
- (void)doTable;	// IMP=0x000000000004f25e
- (void)doOTSubtable;	// IMP=0x000000000004f1c1
- (void)doTTSubtable;	// IMP=0x000000000004f137
- (void)doSubtableFormat3;	// IMP=0x000000000004f131
- (void)doSubtableFormat2;	// IMP=0x000000000004f12b
- (void)doSubtableFormat1;	// IMP=0x000000000004f125
- (void)doSubtableFormat0;	// IMP=0x000000000004f0d2
- (void)doKerningPair;	// IMP=0x000000000004f00d
- (unsigned int)readUnsignedLong;	// IMP=0x000000000004efa2
- (short)readShort;	// IMP=0x000000000004ef8e
- (unsigned short)readUnsignedShort;	// IMP=0x000000000004ef48
- (unsigned char)readByte;	// IMP=0x000000000004ef22
- (void)dealloc;	// IMP=0x000000000004eee4
- (void)finalize;	// IMP=0x000000000004eea6
- (void)dispose;	// IMP=0x000000000004ee80
- (id)initWithCGFont:(struct CGFont *)arg1;	// IMP=0x000000000004ee3b
- (id)initWithKernData:(struct __CFData *)arg1;	// IMP=0x000000000004edd9

@end
