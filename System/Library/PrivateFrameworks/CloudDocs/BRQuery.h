//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRItemCollectionGatherer, BRNotificationReceiver, NSArray, NSMetadataQuery, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSPredicate, NSString;

__attribute__((visibility("hidden")))
@interface BRQuery : NSObject
{
    NSMutableArray *_results;	// 8 = 0x8
    NSMutableDictionary *_resultsByRowID;	// 16 = 0x10
    NSMutableDictionary *_fpItemIDToResultItem;	// 24 = 0x18
    BRNotificationReceiver *_receiver;	// 32 = 0x20
    NSMetadataQuery *_query;	// 40 = 0x28
    NSPredicate *_predicate;	// 48 = 0x30
    NSString *_bundleIdentifier;	// 56 = 0x38
    NSMutableDictionary *_toBeRemovedByFileObjectID;	// 64 = 0x40
    NSMutableDictionary *_toBeReplacedByFileObjectID;	// 72 = 0x48
    NSMutableDictionary *_toBeInsertedByFileObjectID;	// 80 = 0x50
    int _queryState;	// 88 = 0x58
    _Bool _ubiquitousGatherComplete;	// 92 = 0x5c
    _Bool _needsCrashMarking;	// 93 = 0x5d
    _Bool _needsCrashEvicting;	// 94 = 0x5e
    _Bool _sendHasUpdateNotification;	// 95 = 0x5f
    _Bool _isFPFSMode;	// 96 = 0x60
    NSArray *_values;	// 104 = 0x68
    NSArray *_sortingAttributes;	// 112 = 0x70
    CDStruct_37e85dac _batchingParameters;	// 120 = 0x78
    CDUnknownFunctionPointerType _create_result_fn;	// 168 = 0xa8
    void *_create_result_context;	// 176 = 0xb0
    CDUnknownFunctionPointerType _create_result_callbacks_equal;	// 184 = 0xb8
    CDUnknownFunctionPointerType _create_result_callbacks_release;	// 192 = 0xc0
    CDUnknownFunctionPointerType _create_value_fn;	// 200 = 0xc8
    void *_create_value_context;	// 208 = 0xd0
    CDUnknownFunctionPointerType _create_value_callbacks_equal;	// 216 = 0xd8
    CDUnknownFunctionPointerType _create_value_callbacks_release;	// 224 = 0xe0
    NSArray *_searchScopes;	// 232 = 0xe8
    unsigned int _scopeOptions;	// 240 = 0xf0
    CDUnknownFunctionPointerType _sort_fn;	// 248 = 0xf8
    void *_sort_context;	// 256 = 0x100
    struct __CFRunLoop *_runLoop;	// 264 = 0x108
    NSOperationQueue *_queryQueue;	// 272 = 0x110
    _Atomic int _disableCount;	// 280 = 0x118
    int _handlerDisableCount;	// 284 = 0x11c
    BRItemCollectionGatherer *_collectionGatherer;	// 288 = 0x120
}

