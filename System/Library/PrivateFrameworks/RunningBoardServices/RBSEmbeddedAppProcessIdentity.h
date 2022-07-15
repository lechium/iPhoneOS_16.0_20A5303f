//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBSProcessIdentity.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RBSEmbeddedAppProcessIdentity : RBSProcessIdentity
{
    NSString *_embeddedApplicationIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003191c
- (id)embeddedApplicationIdentifier;	// IMP=0x000000000003190b
- (_Bool)treatedAsAnAppByFrontBoard:(id *)arg1;	// IMP=0x0000000000031903
- (_Bool)supportsLaunchingDirectly;	// IMP=0x00000000000318fb
- (_Bool)isAnonymous;	// IMP=0x00000000000318f3
- (_Bool)isApplication;	// IMP=0x00000000000318eb
- (_Bool)isEmbeddedApplication;	// IMP=0x00000000000318e3
- (unsigned char)defaultManageFlags;	// IMP=0x00000000000318d8
- (id)encodeForJob;	// IMP=0x0000000000031871
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x00000000000317dd
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x00000000000317b3
- (id)debugDescription;	// IMP=0x00000000000316c3
- (_Bool)_matchesIdentity:(id)arg1;	// IMP=0x000000000003164f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000315c2
- (id)copyWithAuid:(unsigned int)arg1;	// IMP=0x00000000000315b7

@end
