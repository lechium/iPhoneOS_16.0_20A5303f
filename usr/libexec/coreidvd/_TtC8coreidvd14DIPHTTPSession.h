//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC8coreidvd14DIPHTTPSession : NSObject
{
    MISSING_TYPE *urlSession;	// 8 = 0x8
    MISSING_TYPE *anonymousURLSession;	// 16 = 0x10
    MISSING_TYPE *configuration;	// 24 = 0x18
    MISSING_TYPE *retrier;	// 72 = 0x48
    MISSING_TYPE *overridingAltDSID;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00400000001c7990
- (id)init;	// IMP=0x00100000001c7930
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c78a0
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x00100000001c7830
- (void)URLSession:(id)arg1 taskIsWaitingForConnectivity:(id)arg2;	// IMP=0x00100000001c77d0
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001c7630

@end
