//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/NSFileProviderManager.h>

@interface NSFileProviderManager (BRAdditions)
+ (id)br_sharedEnterpriseProviderManagerWithDomainID:(id)arg1;	// IMP=0x00600000000f8aa2
+ (id)_br_sharedDefaultProviderManager;	// IMP=0x00600000000f89e1
+ (id)br_sharedProviderManagerWithDomainID:(id)arg1;	// IMP=0x00600000000f8977
+ (id)br_sharedProviderManager;	// IMP=0x00600000000f88c2
+ (id)_br_getDomainForProvider:(id)arg1 WithIdentifier:(id)arg2;	// IMP=0x00600000000f8516
+ (id)br_getDomainForEnterpriseProviderWithIdentifier:(id)arg1;	// IMP=0x00600000000f84d7
+ (id)br_getDomainForDefaultProviderWithIdentifier:(id)arg1;	// IMP=0x00600000000f8498
+ (id)br_getDomainIdentifierForACAccount:(id)arg1;	// IMP=0x00600000000f846b
+ (id)br_getDomainIdentifierForACAccountID:(id)arg1;	// IMP=0x00600000000f83be
@end
