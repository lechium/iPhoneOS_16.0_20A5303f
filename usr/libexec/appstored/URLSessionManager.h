//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface URLSessionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x004000000002b4ef
- (void).cxx_destruct;	// IMP=0x002000000002ba90
- (id)_sessionWithClientInfo:(id)arg1;	// IMP=0x001000000002ba39
- (id)dataTaskPromiseWithRequestProperties:(id)arg1 forRequest:(id)arg2;	// IMP=0x001000000002b5c6
- (id)init;	// IMP=0x001000000002b544

@end

