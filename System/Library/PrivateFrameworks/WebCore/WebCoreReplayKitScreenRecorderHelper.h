//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebCoreReplayKitScreenRecorderHelper : NSObject
{
    struct WeakPtr<WebCore::ReplayKitCaptureSource, WTF::EmptyCounter> _callback;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000001c26b0
- (void).cxx_destruct;	// IMP=0x00000000001c2680
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000001c2320
- (void)disconnect;	// IMP=0x00000000001c22b0
- (id)initWithCallback:(void *)arg1;	// IMP=0x00000000001c2200

@end
