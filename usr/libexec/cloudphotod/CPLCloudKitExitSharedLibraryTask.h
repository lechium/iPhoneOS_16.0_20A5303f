//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLCloudKitScope, CPLEngineScope, CPLShare, NSArray, NSString;
@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportGroup;

@interface CPLCloudKitExitSharedLibraryTask
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    CPLCloudKitScope *_cloudKitScope;	// 16 = 0x10
    CPLEngineScope *_scope;	// 24 = 0x18
    CPLShare *_share;	// 32 = 0x20
    long long _retentionPolicy;	// 40 = 0x28
    long long _exitType;	// 48 = 0x30
    NSArray *_userIdentifiersToRemove;	// 56 = 0x38
    NSArray *_participantIDsToRemove;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000012c259
@property(readonly, nonatomic) NSArray *participantIDsToRemove; // @synthesize participantIDsToRemove=_participantIDsToRemove;
@property(readonly, nonatomic) NSArray *userIdentifiersToRemove; // @synthesize userIdentifiersToRemove=_userIdentifiersToRemove;
@property(readonly, nonatomic) long long exitType; // @synthesize exitType=_exitType;
@property(readonly, nonatomic) long long retentionPolicy; // @synthesize retentionPolicy=_retentionPolicy;
@property(readonly, nonatomic) CPLShare *share; // @synthesize share=_share;
@property(readonly, nonatomic) CPLEngineScope *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) CPLCloudKitScope *cloudKitScope; // @synthesize cloudKitScope=_cloudKitScope;
- (void)runOperations;	// IMP=0x001000000012c167
- (void)_reallyExit;	// IMP=0x001000000012b388
- (id)_exitErrorFromError:(id)arg1;	// IMP=0x001000000012b372
- (id)initRemoveParticipantsWithController:(id)arg1 cloudKitScope:(id)arg2 scope:(id)arg3 share:(id)arg4 userIdentifiersToRemove:(id)arg5 participantIDsToRemove:(id)arg6 retentionPolicy:(long long)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x001000000012aee7
- (id)initSelfExitWithController:(id)arg1 cloudKitScope:(id)arg2 scope:(id)arg3 share:(id)arg4 retentionPolicy:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000012a481
- (id)initWithController:(id)arg1 cloudKitScope:(id)arg2 scope:(id)arg3 share:(id)arg4 retentionPolicy:(long long)arg5 exitType:(long long)arg6 userIdentifiersToRemove:(id)arg7 participantIDsToRemove:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;	// IMP=0x001000000012a2eb

// Remaining properties
@property(nonatomic) _Bool allowsFetchCache;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id fetchCache;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask;
@property(nonatomic) _Bool foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;
@property(retain, nonatomic) id <CPLEngineStoreUserIdentifier> transportUserIdentifier;

@end

