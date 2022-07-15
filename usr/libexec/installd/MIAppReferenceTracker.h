//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MIAppReferenceTracker : NSObject
{
    unsigned long long _domain;	// 8 = 0x8
}

+ (id)managerForInstallationDomain:(unsigned long long)arg1;	// IMP=0x004000000003bc5b
@property(readonly, nonatomic) unsigned long long domain; // @synthesize domain=_domain;
- (void)enumerateAppReferencesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000003c06b
- (_Bool)revokeTemporaryReference:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003c001
- (_Bool)finalizeTemporaryReference:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003bf97
- (id)addTemporaryReferenceForIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003bf2d
- (_Bool)removeReferenceForIdentity:(id)arg1 waitingForSpaceReclaimation:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000003bec3
- (_Bool)addReferenceForIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003be59
- (_Bool)referenceExists:(_Bool *)arg1 forIdentity:(id)arg2 error:(id *)arg3;	// IMP=0x001000000003bdef
- (id)initForInstallationDomain:(unsigned long long)arg1;	// IMP=0x001000000003bdb2

@end
