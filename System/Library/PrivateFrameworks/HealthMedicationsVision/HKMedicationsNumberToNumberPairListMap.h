//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface HKMedicationsNumberToNumberPairListMap : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000002fc9
- (void)enumerateIntegersForKey:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002dcc
- (void)addInteger:(long long)arg1 andInteger:(long long)arg2 forKey:(long long)arg3;	// IMP=0x0000000000002c9e
- (id)init;	// IMP=0x0000000000002c48

@end

