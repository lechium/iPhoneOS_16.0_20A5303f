//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLResourceStatePassDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLResourceStatePassDescriptorInternal : MTLResourceStatePassDescriptor
{
    struct MTLResourceStatePassDescriptorPrivate _private;	// 8 = 0x8
}

+ (id)resourceStatePassDescriptor;	// IMP=0x00600000000d19d7
- (id)sampleBufferAttachments;	// IMP=0x00000000000d1ca5
- (const struct MTLResourceStatePassDescriptorPrivate *)_descriptorPrivate;	// IMP=0x00000000000d1c95
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d1bf5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d1ae4
- (unsigned long long)hash;	// IMP=0x00000000000d1a86
- (void)dealloc;	// IMP=0x00000000000d1a44
- (id)init;	// IMP=0x00000000000d19f1

@end

