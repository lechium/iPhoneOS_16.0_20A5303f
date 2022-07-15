//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLVertexBufferLayoutDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLVertexBufferLayoutDescriptorInternal : MTLVertexBufferLayoutDescriptor
{
    unsigned long long _stride;	// 8 = 0x8
    unsigned long long _stepFunction;	// 16 = 0x10
    unsigned long long _instanceStepRate;	// 24 = 0x18
}

- (void)setStepRate:(unsigned long long)arg1;	// IMP=0x00000000000f4655
- (unsigned long long)stepRate;	// IMP=0x00000000000f4644
- (void)setStepFunction:(unsigned long long)arg1;	// IMP=0x00000000000f4633
- (unsigned long long)stepFunction;	// IMP=0x00000000000f4622
- (void)setStride:(unsigned long long)arg1;	// IMP=0x00000000000f4611
- (unsigned long long)stride;	// IMP=0x00000000000f4600
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f458f
- (id)init;	// IMP=0x00000000000f4531

@end
