//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OspreyChannel;

__attribute__((visibility("hidden")))
@interface SiriTTSOspreyChannel : NSObject
{
    OspreyChannel *_grpcChannel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001cb3c
@property(retain, nonatomic) OspreyChannel *grpcChannel; // @synthesize grpcChannel=_grpcChannel;
- (void)initializeDeviceAuthenticationSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001cb0b
- (void)streamTTS:(id)arg1 beginHandler:(CDUnknownBlockType)arg2 chunkHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001b84f
- (id)initWithURL:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000001b794

@end

