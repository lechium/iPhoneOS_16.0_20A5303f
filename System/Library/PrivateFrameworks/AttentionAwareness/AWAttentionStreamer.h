//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWSampleLogger, StreamingOperation;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWAttentionStreamer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    StreamingOperation *_faceDetectStreamer;	// 16 = 0x10
    _Bool _unitTestMode;	// 24 = 0x18
    AWSampleLogger *_sampleLogger;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000246f6
- (void)logStreamComplete:(unsigned long long)arg1 identifier:(id)arg2 duration:(unsigned long long)arg3 ERActivated:(_Bool)arg4;	// IMP=0x00000000000246c8
- (void)setNotificationHandler:(CDUnknownBlockType)arg1 withMask:(unsigned long long)arg2;	// IMP=0x00000000000246a7
- (_Bool)isStreamerRunningWithMask:(unsigned long long)arg1;	// IMP=0x000000000002454c
- (id)cancelEventStreamWithMask:(unsigned long long)arg1;	// IMP=0x00000000000243ae
- (id)streamEventsWithMask:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2 options:(union)arg3;	// IMP=0x00000000000241eb
- (id)initForUnitTest:(_Bool)arg1 withMask:(unsigned long long)arg2;	// IMP=0x0000000000024125

@end

