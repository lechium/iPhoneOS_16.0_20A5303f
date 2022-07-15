//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CADOperationGroup.h"

__attribute__((visibility("hidden")))
@interface CADAlarmEngineOperationGroup : CADOperationGroup
{
}

+ (id)whitelistedBundles;	// IMP=0x001000000000697c
+ (_Bool)requiresEventAccess;	// IMP=0x0010000000006974
- (id)_getAlarmOccurrencesInRangeFromStart:(id)arg1 toEnd:(id)arg2 inCalendars:(id)arg3 forDatabase:(struct CalDatabase *)arg4 databaseID:(int)arg5 calendarIDsForThisDatabase:(id)arg6 accessLogger:(CDUnknownBlockType)arg7;	// IMP=0x0000000000007249
- (void)CADDatabaseGetAlarmOccurrencesInRangeFromStart:(id)arg1 toEnd:(id)arg2 inCalendars:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000006b8e
- (void)CADDatabaseGetAlarmWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006989

@end
