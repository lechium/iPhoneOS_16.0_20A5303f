//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDateComponents, NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementOnboardedBeforeTimeAgo
{
    NSDateComponents *_dateComponents;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001eb37e
+ (id)requirementIdentifier;	// IMP=0x00100000001eb087
- (void).cxx_destruct;	// IMP=0x00000000001eb49e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001eb403
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001eb386
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001eb373
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001eb2f4
- (id)isSatisfiedWithOnboardingRecord:(id)arg1 dataSource:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001eb136
@property(readonly, nonatomic) NSString *requirementDescription;
- (id)initWithFeatureIdentifier:(id)arg1 daysBeforeCurrentDate:(long long)arg2;	// IMP=0x00000000001eb010

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
