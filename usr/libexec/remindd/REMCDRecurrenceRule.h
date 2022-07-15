//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate, REMCDReminder;

@interface REMCDRecurrenceRule
{
}

+ (id)cdEntityName;	// IMP=0x001000000006bd71
+ (_Bool)isAbstract;	// IMP=0x001000000006bd69
+ (id)keyPathsForValuesAffectingEffectiveMinimumSupportedVersion;	// IMP=0x001000000004dc3b
+ (id)fetchRequest;	// IMP=0x001000000004e00e
+ (_Bool);	// IMP=0x00100000003da5d0
+ (id)newCloudObjectForRecord:(id)arg1 account:(id)arg2 context:(id)arg3;	// IMP=0x00100000003d9240
+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;	// IMP=0x00100000003d8dc0
+ (id)recordTypes;	// IMP=0x00100000003d8ca0
- (void)debug_lowLevelRemoveFromParent;	// IMP=0x002000000004dcde
- (long long)parentEffectiveMinimumSupportedVersion;	// IMP=0x001000000004dc5b
- (_Bool)isConnectedToAccountObject:(id)arg1;	// IMP=0x001000000004dbc4
- (void)fixBrokenReferences;	// IMP=0x00100000003daed0
- (void)cleanUpAfterLocalObjectMerge;	// IMP=0x00100000003da880
- (_Bool)mergeWithLocalObject:(id)arg1;	// IMP=0x00100000003da660
- (id)existingLocalObjectToMergeWithPredicate:(id)arg1;	// IMP=0x00100000003da5f0
- (id)parentCloudObject;	// IMP=0x00100000003da580
- (id)newlyCreatedRecord;	// IMP=0x00100000003da520
- (void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2;	// IMP=0x00100000003d9c60
- (_Bool)shouldMarkAsDeletedInsteadOfDeletingImmediately;	// IMP=0x00100000003d93b0
- (_Bool)supportsDeletionByTTL;	// IMP=0x00100000003d9390
- (id)recordType;	// IMP=0x00100000003d9350
- (id)recordZoneName;	// IMP=0x00100000003d92f0

// Remaining properties
@property(retain, nonatomic) NSData *daysOfTheMonth; // @dynamic daysOfTheMonth;
@property(retain, nonatomic) NSData *daysOfTheWeek; // @dynamic daysOfTheWeek;
@property(retain, nonatomic) NSData *daysOfTheYear; // @dynamic daysOfTheYear;
@property(copy, nonatomic) NSDate *endDate; // @dynamic endDate;
@property(nonatomic) short firstDayOfTheWeek; // @dynamic firstDayOfTheWeek;
@property(nonatomic) short frequency; // @dynamic frequency;
@property(nonatomic) short interval; // @dynamic interval;
@property(retain, nonatomic) NSData *monthsOfTheYear; // @dynamic monthsOfTheYear;
@property(nonatomic) long long occurrenceCount; // @dynamic occurrenceCount;
@property(retain, nonatomic) REMCDReminder *reminder; // @dynamic reminder;
@property(retain, nonatomic) NSData *setPositions; // @dynamic setPositions;
@property(retain, nonatomic) NSData *weeksOfTheYear; // @dynamic weeksOfTheYear;

@end
