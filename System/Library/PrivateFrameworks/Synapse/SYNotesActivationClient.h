//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SYNotesActivationClient : NSObject
{
    NSXPCConnection *__connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *__clientQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000efa4
@property(retain, nonatomic, setter=_clientQueue:) NSObject<OS_dispatch_queue> *_clientQueue; // @synthesize _clientQueue=__clientQueue;
@property(retain, nonatomic, setter=_setConnection:) NSXPCConnection *_connection; // @synthesize _connection=__connection;
- (void)_ensureConnection;	// IMP=0x000000000000ec15
- (void)activateNotesWithUserActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e7ba
- (id)init;	// IMP=0x000000000000e736

@end
