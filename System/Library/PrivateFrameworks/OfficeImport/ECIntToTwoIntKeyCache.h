//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ECIntToTwoIntKeyCache : NSObject
{
    NSMutableDictionary *mCache;	// 8 = 0x8
}

+ (id)keyForKey1:(unsigned long long)arg1 key2:(unsigned long long)arg2;	// IMP=0x00600000003c68f0
- (void).cxx_destruct;	// IMP=0x00000000003c6a77
- (void)setObject:(unsigned long long)arg1 forKey1:(unsigned long long)arg2 key2:(unsigned long long)arg3;	// IMP=0x00000000003c69c8
- (_Bool)integerIsPresentForKey1:(unsigned long long)arg1 key2:(unsigned long long)arg2 outValue:(unsigned long long *)arg3;	// IMP=0x00000000003c6918
- (id)init;	// IMP=0x00000000003c687c

@end
