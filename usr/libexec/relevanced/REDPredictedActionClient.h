//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface REDPredictedActionClient : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CDUnknownBlockType _invalidationHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000002d18
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (void)_handleInvalidation;	// IMP=0x0010000000002c3c
- (void)fetchPerformedTodayCountForActionWithBundleIdentifer:(id)arg1 actionIdentifier:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002a63
- (void)fetchFirstPerformedActionDate:(CDUnknownBlockType)arg1;	// IMP=0x00100000000028bf
- (void)requestPredictedActionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000025dd
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000002367

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

