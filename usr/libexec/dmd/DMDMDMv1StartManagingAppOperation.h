//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DMDAppMetadata;

@interface DMDMDMv1StartManagingAppOperation
{
    DMDAppMetadata *_metadata;	// 8 = 0x8
}

+ (id)requiredEntitlements;	// IMP=0x0040000000068431
+ (id)whitelistedClassesForRequest;	// IMP=0x0010000000068389
- (void).cxx_destruct;	// IMP=0x0010000000068463
@property(retain, nonatomic) DMDAppMetadata *metadata; // @synthesize metadata=_metadata;
- (void)_endOperationWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000069783
- (void)_attemptSINFSwap;	// IMP=0x001000000006962a
- (void)_setState:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x001000000006954a
- (void)_manageApp;	// IMP=0x0010000000068f73
- (void)_promptToManageApp:(id)arg1 appDisplayName:(id)arg2 originator:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000068c12
- (void)_promptIfPermittedByPolicyToManageApp:(id)arg1 appDisplayName:(id)arg2 originator:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000068a80
- (void)_runWithRequest:(id)arg1;	// IMP=0x00100000000685e5
- (void)runWithRequest:(id)arg1;	// IMP=0x0010000000068476

@end
