//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MailServices/MSAutosave.h>

@class NSHashTable, NSString;
@protocol EFScheduler;

@interface MFDAutosave : MSAutosave
{
    id <EFScheduler> _autosaveScheduler;	// 8 = 0x8
    NSHashTable *_activeAutosaveSessions;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00200000000641b7
+ (id)endpointInfo;	// IMP=0x0010000000064014
+ (id)log;	// IMP=0x0010000000063e71
- (void).cxx_destruct;	// IMP=0x0020000000066c7b
@property(retain, nonatomic) NSHashTable *activeAutosaveSessions; // @synthesize activeAutosaveSessions=_activeAutosaveSessions;
@property(retain, nonatomic) id <EFScheduler> autosaveScheduler; // @synthesize autosaveScheduler=_autosaveScheduler;
- (void)autosaveSessionForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000066925
- (void)getIdleAutosaves:(CDUnknownBlockType)arg1;	// IMP=0x001000000006605f
- (void)autosaveMessageData:(id)arg1 replacingIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000065055
- (void)autosavedMessageDataWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000064e3d
- (void)_autosavedMessageWithIdentifier:(id)arg1 localOnly:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006483a
- (void)removeAutosavedMessageWithIdentifier:(id)arg1;	// IMP=0x00100000000644ce
- (void)hasAutosavedMessageWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006421d
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000064214
- (id)newConnectionForInterface:(id)arg1;	// IMP=0x001000000006420c
- (id)init;	// IMP=0x0010000000063f4e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
