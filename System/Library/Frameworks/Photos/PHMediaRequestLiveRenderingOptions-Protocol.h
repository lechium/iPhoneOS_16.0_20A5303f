//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/NSObject-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@protocol PHMediaRequestLiveRenderingOptions <NSObject>
@property(readonly, copy, nonatomic) CDUnknownBlockType progressHandler;
- (NSObject<OS_dispatch_queue> *)renderResultHandlerQueue;
- (_Bool)liveRenderAndOnDemandRenderVideoConcurrently;
- (_Bool)liveRenderVideoIfNeeded;
- (_Bool)isCurrentVersion;
- (_Bool)isNetworkAccessAllowed;
@end

