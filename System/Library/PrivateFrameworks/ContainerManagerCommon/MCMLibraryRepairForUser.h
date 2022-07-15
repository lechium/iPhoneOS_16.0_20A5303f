//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMManagedUserPathRegistry;

__attribute__((visibility("hidden")))
@interface MCMLibraryRepairForUser
{
    MCMManagedUserPathRegistry *_userRegistry;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000afa3c
@property(readonly, nonatomic) MCMManagedUserPathRegistry *userRegistry; // @synthesize userRegistry=_userRegistry;
- (_Bool)_canRepairLocally;	// IMP=0x00000000000af8e0
- (id)_managedPathFromContainerClassPath:(id)arg1 registry:(id)arg2;	// IMP=0x00000000000af6d8
- (id)_setByAddingContainerClassPathsToSet:(id)arg1 registry:(id)arg2;	// IMP=0x00000000000af558
- (id)_managedPathsForGenericRepair;	// IMP=0x00000000000af4aa
- (_Bool)performRepairForContainerPath:(id)arg1 containerIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000aea49
- (_Bool)fixAndRetryIfPermissionsErrorWithURL:(id)arg1 containerPath:(id)arg2 containerIdentifier:(id)arg3 error:(id *)arg4 duringBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000ae95d
- (_Bool)fixAndRetryIfPermissionsErrorWithURL:(id)arg1 containerRootURL:(id)arg2 error:(id *)arg3 duringBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000ae879
- (id)initWithManagedUserPathRegistry:(id)arg1;	// IMP=0x00000000000ae7e5

@end
