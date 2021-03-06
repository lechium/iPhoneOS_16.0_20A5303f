//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TPPBSecureElementIdentity;

@interface TrustedPeersHelperIntendedTPPBSecureElementIdentity : NSObject
{
    TPPBSecureElementIdentity *_secureElementIdentity;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001cc2ed
+ (id)intendedEmptyIdentity;	// IMP=0x00100000001cc2c2
- (void).cxx_destruct;	// IMP=0x00200000001cc2b2
@property(retain) TPPBSecureElementIdentity *secureElementIdentity; // @synthesize secureElementIdentity=_secureElementIdentity;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001cc216
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001cc185
- (id)description;	// IMP=0x00100000001cc119
- (id)initWithSecureElementIdentity:(id)arg1;	// IMP=0x00100000001cc0ae

@end

