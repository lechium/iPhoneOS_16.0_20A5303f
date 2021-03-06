//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCDataOrDocsScopeGatherer, BRCItemGlobalID, BRCListDirectoryContentsOperation, BRCNotificationManager, BRCXPCClient, BRFileObjectID, BRNotificationQueue, NSHashTable, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol BRCNotificationPipeDelegate, BRItemNotificationReceiving, OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCNotificationPipe : NSObject
{
    id <BRItemNotificationReceiving> _receiver;	// 8 = 0x8
    BRNotificationQueue *_notifs;	// 16 = 0x10
    CDUnknownBlockType _boostReply;	// 24 = 0x18
    BRCXPCClient *_client;	// 32 = 0x20
    BRCItemGlobalID *_oldWatchedAncestorItemGlobalID;	// 40 = 0x28
    BRCItemGlobalID *_watchedAncestorItemGlobalID;	// 48 = 0x30
    BRFileObjectID *_watchedAncestorFileObjectID;	// 56 = 0x38
    NSString *_watchedAncestorFilenameToItem;	// 64 = 0x40
    BRCDataOrDocsScopeGatherer *_gatherer;	// 72 = 0x48
    NSObject<OS_dispatch_group> *_gatherGroup;	// 80 = 0x50
    _Bool _hasUpdatesInFlight;	// 88 = 0x58
    _Bool _volumeIsCaseSensitive;	// 89 = 0x59
    NSMutableDictionary *_pendingProgressUpdatesByID;	// 96 = 0x60
    _Bool _hasProgressUpdatesInFlight;	// 104 = 0x68
    unsigned long long _initialGatherMaxRank;	// 112 = 0x70
    unsigned long long _secondaryGatherMaxRank;	// 120 = 0x78
    BRCNotificationManager *_manager;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_queue;	// 136 = 0x88
    BRCListDirectoryContentsOperation *_listOp;	// 144 = 0x90
    int _watchKind;	// 152 = 0x98
    unsigned short _watchItemOptions;	// 156 = 0x9c
    NSString *_watchNamePrefix;	// 160 = 0xa0
    NSString *_watchForBundleID;	// 168 = 0xa8
    NSMutableSet *_externalAppLibraries;	// 176 = 0xb0
    NSSet *_watchedAppLibraries;	// 184 = 0xb8
    NSHashTable *_recursiveScopeListOps;	// 192 = 0xc0
    NSSet *_watchedAppLibraryIDs;	// 200 = 0xc8
    unsigned long long _watchedAppLibrariesFlags;	// 208 = 0xd0
    id <BRCNotificationPipeDelegate> _delegate;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x000000000006d145
@property(retain) NSString *watchedAncestorFilenameToItem; // @synthesize watchedAncestorFilenameToItem=_watchedAncestorFilenameToItem;
@property(retain) BRFileObjectID *watchedAncestorFileObjectID; // @synthesize watchedAncestorFileObjectID=_watchedAncestorFileObjectID;
@property(retain) BRCItemGlobalID *watchedAncestorItemGlobalID; // @synthesize watchedAncestorItemGlobalID=_watchedAncestorItemGlobalID;
@property(retain) BRCItemGlobalID *oldWatchedAncestorItemGlobalID; // @synthesize oldWatchedAncestorItemGlobalID=_oldWatchedAncestorItemGlobalID;
@property(nonatomic) __weak id <BRCNotificationPipeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) BRCNotificationManager *manager; // @synthesize manager=_manager;
- (_Bool)isWatchingGlobalItemID:(id)arg1;	// IMP=0x000000000006d05c
- (void)invalidateReceiverIfWatchingAppLibraryIDs:(id)arg1;	// IMP=0x000000000006d01d
- (void)invalidateIfWatchingAppLibraryIDs:(id)arg1;	// IMP=0x000000000006cfdf
- (void)_watchItem:(id)arg1 options:(unsigned short)arg2 gatherReply:(CDUnknownBlockType)arg3;	// IMP=0x000000000006ba7a
- (void)watchScopes:(unsigned short)arg1 trustedAppLibraryIDs:(id)arg2 gatherReply:(CDUnknownBlockType)arg3;	// IMP=0x000000000006a59e
- (void)close;	// IMP=0x000000000006a53a
- (void)listOperation:(id)arg1 wasReplacedByOperation:(id)arg2;	// IMP=0x000000000006a4cb
- (void)_stopWatchingItems;	// IMP=0x000000000006a036
- (void)_gatherIfNeededAndFlushAsync;	// IMP=0x0000000000069e2f
- (void)__flush;	// IMP=0x0000000000069666
- (void)processProgressUpdates:(id)arg1;	// IMP=0x00000000000695bb
- (void)_processProgressUpdates:(id)arg1;	// IMP=0x0000000000068fc7
- (void)_flushProgressUpdates;	// IMP=0x0000000000068ce6
- (void)processUpdates:(id)arg1 withRank:(unsigned long long)arg2;	// IMP=0x00000000000686df
- (void)_prepareForSecondGatherWithRank:(unsigned long long)arg1;	// IMP=0x0000000000068573
- (void)_addIntraContainerUpdatesFromInterContainerUpdate:(id)arg1 toArray:(id)arg2;	// IMP=0x0000000000067f96
- (int)_isInterestingUpdate:(id)arg1;	// IMP=0x0000000000066d34
@property(readonly, copy) NSString *description;
- (id)initWithReceiver:(id)arg1 manager:(id)arg2 startingRank:(unsigned long long)arg3;	// IMP=0x00000000000666e1
- (id)initWithXPCReceiver:(id)arg1 client:(id)arg2 manager:(id)arg3 startingRank:(unsigned long long)arg4;	// IMP=0x000000000006646f
- (id)_initWithManager:(id)arg1 startingRank:(unsigned long long)arg2;	// IMP=0x0000000000066393
- (void)addDequeueCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000066344
- (void)addNotification:(id)arg1 asDead:(_Bool)arg2;	// IMP=0x0000000000066136
- (void)_registerAsWatcherIfNeeded;	// IMP=0x00000000000660ab
- (void)dealloc;	// IMP=0x0000000000066027
- (oneway void)invalidate;	// IMP=0x000000000006e461
- (void)_triggerImmediateReadOfDocumentIfNeeded;	// IMP=0x000000000006e388
- (void)watchItemWithFileObjectID:(id)arg1 options:(unsigned short)arg2 gatherReply:(CDUnknownBlockType)arg3;	// IMP=0x000000000006dd3b
- (void)boostPriority:(CDUnknownBlockType)arg1;	// IMP=0x000000000006dbd4
- (void)watchScopes:(unsigned short)arg1 gatherReply:(CDUnknownBlockType)arg2;	// IMP=0x000000000006d8a9
- (void)watchScopes:(unsigned short)arg1 appLibraryIDs:(id)arg2 gatherReply:(CDUnknownBlockType)arg3;	// IMP=0x000000000006d586
- (void)watchItemsNamesPrefixedBy:(id)arg1 inScopes:(unsigned short)arg2 appLibraryIDs:(id)arg3 gatherReply:(CDUnknownBlockType)arg4;	// IMP=0x000000000006d258

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

