//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol SNSystemAudioAnalyzerXPCProtocol><NSXPCProxyCreating;

__attribute__((visibility("hidden")))
@interface SNSystemAudioAnalyzerXPCPublisher : NSObject
{
    id <SNSystemAudioAnalyzerXPCProtocol><NSXPCProxyCreating> _subscriber;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000b43c
- (void)setAudioConfiguration:(id)arg1;	// IMP=0x000000000000b340
- (void)removeAllRequests;	// IMP=0x000000000000b25d
- (void)removeRequest:(id)arg1;	// IMP=0x000000000000b156
- (_Bool)addRequest:(id)arg1 withObserver:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000adf8
- (id)init;	// IMP=0x000000000000ad2d

@end

