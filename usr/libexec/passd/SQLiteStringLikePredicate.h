//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SQLiteStringLikePredicate
{
    NSString *_property;	// 8 = 0x8
    NSString *_pattern;	// 16 = 0x10
}

+ (id)predicateWithProperty:(id)arg1 matchingPattern:(id)arg2;	// IMP=0x0020000000085ee6
+ (id)predicateWithProperty:(id)arg1 havingSuffix:(id)arg2;	// IMP=0x0010000000085e56
+ (id)predicateWithProperty:(id)arg1 havingPrefix:(id)arg2;	// IMP=0x0010000000085dc6
- (void).cxx_destruct;	// IMP=0x002000000008637d
@property(readonly) NSString *pattern; // @synthesize pattern=_pattern;
// Error: Property attributes should begin with the type ('T') attribute, property name: property
// Property attributes: (null)

- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000008616a
- (unsigned long long)hash;	// IMP=0x00100000000860b8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000860ad
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x0010000000085f9f

@end

