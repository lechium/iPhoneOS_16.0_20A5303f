//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CPLEngineStorageImplementation-Protocol.h"

@class CPLRecordChange, CPLScopeFilter, CPLScopedIdentifier, NSString;
@protocol NSFastEnumeration;

@protocol CPLEngineCloudCacheImplementation <CPLEngineStorageImplementation>
- (_Bool)popCloudScopedIdentifiersToCheck:(id *)arg1 otherScopeIndex:(long long)arg2 maxCount:(long long)arg3 deletedCount:(long long *)arg4 error:(id *)arg5;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (id <NSFastEnumeration>)allRecordsIsFinal:(_Bool)arg1;
- (id <NSFastEnumeration>)recordsOfClass:(Class)arg1 isFinal:(_Bool)arg2;
- (_Bool)discardStagedChangesWithScopeFilter:(CPLScopeFilter *)arg1 error:(id *)arg2;
- (_Bool)discardStagedChangesForScopeWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (_Bool)commitStagedChangesForScopeWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (_Bool)confirmAllRecordsWithError:(id *)arg1;
- (_Bool)remapAllRecordsWithPreviousScopedIdentifier:(CPLScopedIdentifier *)arg1 newScopedIdentifier:(CPLScopedIdentifier *)arg2 error:(id *)arg3;
- (_Bool)ackownledgeRecordWithScopedIdentifier:(CPLScopedIdentifier *)arg1 error:(id *)arg2;
- (unsigned long long)countOfRecordsAcknowledgedByClientWithRelatedScopedIdentifier:(CPLScopedIdentifier *)arg1 class:(Class)arg2;
- (id <NSFastEnumeration>)recordsAcknowledgedByClientWithRelatedScopedIdentifier:(CPLScopedIdentifier *)arg1 class:(Class)arg2;
- (_Bool)hasRecordAcknowledgedByClientWithScopedIdentifier:(CPLScopedIdentifier *)arg1;
- (CPLRecordChange *)recordAcknowledgedByClientWithScopedIdentifier:(CPLScopedIdentifier *)arg1;
- (_Bool)hasRecordWithScopedIdentifier:(CPLScopedIdentifier *)arg1;
- (CPLScopedIdentifier *)relatedScopedIdentifierForRecordWithScopedIdentifier:(CPLScopedIdentifier *)arg1 isFinal:(_Bool)arg2;
- (id <NSFastEnumeration>)recordsWithRelatedScopedIdentifier:(CPLScopedIdentifier *)arg1 class:(Class)arg2 isFinal:(_Bool)arg3;
- (id <NSFastEnumeration>)recordsWithRelatedScopedIdentifier:(CPLScopedIdentifier *)arg1 isFinal:(_Bool)arg2;
- (CPLRecordChange *)recordWithScopedIdentifier:(CPLScopedIdentifier *)arg1 isConfirmed:(_Bool *)arg2 isStaged:(_Bool *)arg3;
- (CPLRecordChange *)recordWithScopedIdentifier:(CPLScopedIdentifier *)arg1 isFinal:(_Bool)arg2 isConfirmed:(_Bool *)arg3;
- (_Bool)deleteRecordWithScopedIdentifier:(CPLScopedIdentifier *)arg1 isFinal:(_Bool)arg2 error:(id *)arg3;
- (_Bool)updateStagedRecord:(CPLRecordChange *)arg1 error:(id *)arg2;
- (_Bool)updateFinalRecord:(CPLRecordChange *)arg1 confirmed:(_Bool)arg2 error:(id *)arg3;
- (_Bool)addRecord:(CPLRecordChange *)arg1 isFinal:(_Bool)arg2 error:(id *)arg3;
@end
