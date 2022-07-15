//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface MGServiceClient : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSDictionary *_queries;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000069da
@property(copy, nonatomic) NSDictionary *queries; // @synthesize queries=_queries;
@property(readonly, retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)enumerateQueriesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006792
- (void)removeQuery:(id)arg1;	// IMP=0x0000000000006687
- (id)queryForPredicate:(id)arg1;	// IMP=0x0000000000006514
- (id)description;	// IMP=0x000000000000642e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000063c9
- (unsigned long long)hash;	// IMP=0x0000000000006385
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000062cf
- (id)initWithConnection:(id)arg1;	// IMP=0x000000000000624f

@end
