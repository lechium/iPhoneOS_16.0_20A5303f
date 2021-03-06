//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSEntitlements : NSObject
{
    struct _SpecificEntitlement *_specificEntitlements;	// 8 = 0x8
    char **_shrunkenServiceIdentifiers;	// 16 = 0x10
    unsigned short _serviceIdentifierCount;	// 24 = 0x18
    unsigned char _specificEntitlementCount;	// 26 = 0x1a
}

- (id)dictionaryRepresentation;	// IMP=0x00200000002ee150
- (_Bool)hasAnyEntitlements;	// IMP=0x00100000002ee120
- (_Bool)hasEntitlement:(id)arg1;	// IMP=0x00100000002ee030
- (_Bool)hasService:(id)arg1 forEntitlement:(id)arg2;	// IMP=0x00100000002edc80
- (_Bool)hasService:(id)arg1 forAnyOfEntitlements:(id)arg2;	// IMP=0x00100000002ed9a0
- (id)debugDescription;	// IMP=0x00100000002ed930
- (void)dealloc;	// IMP=0x00100000002ed7d0
- (id)initWithEntitlements:(id)arg1;	// IMP=0x00100000002ec0d0

@end

