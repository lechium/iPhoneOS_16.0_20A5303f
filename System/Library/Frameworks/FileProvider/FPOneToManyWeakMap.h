//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FPOneToManyWeakMap : NSObject
{
    NSMutableDictionary *_backingDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003dff5
- (id)anyObjectForKey:(id)arg1;	// IMP=0x000000000003df97
- (id)removeObject:(id)arg1;	// IMP=0x000000000003dcd4
- (void)addObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000003dc04
- (void)removeObjectsForKey:(id)arg1;	// IMP=0x000000000003dbe9
- (id)init;	// IMP=0x000000000003db93

@end
