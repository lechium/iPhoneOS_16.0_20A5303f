//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MCMContainerIdentity
{
    _Bool _transient;	// 40 = 0x28
}

+ (id)containerIdentityWithMinimalContainerIdentity:(id)arg1 transient:(_Bool)arg2;	// IMP=0x0060000000016ac7
+ (id)containerIdentityFromPlist:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0060000000016a29
+ (id)containerIdentityWithIdentifier:(id)arg1 containerClass:(unsigned long long)arg2 platform:(unsigned int)arg3 error:(unsigned long long *)arg4;	// IMP=0x00600000000168a5
+ (id)containerIdentityWithUserIdentity:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 platform:(unsigned int)arg4 error:(unsigned long long *)arg5;	// IMP=0x00600000000167ee
+ (id)containerIdentityWithUserIdentity:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 platform:(unsigned int)arg4 transient:(_Bool)arg5 error:(unsigned long long *)arg6;	// IMP=0x006000000001672d
@property(readonly, nonatomic) _Bool transient; // @synthesize transient=_transient;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001624c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000161c1
- (_Bool)isEqualToContainerIdentity:(id)arg1;	// IMP=0x0000000000016133
- (unsigned long long)hash;	// IMP=0x00000000000160c3
- (id)debugDescription;	// IMP=0x0000000000016039
- (id)description;	// IMP=0x0000000000015faf
- (id)containerIdentity;	// IMP=0x0000000000015f7b
- (id)identityByChangingTransient:(_Bool)arg1;	// IMP=0x0000000000015f2b
- (id)nontransientContainerIdentity;	// IMP=0x0000000000015e17
- (id)transientContainerIdentity;	// IMP=0x0000000000015d03
- (id)initWithVersion1PlistDictionary:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000000015b22
- (id)plist;	// IMP=0x0000000000015a26
- (id)initWithLibsystemContainer:(struct container_object_s *)arg1 defaultUserIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x000000000001597d
- (id)initWithUserIdentity:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 platform:(unsigned int)arg4 transient:(_Bool)arg5 error:(unsigned long long *)arg6;	// IMP=0x00000000000158f8
- (id)init;	// IMP=0x0000000000015811

@end