+ (void)initialize;	// IMP=0x0010000000063b7f
+ (void)didEndPossibleFileOperation:(id)arg1;	// IMP=0x0010000000063b6a
+ (id)willBeginPossibleDeletionOfItemAtURL:(id)arg1;	// IMP=0x0010000000063a05
+ (id)willBeginPossibleMoveOfItemAtURL:(id)arg1 toURL:(id)arg2;	// IMP=0x001000000006385a
+ (id)willBeginPossibleCreationOfItemAtURL:(id)arg1;	// IMP=0x0010000000063735
- (void).cxx_destruct;	// IMP=0x0000000000068e2e
@property(retain) BRNotificationReceiver *receiver; // @synthesize receiver=_receiver;
@property __weak NSMetadataQuery *query; // @synthesize query=_query;
- (void)itemCollectionGathererDidReceiveUpdates:(id)arg1 deleteItemsWithIDs:(id)arg2;	// IMP=0x0000000000068ad1
- (void)itemCollectionGathererGatheredItems:(id)arg1;	// IMP=0x0000000000068916
- (void)itemCollectionGathererReloadedItems:(id)arg1;	// IMP=0x000000000006882b
- (void)itemCollectionGathererFinishedGathering;	// IMP=0x0000000000068764
- (void)_prepareResultsForRelaoding;	// IMP=0x0000000000068661
- (void)_handleRemovedItemsNotifications:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000068383
- (void)_handleReplacedItemsNotifications:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000067f87
- (void)_handleAddedItemsNotifications:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000067cd1
- (id)_classifyItems:(id)arg1 deletedItemIDs:(id)arg2;	// IMP=0x00000000000676de
- (void)notificationReceiverDidReceiveNotifications:(id)arg1;	// IMP=0x0000000000067676
- (void)notificationsReceiverDidReceiveNotificationsBatch:(id)arg1;	// IMP=0x00000000000674d6
- (void)notificationsReceiverDidFinishGathering:(id)arg1;	// IMP=0x000000000006732e
- (void)notificationsReceiverDidInvalidate:(id)arg1;	// IMP=0x0000000000067056
- (void)setSendHasUpdateNotification:(_Bool)arg1;	// IMP=0x0000000000066f81
- (void)_sendHasUpdateNotificationIfNeeded;	// IMP=0x0000000000066ed5
- (void)processUpdates;	// IMP=0x0000000000066e89
- (void)_processChanges:(id)arg1;	// IMP=0x0000000000066ac9
- (void)_processUpdates;	// IMP=0x0000000000065d17
- (_Bool)_collectUpdates:(id)arg1;	// IMP=0x000000000006566e
- (void)_postNote:(const struct __CFString *)arg1 userInfo:(id)arg2;	// IMP=0x00000000000655b5
- (void)_postNote:(const struct __CFString *)arg1;	// IMP=0x0000000000065516
- (id)queryQueue;	// IMP=0x0000000000065505
- (void)setQueryQueue:(id)arg1;	// IMP=0x000000000006546f
- (void)setSortComparator:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;	// IMP=0x000000000006545b
- (void)setSearchScope:(id)arg1 withOptions:(unsigned int)arg2;	// IMP=0x000000000006541e
- (void)setCreateValueFunction:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2 callbacks:(const CDStruct_70d275a4 *)arg3;	// IMP=0x00000000000653c5
- (void)setCreateResultFunction:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2 callbacks:(const CDStruct_70d275a4 *)arg3;	// IMP=0x0000000000065358
- (void)setExternalDocumentsBundleIdentifier:(id)arg1;	// IMP=0x000000000006532b
- (void)setBatchingParameters:(CDStruct_37e85dac)arg1;	// IMP=0x0000000000065307
- (unsigned long long)resultCount;	// IMP=0x00000000000652f1
- (const void *)resultAtIndex:(long long)arg1;	// IMP=0x000000000006527a
- (id)_replacementObjectsForArrayOfQueryItem:(id)arg1;	// IMP=0x00000000000650a6
- (id)_replacementObjectForQueryItem:(id)arg1;	// IMP=0x0000000000065006
- (long long)indexOfResult:(const void *)arg1;	// IMP=0x0000000000064f40
- (unsigned long long)countOfResultsForAttributeName:(id)arg1 value:(id)arg2;	// IMP=0x0000000000064f38
- (id)attributeValueForName:(id)arg1 forResultAtIndex:(long long)arg2;	// IMP=0x0000000000064ea2
- (unsigned char)executeWithOptions:(unsigned long long)arg1;	// IMP=0x0000000000064dc4
- (void)_runQuery;	// IMP=0x0000000000064bfe
- (void)_watchScopes;	// IMP=0x0000000000064b78
- (void)stop;	// IMP=0x0000000000064a7e
- (void)_performBlockAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000000006495f
- (void)enableUpdates;	// IMP=0x0000000000064823
- (void)disableUpdates;	// IMP=0x00000000000646e8
- (void)_setQueryState:(int)arg1;	// IMP=0x000000000006435c
- (id)valuesOfAttribute:(id)arg1;	// IMP=0x000000000006413d
- (void)dealloc;	// IMP=0x0000000000063df8
- (id)initWithQuery:(id)arg1 values:(id)arg2 sortingAttributes:(id)arg3 items:(id)arg4;	// IMP=0x0000000000063c38
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

