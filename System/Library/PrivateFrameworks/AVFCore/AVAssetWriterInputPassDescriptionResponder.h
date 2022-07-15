//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetWriterInputPassDescription;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputPassDescriptionResponder : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 8 = 0x8
    int _stoppedResponding;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serializationQueue;	// 24 = 0x18
    _Bool _hasRespondedAtLeastOnce;	// 32 = 0x20
    AVAssetWriterInputPassDescription *_mostRecentPassDescription;	// 40 = 0x28
    CDUnknownBlockType _callbackBlock;	// 48 = 0x30
}

- (_Bool)_hasStoppedResponding;	// IMP=0x00000000000cc29e
- (void)stopRespondingToPassDescriptions;	// IMP=0x00000000000cc232
- (void)_releaseAndClearCallbackBlock_invokeOnSerializationQueue;	// IMP=0x00000000000cc210
- (void)respondToNewPassDescription:(id)arg1;	// IMP=0x00000000000cbe09
- (void)dealloc;	// IMP=0x00000000000cbda3
- (id)initWithCallbackQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cbc68
- (id)init;	// IMP=0x00000000000cbc52

@end
