//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OspreyClientStreamingContext;

__attribute__((visibility("hidden")))
@interface FTLanguageDetectionStreamingContext : NSObject
{
    id <OspreyClientStreamingContext> _grpcContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000018d0de
- (void)closeStream;	// IMP=0x000000000018d0c8
- (void)sendLanguageDetectionStreamingRequest:(id)arg1;	// IMP=0x000000000018d064
- (id)initWithGRPCStreamingCallContext:(id)arg1;	// IMP=0x000000000018cfd2

@end
