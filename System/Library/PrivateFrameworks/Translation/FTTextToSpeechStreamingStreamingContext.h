//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OspreyClientStreamingContext;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechStreamingStreamingContext : NSObject
{
    id <OspreyClientStreamingContext> _grpcContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000018cfc2
- (void)closeStream;	// IMP=0x000000000018cfac
- (void)sendTextToSpeechStreamingStreamingRequest:(id)arg1;	// IMP=0x000000000018cf48
- (id)initWithGRPCStreamingCallContext:(id)arg1;	// IMP=0x000000000018ceb6

@end

