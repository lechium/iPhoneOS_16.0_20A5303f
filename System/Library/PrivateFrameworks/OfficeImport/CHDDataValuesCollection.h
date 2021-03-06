//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHDDataValuesCollection : NSObject
{
    struct __CFData *mPackedValues;	// 8 = 0x8
    unsigned long long mDataValueCount;	// 16 = 0x10
    struct __CFDictionary *mIndexToDataValueMap;	// 24 = 0x18
    _Bool mContainsStringValue;	// 32 = 0x20
}

- (id)description;	// IMP=0x00000000003929ec
- (_Bool)containsStringValue;	// IMP=0x000000000018d603
- (void)finishReading;	// IMP=0x000000000017de5e
- (unsigned long long)maxDataPointIndex;	// IMP=0x00000000003929b3
- (id)dataValueWithIndex:(unsigned long long)arg1;	// IMP=0x00000000001f1ecb
- (id)contentFormatAtIndex:(unsigned long long)arg1 resources:(id)arg2;	// IMP=0x00000000003928f0
- (id)dataValueAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000188948
- (struct CHDDataPoint *)dataPointWithIndex:(unsigned long long)arg1;	// IMP=0x00000000001f1f55
- (struct CHDDataPoint *)dataPointAtIndex:(unsigned long long)arg1;	// IMP=0x000000000017deef
- (_Bool)addDataValue:(id)arg1;	// IMP=0x00000000001f1544
- (_Bool)addDataPoint:(struct CHDDataPoint *)arg1;	// IMP=0x000000000017dca5
- (unsigned long long)count;	// IMP=0x000000000017d97b
- (void)dealloc;	// IMP=0x00000000001808d9
- (void)resetWithDataPointCount:(unsigned long long)arg1;	// IMP=0x0000000000245878
- (id)initWithDataPointCount:(unsigned long long)arg1;	// IMP=0x000000000017dad8
- (id)init;	// IMP=0x000000000017d7c0
- (void)cleanup;	// IMP=0x0000000000180959
- (void)setupBufferForValues:(unsigned long long)arg1;	// IMP=0x000000000017d83a

@end

