//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLFunctionConstantValues.h"

__attribute__((visibility("hidden")))
@interface MTLFunctionConstantValuesInternal : MTLFunctionConstantValues
{
    void *_constantStorage;	// 8 = 0x8
}

- (const void *)constantValueWithFunctionConstant:(id)arg1;	// IMP=0x0000000000052de1
- (void *)serializedConstantDataForFunction:(id)arg1 dataSize:(unsigned long long *)arg2 errorMessage:(id *)arg3;	// IMP=0x0000000000052dc3
- (id)description;	// IMP=0x0000000000052ca1
- (id)newIndexedConstantArray;	// IMP=0x0000000000052aab
- (id)newNamedConstantArray;	// IMP=0x0000000000052a96
- (void)reset;	// IMP=0x0000000000052a25
- (void)setConstantValue:(const void *)arg1 type:(unsigned long long)arg2 withName:(id)arg3;	// IMP=0x000000000005290d
- (void)setConstantValues:(const void *)arg1 type:(unsigned long long)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x00000000000527b6
- (void)setConstantValue:(const void *)arg1 type:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000526cb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000052672
- (unsigned long long)hash;	// IMP=0x000000000005265a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000525ab
- (void)dealloc;	// IMP=0x0000000000052545
- (id)init;	// IMP=0x00000000000524da

@end

