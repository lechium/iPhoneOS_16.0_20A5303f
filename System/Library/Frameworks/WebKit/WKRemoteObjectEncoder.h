//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

__attribute__((visibility("hidden")))
@interface WKRemoteObjectEncoder : NSCoder
{
    struct RefPtr<API::Dictionary, WTF::RawPtrTraits<API::Dictionary>, WTF::DefaultRefDerefTraits<API::Dictionary>> _rootDictionary;	// 8 = 0x8
    void *_objectStream;	// 16 = 0x10
    void *_currentDictionary;	// 24 = 0x18
    struct HashSet<NSObject *, WTF::DefaultHash<NSObject *>, WTF::HashTraits<NSObject *>, WTF::HashTableTraits> _objectsBeingEncoded;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x000000000014a574
- (void).cxx_destruct;	// IMP=0x000000000014a524
- (_Bool)requiresSecureCoding;	// IMP=0x000000000014a51c
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;	// IMP=0x000000000014a428
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;	// IMP=0x000000000014a327
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;	// IMP=0x000000000014a315
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;	// IMP=0x000000000014a229
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;	// IMP=0x000000000014a13a
- (void)encodeInt:(int)arg1 forKey:(id)arg2;	// IMP=0x000000000014a04b
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x0000000000149f5f
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;	// IMP=0x0000000000149db3
- (void)encodeObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000148e37
- (_Bool)allowsKeyedCoding;	// IMP=0x0000000000148e2f
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;	// IMP=0x0000000000148a60
- (void *)rootObjectDictionary;	// IMP=0x0000000000148a4f
- (id)init;	// IMP=0x00000000001489ac

@end
