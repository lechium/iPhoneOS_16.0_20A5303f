//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDDeactivateConfigurationOrganizationOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x004000000003beaf
+ (id)requiredEntitlements;	// IMP=0x001000000003bd74
+ (id)whitelistedClassesForRequest;	// IMP=0x001000000003bd42
- (void)runWithRequest:(id)arg1;	// IMP=0x004000000003bd8c
- (unsigned long long)queueGroup;	// IMP=0x001000000003bd81

@end
