//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSExpression.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSymbolicExpression : NSExpression
{
    NSString *_token;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000588e40
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000589127
- (unsigned long long)hash;	// IMP=0x000000000058910a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005890c3
- (id)constantValue;	// IMP=0x00000000005890b2
- (id)predicateFormat;	// IMP=0x00000000005890a1
- (void)dealloc;	// IMP=0x000000000058903c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000589005
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000588f0c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000588e48
- (id)initWithString:(id)arg1;	// IMP=0x0000000000588d85

@end

