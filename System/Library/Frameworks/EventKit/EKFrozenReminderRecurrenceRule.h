//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface EKFrozenReminderRecurrenceRule
{
}

+ (long long)convertToReminderKitWeekday:(int)arg1;	// IMP=0x008000000006c146
+ (int)convertFromReminderKitWeekday:(long long)arg1;	// IMP=0x008000000006c0da
+ (long long)convertToReminderKitFrequency:(int)arg1;	// IMP=0x008000000006be78
+ (int)convertFromReminderKitFrequency:(long long)arg1;	// IMP=0x008000000006be0c
+ (Class)meltedClass;	// IMP=0x008000000006b4f5
- (void)loadSpecifierDaysOfTheWeek:(id *)arg1 daysOfTheMonth:(id *)arg2 monthsOfTheYear:(id *)arg3 weeksOfTheYear:(id *)arg4 daysOfTheYear:(id *)arg5 setPositions:(id *)arg6;	// IMP=0x000000000006c974
- (id)specifier;	// IMP=0x000000000006c76d
- (id)remDaysOfTheWeekFromEKDaysOfTheWeek:(id)arg1;	// IMP=0x000000000006c447
- (id)daysOfTheWeekFromREMRecurrenceRule;	// IMP=0x000000000006c1c2
- (long long)remWeekdayToEKWeekday:(long long)arg1;	// IMP=0x000000000006c1b9
- (long long)ekWeekdayToREMWeekday:(long long)arg1;	// IMP=0x000000000006c1b0
- (int)firstDayOfTheWeekRaw;	// IMP=0x000000000006bfd1
- (long long)interval;	// IMP=0x000000000006bed9
- (int)frequencyRaw;	// IMP=0x000000000006bd03
- (unsigned long long)count;	// IMP=0x000000000006bbea
- (id)endDate;	// IMP=0x000000000006bb0a
- (id)uuid;	// IMP=0x000000000006baf8
- (id)addUpdatedRecurrenceRule:(id)arg1;	// IMP=0x000000000006b686
- (id)_recurrenceRule;	// IMP=0x000000000006b66e
- (id)remObjectID;	// IMP=0x000000000006b5e6
- (id)uniqueIdentifier;	// IMP=0x000000000006b506
- (id)initWithAlternateUniverseObject:(id)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3;	// IMP=0x000000000006b25b
- (id)initWithREMObject:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3;	// IMP=0x000000000006b0ec
- (id)initWithREMObject:(id)arg1 inStore:(id)arg2;	// IMP=0x000000000006b0d7

@end

