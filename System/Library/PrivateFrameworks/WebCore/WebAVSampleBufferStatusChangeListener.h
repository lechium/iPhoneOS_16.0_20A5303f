//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebAVSampleBufferStatusChangeListener : NSObject
{
    struct WeakPtr<WebCore::LocalSampleBufferDisplayLayer, WTF::EmptyCounter> _parent;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000bda680
- (void).cxx_destruct;	// IMP=0x0000000000bda650
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000bda510
- (void)stop;	// IMP=0x0000000000bda490
- (void)begin;	// IMP=0x0000000000bda400
- (void)invalidate;	// IMP=0x0000000000bda3b0
- (void)dealloc;	// IMP=0x0000000000bda370
- (id)initWithParent:(void *)arg1;	// IMP=0x0000000000bda2a0

@end

