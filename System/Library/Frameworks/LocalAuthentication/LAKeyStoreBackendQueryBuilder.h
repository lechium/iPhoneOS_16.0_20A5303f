//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface LAKeyStoreBackendQueryBuilder : NSObject
{
}

- (id)removeQueryForGenericPasswords;	// IMP=0x0000000000004859
- (id)removeQueryForGenericPasswordsWithDomain:(id)arg1;	// IMP=0x0000000000004789
- (id)fetchQueryForGenericPasswordsWithDomain:(id)arg1;	// IMP=0x0000000000004672
- (id)fetchQueryForGenericPasswordWithIdentifier:(id)arg1 domain:(id)arg2;	// IMP=0x000000000000451a
- (id)createQueryForGenericPasswordWithIdentifier:(id)arg1 domain:(id)arg2 data:(id)arg3 protectedBy:(id)arg4;	// IMP=0x000000000000428d
- (id)removeQueryForKeys;	// IMP=0x0000000000004283
- (id)removeQueryForKeysWithDomain:(id)arg1;	// IMP=0x0000000000004188
- (id)fetchQueryForKeysWithDomain:(id)arg1;	// IMP=0x000000000000403b
- (id)fetchQueryForKeyWithPublicKeyHash:(id)arg1;	// IMP=0x0000000000003f24
- (id)fetchQueryForKeyWithIdentifier:(id)arg1 domain:(id)arg2;	// IMP=0x0000000000003d9d
- (id)createQueryForKeyWithIdentifier:(id)arg1 domain:(id)arg2 acl:(id)arg3;	// IMP=0x0000000000003a75

@end

