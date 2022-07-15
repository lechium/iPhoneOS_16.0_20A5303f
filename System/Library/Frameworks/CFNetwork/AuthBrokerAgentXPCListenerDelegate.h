//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ABRequestHandler, NSString;
@protocol OS_dispatch_queue;

@interface AuthBrokerAgentXPCListenerDelegate : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ABRequestHandler *_requestHandler;	// 16 = 0x10
}

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000001b341
- (void)dealloc;	// IMP=0x000000000001b306
- (id)init;	// IMP=0x000000000001b2ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
