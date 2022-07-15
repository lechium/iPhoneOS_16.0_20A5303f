//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLCloudKitScope, CPLEngineScope, NSData, NSString;
@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportGroup;

@interface CPLCloudKitGetCurrentSyncAnchorTask
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSData *_updatedTransportScope;	// 16 = 0x10
    CPLCloudKitScope *_cloudKitScope;	// 24 = 0x18
    CPLEngineScope *_scope;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000012d950
@property(readonly, nonatomic) CPLEngineScope *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) CPLCloudKitScope *cloudKitScope; // @synthesize cloudKitScope=_cloudKitScope;
- (void)runOperations;	// IMP=0x001000000012d59c
- (void)_fetchLibraryInfoAndStateWithCurrentSyncAnchor:(id)arg1 currentUserID:(id)arg2;	// IMP=0x001000000012d32f
- (void)_fetchLibraryInfoAndStateWithCurrentSyncAnchor:(id)arg1;	// IMP=0x001000000012d25d
- (id)initWithController:(id)arg1 cloudKitScope:(id)arg2 scope:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000012d17b

// Remaining properties
@property(nonatomic) _Bool allowsFetchCache;
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask;
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
