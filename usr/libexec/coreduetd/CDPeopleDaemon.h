//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSXPCListener.h>

@class NSObject, NSString, _CDInteractionAdviceEngine, _CDInteractionPolicies, _CDInteractionStore, _DKDataProtectionStateMonitor, _PSContactSuggester, _PSEnsembleModel, _PSFamilyRecommender, _PSMessagesPinningSuggester, _PSSuggester;
@protocol OS_dispatch_queue, _DKKnowledgeQuerying><_DKKnowledgeSaving;

@interface CDPeopleDaemon : NSXPCListener
{
    _CDInteractionAdviceEngine *_advisor;	// 8 = 0x8
    _DKDataProtectionStateMonitor *_dataProtection;	// 16 = 0x10
    _CDInteractionPolicies *_policies;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    _Bool _isKnowledgeAgent;	// 40 = 0x28
    _CDInteractionStore *_store;	// 48 = 0x30
    id <_DKKnowledgeQuerying><_DKKnowledgeSaving> _knowledgeStore;	// 56 = 0x38
    _PSSuggester *_suggester;	// 64 = 0x40
    _PSEnsembleModel *_ensembleModel;	// 72 = 0x48
    _PSFamilyRecommender *_familyRecommender;	// 80 = 0x50
    _PSMessagesPinningSuggester *_messagesPinningSuggester;	// 88 = 0x58
    _PSContactSuggester *_contactSuggester;	// 96 = 0x60
}

+ (id)readRepopulationCheckpoint;	// IMP=0x0020000000006ecf
+ (_Bool)writeRepopulationCheckpoint:(id)arg1;	// IMP=0x0010000000006df1
- (void).cxx_destruct;	// IMP=0x002000000000bcd0
@property(nonatomic) _Bool isKnowledgeAgent; // @synthesize isKnowledgeAgent=_isKnowledgeAgent;
@property(readonly, nonatomic) _PSContactSuggester *contactSuggester; // @synthesize contactSuggester=_contactSuggester;
@property(readonly, nonatomic) _PSMessagesPinningSuggester *messagesPinningSuggester; // @synthesize messagesPinningSuggester=_messagesPinningSuggester;
@property(readonly, nonatomic) _PSFamilyRecommender *familyRecommender; // @synthesize familyRecommender=_familyRecommender;
@property(readonly, nonatomic) _PSEnsembleModel *ensembleModel; // @synthesize ensembleModel=_ensembleModel;
@property(readonly, nonatomic) _PSSuggester *suggester; // @synthesize suggester=_suggester;
@property(readonly, nonatomic) id <_DKKnowledgeQuerying><_DKKnowledgeSaving> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
@property(readonly, nonatomic) _CDInteractionStore *store; // @synthesize store=_store;
- (void)reportPeopleStatistics;	// IMP=0x001000000000b8fb
- (void)logSizeOfStorage:(id)arg1;	// IMP=0x001000000000b59c
- (void)populateAppUsageCache;	// IMP=0x001000000000b42a
- (void)_maintainPrivacy;	// IMP=0x001000000000ae43
- (void)maintainPrivacy;	// IMP=0x001000000000ac67
- (void)tuneSocialAdvisorUsingSettings:(id)arg1 heartBeatHandler:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000ab2f
- (void)adviseSocialInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000a9a3
- (void)adviseInteractionsForKeywordsInString:(id)arg1 usingSettings:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a82e
- (void)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a6b9
- (void)adviseInteractionsUsingSettings:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a561
- (void)rankCandidateContacts:(id)arg1 usingSettings:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a3ec
- (void)contactSuggestionsWithMaxSuggestions:(id)arg1 excludedContactIds:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a3a0
- (void)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)arg1 daysAgo:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a1ea
- (void)rankedHandlesFromCandidateHandles:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a07a
- (void)rankedSiriMLCRHandlesFromContext:(id)arg1 handles:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009eee
- (void)photosContactInferencesSuggestionsWithPredictionContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009ea2
- (void)photosRelationshipSuggestionsWithPredictionContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009e56
- (void)familyRecommendedSuggestionsWithPredictionContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009e0a
- (void)rankedFamilySuggestionsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009dbe
- (void)provideMessagesPinningFeedback:(id)arg1;	// IMP=0x0010000000009db8
- (void)rankedMessagesPinsWithMaxSuggestions:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009d6c
- (void)rankedAutocompleteSuggestionsFromContext:(id)arg1 candidates:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009be0
- (void)rankedSiriNLContactSuggestionsFromContext:(id)arg1 maxSuggestions:(id)arg2 interactionId:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000009a1a
- (void)rankedGlobalSuggestionsFromContext:(id)arg1 contactsOnly:(_Bool)arg2 maxSuggestions:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000009870
- (void)rankedNameSuggestionsFromContext:(id)arg1 name:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000096e4
- (void)provideFeedbackForContactsAutocompleteSuggestions:(id)arg1;	// IMP=0x00100000000096de
- (void)autocompleteSearchResultsWithPredictionContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000956e
- (void)zkwSuggestionsFromContext:(id)arg1 maxSuggestions:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000093cd
- (void)mapsSuggestionsFromContext:(id)arg1 maxSuggestions:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000922c
- (void)shareExtensionSuggestionsFromContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000090bc
- (void)suggestInteractionsFromContext:(id)arg1 maxSuggestions:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008f16
- (void)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008c8b
- (void)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008a00
- (void)deleteInteractionsWithBundleId:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008793
- (void)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000084f2
- (void)countContactsUsingPredicate:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008285
- (void)countInteractionsUsingPredicate:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008018
- (void)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000007d71
- (void)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000007a94
- (void)recordInteractions:(id)arg1 enforceDataLimits:(_Bool)arg2 enforcePrivacy:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000078a3
- (_Bool)isClassCLocked;	// IMP=0x0010000000007879
- (_Bool)requestInteractionRepopulation;	// IMP=0x0010000000006f9e
- (_Bool)adjustPosixPermissionsForStorage:(id)arg1;	// IMP=0x0010000000006615
- (_Bool)versionCheckAndUpgradeIfNecessaryAndPossible;	// IMP=0x0010000000006329
- (void)writeVersionNumberToDefaults:(unsigned long long)arg1;	// IMP=0x00100000000062c2
- (long long)readVersionNumberFromDefaults;	// IMP=0x0010000000006270
- (void)handleError:(id)arg1;	// IMP=0x0010000000005ffb
- (void)refreshPeopleSuggesterCaches;	// IMP=0x0010000000005fa2
- (void)populatePeopleSuggesterCaches;	// IMP=0x0010000000005e4e
- (void)setupDataProtectionChangeHandler;	// IMP=0x0010000000005b56
- (id)workQueue;	// IMP=0x0010000000005b41
- (id)initWithKnowledgeStore:(id)arg1 interactionStore:(id)arg2;	// IMP=0x0010000000005310
- (id)initWithKnowledgeStore:(id)arg1;	// IMP=0x0010000000005263
- (id)initWithUserKnowledgeStore:(id)arg1;	// IMP=0x00100000000051b3
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000004ec6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

