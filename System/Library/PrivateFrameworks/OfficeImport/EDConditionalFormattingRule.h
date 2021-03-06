//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDResources, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface EDConditionalFormattingRule : NSObject
{
    EDResources *mResources;	// 8 = 0x8
    int mType;	// 16 = 0x10
    int mOperator;	// 20 = 0x14
    NSMutableArray *mFormulas;	// 24 = 0x18
    unsigned long long mDifferentialStyleIndex;	// 32 = 0x20
    _Bool mStopIfTrue;	// 40 = 0x28
    _Bool mAppliesToDateOnly;	// 41 = 0x29
    long long mPriority;	// 48 = 0x30
    _Bool mAboveAverage;	// 56 = 0x38
    _Bool mBottom;	// 57 = 0x39
    _Bool mEqualAverage;	// 58 = 0x3a
    _Bool mPercent;	// 59 = 0x3b
    unsigned long long mRank;	// 64 = 0x40
    long long mStdDev;	// 72 = 0x48
    NSString *mText;	// 80 = 0x50
    int mTimePeriod;	// 88 = 0x58
}

+ (id)conditionalFormattingRuleWithResources:(id)arg1;	// IMP=0x00600000003a5d59
- (void).cxx_destruct;	// IMP=0x00000000003a6095
- (id)description;	// IMP=0x00000000003a6057
- (void)setAppliesToDateOnly:(_Bool)arg1;	// IMP=0x00000000003a604e
- (_Bool)appliesToDateOnly;	// IMP=0x00000000003a6045
- (void)setTimePeriod:(int)arg1;	// IMP=0x00000000003a603c
- (int)timePeriod;	// IMP=0x00000000003a6033
- (void)setText:(id)arg1;	// IMP=0x00000000003a5fe8
- (id)text;	// IMP=0x00000000003a5fda
- (void)setStdDev:(long long)arg1;	// IMP=0x00000000003a5fd0
- (long long)stdDev;	// IMP=0x00000000003a5fc6
- (void)setRank:(unsigned long long)arg1;	// IMP=0x00000000003a5fbc
- (unsigned long long)rank;	// IMP=0x00000000003a5fb2
- (void)setPercent:(_Bool)arg1;	// IMP=0x00000000003a5fa9
- (_Bool)percent;	// IMP=0x00000000003a5fa0
- (void)setEqualAverage:(_Bool)arg1;	// IMP=0x00000000003a5f97
- (_Bool)equalAverage;	// IMP=0x00000000003a5f8e
- (void)setBottom:(_Bool)arg1;	// IMP=0x00000000003a5f85
- (_Bool)bottom;	// IMP=0x00000000003a5f7c
- (void)setAboveAverage:(_Bool)arg1;	// IMP=0x00000000003a5f73
- (_Bool)aboveAverage;	// IMP=0x00000000003a5f6a
- (void)setPriority:(long long)arg1;	// IMP=0x00000000003a5f60
- (long long)priority;	// IMP=0x00000000003a5f56
- (void)setStopIfTrue:(_Bool)arg1;	// IMP=0x000000000014e718
- (_Bool)stopIfTrue;	// IMP=0x00000000003a5f4d
- (void)setDifferentialStyle:(id)arg1;	// IMP=0x000000000014f006
- (id)differentialStyle;	// IMP=0x00000000003a5eba
- (void)addFormula:(id)arg1 worksheet:(id)arg2;	// IMP=0x000000000014e8e7
- (id)formulaAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003a5e6f
- (unsigned long long)formulaCount;	// IMP=0x00000000003a5e59
- (void)setOperatorEnum:(int)arg1;	// IMP=0x000000000014e767
- (int)operatorEnum;	// IMP=0x00000000003a5e50
- (void)setType:(int)arg1;	// IMP=0x000000000014e741
- (int)type;	// IMP=0x00000000003a5e47
- (long long)compareToOtherRuleUsingPriority:(id)arg1;	// IMP=0x00000000003a5dbe
- (id)initWithResources:(id)arg1;	// IMP=0x000000000014e63b
- (void)setDifferentialStyleIndex:(unsigned long long)arg1;	// IMP=0x00000000003a60d0
- (unsigned long long)differentialStyleIndex;	// IMP=0x00000000003a60c6

@end

