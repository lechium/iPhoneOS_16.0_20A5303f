//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile, NSString;

__attribute__((visibility("hidden")))
@interface HDMedicationScheduleDailyAnalytics : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
}

+ (id)_medicationCountForSchedulesWithProfile:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002bd4e
- (void).cxx_destruct;	// IMP=0x000000000002bfbe
- (id)_makeMedicationCountPayloadForSchedulesWithProfile:(id)arg1;	// IMP=0x000000000002bbc0
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002bb42
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002bb3a
@property(readonly, nonatomic) NSString *eventName;
@property(readonly, nonatomic) _Bool isEventSubmissionIHAGated;
- (id)initWithProfile:(id)arg1;	// IMP=0x000000000002ba5e

@end
