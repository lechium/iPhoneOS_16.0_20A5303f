//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface CRCarKitServiceClient : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (id)serviceQueue;	// IMP=0x00600000000038e5
- (void).cxx_destruct;	// IMP=0x0000000000003fd6
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)performServiceBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003eb6
- (void)_serviceQueuePerformBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003d00
- (void)performSynchronousServiceBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003b8c
- (void)dealloc;	// IMP=0x0000000000003b21
- (void)_setupConnection;	// IMP=0x00000000000039b4
- (id)init;	// IMP=0x0000000000003968

@end
