//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectID, NSString, RMPersistentHistoryNotifier;
@protocol RMConduitDelegate;

@interface RMMDMConduit : NSObject
{
    id <RMConduitDelegate> _delegate;	// 8 = 0x8
    RMPersistentHistoryNotifier *_persistentHistoryNotifier;	// 16 = 0x10
    NSManagedObjectContext *_context;	// 24 = 0x18
    NSManagedObjectID *_managementSourceObjectID;	// 32 = 0x20
}

+ (id)_generateEnrollmentToken;	// IMP=0x0020000000051e0f
- (void).cxx_destruct;	// IMP=0x0020000000057b8f
@property(readonly, nonatomic) NSManagedObjectID *managementSourceObjectID; // @synthesize managementSourceObjectID=_managementSourceObjectID;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(retain, nonatomic) RMPersistentHistoryNotifier *persistentHistoryNotifier; // @synthesize persistentHistoryNotifier=_persistentHistoryNotifier;
@property(nonatomic) __weak id <RMConduitDelegate> delegate; // @synthesize delegate=_delegate;
- (void)persistentHistoryNotifier:(id)arg1 hasChanges:(id)arg2;	// IMP=0x001000000005795f
- (_Bool)persistentHistoryNotifier:(id)arg1 isChangeInteresting:(id)arg2 stop:(_Bool *)arg3;	// IMP=0x00100000000574b5
- (void)_executeRequestForEndpoint:(id)arg1 requestData:(id)arg2 expectedResponseClass:(Class)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000005724b
- (id)_requestDataForPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000057215
- (_Bool)_incrementConduitStateError:(short)arg1 serverRetryAfter:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000056e5e
- (_Bool)_processErrorResponse:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000056896
- (id)_processResponse:(id)arg1 payloadClass:(Class)arg2 error:(id *)arg3;	// IMP=0x001000000005653f
- (void)_writeQAStatusData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000562dc
- (void)_didFinishSendingStatusWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000055ef2
- (void)sendStatusData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000055ced
- (void)_didFinishFetchingObject:(id)arg1 objectID:(id)arg2 class:(Class)arg3 endpoint:(id)arg4 response:(id)arg5 error:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00100000000554ec
- (void)_fetchNextObjectOfClass:(Class)arg1 endpoint:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000054dc0
- (void)_fetchPartialObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000054aff
- (void)_processDeclarationItemsWithContext:(id)arg1 infos:(id)arg2 declarationItemClass:(Class)arg3 declarationItemKeyPath:(id)arg4;	// IMP=0x00100000000543d1
- (void)_didFinishFetchingDeclarationItems:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000053da7
- (void)_fetchDeclarationItemsOnlyIfNeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000538aa
- (void)_updateWithSyncTokens:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053531
- (void)updateWithTokensResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000533da
- (void)updateWithPushMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000532b6
- (void)_syncOnlyIfNeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000052dbc
- (void)syncIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000052d1c
- (void)syncWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000052c7f
- (_Bool)isSyncAllowed;	// IMP=0x0010000000052c77
- (void)_didFinishFetchingServerTokens:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000052799
- (void)_fetchTokensOnlyIfNeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000052221
- (void)unenrollWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000051e55
- (void)enrollWithStatusItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005184a
- (id)_statusItemsToSendOnceAfterEnrollment;	// IMP=0x00100000000515dc
- (id)statusItemsToSendDuringEnrollment;	// IMP=0x00100000000515c3
- (id)statusItemsToImplicitlySubscribeTo;	// IMP=0x001000000005150f
- (short)errorState;	// IMP=0x0010000000051345
- (void)_stopObservers;	// IMP=0x00100000000512e9
- (void)_startObservers;	// IMP=0x00100000000511ed
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000050f69
- (id)initWithManagementSourceObjectID:(id)arg1 inContext:(id)arg2;	// IMP=0x0010000000050ed0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

