//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface RBPersonaManager : NSObject
{
    _Bool _hasUserManagement;	// 8 = 0x8
    _Bool _personasSupported;	// 9 = 0x9
    struct os_unfair_lock_s _lock;	// 12 = 0xc
}

- (_Bool)isConcretePersona:(id)arg1;	// IMP=0x000000000005291c
- (id)personalPersonaUniqueString;	// IMP=0x0000000000052914
- (_Bool)personasAreSupported;	// IMP=0x000000000005290b
- (_Bool)personaForIdentity:(id)arg1 context:(id)arg2 personaUID:(out unsigned int *)arg3 personaUniqueString:(out id *)arg4;	// IMP=0x00000000000527de
- (id)init;	// IMP=0x00000000000526f5

@end
