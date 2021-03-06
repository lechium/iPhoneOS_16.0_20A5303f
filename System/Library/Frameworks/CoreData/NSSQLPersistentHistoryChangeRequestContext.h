//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSFetchRequest, NSPersistentHistoryChangeRequest;

__attribute__((visibility("hidden")))
@interface NSSQLPersistentHistoryChangeRequestContext
{
    NSFetchRequest *_fetchRequest;	// 88 = 0x58
    _Bool _shouldUseBatches;	// 96 = 0x60
}

@property(readonly, nonatomic) _Bool shouldUseBatches; // @synthesize shouldUseBatches=_shouldUseBatches;
- (_Bool)executeRequestUsingConnection:(id)arg1;	// IMP=0x0000000000291793
- (void)executePrologue;	// IMP=0x0000000000291652
- (_Bool)isWritingRequest;	// IMP=0x0000000000291583
- (id)createDeleteTransactionsRequestContext;	// IMP=0x00000000002914c5
- (id)createRequestContextForChangesWithTransactionIDs:(id)arg1;	// IMP=0x0000000000291431
- (id)fetchRequestContextForChanges;	// IMP=0x0000000000291157
- (id)createCountRequestContextForChanges;	// IMP=0x00000000002910f1
@property(readonly, nonatomic) NSPersistentHistoryChangeRequest *request;
- (void)dealloc;	// IMP=0x0000000000290ccd
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;	// IMP=0x0000000000290c4d

@end

