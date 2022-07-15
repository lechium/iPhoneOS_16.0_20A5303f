//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NWURLSessionTaskConfiguration;
@protocol NWURLLoaderClient, OS_dispatch_queue, OS_nw_connection;

__attribute__((visibility("hidden")))
@interface NWURLLoaderTCP : NSObject
{
    _Bool _ready;	// 8 = 0x8
    _Bool _TLS;	// 9 = 0x9
    _Bool _addedTLS;	// 10 = 0xa
    NSString *_hostname;	// 16 = 0x10
    long long _port;	// 24 = 0x18
    NWURLSessionTaskConfiguration *_configuration;	// 32 = 0x20
    id <NWURLLoaderClient> _client;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    NSMutableArray *_pendingWork;	// 56 = 0x38
    NSObject<OS_nw_connection> *_connection;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000179e0
@property(readonly, nonatomic) NSObject<OS_nw_connection> *underlyingConnection;
- (void)writeData:(id)arg1 complete:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000178a0
@property(readonly, nonatomic) _Bool allowsWrite;
- (void)readDataOfMinimumIncompleteLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000017790
- (void)readResponse:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017770
- (void)updateClient:(id)arg1;	// IMP=0x0000000000017720
- (void)stop;	// IMP=0x00000000000176e0
- (void)start;	// IMP=0x0000000000017470

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
