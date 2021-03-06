//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSCountedSet, _DKKnowledgeStorage;

@protocol _DKKnowledgeStorageEventNotificationDelegate

@optional
- (void)knowledgeStorage:(_DKKnowledgeStorage *)arg1 didDeleteSyncedEvents:(NSArray *)arg2;
- (void)knowledgeStorage:(_DKKnowledgeStorage *)arg1 didInsertSyncedEvents:(NSArray *)arg2;
- (void)knowledgeStorage:(_DKKnowledgeStorage *)arg1 didHaveInsertsAndDeletesWithCount:(unsigned long long)arg2;
- (void)knowledgeStorage:(_DKKnowledgeStorage *)arg1 didTombstoneEventsWithStreamNameCounts:(NSCountedSet *)arg2;
- (void)knowledgeStorage:(_DKKnowledgeStorage *)arg1 didDeleteEventsWithStreamNameCounts:(NSCountedSet *)arg2;
- (void)knowledgeStorage:(_DKKnowledgeStorage *)arg1 didInsertLocalEventsWithStreamNameCounts:(NSCountedSet *)arg2;
- (void)knowledgeStorage:(_DKKnowledgeStorage *)arg1 didInsertEventsWithStreamNameCounts:(NSCountedSet *)arg2;
@end

