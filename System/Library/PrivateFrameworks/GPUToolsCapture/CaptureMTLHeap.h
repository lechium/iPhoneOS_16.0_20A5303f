//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, NSString;
@protocol MTLDevice, MTLHeap, MTLHeapSPI;

__attribute__((visibility("hidden")))
@interface CaptureMTLHeap : NSObject
{
    id <MTLHeapSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003f6e8
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;	// IMP=0x000000000003f5dd
- (id)newTextureWithDescriptor:(id)arg1;	// IMP=0x000000000003f3bc
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3;	// IMP=0x000000000003f1df
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000003f015
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2;	// IMP=0x000000000003ee4b
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 offset:(unsigned long long)arg2 resourceIndex:(unsigned long long)arg3;	// IMP=0x000000000003ec6e
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000003eaa4
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1;	// IMP=0x000000000003e8df
- (id)newAccelerationStructureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000003e6bc
- (id)newAccelerationStructureWithDescriptor:(id)arg1;	// IMP=0x000000000003e4a8
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;	// IMP=0x000000000003e39d
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x000000000003e387
- (unsigned long long)unfilteredResourceOptions;	// IMP=0x000000000003e371
@property(readonly) long long type;
@property(readonly) unsigned long long storageMode;
@property(readonly) unsigned long long size;
@property(readonly) unsigned long long resourceOptions;
- (unsigned long long)protectionOptions;	// IMP=0x000000000003e303
@property(copy) NSString *label;
@property(readonly) unsigned long long hazardTrackingMode;
- (unsigned long long)gpuAddress;	// IMP=0x000000000003e13b
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long cpuCacheMode;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000003e101
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000003e0f0
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000003e02f
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x000000000003dfcf
- (id)originalObject;	// IMP=0x000000000003dfc1
- (void)dealloc;	// IMP=0x000000000003deb0
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000003dc39
@property(readonly) unsigned long long currentAllocatedSize;
@property(readonly) unsigned long long usedSize;
@property(readonly) id <MTLHeap> baseObject;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;	// IMP=0x000000000003d969

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

