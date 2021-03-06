//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnection;
@protocol PSPointerDefaultServiceClientToServerInterface><PSPointerDefaultLaunchingServiceClientToServerInterface;

@interface _PUIDXPCClientControllerTarget : NSObject
{
    BSServiceConnection *_connection;	// 8 = 0x8
    id <PSPointerDefaultServiceClientToServerInterface><PSPointerDefaultLaunchingServiceClientToServerInterface> _proxyInterface;	// 16 = 0x10
}

+ (id)currentTarget;	// IMP=0x00200000000162ed
- (void).cxx_destruct;	// IMP=0x00200000000163de
@property(nonatomic) __weak id <PSPointerDefaultServiceClientToServerInterface><PSPointerDefaultLaunchingServiceClientToServerInterface> proxyInterface; // @synthesize proxyInterface=_proxyInterface;
@property(readonly, nonatomic) __weak BSServiceConnection *connection; // @synthesize connection=_connection;
- (void)_performBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001631d
- (oneway void)setWantsServiceKeepAlive:(id)arg1;	// IMP=0x001000000001621e
- (oneway void)setSystemPointerInteractionContextID:(id)arg1 display:(id)arg2;	// IMP=0x0010000000016123
- (oneway void)setPointerPersistentlyVisibleForReasons:(id)arg1;	// IMP=0x0010000000016054
- (oneway void)setPointerPersistentlyHiddenForReasons:(id)arg1;	// IMP=0x0010000000015f85
- (oneway void)autohidePointerForReason:(id)arg1;	// IMP=0x0010000000015eb6
- (void)setActiveHoverRegion:(id)arg1 transitionCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015dbb
- (void)invalidateContentMatchMoveSources:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015cc0
- (void)createContentMatchMoveSourcesForDisplay:(id)arg1 countValue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000015b97
- (void)invalidatePointerPortalSourceCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015a9c
- (void)createPointerPortalSourceCollectionForDisplay:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000159a1
- (id)initWithConnection:(id)arg1 proxyInterface:(id)arg2;	// IMP=0x001000000001590f

@end

