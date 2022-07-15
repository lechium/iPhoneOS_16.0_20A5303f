//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLCommandBuffer, CaptureMTLDevice, NSString;
@protocol MTLDevice, MTLParallelRenderCommandEncoder, MTLParallelRenderCommandEncoderSPI;

__attribute__((visibility("hidden")))
@interface CaptureMTLParallelRenderCommandEncoder : NSObject
{
    id <MTLParallelRenderCommandEncoderSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    CaptureMTLCommandBuffer *_captureCommandBuffer;	// 24 = 0x18
    struct GTTraceContext *_traceContext;	// 32 = 0x20
    struct GTTraceStream *_traceStream;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000079727
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;	// IMP=0x0000000000079635
- (void)setStencilStoreAction:(unsigned long long)arg1;	// IMP=0x0000000000079543
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;	// IMP=0x0000000000079451
- (void)setDepthStoreAction:(unsigned long long)arg1;	// IMP=0x000000000007935f
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000079254
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000079149
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(CDUnion_c6e49ed4 *)arg1 capacity:(unsigned long long)arg2;	// IMP=0x0000000000079133
- (void)pushDebugGroup:(id)arg1;	// IMP=0x0000000000078fad
- (void)popDebugGroup;	// IMP=0x0000000000078ecb
- (void)insertDebugSignpost:(id)arg1;	// IMP=0x0000000000078d45
- (void)endEncoding;	// IMP=0x0000000000078c63
- (void)dealloc;	// IMP=0x0000000000078b67
@property(copy) NSString *label;
@property(readonly) id <MTLDevice> device;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00000000000789a7
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000078996
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000788d5
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x0000000000078875
- (id)originalObject;	// IMP=0x0000000000078867
- (id)renderCommandEncoder;	// IMP=0x000000000007868e
- (id)initWithBaseObject:(id)arg1 captureCommandBuffer:(id)arg2;	// IMP=0x0000000000078525
@property(readonly) CaptureMTLCommandBuffer *commandBuffer;
@property(readonly) id <MTLParallelRenderCommandEncoder> baseObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
