//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSQLCore;

__attribute__((visibility("hidden")))
@interface NSSQLConnectionManager : NSObject
{
    NSSQLCore *_sqlCore;	// 8 = 0x8
    CDUnknownBlockType _filter;	// 16 = 0x10
}

- (void)scheduleConnectionsBarrier:(CDUnknownBlockType)arg1;	// IMP=0x0000000000117e6b
- (void)scheduleBarrierBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000117e40
- (_Bool)handleStoreRequest:(id)arg1;	// IMP=0x0000000000117e12
- (void)setExclusiveLockingMode:(_Bool)arg1;	// IMP=0x0000000000117de7
- (void)disconnectAllConnections;	// IMP=0x0000000000117dbc
- (id)sqlCore;	// IMP=0x0000000000117db2
- (void)dealloc;	// IMP=0x0000000000117d70
- (id)initWithSQLCore:(id)arg1 priority:(unsigned long long)arg2 seedConnection:(id)arg3;	// IMP=0x0000000000117d09
- (id)initWithSQLCore:(id)arg1 seedConnection:(id)arg2;	// IMP=0x0000000000117cef

@end
