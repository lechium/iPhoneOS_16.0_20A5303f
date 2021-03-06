//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NADApplicationStore, NADSyncController, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface NADaemon : NSObject
{
    NSXPCListener *_workspaceListener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NADSyncController *_syncController;	// 24 = 0x18
    NADApplicationStore *_applicationStore;	// 32 = 0x20
}

+ (id)sharedDaemon;	// IMP=0x0020000000009b6d
- (void).cxx_destruct;	// IMP=0x002000000000a0bf
- (void)migrateFixedLibraryPathIfNeeded;	// IMP=0x001000000000a017
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000009f54
- (void)registerForLaunchEvents;	// IMP=0x0010000000009e3a
- (void)startSyncControllerIfNeeded;	// IMP=0x0010000000009d5f
- (void)start;	// IMP=0x0010000000009d49
- (void)setup;	// IMP=0x0010000000009c4a
- (id)init;	// IMP=0x0010000000009bf2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

