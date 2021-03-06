//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLAttributeDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLAttributeDescriptorInternal : MTLAttributeDescriptor
{
    unsigned long long _vertexFormat;	// 8 = 0x8
    unsigned long long _offset;	// 16 = 0x10
    unsigned long long _bufferIndex;	// 24 = 0x18
}

- (void)setOffset:(unsigned long long)arg1;	// IMP=0x0000000000009d00
- (unsigned long long)offset;	// IMP=0x0000000000009cef
- (void)setBufferIndex:(unsigned long long)arg1;	// IMP=0x0000000000009ca5
- (unsigned long long)bufferIndex;	// IMP=0x0000000000009c94
- (void)setFormat:(unsigned long long)arg1;	// IMP=0x0000000000009c83
- (unsigned long long)format;	// IMP=0x0000000000009c72
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009c01

@end

