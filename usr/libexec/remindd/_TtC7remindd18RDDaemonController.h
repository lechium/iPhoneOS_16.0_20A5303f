//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC7remindd18RDDaemonController : NSObject
{
    MISSING_TYPE *xpcDaemon;	// 8 = 0x8
    MISSING_TYPE *clientIdentity;	// 24 = 0x18
    MISSING_TYPE *storeContainerToken;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00400000004f27e0
- (id)init;	// IMP=0x00100000004f2780
- (void)invalidate;	// IMP=0x00100000004f2770
- (void)asyncIndexingPerformerWithReason:(id)arg1 loadHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000004f2690
- (id)syncIndexingPerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000004f25e0
- (void)asyncSyncInterfacePerformerWithReason:(id)arg1 loadHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000004f25c0
- (id)syncSyncInterfacePerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000004f25a0
- (void)asyncStorePerformerWithReason:(id)arg1 loadHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000004f2580
- (id)syncStorePerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000004f2560
- (id)syncDebugPerformerWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000004f24f0
- (id)syncDebugPerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000004f24d0
- (id)syncChangeTrackingPerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000004f24b0

@end
