//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSUIntegerKeyDictionary : NSObject
{
    struct __CFDictionary *mDictionary;	// 8 = 0x8
}

- (struct __CFDictionary *)p_cfDictionary;	// IMP=0x0000000000271dfd
- (id)description;	// IMP=0x0000000000271ce4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000271cd2
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000271c92
- (id)valueEnumerator;	// IMP=0x0000000000271c67
- (id)allValues;	// IMP=0x0000000000271bb7
- (id)keyEnumerator;	// IMP=0x0000000000271b81
- (void)removeAllObjects;	// IMP=0x0000000000271b73
- (void)setObject:(id)arg1 forKey:(long long)arg2;	// IMP=0x0000000000271b62
- (void)removeObjectForKey:(long long)arg1;	// IMP=0x0000000000271b51
- (id)objectForKey:(long long)arg1;	// IMP=0x0000000000271b40
- (unsigned long long)count;	// IMP=0x0000000000271b32
- (void)dealloc;	// IMP=0x0000000000271ae3
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000271a3e
- (id)init;	// IMP=0x0000000000271a2a

@end
