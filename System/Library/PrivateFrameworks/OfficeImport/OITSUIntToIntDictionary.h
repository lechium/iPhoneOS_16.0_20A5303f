//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSUIntToIntDictionary : NSObject
{
    struct __CFDictionary *mDictionary;	// 8 = 0x8
}

- (struct __CFDictionary *)p_cfDictionary;	// IMP=0x0000000000286eaf
- (void)enumerateKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000286e05
- (id)description;	// IMP=0x0000000000286d02
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000286cf0
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000286cb0
- (id)allValues;	// IMP=0x0000000000286c08
- (id)allKeys;	// IMP=0x0000000000286b60
- (id)arrayOfBoxedKeys;	// IMP=0x0000000000286a33
- (void)applyFromIntToIntDictionary:(id)arg1;	// IMP=0x000000000028695c
- (_Bool)containsKey:(long long)arg1;	// IMP=0x0000000000286944
- (id)keyEnumerator;	// IMP=0x000000000028690e
- (void)removeAllInts;	// IMP=0x0000000000286900
- (void)setInt:(long long)arg1 forKey:(long long)arg2;	// IMP=0x00000000002868ef
- (void)removeIntForKey:(long long)arg1;	// IMP=0x00000000002868de
- (long long)intForKey:(long long)arg1;	// IMP=0x00000000002868cd
- (_Bool)intIsPresentForKey:(long long)arg1 outValue:(long long *)arg2;	// IMP=0x00000000002868b3
- (unsigned long long)count;	// IMP=0x00000000002868a5
- (void)dealloc;	// IMP=0x000000000028686b
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000000002867aa
- (id)init;	// IMP=0x0000000000286796

@end

