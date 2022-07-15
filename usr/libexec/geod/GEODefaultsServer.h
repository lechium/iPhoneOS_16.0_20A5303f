//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@class GEOXPCActivity, NSMapTable, NSString, geo_isolater;

@interface GEODefaultsServer : GEOServer
{
    GEOXPCActivity *_activity;	// 8 = 0x8
    unsigned long long _stateCaptureHandle;	// 16 = 0x10
    geo_isolater *_peersIsolater;	// 24 = 0x18
    NSMapTable *_peerHelpers;	// 32 = 0x20
}

+ (id)_acceptableKeys;	// IMP=0x0020000000031378
+ (unsigned long long)launchMode;	// IMP=0x0010000000016601
+ (id)identifier;	// IMP=0x00100000000165f4
- (void).cxx_destruct;	// IMP=0x0010000000033955
- (void)setConfigValueForKeyWithRequest:(id)arg1;	// IMP=0x00100000000335b2
- (void)getConfigValueForKeyWithRequest:(id)arg1;	// IMP=0x0010000000033441
- (void)removeChangeListenerForWithRequest:(id)arg1;	// IMP=0x0010000000033200
- (void)addChangeListenerForWithRequest:(id)arg1;	// IMP=0x0010000000032f7a
- (void)peerDidDisconnect:(id)arg1;	// IMP=0x0010000000032ec1
- (void)peerDidConnect:(id)arg1;	// IMP=0x0010000000032dc6
- (void)setExpiringKeyWithRequest:(id)arg1;	// IMP=0x0010000000032bf4
- (void)getAllExpiringKeysWithRequest:(id)arg1;	// IMP=0x0010000000032b03
- (void)getCompanionSyncValuesForKeysWithRequest:(id)arg1;	// IMP=0x0010000000032a18
- (void)setAllValuesInStoreWithRequest:(id)arg1;	// IMP=0x00100000000328ac
- (void)getAllValuesInStoreWithRequest:(id)arg1;	// IMP=0x0010000000032800
- (void)clearExpiredKeyWithRequest:(id)arg1;	// IMP=0x001000000003278f
- (void)_notifyListenersOfKeysChange:(id)arg1 options:(unsigned long long)arg2 postInternalNotification:(_Bool)arg3;	// IMP=0x00100000000324b5
- (void)_notifyChangedKeys:(id)arg1 options:(unsigned long long)arg2 postInternalNotification:(_Bool)arg3 triggerWatchSync:(_Bool)arg4;	// IMP=0x001000000003233a
- (void)_expiringKeysChanged:(id)arg1;	// IMP=0x0010000000031f63
- (void)_configKeysChanged:(id)arg1;	// IMP=0x0010000000031ded
- (void)_experimentChanged:(id)arg1;	// IMP=0x0010000000031dcd
- (void)_networkDefaultsChanged:(id)arg1;	// IMP=0x0010000000031dad
- (void)resetAllDefaultsWithMessage:(id)arg1;	// IMP=0x0010000000031d6b
- (void)updateNetworkDefaultsWithMessage:(id)arg1;	// IMP=0x0010000000031b81
- (void)_validatePeer:(id)arg1 canSetKey:(id)arg2 callingSetterIfAcceptable:(CDUnknownBlockType)arg3;	// IMP=0x00100000000319ee
- (void)_registerXPCActivityTimer;	// IMP=0x0010000000031878
- (void)dealloc;	// IMP=0x00100000000317e6
- (id)initWithDaemon:(id)arg1;	// IMP=0x00100000000313e8
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x001000000001660c
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;	// IMP=0x0010000000033997

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
