//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDUpdateAppOperation
{
    _Bool _didPromptUser;	// 8 = 0x8
}

+ (id)requiredEntitlements;	// IMP=0x0040000000081068
+ (id)whitelistedClassesForRequest;	// IMP=0x0010000000080fad
@property(nonatomic) _Bool didPromptUser; // @synthesize didPromptUser=_didPromptUser;
- (void)_endOperationWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000082559
- (void)_setState:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0010000000082451
- (void)_showUpdateFailurePromptIfNeededForRequest:(id)arg1 metadata:(id)arg2;	// IMP=0x0010000000082170
- (void)_startUpdateAppForRequest:(id)arg1 metadata:(id)arg2;	// IMP=0x0010000000081c62
- (void)_promptIfNeededAndUpdateAppForRequest:(id)arg1 metadata:(id)arg2;	// IMP=0x0010000000081647
- (void)_resumeUpdateForBundleIdentifier:(id)arg1;	// IMP=0x00100000000814db
- (void)_runWithRequest:(id)arg1 metadata:(id)arg2;	// IMP=0x0010000000081296
- (void)runWithRequest:(id)arg1;	// IMP=0x0010000000081137
- (void)endOperationWithError:(id)arg1;	// IMP=0x00100000000810d6
- (void)endOperationWithResultObject:(id)arg1;	// IMP=0x0010000000081075

@end

