//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLComputePassSampleBufferAttachmentDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLComputePassSampleBufferAttachmentDescriptorInternal : MTLComputePassSampleBufferAttachmentDescriptor
{
    struct MTLComputePassSampleBufferAttachmentDescriptorPrivate _private;	// 8 = 0x8
}

- (unsigned long long)hash;	// IMP=0x0000000000079253
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000791d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007918d
- (unsigned long long)endOfEncoderSampleIndex;	// IMP=0x000000000007917b
- (void)setEndOfEncoderSampleIndex:(unsigned long long)arg1;	// IMP=0x0000000000079169
- (unsigned long long)startOfEncoderSampleIndex;	// IMP=0x0000000000079157
- (void)setStartOfEncoderSampleIndex:(unsigned long long)arg1;	// IMP=0x0000000000079145
- (id)sampleBuffer;	// IMP=0x0000000000079134
- (void)setSampleBuffer:(id)arg1;	// IMP=0x00000000000790f6
- (const struct MTLComputePassSampleBufferAttachmentDescriptorPrivate *)_descriptorPrivate;	// IMP=0x00000000000790e6
- (void)dealloc;	// IMP=0x00000000000790a4
- (id)init;	// IMP=0x0000000000079064

@end

