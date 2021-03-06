//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSURL, NSXPCConnection;
@protocol NDSessionManagerDelegate, OS_dispatch_queue;

@interface NDSessionManager : NSObject
{
    NSMutableDictionary *_sessions;	// 8 = 0x8
    NSMutableDictionary *_reconnectingProxies;	// 16 = 0x10
    NSString *_clientBundleID;	// 24 = 0x18
    NSURL *_bundleDirectory;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_sessionArchiveQueue;	// 40 = 0x28
    id _boost;	// 48 = 0x30
    _Bool _isSpringBoardApp;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    NSXPCConnection *_xpcConn;	// 72 = 0x48
    id <NDSessionManagerDelegate> _delegate;	// 80 = 0x50
    CDUnknownBlockType _obliterationCompletion;	// 88 = 0x58
}

+ (id)restoreOptionsFromArchivePath:(id)arg1;	// IMP=0x0020000000015b69
- (void).cxx_destruct;	// IMP=0x00200000000155e6
@property(copy) CDUnknownBlockType obliterationCompletion; // @synthesize obliterationCompletion=_obliterationCompletion;
@property _Bool isSpringBoardApp; // @synthesize isSpringBoardApp=_isSpringBoardApp;
@property __weak id <NDSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak NSXPCConnection *xpcConn; // @synthesize xpcConn=_xpcConn;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)archiveTimerFired;	// IMP=0x00100000000154f3
- (void)obliterate;	// IMP=0x0010000000015439
- (void)clientApplicationWasReinstalled;	// IMP=0x00100000000153ee
- (id)getSessionWithIdentifier:(id)arg1;	// IMP=0x00100000000153c8
- (void)sessionCompleted:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001511d
- (void)cleanupWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000015010
- (void)obliterateAllSessionsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000014f0d
- (void)getActiveSessionIdentifiersWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000014e68
- (void)okayToSendPendingCallbacksForIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014c09
- (void)releaseAssertionForSession:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014ae7
- (void)sendPendingCallbacksForIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014757
- (void)createSessionWithConfiguration:(id)arg1 clientProxy:(id)arg2 cachesDirectory:(id)arg3 options:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001354d
- (_Bool)connection:(id)arg1 canUseSharedContainerIdentifier:(id)arg2;	// IMP=0x00100000000133cb
- (id)copyAndSanitizeClientConfiguration:(id)arg1;	// IMP=0x0010000000012a3c
- (void)dropBoost;	// IMP=0x00100000000129f1
- (void)boost;	// IMP=0x00100000000128c9
- (void)archiveState;	// IMP=0x00100000000127df
- (id)restoreState:(_Bool *)arg1;	// IMP=0x00100000000118d5
- (id)downloadDirectoryDataPath;	// IMP=0x0010000000011866
- (id)archivePath;	// IMP=0x00100000000117f7
- (void)dealloc;	// IMP=0x00100000000117c8
- (id)initWithDelegate:(id)arg1 bundleID:(id)arg2 isSpringBoardApp:(_Bool)arg3;	// IMP=0x0010000000011578

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

