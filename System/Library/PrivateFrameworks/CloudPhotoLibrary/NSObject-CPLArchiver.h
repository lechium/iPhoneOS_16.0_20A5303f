//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (CPLArchiver)
+ (Class)classForStoredClassName:(id)arg1 forCPLArchiver:(id)arg2;	// IMP=0x005000000007632e
+ (id)cplAllPropertyNames;	// IMP=0x00500000000ec96f
+ (void)cplDumpProperties;	// IMP=0x00500000000ec8aa
+ (id)_cplPropertyAttributeMap;	// IMP=0x00500000000ec7cc
+ (void)_addPropertyAttributeMapToPropertyMapLocked:(id)arg1;	// IMP=0x00500000000ebb2c
+ (_Bool)cplShouldIgnorePropertyForEquality:(id)arg1;	// IMP=0x00500000000ebb24
+ (_Bool)cplShouldIgnorePropertyForCoding:(id)arg1;	// IMP=0x00500000000ebac6
+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;	// IMP=0x00500000000ebabe
- (id)initWithCPLArchiver:(id)arg1;	// IMP=0x00100000000743a1
- (id)plistArchiveWithCPLArchiver:(id)arg1;	// IMP=0x00100000000742ef
- (id)storedClassNameForCPLArchiver:(id)arg1;	// IMP=0x00100000000742d5
- (unsigned long long)cplSpecialHash;	// IMP=0x00100000000e827e
- (_Bool)cplSpecialIsEqual:(id)arg1;	// IMP=0x00100000000e826c
- (id)cplFullDescription;	// IMP=0x00100000000e8250
- (void)cplCopyProperties:(id)arg1 fromObject:(id)arg2 withCopyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e823e
- (void)cplCopyPropertiesFromObject:(id)arg1 withCopyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e8224
- (void)_cplCopyProperties:(id)arg1 fromOtherObject:(id)arg2 withCopyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e7e4b
- (void)cplClearProperties:(id)arg1;	// IMP=0x00100000000e7c2c
- (unsigned long long)cplHash;	// IMP=0x00100000000e7b38
- (_Bool)cplProperties:(id)arg1 areEqualToPropertiesOf:(id)arg2 withEqualityBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e7b20
- (_Bool)cplProperties:(id)arg1 areEqualToPropertiesOf:(id)arg2 diffTracker:(id)arg3 withEqualityBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000000e78f3
- (_Bool)cplIsEqual:(id)arg1 withEqualityBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e78d9
- (_Bool)cplIsEqual:(id)arg1;	// IMP=0x00100000000e78c5
- (void)cplDecodePropertiesFromCoder:(id)arg1;	// IMP=0x00100000000e7802
- (void)cplEncodePropertiesWithCoder:(id)arg1;	// IMP=0x00100000000e773f
- (id)cplDeepCopy;	// IMP=0x00100000000e76f9
@end

