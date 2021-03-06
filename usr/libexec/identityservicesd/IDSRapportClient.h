//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSTTLCache, IMMultiQueue, MISSING_TYPE, NSHashTable, NSRecursiveLock, NSString, RPCompanionLinkClient;

@interface IDSRapportClient : NSObject
{
    RPCompanionLinkClient *_companionLinkClient;	// 8 = 0x8
    MISSING_TYPE *_discoveredDevices;	// 16 = 0x10
    NSHashTable *_delegateMap;	// 24 = 0x18
    NSRecursiveLock *_lock;	// 32 = 0x20
    IDSTTLCache *_ttlCache;	// 40 = 0x28
    IMMultiQueue *_multiQueue;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00200000003d3850
- (void).cxx_destruct;	// IMP=0x00200000003d71b0
@property(readonly, nonatomic) RPCompanionLinkClient *companionLinkClient; // @synthesize companionLinkClient=_companionLinkClient;
@property(retain, nonatomic) IDSTTLCache *ttlCache; // @synthesize ttlCache=_ttlCache;
@property(retain, nonatomic) IMMultiQueue *multiQueue; // @synthesize multiQueue=_multiQueue;
- (id)_newCompanionLinkClient;	// IMP=0x00100000003d7050
- (id)_deviceWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000003d6c50
- (void)_companionLinkClientForDeviceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003d6a50
- (void)_handleIncomingIDSMessageEvent:(id)arg1 options:(id)arg2;	// IMP=0x00100000003d64d0
- (void)_handleLostDevice:(id)arg1;	// IMP=0x00100000003d6160
- (void)_handleDiscoveredDevice:(id)arg1;	// IMP=0x00100000003d5df0
- (_Bool)_isDiscoveredOverWiFi:(id)arg1;	// IMP=0x00100000003d5d80
- (void)_notifyDelegatesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000003d5af0
- (void)ttlCache:(id)arg1 willReturnCachedObject:(id)arg2 forKey:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000003d56f0
- (void)sendMessage:(id)arg1 toDeviceIdentifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000003d4f40
- (_Bool)isDeviceDiscovered:(id)arg1;	// IMP=0x00100000003d4ea0
- (void)removeDelegate:(id)arg1;	// IMP=0x00100000003d4de0
- (void)addDelegate:(id)arg1;	// IMP=0x00100000003d4cf0
- (void)dealloc;	// IMP=0x00100000003d4c10
- (id)init;	// IMP=0x00100000003d3910

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

