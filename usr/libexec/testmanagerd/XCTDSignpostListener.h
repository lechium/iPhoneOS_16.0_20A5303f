//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface XCTDSignpostListener : NSObject
{
    NSMutableDictionary *_tokensToExtractors;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001a21f
@property(readonly) NSMutableDictionary *tokensToExtractors; // @synthesize tokensToExtractors=_tokensToExtractors;
- (void)dealloc;	// IMP=0x001000000001a065
- (void)unregisterForSignpostsWithToken:(id)arg1;	// IMP=0x0010000000019fb3
- (id)registerForSignpostsFromSubsystem:(id)arg1 category:(id)arg2 intervalTimeout:(double)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000019cb4
- (id)init;	// IMP=0x0010000000019c63

@end

