//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSExpression.h"

__attribute__((visibility("hidden")))
@interface NSAnyKeyExpression : NSExpression
{
}

+ (_Bool)_allowsEvaluation;	// IMP=0x00800000004442a4
+ (_Bool)supportsSecureCoding;	// IMP=0x008000000044429c
+ (id)defaultInstance;	// IMP=0x008000000044425c
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x008000000044424f
+ (void)initialize;	// IMP=0x008000000044421e
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;	// IMP=0x000000000044445b
- (id)predicateFormat;	// IMP=0x000000000044444e
- (id)init;	// IMP=0x0000000000444445
- (id)_initPrivate;	// IMP=0x00000000004443ee
- (unsigned long long)hash;	// IMP=0x00000000004443e3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004443bb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004443b2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000044434e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004442ac
- (id)autorelease;	// IMP=0x0000000000444293
- (_Bool)_tryRetain;	// IMP=0x000000000044428b
- (_Bool)_isDeallocating;	// IMP=0x0000000000444283
- (oneway void)release;	// IMP=0x000000000044427d
- (unsigned long long)retainCount;	// IMP=0x0000000000444272
- (id)retain;	// IMP=0x0000000000444269

@end

