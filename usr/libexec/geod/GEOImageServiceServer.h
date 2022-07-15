//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@class GEOImageServicePersistence, NSMapTable, NSMutableArray, geo_isolater;

@interface GEOImageServiceServer : GEOServer
{
    GEOImageServicePersistence *_persistence;	// 8 = 0x8
    geo_isolater *_isolater;	// 16 = 0x10
    NSMutableArray *_requestsConsultingPersistence;	// 24 = 0x18
    NSMapTable *_originalRequestToPendingRequest;	// 32 = 0x20
}

+ (id)identifier;	// IMP=0x002000000001742a
- (void).cxx_destruct;	// IMP=0x00100000000312f9
- (void)purgeDiskCacheWithRequest:(id)arg1;	// IMP=0x001000000003117e
- (void)calculateFreeableWithRequest:(id)arg1;	// IMP=0x0010000000031016
- (void)cancelImageServiceRequestWithRequest:(id)arg1;	// IMP=0x0010000000030d31
- (void)startImageServiceRequestWithRequest:(id)arg1;	// IMP=0x001000000002f6f0
- (id)initWithDaemon:(id)arg1;	// IMP=0x001000000002f52a
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0010000000017437

@end
