//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLResourceStatePassSampleBufferAttachmentDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLResourceStatePassSampleBufferAttachmentDescriptorInternal : MTLResourceStatePassSampleBufferAttachmentDescriptor
{
    struct MTLResourceStatePassSampleBufferAttachmentDescriptorPrivate _private;	// 8 = 0x8
}

- (unsigned long long)hash;	// IMP=0x00000000000d173a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d16bf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d1674
- (unsigned long long)endOfEncoderSampleIndex;	// IMP=0x00000000000d1662
- (void)setEndOfEncoderSampleIndex:(unsigned long long)arg1;	// IMP=0x00000000000d1650
- (unsigned long long)startOfEncoderSampleIndex;	// IMP=0x00000000000d163e
- (void)setStartOfEncoderSampleIndex:(unsigned long long)arg1;	// IMP=0x00000000000d162c
- (id)sampleBuffer;	// IMP=0x00000000000d161b
- (void)setSampleBuffer:(id)arg1;	// IMP=0x00000000000d15dd
- (const struct MTLResourceStatePassSampleBufferAttachmentDescriptorPrivate *)_descriptorPrivate;	// IMP=0x00000000000d15cd
- (void)dealloc;	// IMP=0x00000000000d158b
- (id)init;	// IMP=0x00000000000d154b

@end
