//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSProgress;
@protocol OS_dispatch_queue;

@protocol PXStoryAssetsProducer
- (NSProgress *)requestAssetsWithOptions:(unsigned long long)arg1 storyQueue:(NSObject<OS_dispatch_queue> *)arg2 resultHandler:(void (^)(PXStoryProducerResult *))arg3;
@end

