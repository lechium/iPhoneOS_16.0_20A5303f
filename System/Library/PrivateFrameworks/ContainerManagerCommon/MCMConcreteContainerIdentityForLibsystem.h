//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface MCMConcreteContainerIdentityForLibsystem
{
    _Bool _existed;	// 56 = 0x38
    NSString *_containerPathIdentifier;	// 64 = 0x40
}

+ (id)containerIdentityWithUUID:(id)arg1 userIdentity:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 platform:(unsigned int)arg5 containerPathIdentifier:(id)arg6 existed:(_Bool)arg7 transient:(_Bool)arg8 error:(unsigned long long *)arg9;	// IMP=0x00600000000195c2
- (void).cxx_destruct;	// IMP=0x000000000001911b
@property(readonly, nonatomic) _Bool existed; // @synthesize existed=_existed;
@property(readonly, nonatomic) NSString *containerPathIdentifier; // @synthesize containerPathIdentifier=_containerPathIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000018ffc
- (id)debugDescription;	// IMP=0x0000000000018f72
- (id)description;	// IMP=0x0000000000018ee8
- (id)identityByChangingContainerPathIdentifier:(id)arg1;	// IMP=0x0000000000018d87
- (id)identityByChangingTransient:(_Bool)arg1;	// IMP=0x0000000000018c31
- (id)identityByChangingUUID:(id)arg1;	// IMP=0x0000000000018ad3
- (id)nontransientConcreteContainerIdentityForLibsystem;	// IMP=0x0000000000018a96
- (id)transientConcreteContainerIdentityForLibsystem;	// IMP=0x0000000000018a59
- (id)nontransientContainerIdentity;	// IMP=0x00000000000188da
- (id)transientContainerIdentity;	// IMP=0x000000000001875b
- (struct container_object_s *)createLibsystemContainerWithError:(unsigned long long *)arg1;	// IMP=0x00000000000186b7
- (id)initWithUUID:(id)arg1 userIdentity:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 platform:(unsigned int)arg5 containerPathIdentifier:(id)arg6 existed:(_Bool)arg7 transient:(_Bool)arg8 error:(unsigned long long *)arg9;	// IMP=0x00000000000184b6
- (id)initWithLibsystemContainer:(struct container_object_s *)arg1 defaultUserIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x000000000001835b
- (id)init;	// IMP=0x0000000000018274

@end

