//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, NSHashTable, NSMutableDictionary, NSString, NSXPCListener;

@interface WCDPushKitManager : NSObject
{
    NSXPCListener *_xpcListener;	// 8 = 0x8
    APSConnection *_productionConnection;	// 16 = 0x10
    APSConnection *_developmentConnection;	// 24 = 0x18
    NSMutableDictionary *_bundleIDToClient;	// 32 = 0x20
    NSHashTable *_clientsDeniedComplicationRegister;	// 40 = 0x28
}

+ (id)topicsFromBundleIDs:(id)arg1;	// IMP=0x002000000002dd9c
+ (id)topicFromBundleId:(id)arg1;	// IMP=0x001000000002dd70
+ (id)bundleIDsFromTopics:(id)arg1;	// IMP=0x001000000002db8e
+ (id)bundleIDFromTopic:(id)arg1;	// IMP=0x001000000002db14
+ (id)sharedPushKitManager;	// IMP=0x001000000002aab9
- (void).cxx_destruct;	// IMP=0x002000000002dfb0
@property(readonly, copy, nonatomic) NSHashTable *clientsDeniedComplicationRegister; // @synthesize clientsDeniedComplicationRegister=_clientsDeniedComplicationRegister;
@property(readonly, copy, nonatomic) NSMutableDictionary *bundleIDToClient; // @synthesize bundleIDToClient=_bundleIDToClient;
@property(readonly, nonatomic) APSConnection *developmentConnection; // @synthesize developmentConnection=_developmentConnection;
@property(readonly, nonatomic) APSConnection *productionConnection; // @synthesize productionConnection=_productionConnection;
@property(readonly, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
- (void)releaseAssertionForClient:(id)arg1;	// IMP=0x001000000002d9db
- (void)launchClient:(id)arg1;	// IMP=0x001000000002d2fe
- (void)releaseAssertionForBundleID:(id)arg1;	// IMP=0x001000000002d1f3
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x001000000002cefe
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x001000000002cd60
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x001000000002c99c
- (void)clientRequestingComplicationUnregister:(id)arg1;	// IMP=0x001000000002c7cb
- (void)clientRequestingComplicationRegister:(id)arg1;	// IMP=0x001000000002c297
- (void)clientXPCConnectionDidDisconnect:(id)arg1;	// IMP=0x001000000002c182
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000002bf1b
- (void)systemObserverComplicationsInstalledChanged;	// IMP=0x001000000002b7e9
- (void)systemObserverActiveComplicationsChanged;	// IMP=0x001000000002b147
- (void)dealloc;	// IMP=0x001000000002b045
- (void)setUpInitialState;	// IMP=0x001000000002b017
@property(readonly) NSString *state;
- (id)init;	// IMP=0x001000000002ab3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
