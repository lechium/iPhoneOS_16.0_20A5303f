//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/NSFileProviderManager.h>

@interface NSFileProviderManager (BRAdditions)
+ (id)br_sharedEnterpriseProviderManagerWithDomainID:(id)arg1;	// IMP=0x006000000010355a
+ (id)_br_sharedDefaultProviderManager;	// IMP=0x00600000001034ee
+ (id)br_sharedProviderManagerWithDomainID:(id)arg1;	// IMP=0x0060000000103484
+ (id)br_sharedProviderManager;	// IMP=0x00600000001033cf
+ (id)_br_getDomainForProvider:(id)arg1 WithIdentifier:(id)arg2;	// IMP=0x0060000000103023
+ (id)br_getDomainForEnterpriseProviderWithIdentifier:(id)arg1;	// IMP=0x0060000000102fe4
+ (id)br_getDomainForDefaultProviderWithIdentifier:(id)arg1;	// IMP=0x0060000000102fa5
+ (id)br_getDomainIdentifierForACAccount:(id)arg1;	// IMP=0x0060000000102f24
+ (id)br_getDomainIdentifierForACAccountID:(id)arg1;	// IMP=0x0060000000102e77
@end

