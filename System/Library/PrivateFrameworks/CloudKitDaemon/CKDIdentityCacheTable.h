//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKSQLiteCacheTable.h>

@interface CKDIdentityCacheTable : CKSQLiteCacheTable
{
}

+ (Class)entryClass;	// IMP=0x0080000000053b45
+ (id)dbProperties;	// IMP=0x0080000000053b38
- (id)cachedIdentityForLookupInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000053f39
- (id)insertUserIdentity:(id)arg1 forLookupInfo:(id)arg2 container:(id)arg3;	// IMP=0x0000000000053d72
- (void)deleteUserIdentityForLookupInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000053cd1
- (id)predicateForMatchingLookupInfoInContainer;	// IMP=0x0000000000053caf
- (id)valuesDictionaryForLookupInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000053b56

@end

