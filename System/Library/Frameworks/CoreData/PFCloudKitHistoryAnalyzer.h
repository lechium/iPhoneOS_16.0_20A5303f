//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSManagedObjectContext, NSPersistentHistoryToken;

__attribute__((visibility("hidden")))
@interface PFCloudKitHistoryAnalyzer
{
    NSManagedObjectContext *_managedObjectContext;	// 16 = 0x10
    NSPersistentHistoryToken *_lastProcessedToken;	// 24 = 0x18
}

+ (_Bool)isPrivateContextName:(id)arg1;	// IMP=0x006000000016309c
+ (_Bool)isPrivateTransactionAuthor:(id)arg1;	// IMP=0x0060000000162fe8
+ (_Bool)isPrivateTransaction:(id)arg1;	// IMP=0x0060000000162f6f
- (_Bool)processTransaction:(id)arg1 withContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000162c1a
- (id)instantiateNewAnalyzerContextForChangesInStore:(id)arg1;	// IMP=0x0000000000162bd2
- (void)dealloc;	// IMP=0x0000000000162b6e
- (id)initWithOptions:(id)arg1 managedObjectContext:(id)arg2;	// IMP=0x0000000000162a3b

@end
