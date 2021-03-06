//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSKnownKeysDictionary, _PFWeakReference;

__attribute__((visibility("hidden")))
@interface _PFResultArray : NSArray
{
    int _cd_rc;	// 8 = 0x8
    unsigned int _count;	// 12 = 0xc
    unsigned int _resultType;	// 16 = 0x10
    CDStruct_2b54fbaf *_resultSet;	// 24 = 0x18
    _PFWeakReference *_weakRequestStore;	// 32 = 0x20
    NSKnownKeysDictionary *_metadata;	// 40 = 0x28
}

+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x0060000000027163
+ (Class)classForKeyedUnarchiver;	// IMP=0x0060000000027152
+ (void)initialize;	// IMP=0x0060000000027130
- (unsigned long long)retainCount;	// IMP=0x00000000000279fc
- (oneway void)release;	// IMP=0x00000000000279cc
- (id)retain;	// IMP=0x00000000000279b8
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000279b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000279a5
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000277fe
- (void)getObjects:(id *)arg1;	// IMP=0x00000000000276e9
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000002762d
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000027454
- (_Bool)_setPurgeable:(_Bool)arg1;	// IMP=0x0000000000027435
- (unsigned long long)count;	// IMP=0x000000000002740f
- (void)dealloc;	// IMP=0x000000000002738f
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x000000000002730b
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;	// IMP=0x00000000000272ec
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x0000000000027249
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x000000000002722a
- (id)initWithObjects:(CDStruct_2b54fbaf *)arg1 count:(unsigned int)arg2 store:(id)arg3 metadata:(id)arg4;	// IMP=0x000000000002716b
- (Class)classForCoder;	// IMP=0x0000000000027141

@end

