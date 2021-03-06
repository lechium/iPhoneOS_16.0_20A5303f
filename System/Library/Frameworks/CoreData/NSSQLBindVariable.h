//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPropertyDescription;

__attribute__((visibility("hidden")))
@interface NSSQLBindVariable : NSObject
{
    int _cd_rc;	// 8 = 0x8
    unsigned char _sqlType;	// 12 = 0xc
    unsigned int _index;	// 16 = 0x10
    unsigned int _flags;	// 20 = 0x14
    id _value;	// 24 = 0x18
    NSPropertyDescription *_propertyDescription;	// 32 = 0x20
    NSPropertyDescription *_tombstonedPropertyDescription;	// 40 = 0x28
    long long _int64;	// 48 = 0x30
}

- (id)tombstonedPropertyDescription;	// IMP=0x000000000015d43f
- (void)setTombstonedPropertyDescription:(id)arg1;	// IMP=0x000000000015d435
- (id)propertyDescription;	// IMP=0x000000000015d42b
- (_Bool)allowsCoercion;	// IMP=0x000000000015d41e
- (_Bool)hasObjectValue;	// IMP=0x000000000015d410
- (void)setIndex:(unsigned int)arg1;	// IMP=0x000000000015d407
- (unsigned int)index;	// IMP=0x000000000015d3fe
- (void)setSQLType:(unsigned char)arg1;	// IMP=0x000000000015d3f5
- (unsigned char)sqlType;	// IMP=0x000000000015d3eb
- (id)value;	// IMP=0x000000000015d3ba
- (void)setValue:(id)arg1;	// IMP=0x000000000015d38c
- (void)setUnsignedInt:(unsigned int)arg1;	// IMP=0x000000000015d380
- (unsigned int)unsignedInt;	// IMP=0x000000000015d35d
- (void)setInt64:(long long)arg1;	// IMP=0x000000000015d353
- (long long)int64;	// IMP=0x000000000015d32f
- (void)dealloc;	// IMP=0x000000000015d2ed
- (_Bool)_isDeallocating;	// IMP=0x000000000015d2d1
- (_Bool)_tryRetain;	// IMP=0x000000000015d29c
- (unsigned long long)retainCount;	// IMP=0x000000000015d28b
- (oneway void)release;	// IMP=0x000000000015d254
- (id)retain;	// IMP=0x000000000015d23a
- (id)initWithUnsignedInt:(unsigned int)arg1 sqlType:(unsigned char)arg2;	// IMP=0x000000000015d1f6
- (id)initWithInt64:(long long)arg1 sqlType:(unsigned char)arg2;	// IMP=0x000000000015d1b2
- (id)initWithValue:(id)arg1 sqlType:(unsigned char)arg2 propertyDescription:(id)arg3 allowCoercion:(_Bool)arg4;	// IMP=0x000000000015d0ea
- (id)initWithValue:(id)arg1 sqlType:(unsigned char)arg2 propertyDescription:(id)arg3;	// IMP=0x000000000015d0d5

@end

