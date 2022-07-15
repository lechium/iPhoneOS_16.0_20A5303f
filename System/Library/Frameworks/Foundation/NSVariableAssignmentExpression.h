//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSExpression.h"

@class NSVariableExpression;

__attribute__((visibility("hidden")))
@interface NSVariableAssignmentExpression : NSExpression
{
    NSVariableExpression *_assignmentVariable;	// 24 = 0x18
    NSExpression *_subexpression;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000005ad354
- (id)_expressionWithSubstitutionVariables:(id)arg1;	// IMP=0x00000000005adb25
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x00000000005ada7c
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;	// IMP=0x00000000005ad9a7
- (unsigned long long)hash;	// IMP=0x00000000005ad953
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005ad8a2
- (id)predicateFormat;	// IMP=0x00000000005ad7e8
- (id)subexpression;	// IMP=0x00000000005ad7d7
- (id)variable;	// IMP=0x00000000005ad7ba
- (id)assignmentVariable;	// IMP=0x00000000005ad7a9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005ad720
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005ad4e3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005ad3e4
- (void)allowEvaluation;	// IMP=0x00000000005ad35c
- (id)initWithAssignmentExpression:(id)arg1 expression:(id)arg2;	// IMP=0x00000000005ad2ba
- (id)initWithAssignmentVariable:(id)arg1 expression:(id)arg2;	// IMP=0x00000000005ad235
- (void)dealloc;	// IMP=0x00000000005ad1ba

@end
