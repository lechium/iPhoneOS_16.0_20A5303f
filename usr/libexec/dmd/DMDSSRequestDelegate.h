//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSTimer, SSRequest;

@interface DMDSSRequestDelegate : NSObject
{
    SSRequest *_request;	// 8 = 0x8
    CDUnknownBlockType _completionBlock;	// 16 = 0x10
    NSTimer *_timeoutTimer;	// 24 = 0x18
}

+ (double)timeout;	// IMP=0x002000000007b320
- (void).cxx_destruct;	// IMP=0x002000000007bb7d
@property(copy, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) SSRequest *request; // @synthesize request=_request;
- (void)_timerDidFire:(id)arg1;	// IMP=0x001000000007ba27
- (void)requestDidFinish:(id)arg1;	// IMP=0x001000000007b8fa
- (void)request:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x001000000007b7a4
- (void)cancel;	// IMP=0x001000000007b684
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000007b4a1
- (void)dealloc;	// IMP=0x001000000007b436
- (id)initWithRequest:(id)arg1;	// IMP=0x001000000007b329

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
