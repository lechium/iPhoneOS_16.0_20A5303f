//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class CNSocialProfile, NSString;

__attribute__((visibility("hidden")))
@interface CNSocialProfileContactPredicate : CNPredicate
{
    CNSocialProfile *_socialProfile;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000047885
- (void).cxx_destruct;	// IMP=0x0000000000047bdd
@property(readonly, copy, nonatomic) CNSocialProfile *socialProfile; // @synthesize socialProfile=_socialProfile;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000479de
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000047961
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004788d
@property(readonly, copy) NSString *description;
- (id)initWithSocialProfile:(id)arg1;	// IMP=0x0000000000047705
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(_Bool)arg2 service:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000b8a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
