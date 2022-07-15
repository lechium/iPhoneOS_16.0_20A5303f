//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APAttributionAnalytics, APXPCConnection, NSString, Protocol;

@interface APAttributionReceiver : NSObject
{
    APXPCConnection *_connection;	// 8 = 0x8
    APAttributionAnalytics *_analytics;	// 16 = 0x10
    double _responseTime;	// 24 = 0x18
    unsigned long long _serverRetries;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001c131
@property(nonatomic) unsigned long long serverRetries; // @synthesize serverRetries=_serverRetries;
@property double responseTime; // @synthesize responseTime=_responseTime;
@property(retain, nonatomic) APAttributionAnalytics *analytics; // @synthesize analytics=_analytics;
@property(retain, nonatomic) APXPCConnection *connection; // @synthesize connection=_connection;
- (void)terminateConnection;	// IMP=0x001000000001c047
- (void)connectionInvalidated;	// IMP=0x001000000001c035
- (void)connectionInterrupted;	// IMP=0x001000000001c023
- (id)remoteObjectInterface;	// IMP=0x001000000001c012
@property(readonly) Protocol *exportedInterface;
@property(readonly) id exportedObject;
- (void)attributionAnalytics:(unsigned long long)arg1 end:(unsigned long long)arg2 Handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001bebe
- (void)_continueAttribution:(id)arg1 token:(id)arg2 error:(id)arg3 constructionWithCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000001b0a2
- (void)attributionTokenCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001a813
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000001a78e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
