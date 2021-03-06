//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebAVSampleBufferErrorListener : NSObject
{
    struct WeakPtr<WebCore::SourceBufferPrivateAVFObjC, WTF::EmptyCounter> _parent;	// 8 = 0x8
    struct Vector<WTF::RetainPtr<AVSampleBufferDisplayLayer>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _layers;	// 16 = 0x10
    struct Vector<WTF::RetainPtr<AVSampleBufferAudioRenderer>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _renderers;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00000000001cdf20
- (void).cxx_destruct;	// IMP=0x00000000001cde10
- (void)audioRendererWasAutomaticallyFlushed:(id)arg1;	// IMP=0x00000000001cdbd0
- (void)layerFailedToDecode:(id)arg1;	// IMP=0x00000000001cda30
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000001cd690
- (void)stopObservingRenderer:(id)arg1;	// IMP=0x00000000001cd590
- (void)beginObservingRenderer:(id)arg1;	// IMP=0x00000000001cd3e0
- (void)stopObservingLayer:(id)arg1;	// IMP=0x00000000001cd2d0
- (void)beginObservingLayer:(id)arg1;	// IMP=0x00000000001cd100
- (void)invalidate;	// IMP=0x00000000001ccea0
- (void)dealloc;	// IMP=0x00000000001cce60
- (id)initWithParent:(void *)arg1;	// IMP=0x00000000001ccdf0

@end

