//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface MLProbabilityDictionaryFloat64Storage : NSObject
{
    NSData *_data;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000018c909
- (unsigned long long)count;	// IMP=0x000000000018c8ee
- (unsigned long long)maxElementIndex;	// IMP=0x000000000018c83b
- (id)probabilityAtIndex:(unsigned long long)arg1;	// IMP=0x000000000018c78f
- (id)initWithFloat64CArray:(const double *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000018c6f3

@end
