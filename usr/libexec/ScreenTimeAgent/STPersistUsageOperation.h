//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSManagedObjectContext, NSManagedObjectID, NSNumber, NSString, STFetchUsageOperation, STFetchedUsageResults;
@protocol STPersistenceControllerProtocol;

@interface STPersistUsageOperation
{
    NSManagedObjectContext *_moc;	// 8 = 0x8
    id <STPersistenceControllerProtocol> _persistenceController;	// 16 = 0x10
    STFetchedUsageResults *_fetchedUsageResults;	// 24 = 0x18
    STFetchUsageOperation *_fetchUsageOperation;	// 32 = 0x20
    NSString *_deviceIdentifier;	// 40 = 0x28
    NSNumber *_userDSID;	// 48 = 0x30
    NSManagedObjectID *_userDeviceStateID;	// 56 = 0x38
    NSDate *_referenceDate;	// 64 = 0x40
    long long _duration;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000062bfb
@property(readonly, nonatomic) long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
@property(copy, nonatomic) NSManagedObjectID *userDeviceStateID; // @synthesize userDeviceStateID=_userDeviceStateID;
@property(copy, nonatomic) NSNumber *userDSID; // @synthesize userDSID=_userDSID;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) STFetchUsageOperation *fetchUsageOperation; // @synthesize fetchUsageOperation=_fetchUsageOperation;
@property(retain, nonatomic) STFetchedUsageResults *fetchedUsageResults; // @synthesize fetchedUsageResults=_fetchedUsageResults;
@property(retain, nonatomic) id <STPersistenceControllerProtocol> persistenceController; // @synthesize persistenceController=_persistenceController;
@property(retain, nonatomic) NSManagedObjectContext *moc; // @synthesize moc=_moc;
- (void)_purgeExpiredAggregateUsageForUser:(id)arg1 managedObjectContext:(id)arg2;	// IMP=0x00100000000625fb
- (void)_updateUsageBlock:(id)arg1 usageCategory:(id)arg2 countedItemsByBundleIdentifier:(id)arg3 webUsageReports:(id)arg4 applicationUsageReports:(id)arg5 shareWebUsage:(_Bool)arg6 inManagedObjectContext:(id)arg7;	// IMP=0x0010000000061726
- (id)_usageCategoryByIdentifierForCategories:(id)arg1;	// IMP=0x001000000006154e
- (id)_countedItemByBundleTrustIdentifiersForCountedItems:(id)arg1;	// IMP=0x001000000006132a
- (id)_usageBlockByTrimmedStartDate:(id)arg1 reportStartDate:(id)arg2 durationInMinutes:(unsigned long long)arg3 calendar:(id)arg4;	// IMP=0x001000000006103a
- (_Bool)_persistUsageReports:(id)arg1 usage:(id)arg2 aggregateUsage:(_Bool)arg3 reportStartDate:(id)arg4 durationInMinutes:(unsigned long long)arg5 calendar:(id)arg6 shareWebUsage:(_Bool)arg7 inManagedObjectContext:(id)arg8 error:(id *)arg9;	// IMP=0x001000000005fddb
- (id)_usagesForUser:(id)arg1 devices:(id)arg2 error:(id *)arg3;	// IMP=0x001000000005fbcb
- (id)_fetchOrCreateUsageForUser:(id)arg1 device:(id)arg2 inManagedObjectContext:(id)arg3 error:(id *)arg4;	// IMP=0x001000000005fa17
- (id)_ensureUsageExistForUser:(id)arg1 forCoreDuetIdentifiers:(id)arg2 inManagedObjectContext:(id)arg3 error:(id *)arg4;	// IMP=0x001000000005f1f4
- (_Bool)_persistFetchedUsageReportWithUser:(id)arg1 device:(id)arg2 inManagedObjectContext:(id)arg3 error:(id *)arg4;	// IMP=0x001000000005e8f8
- (void)_runWithManagedObjectContext:(id)arg1;	// IMP=0x001000000005e0df
- (id)_truncateDate:(id)arg1 usingCalendar:(id)arg2;	// IMP=0x001000000005dfff
- (void)main;	// IMP=0x001000000005dd2f
- (_Bool)isAsynchronous;	// IMP=0x001000000005dd27
- (id)initWithManagedObjectContext:(id)arg1 fetchUsageOperation:(id)arg2 userDeviceState:(id)arg3 referenceDate:(id)arg4 duration:(long long)arg5;	// IMP=0x001000000005db6b
- (id)initWithPersistenceController:(id)arg1 fetchedUsageResults:(id)arg2 userDSID:(id)arg3 deviceIdentifier:(id)arg4 duration:(long long)arg5;	// IMP=0x001000000005da39

@end

