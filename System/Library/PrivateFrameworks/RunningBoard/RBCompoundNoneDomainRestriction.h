//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBDomainRestriction.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface RBCompoundNoneDomainRestriction : RBDomainRestriction
{
    NSArray *_restrictions;	// 8 = 0x8
}

+ (id)domainRestrictionForDictionary:(id)arg1 withError:(id *)arg2;	// IMP=0x0060000000073c29
- (void).cxx_destruct;	// IMP=0x0000000000074646
- (id)description;	// IMP=0x00000000000745c2
- (unsigned long long)hash;	// IMP=0x00000000000745a5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000074520
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000074515
- (id)allEntitlements;	// IMP=0x0000000000074349
- (_Bool)allowsContext:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000073fb4
- (id)_initWithRestrictions:(id)arg1;	// IMP=0x0000000000073b98

@end

