//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSValue;

@interface VOTBrailleGestureHalfPattern : NSObject
{
    NSValue *_topDot;	// 8 = 0x8
    NSValue *_middleDot;	// 16 = 0x10
    NSValue *_bottomDot;	// 24 = 0x18
    NSValue *_fourthDot;	// 32 = 0x20
}

+ (id)halfPatternWithDots:(id)arg1;	// IMP=0x002000000002c449
+ (id)halfPatternWithDictionaryRepresentation:(id)arg1;	// IMP=0x001000000002c29d
+ (id)halfPatternWithTopDot:(id)arg1 middleDot:(id)arg2 bottomDot:(id)arg3 fourthDot:(id)arg4;	// IMP=0x001000000002c1c3
+ (id)halfPatternWithTopDot:(id)arg1 middleDot:(id)arg2 bottomDot:(id)arg3;	// IMP=0x001000000002c1ae
- (void).cxx_destruct;	// IMP=0x002000000002cea0
@property(retain, nonatomic) NSValue *fourthDot; // @synthesize fourthDot=_fourthDot;
@property(retain, nonatomic) NSValue *bottomDot; // @synthesize bottomDot=_bottomDot;
@property(retain, nonatomic) NSValue *middleDot; // @synthesize middleDot=_middleDot;
@property(retain, nonatomic) NSValue *topDot; // @synthesize topDot=_topDot;
- (id)dotArrayReversed:(_Bool)arg1;	// IMP=0x001000000002cb38
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)description;	// IMP=0x001000000002c7cc
@property(readonly, nonatomic) unsigned long long count;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002c61f

@end

