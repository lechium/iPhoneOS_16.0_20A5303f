//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/_HKFitnessFriendAchievement.h>

@class NSString;

@interface _HKFitnessFriendAchievement (HDCodingSupport)
+ (id)createWithCodable:(id)arg1;	// IMP=0x001000000002b84b
+ (Class)hd_dataEntityClass;	// IMP=0x001000000002e350
- (_Bool)addCodableRepresentationToCollection:(id)arg1;	// IMP=0x0010000000021eac
- (id)codableRepresentationForSync;	// IMP=0x0010000000021f20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
