//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate, NSNumber, NSSet, NSString, NSUUID, REMCDTemplate;

@interface REMCDSavedReminder
{
}

+ (id)keyPathsForValuesAffectingEffectiveMinimumSupportedVersion;	// IMP=0x00200000002b6290
+ (id)cdEntityName;	// IMP=0x00100000002b6110
+ (_Bool)isAbstract;	// IMP=0x00100000002b60f0
+ (_Bool)shouldAttemptLocalObjectMerge;	// IMP=0x00100000003783d0
+ (id)newCloudObjectForRecord:(id)arg1 account:(id)arg2 context:(id)arg3;	// IMP=0x0010000000376400
+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;	// IMP=0x0010000000375f70
+ (id)recordTypes;	// IMP=0x0010000000375e50
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00400000002b68e0
- (_Bool)isConnectedToAccountObject:(id)arg1;	// IMP=0x00100000002b64c0
- (long long)parentEffectiveMinimumSupportedVersion;	// IMP=0x00100000002b61a0
- (_Bool)shouldUseResolutionTokenMapForMergingData;	// IMP=0x0010000000375b70
- (id)objectsToBeDeletedBeforeThisObject;	// IMP=0x0010000000378780
- (void)cleanUpAfterLocalObjectMerge;	// IMP=0x0010000000378680
- (_Bool)mergeWithLocalObject:(id)arg1;	// IMP=0x0010000000378460
- (id)existingLocalObjectToMergeWithPredicate:(id)arg1;	// IMP=0x00100000003783f0
- (void)fixBrokenReferences;	// IMP=0x0010000000378390
- (id)newlyCreatedRecord;	// IMP=0x0010000000377ce0
- (void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2;	// IMP=0x0010000000377190
- (_Bool)shouldMarkAsDeletedInsteadOfDeletingImmediately;	// IMP=0x0010000000376570
- (_Bool)supportsDeletionByTTL;	// IMP=0x0010000000376550
- (id)recordType;	// IMP=0x0010000000376510
- (id)recordZoneName;	// IMP=0x00100000003764b0

// Remaining properties
@property(nonatomic, copy) NSSet *attachments; // @dynamic attachments;
@property(nonatomic, copy) NSDate *creationDate; // @dynamic creationDate;
@property(nonatomic, copy) NSDate *displayDateDate; // @dynamic displayDateDate;
@property(nonatomic) _Bool displayDateIsAllDay; // @dynamic displayDateIsAllDay;
@property(nonatomic) _Bool hasHashtags; // @dynamic hasHashtags;
@property(nonatomic) _Bool hasLocationTriggersOrVehicleEventTriggers; // @dynamic hasLocationTriggersOrVehicleEventTriggers;
@property(nonatomic, copy) NSData *metadata; // @dynamic metadata;
@property(nonatomic, copy) NSUUID *parentSavedReminderIdentifier; // @dynamic parentSavedReminderIdentifier;
@property(nonatomic, retain) NSNumber *priority; // @dynamic priority;
@property(nonatomic, retain) REMCDTemplate *template; // @dynamic template;
@property(nonatomic, copy) NSString *title; // @dynamic title;

@end
