//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface MapsXPCConnectionsManager : NSObject
{
    NSXPCConnection *_brokerConnection;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x0020000000914ba0
- (void).cxx_destruct;	// IMP=0x0020000000915776
- (void)listenerEndpointDidChange:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x0010000000915525
- (void)_fetchListenerEndpoints;	// IMP=0x0010000000915032
- (void)_handleConnectionInvalidated;	// IMP=0x0010000000914eb8
- (void)dealloc;	// IMP=0x0010000000914e76
- (id)init;	// IMP=0x0010000000914bf5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

