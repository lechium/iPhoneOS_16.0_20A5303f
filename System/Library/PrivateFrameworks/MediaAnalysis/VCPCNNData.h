//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, VCPCNNMetalContext;

__attribute__((visibility("hidden")))
@interface VCPCNNData : NSObject
{
    _Bool _isInputOutput;	// 8 = 0x8
    NSMutableArray *_size;	// 16 = 0x10
    float *_data;	// 24 = 0x18
    VCPCNNMetalContext *_context;	// 32 = 0x20
}

+ (id)cnnDataWithPlane:(int)arg1 height:(int)arg2 width:(int)arg3 context:(id)arg4;	// IMP=0x00600000001ff7a1
+ (id)cnnDataWithGPUContext:(id)arg1;	// IMP=0x00600000001ff733
+ (id)cnnData;	// IMP=0x00600000001ff71a
+ (Class)cnnDataClass;	// IMP=0x00600000001ff6d0
- (void).cxx_destruct;	// IMP=0x0000000000200755
@property __weak VCPCNNMetalContext *context; // @synthesize context=_context;
@property _Bool isInputOutput; // @synthesize isInputOutput=_isInputOutput;
@property float *data; // @synthesize data=_data;
@property(retain) NSMutableArray *size; // @synthesize size=_size;
- (int)softmax;	// IMP=0x00000000002005d4
- (int)normalization;	// IMP=0x0000000000200495
- (int)readFromDisk:(struct __sFILE *)arg1 quantFactor:(short)arg2;	// IMP=0x0000000000200347
- (int)copyImage:(struct __CVBuffer *)arg1 withChunk:(int)arg2;	// IMP=0x00000000001ffe6e
- (int)reallocGPUTemporalBuffers;	// IMP=0x00000000001ffe63
- (int)convertGPUData2CPU;	// IMP=0x00000000001ffe5b
- (int)convertCPUData2GPU;	// IMP=0x00000000001ffe50
- (int)bufferAllocCPU;	// IMP=0x00000000001ffd36
- (int)randInit;	// IMP=0x00000000001ffba6
- (int)allocBuffers:(_Bool)arg1;	// IMP=0x00000000001ffb91
- (void)dealloc;	// IMP=0x00000000001ffb52
- (id)initWithParameters:(int)arg1 height:(int)arg2 width:(int)arg3 context:(id)arg4;	// IMP=0x00000000001ff993
- (id)initWithGPUContext:(id)arg1;	// IMP=0x00000000001ff8ce
- (id)init;	// IMP=0x00000000001ff832

@end

