//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNAccessAuthorization, CNContactStore, CNContactsEnvironment, CNiOSAddressBookDataMapper, NSString, NSXPCConnection;
@protocol CNContactsLogger, CNRegulatoryLogger, CNScheduler, OS_tcc_identity;

@interface ContactsService : NSObject
{
    CNContactStore *_contactStore;	// 8 = 0x8
    CNiOSAddressBookDataMapper *_dataMapper;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    id <CNScheduler> _workQueue;	// 32 = 0x20
    id <CNContactsLogger> _logger;	// 40 = 0x28
    CNContactsEnvironment *_environment;	// 48 = 0x30
    CNAccessAuthorization *_accessAuthorization;	// 56 = 0x38
    id <CNRegulatoryLogger> _regulatoryLogger;	// 64 = 0x40
    NSObject<OS_tcc_identity> *_assumedIdentity;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000000833c
@property(retain, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity; // @synthesize assumedIdentity=_assumedIdentity;
@property(retain, nonatomic) id <CNRegulatoryLogger> regulatoryLogger; // @synthesize regulatoryLogger=_regulatoryLogger;
@property(readonly, nonatomic) CNAccessAuthorization *accessAuthorization; // @synthesize accessAuthorization=_accessAuthorization;
@property(readonly, nonatomic) CNContactsEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) id <CNContactsLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <CNScheduler> workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) CNiOSAddressBookDataMapper *dataMapper; // @synthesize dataMapper=_dataMapper;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void)authorizedKeysForContactKeys:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008214
- (void)bestSenderIdentityForHandle:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007f98
- (void)geminiResultForContact:(id)arg1 substituteDefaultForDangling:(_Bool)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000007d11
- (void)verifyIndexWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007b29
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000078f7
- (void)writeFavoritesPropertyListData:(id)arg1 toPath:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000007483
- (void)favoritesEntryDictionariesAtPath:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007175
- (_Bool)shouldNotReportFavoritesError:(id)arg1;	// IMP=0x001000000000701c
- (void)reportFavoritesIssue:(id)arg1;	// IMP=0x0010000000006fc2
- (void)currentHistoryAnchorWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006e70
- (void)currentHistoryTokenWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006d50
- (void)executeChangeHistoryClearRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006b0d
- (void)changeHistoryWithFetchRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000069b8
- (void)unregisterChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006729
- (void)registerChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000649a
- (void)userActivityForContact:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000620d
- (void)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005f32
- (void)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000005bd0
- (void)setMeContact:(id)arg1 forContainer:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000058f6
- (void)setMeContact:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000571d
- (void)setDefaultAccountIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005505
- (void)defaultContainerIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005404
- (void)subgroupsOfGroupWithIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000052af
- (void)groupsMatchingPredicate:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000515a
- (void)accountsMatchingPredicate:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005005
- (void)policyForContainerWithIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004eb0
- (void)serverSearchContainersMatchingPredicate:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004d5b
- (void)containersMatchingPredicate:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004c06
- (void)executeSaveRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000049a8
- (void)meContactIdentifiersWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000047bf
- (void)identifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004697
- (void)progressiveContactsForFetchRequest:(id)arg1 progressHandler:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000042f5
- (void)encodedContactsAndCursorForFetchRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003de2
- (void)contactsForFetchRequest:(id)arg1 withMatchInfoReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003a75
- (void)sectionListOffsetsForSortOrder:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000384f
- (void)contactCountForFetchRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000359d
- (void)unifiedContactCountWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003475
- (void)performWorkServicingSPI:(CDUnknownBlockType)arg1 authenticationFailureHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000033e0
- (void)performServicingRequestWork:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002fb9
- (void)performWorkWithContactStore:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002e70
- (void)performAsyncWorkWithDataMapper:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002ce3
- (void)performWorkWithDataMapper:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002bc8
- (_Bool)clientAllowedToUseSPI:(id *)arg1;	// IMP=0x0010000000002795
- (void)configureAssumedIdentityWithOptions:(id)arg1;	// IMP=0x001000000000278f
- (id)unitTestBaseURLWithOptions:(id)arg1;	// IMP=0x001000000000268b
- (void)configureUnitTestWithOptions:(id)arg1;	// IMP=0x001000000000227b
- (void)configureServiceWithOptions:(id)arg1;	// IMP=0x0010000000002226
- (id)initWithDataMapper:(id)arg1 dataMapperConfiguration:(id)arg2 workQueue:(id)arg3 connection:(id)arg4 accessAuthorization:(id)arg5;	// IMP=0x0010000000001fd7
- (id)initWithWorkQueue:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000001dd9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

