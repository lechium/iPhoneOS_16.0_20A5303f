//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFCore/NSObject-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@protocol AVQueuedSampleBufferRendering <NSObject>
@property(readonly, nonatomic) _Bool hasSufficientMediaDataForReliablePlaybackStart;
@property(readonly, getter=isReadyForMoreMediaData) _Bool readyForMoreMediaData;
@property(readonly, retain) struct OpaqueCMTimebase *timebase;
- (void)stopRequestingMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(NSObject<OS_dispatch_queue> *)arg1 usingBlock:(void (^)(void))arg2;
- (void)flush;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
@end

